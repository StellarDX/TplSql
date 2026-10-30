# TplSql

TplSql是一套基于[ANTLR](https://www.antlr.org/)编写的SQL语法。设计融合**Hive SQL**、**ADQL（Astronomical Data Query Language，IVOA 标准）**与自行扩展的类型和语句特性以提供一个较为完整的「可读可写」查询体系：既能做天文数据的检索，也能完成建库建表、写入、更新、删除与事务控制。

- 词法/语法源文件：`Sources/*.g4`
- C++ 目标生成产物：`Sources/Cpp/`
- 当然你也可以用它生成别的语言的分析器

## 设计定位

TplSql继承ADQL的大部分特性，并在此基础上引入Hive语法的特性补全Create、Insert和Delete等语句，因此它总体上基本等同于“加入了ADQL特性和过程化的HiveSQL”。未来还会引入类似MySQL的过程化特性。

## 语法文件的层次结构

语法通过 ANTLR 的 `import` 机制复用，形成如下的单链继承结构：

```
HiveLexer.g4                   （Hive词法，保留字+非保留字+字面量）
   ├── ADQLLexer.g4          （在Hive词法上补充ADQL关键字）
   ├── TplSqlLexer.g4        （在Hive词法上补充TplSql类型关键字）
   └── ...

ADQLTypes.g4                 / TplSqlTypes.g4         （原生数据类型）
ADQLNonRsvdKwds.g4           / TplSqlNonRsvdKwds.g4   （非保留关键字）
ADQLParser.g4                （ADQL解析规则，入口规则adql）
   └── TplSqlParser.g4       （覆盖并扩展ADQL规则，入口规则tplsql）
```

| 文件 | 作用 |
| --- | --- |
| `HiveLexer.g4` | 基础词法：保留字/非保留字、字符串、数字、注释等 |
| `ADQLLexer.g4` | 在`HiveLexer`之上补充ADQL关键字（`CLOB`、`POINT`、`CIRCLE`、`POLYGON`、`REGION`等） |
| `TplSqlLexer.g4` | 在`HiveLexer`之上补充TplSql类型关键字（`FP4`、`DECIMAL32`、`INT128`、`SEXAGESIMAL`、`QUATERNION`等） |
| `ADQLTypes.g4` | ADQL原生类型`adqlPrimitiveType` |
| `TplSqlTypes.g4` | TplSql原生类型`tplsqlPrimitiveType`、复数可用的数值类型`tplsqlNumericType` |
| `ADQLParser.g4` | ADQL解析规则，入口`adql : queryStatementExpression SEMICOLON` |
| `TplSqlParser.g4` | TplSql解析规则，入口`tplsql : statement SEMICOLON` |

> 注：需要纯ADQL语义时使用`adql`，需要完整TplSql能力时使用`tplsql`。

## 语句覆盖

`TplSqlParser.g4`的`statement`只接受`explainStatement`与`execStatement`，其中`execStatement`为实际执行的语句：

| 分类 | 语句/规则 |
| --- | --- |
| 执行计划 | `EXPLAIN`（`EXTENDED`/`FORMATTED`/`CBO COST`/`AST`/`VECTORIZATION`/`DDL`等选项）、`EXPLAIN REWRITE` |
| 查询 | `SELECT`、`WITH`（CTE 支持 `WITH t(c1, c2, ...) AS (...)` 的列别名写法）、集合运算、`JOIN`/`UNIQUEJOIN`、`LATERAL VIEW`、`TRANSFORM`、窗口函数、`GROUP BY`/`ROLLUP`/`CUBE`/`GROUPING SETS`、`ORDER BY`/`CLUSTER BY`/`DISTRIBUTE BY`/`SORT BY`/`LIMIT`/`QUALIFY` |
| 数据装载 | `LOAD DATA LOCAL INPATH ...`、`EXPORT TABLE ...`、`IMPORT ...` |
| 库级 DDL | `CREATE/USE/DROP DATABASE`（含注释、位置、属性、连接器） |
| 表级 DDL | `CREATE TABLE`（含分区、分桶、ROW FORMAT、STORED AS、TBLPROPERTIES、约束、倾斜表）、`CREATE TABLE ... AS SELECT`、`LIKE`、`DROP`、`TRUNCATE`、`ALTER TABLE`（分区、列、属性、位置、文件格式、约束、统计信息等） |
| 视图与调度 | `CREATE/ALTER/DROP VIEW`、`MATERIALIZED VIEW`、`SCHEDULED QUERY` |
| 函数与宏 | `CREATE FUNCTION`、`CREATE MACRO`、`DROP/RELOAD FUNCTION`、`DROP MACRO` |
| 统计与锁 | `ANALYZE TABLE`、`LOCK/UNLOCK TABLE`、`LOCK/UNLOCK DATABASE` |
| 权限 | `CREATE/DROP ROLE`、`GRANT/REVOKE`、`SHOW GRANT`、`SHOW ROLE GRANT`、`SHOW ROLES`、`SHOW PRINCIPALS`、`SET ROLE` |
| 资源管理 | `RESOURCE PLAN`、`TRIGGER`、`POOL`、`MAPPING`、`DATA CONNECTOR`的创建/修改/删除 |
| DML | `INSERT INTO/OVERWRITE`、`VALUES`、`UPDATE`、`DELETE`、`MERGE` |
| 事务 | `START TRANSACTION`（隔离级别、读写模式）、`COMMIT`、`ROLLBACK`、`SET AUTOCOMMIT`、`ABORT TRANSACTIONS` |
| 其它 | `PREPARE`、`EXECUTE`（参数化执行）、`KILL QUERY`、`ABORT COMPACTIONS` |

查询子句在TplSql中被显式重写（`TplSqlParser.g4`的ADQL 语法规则覆盖部分），以便同时兼容ADQL与Hive的写法差异。

## 数据类型

`TplSqlTypes.g4`在ADQL原生类型之外做了大幅扩展：

| 类别 | 类型 |
| --- | --- |
| 整数 | `TINYINT`(8) / `SMALLINT`(16) / `INT`(32) / `BIGINT`(64) / `INT128`(128) / `INFTYINT`（无限位宽），均支持 `UNSIGNED` |
| 布尔 | `BOOLEAN`（可为null，为null时表示叠加态） |
| 二进制浮点 | `FP4`、`FP6E2M3`、`FP6E3M2`、`FP8E4M3`、`FP8E5M2`、`FP16`/`HALF`、`BFP16`(bfloat16)、`TF19`(tensor19)、`FLOAT`/`FP32`、`REAL`/`DOUBLE`/`FP64`、`FP80`、`FP128`、`FP256`、`INFTYFLOAT(e, m)`（无限精度，可自定义指数/尾数位数） |
| 十进制浮点 | `DECIMAL32`、`DECIMAL64`、`DECIMAL`/`DECIMAL128`/`NUMERIC`、`INFTYDECIMAL(scaleof32)`（无限精度，按IEEE754-2008对齐到32位整数倍） |
| 时间 | `DATE`、`DATETIME`、`TIMESTAMP`、`TIMESTAMPLOCALTZ`/`TIMESTAMP WITH LOCAL TIME ZONE` |
| 字符与二进制 | `STRING`、`VARCHAR(n)`、`CHAR(n)`、`CLOB`、`BLOB`、`BINARY(n)`、`VARBINARY(n)` |
| 六十进制 | `SEXAGESIMAL`（常用于高精度角度，度/分/秒） |
| 几何（球面） | `POINT`、`CIRCLE`、`POLYGON`（顶点以测地线连接） |
| 复数 | `COMPLEX`、`QUATERNION`（可由 `tplsqlNumericType` 构造） |
| 复合容器 | `ARRAY<>`、`STRUCT<A: T, ...>`、`MAP<K, V>`、`UNION<>` |

ADQL 侧保留 IVOA 定义的基础类型（`BIT`、`SMALLINT`、`INT`、`BIGINT`、`BOOLEAN`、`FLOAT`、`REAL`、`DOUBLE PRECISION`、时间类型、字符/二进制、`POINT`/`CIRCLE`/`POLYGON` 等）。

## 从语法生成代码

生成解析器代码：

```bash
# 1. 准备 ANTLR 工具（版本需与期望一致）
#    https://www.antlr.org/download

# 2. 生成代码
./Generate.sh -e /path/to/ANTLR-Generator.jar [-l <languages>]
```

## 使用示例

### 在C++中使用

在C++中使用此语法需要先编译[ANTLR4 C++ Runtime](https://github.com/antlr/antlr4/tree/master/runtime/Cpp)。

示例程序：

```cpp
#include "antlr4-runtime.h"
#include "TplSqlLexer.h"
#include "TplSqlParser.h"

#include <iostream>
#include <string>

int main()
{
    std::string sql = R"(SELECT TOP 100 oid, main_id, sp_type
    FROM basic
    WHERE sp_type BETWEEN 'F3' AND 'F5';)";

    antlr4::ANTLRInputStream input(sql);
    TplSqlLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    TplSqlParser parser(&tokens);

    // 入口规则为 tplsql；若只需 ADQL 语义，可改用 adql 规则
    auto* tree = parser.tplsql();

    if (parser.getNumberOfSyntaxErrors() == 0)
        std::cout << tree->toStringTree(&parser) << '\n';
    else
        std::cerr << "语法错误: "
                  << parser.getNumberOfSyntaxErrors() << '\n';
}
```

编译时把生成的`*.cpp`与ANTLR4 C++ runtime一起链接。

### 在Java中使用

先用ANTLR生成Java目标代码（`TplSqlLexer.java`、`TplSqlParser.java`），依赖 [ANTLR4 Java Runtime](https://github.com/antlr/antlr4/tree/master/runtime/Java)。

示例程序：

```java
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.CharStreams;
import org.antlr.v4.runtime.CommonTokenStream;
import org.antlr.v4.runtime.tree.ParseTree;
import org.antlr.v4.runtime.tree.Trees;

public class Main
{
    public static void main(String[] args)
    {
        String sql = "SELECT TOP 100 oid, main_id, sp_type "
                   + "FROM basic "
                   + "WHERE sp_type BETWEEN 'F3' AND 'F5';";

        CharStream input = CharStreams.fromString(sql);

        TplSqlLexer lexer = new TplSqlLexer(input);
        CommonTokenStream tokens = new CommonTokenStream(lexer);
        TplSqlParser parser = new TplSqlParser(tokens);

        // 入口规则为 tplsql；若只需 ADQL 语义，可改用 adql 规则
        ParseTree tree = parser.tplsql();

        if (parser.getNumberOfSyntaxErrors() == 0)
            System.out.println(Trees.toStringTree(tree, parser));
        else
            System.err.println("语法错误: " + parser.getNumberOfSyntaxErrors());
    }
}
```

编译与运行（把生成的 `*.java` 与 `Main.java` 放在同一目录）：

```bash
javac -cp antlr4-runtime.jar *.java
java  -cp antlr4-runtime.jar:. Main    # Windows 下类路径分隔符改用 ';'
```

### 在Python3中使用

先用 ANTLR 生成 Python3 目标代码（`TplSqlLexer.py`、`TplSqlParser.py`），并安装运行时：`pip install antlr4-python3-runtime`。

示例程序：

```python
from antlr4 import InputStream, CommonTokenStream
from TplSqlLexer import TplSqlLexer
from TplSqlParser import TplSqlParser

sql = """SELECT TOP 100 oid, main_id, sp_type
FROM basic
WHERE sp_type BETWEEN 'F3' AND 'F5';"""

input_stream = InputStream(sql)

lexer = TplSqlLexer(input_stream)
token_stream = CommonTokenStream(lexer)
parser = TplSqlParser(token_stream)

# 入口规则为 tplsql；若只需 ADQL 语义，可改用 adql 规则
tree = parser.tplsql()

if parser.getNumberOfSyntaxErrors() == 0:
    print(tree.toStringTree(recog=parser))
else:
    print("语法错误:", parser.getNumberOfSyntaxErrors())
```

最后把生成的`*.py`与脚本放在同一目录即可运行。

## 参考资料

- IVOA ADQL 规范：<https://ivoa.net/documents/ADQL/index.html>
- Simbad ADQL 文档：<https://cds.unistra.fr/help/documentation/simbad-more/adql-simbad/>
- Apache Hive 语法：<https://github.com/apache/hive/tree/master/parser/src/java/org/apache/hadoop/hive/ql/parse>
- ANTLR grammars-v4：<https://github.com/antlr/grammars-v4>
- ANTLR 4 官方站点：<https://www.antlr.org/>

## 许可

本项目以 **Apache License 2.0** 发布，详见 `License.txt`。

> 说明：语法文件头部的 Apache 许可声明来自 Apache Hive / ANTLR grammars-v4 等项目，修改与再分发请保留相应版权与许可声明。
