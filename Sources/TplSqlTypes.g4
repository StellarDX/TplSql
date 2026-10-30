// 这个文件用于存放TplSql的原生数据类型
// 同时定义一些实现它们的标准

parser grammar TplSqlTypes;

options
{
    tokenVocab = TplSqlLexer;
}

tplsqlPrimitiveType
    // 整数类型
    : KW_UNSIGNED? KW_TINYINT  // 8位整数
    | KW_UNSIGNED? KW_SMALLINT // 16位整数
    | KW_UNSIGNED? KW_INT      // 32位整数
    | KW_UNSIGNED? KW_BIGINT   // 64位整数
    | KW_UNSIGNED? KW_INT128   // 128位整数
    | KW_UNSIGNED? KW_INFTYINT // 无限位宽整数（底层应使用原码存储而不是补码）
    // 布尔类型
    | KW_BOOLEAN               // True和False，此值可以为空（此时表示叠加态）
    // 浮点类型
    | KW_FP4                   // 4位二进制浮点数，含2位指数和1位尾数
    | KW_FP6E2M3               // 6位二进制浮点数，含2位指数和3位尾数
    | KW_FP6E3M2               // 6位二进制浮点数，含3位指数和2位尾数
    | KW_FP8E4M3               // 8位二进制浮点数，含4位指数和3位尾数
    | KW_FP8E5M2               // 8位二进制浮点数，含5位指数和2位尾数
    | KW_FP16                  // 16位二进制浮点数，含5位指数和10位尾数
    | KW_BFP16                 // 16位二进制浮点数，含8位指数和7位尾数
    | KW_TF19                  // 19位二进制浮点数，含8位指数和10位尾数
    | KW_FLOAT                 // 32位二进制浮点数，含8位指数和23位尾数
    | KW_REAL                  // 一般情况下指64位二进制浮点数
    | (KW_DOUBLE KW_PRECISION? | KW_FP64) // 64位二进制浮点数，含11位指数和52位尾数
    | KW_FP80                  // 80位二进制浮点数，含15位指数和64位尾数
    | KW_FP128                 // 128位二进制浮点数，含15位指数和112位尾数
    | KW_FP256                 // 256位二进制浮点数，含19位指数和236位尾数
    | KW_INFTYFLOAT (LPAREN (exponent = Number COMMA)? mantissa = Number RPAREN)? // 无限精度二进制浮点数，可自行设置指数和尾数的位数，默认值为15位指数和112位尾数（同FP128）
    // 时间类型
    | KW_DATE                  // 日期
    | KW_DATETIME              // 日期+时间
    | KW_TIMESTAMP             // 时间戳，格式参考ISO 8601
    | KW_TIMESTAMPLOCALTZ      // 带时区的时间戳，格式参考ISO 8601
    //| KW_TIMESTAMPTZ
    | KW_TIMESTAMP KW_WITH KW_LOCAL KW_TIME KW_ZONE // 带时区的时间戳，格式参考ISO 8601
    //| KW_TIMESTAMP KW_WITH KW_TIME KW_ZONE
    // Uncomment to allow intervals as table column types
    //| KW_INTERVAL KW_YEAR KW_TO KW_MONTH
    //| KW_INTERVAL KW_DAY KW_TO KW_SECOND
    // 字符串类型
    | KW_STRING                // 字符串
    | (KW_VARCHAR | KW_CHAR) (LPAREN length = Number RPAREN)? // 带最大长度的字符串
    // 原始数据
    | KW_CLOB                  // Character Large OBject （ADQL数据类型，用于存储程序生成的大段文本）
    | KW_BLOB                  // Binary Large OBject  （ADQL数据类型，用于存储大段二进制原始数据，如图片）
    | (KW_BINARY | KW_VARBINARY) (LPAREN length = Number RPAREN)? // 二进制原始数据
    // 十进制浮点（定义详见IEEE754-2008标准：https://en.wikipedia.org/wiki/Decimal_floating_point）
    | KW_DECIMAL32             // 32位十进制浮点数，含11位指数和20位尾数
    | KW_DECIMAL64             // 64位十进制浮点数，含13位指数和50位尾数
    | KW_DECIMAL               // 128位十进制浮点数，含17位指数和110位尾数
    | KW_INFTYDECIMAL (LPAREN scaleof32 = Number RPAREN)? // IEEE754-2008标准中定义无限精度十进制浮点强制对齐到32位的整数倍。分配方式：(32 * k)位十进制浮点数含(5 + 2 * k + 4)位指数和(30 * k - 10)位尾数(k为正整数)。
    // 六十进制类型
    | KW_SEXAGESIMAL           // 常用于高精度角度，格式为(度，分，秒)
    // 几何类型
    | KW_POINT                 // 极坐标的一个点，格式为(经度，纬度)
    | KW_CIRCLE                // 极坐标的一个圆，格式为(圆心坐标, 半径)，其中半径单位为度，也可以存储为(圆心经度, 圆心纬度, 半径)
    | KW_POLYGON               // 极坐标的一个多边形，每条边均为测地线，格式为(顶点1经度, 顶点1纬度, 顶点2经度, 顶点2纬度, ...)，也可以是(顶点1, 顶点2, ...)
    ;

// 以下存储能被用于构造复数的数据类型
tplsqlNumericType
    : KW_FLOAT
    | KW_REAL
    | (KW_DOUBLE KW_PRECISION? | KW_FP64)
    | KW_FP80
    | KW_FP128
    | KW_FP256
    | KW_INFTYFLOAT (LPAREN (exponent = Number COMMA)? mantissa = Number RPAREN)?
    | KW_DECIMAL32
    | KW_DECIMAL64
    | KW_DECIMAL
    | KW_INFTYDECIMAL (LPAREN scaleof32 = Number RPAREN)?
    ;