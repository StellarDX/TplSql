/**
    Licensed to the Apache Software Foundation (ASF) under one or more
    contributor license agreements.  See the NOTICE file distributed with
    this work for additional information regarding copyright ownership.
    The ASF licenses this file to You under the Apache License, Version 2.0
    (the "License"); you may not use this file except in compliance with
    the License.  You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

parser grammar TplSqlParser;

options
{
    tokenVocab = TplSqlLexer;
}

// TplSql继承ADQL的大部分特性，并在此基础上引入Hive语法的特性补全Create，Insert和Delete等语句
// 因此它总体上基本等同于加入了ADQL特性和过程化的HiveSQL
// 其定位是一个较为完整的可读写查询体系，未来还会引入类似MySQL的过程化特性
import TplSqlNonRsvdKwds, TplSqlTypes, ADQLParser;

tplsql
    : statement SEMICOLON
    ;

// 顶层语句
statement
    : (explainStatement | execStatement)
    ;

// explainStatement用于打印工作流
explainStatement
    : KW_EXPLAIN (explainOption* execStatement | KW_REWRITE queryStatementExpression)
    ;

explainOption
    : KW_EXTENDED
    | KW_FORMATTED
    | KW_DEPENDENCY
    | KW_CBO (KW_COST | KW_JOINCOST)?
    | KW_LOGICAL
    | KW_AUTHORIZATION
    | KW_ANALYZE
    | KW_REOPTIMIZATION
    | KW_LOCKS
    | KW_AST
    | KW_VECTORIZATION vectorizationOnly? vectorizatonDetail?
    | KW_DEBUG
    | KW_DDL
    ;

vectorizationOnly
    : KW_ONLY
    ;

vectorizatonDetail
    : KW_SUMMARY
    | KW_OPERATOR
    | KW_EXPRESSION
    | KW_DETAIL
    ;

// execStatement用于执行语句
execStatement
    : queryStatementExpression // select语句，也是继承ADQL的部分，有删改（ADQL仅支持select）
    | loadStatement
    | exportStatement
    | importStatement
    // | replDumpStatement
    // | replLoadStatement
    // | replStatusStatement
    | ddlStatement
    | deleteStatement
    | updateStatement
    | sqlTransactionStatement
    | mergeStatement
    | prepareStatement
    | executeStatement
    ;

// ------------------------------ ADQL语法规则覆盖 ------------------------------ //

// ADQL中CTE只能通过查询中的as语句给列起别名，TplSql支持with A as (C1, C2, C3, ...) (select ...)这种写法
// 此写法最初定义于
cteStatement
    : id_ (LPAREN colAliases = columnNameList RPAREN)? KW_AS LPAREN queryStatementExpression RPAREN
    ;

queryStatementExpressionBody
    : fromStatement
    | regularBody
    ;

fromStatement
    : singleFromStatement (u = setOperator r = singleFromStatement)*
    ;

singleFromStatement
    : fromClause b += body+
    ;

fromSource
    : uniqueJoinToken uniqueJoinSource (COMMA uniqueJoinSource)+
    | joinSource
    ;

uniqueJoinToken
    : KW_UNIQUEJOIN
    ;

uniqueJoinSource
    : KW_PRESERVE? uniqueJoinTableSource uniqueJoinExpr
    ;

uniqueJoinTableSource
    : tabname = tableName ts = tableSample? (KW_AS? alias = id_)?
    ;

uniqueJoinExpr
    : LPAREN expressionList RPAREN
    ;

expressionList
    : expression (COMMA expression)*
    ;

body
    : insertClause selectClause lateralView? whereClause? groupByClause? havingClause? window_clause? qualifyClause? orderByClause? clusterByClause?
        distributeByClause? sortByClause? limitClause?
    | selectClause lateralView? whereClause? groupByClause? havingClause? window_clause? qualifyClause? orderByClause? clusterByClause?
        distributeByClause? sortByClause? limitClause?
    ;

insertClause
    : KW_INSERT (
        KW_OVERWRITE destination ifNotExists?
        | KW_INTO KW_TABLE? tableOrPartition (LPAREN targetCols = columnNameList RPAREN)?
    )
    ;

destination
    : local = KW_LOCAL? KW_DIRECTORY StringLiteral tableRowFormat? tableFileFormat?
    | KW_TABLE tableOrPartition
    ;

lateralView
    : KW_LATERAL KW_VIEW KW_OUTER function_ tableAlias (KW_AS id_ (COMMA id_)*)?
    | COMMA? KW_LATERAL (
        KW_VIEW function_ tableAlias (KW_AS id_ (COMMA id_)*)?
        | KW_TABLE LPAREN valuesClause RPAREN KW_AS? tableAlias (LPAREN id_ (COMMA id_)* RPAREN)?
    )
    ;

tableAlias
    : id_
    ;

valuesClause
    : KW_VALUES valuesTableConstructor
    ;

valuesTableConstructor
    : valueRowConstructor (COMMA valueRowConstructor)*
    | firstValueRowConstructor (COMMA valueRowConstructor)*
    ;

firstValueRowConstructor
    : LPAREN firstExpressionsWithAlias RPAREN
    ;

firstExpressionsWithAlias
    : first = expression KW_AS? colAlias = id_? (COMMA expressionWithAlias)*
    ;

expressionWithAlias
    : expression KW_AS? alias = id_?
    ;

qualifyClause
    : KW_QUALIFY expression
    ;

regularBody
    : i = insertClause s = selectStatement
    | selectStatement
    ;

selectStatement
    : a = atomSelectStatement set = setOpSelectStatement? o = orderByClause? c = clusterByClause? d = distributeByClause? sort = sortByClause? l =
        limitClause?
    ;

atomSelectStatement
    : s = selectClause f = fromClause? w = whereClause? g = groupByClause? h = havingClause? win = window_clause? q = qualifyClause?
    | LPAREN selectStatement RPAREN
    | valuesSource
    ;

valuesSource
    : valuesClause
    ;

selectClause
    : KW_SELECT QUERY_HINT? (all_distinct? set_limit? selectList | KW_TRANSFORM selectTrfmClause)
    | trfmClause
    ;

selectTrfmClause
    : LPAREN selectExpressionList RPAREN rowFormat recordWriter KW_USING StringLiteral (
        KW_AS (LPAREN (aliasList | columnNameTypeList) RPAREN | aliasList | columnNameTypeList)
    )? rowFormat recordReader
    ;

selectExpressionList
    : selectExpression (COMMA selectExpression)*
    ;

rowFormat
    : rowFormatSerde
    | rowFormatDelimited
    ;

recordWriter
    : KW_RECORDWRITER StringLiteral
    ;

aliasList
    : id_ (COMMA id_)*
    ;

recordReader
    : KW_RECORDREADER StringLiteral
    ;

trfmClause
    : (KW_MAP | KW_REDUCE) selectExpressionList rowFormat recordWriter KW_USING StringLiteral (
        KW_AS (LPAREN (aliasList | columnNameTypeList) RPAREN | aliasList | columnNameTypeList)
    )? rowFormat recordReader
    ;

selectItem
    : tableAllColumns
    | (expression (KW_AS? id_ | KW_AS LPAREN id_ (COMMA id_)* RPAREN)?)
    ;

tableName
    : db = id_ DOT tab = id_ (DOT meta = id_)?
    | tab = id_
    ;

atomjoinSource
    : tableSource lateralView*
    | virtualTableSource lateralView*
    | subQuerySource lateralView*
    | partitionedTableFunction lateralView*
    | LPAREN joinSource RPAREN
    ;

tableSource
    : tabname = tableName props = tableProperties? ts = tableSample? asOf = asOfClause? (
        KW_AS? alias = id_
    )?
    ;

tableSample
    : tableBucketSample
    | splitSample
    ;

tableBucketSample
    : KW_TABLESAMPLE LPAREN KW_BUCKET numerator = Number KW_OUT KW_OF denominator = Number (
        KW_ON expr += expression (COMMA expr += expression)*
    )? RPAREN
    ;

splitSample
    : KW_TABLESAMPLE LPAREN (Number (KW_PERCENT | KW_ROWS) | ByteLengthLiteral) RPAREN
    ;

asOfClause
    : KW_FOR (
        KW_SYSTEM_TIME KW_AS KW_OF asOfTime = expression
        | KW_FOR KW_SYSTEM_VERSION KW_AS KW_OF asOfVersion = Number
    )
    ;

virtualTableSource
    : KW_TABLE LPAREN valuesClause RPAREN KW_AS? tableAlias (LPAREN id_ (COMMA id_)*)? RPAREN
    ;

partitionedTableFunction
    : n = id_ LPAREN KW_ON ptfsrc = partitionTableFunctionSource spec = partitioningSpec? (
        Identifier LPAREN expression RPAREN (COMMA Identifier LPAREN expression RPAREN)*
    )? RPAREN alias = id_?
    ;

partitionTableFunctionSource
    : subQuerySource
    | tableSource
    | partitionedTableFunction
    ;

joinSourcePart
    : (tableSource | virtualTableSource | subQuerySource | partitionedTableFunction) /*lateralView**/
    ;

groupby_expression
    : rollupStandard
    | rollupOldSyntax
    | groupByEmpty
    ;

rollupStandard
    : (rollup = KW_ROLLUP | cube = KW_CUBE) LPAREN expression (COMMA expression)* RPAREN
    ;

rollupOldSyntax
    : expr = expressionsNotInParenthesis (rollup = KW_WITH KW_ROLLUP | cube = KW_WITH KW_CUBE)? (
        sets = KW_GROUPING KW_SETS LPAREN groupingSetExpression (COMMA groupingSetExpression)* RPAREN
    )?
    ;

groupingSetExpression
    : groupingSetExpressionMultiple
    | groupingExpressionSingle
    ;

groupingSetExpressionMultiple
    : LPAREN expression? (COMMA expression)* RPAREN
    ;

groupingExpressionSingle
    : expression
    ;

// ---------------------------------------------------------------------------- //

// load data local inpath ...
//             ^
//             TplSql中写不写这个词其实都无所谓，主要是为了兼容Hive的语法
loadStatement
    : KW_LOAD KW_DATA KW_LOCAL? KW_INPATH StringLiteral KW_OVERWRITE? KW_INTO KW_TABLE tableOrPartition inputFileFormat?
    ;

tableOrPartition
    : tableName partitionSpec? // TODO: 支持把一张表拆分成多个文件保存以加快查询速度
    ;

partitionSpec
    : KW_PARTITION LPAREN partitionVal (COMMA partitionVal)* RPAREN
    ;

partitionVal
    : id_ (EQUAL constant)?
    ;

inputFileFormat
    : KW_INPUTFORMAT inFmt = StringLiteral KW_SERDE serdeCls = StringLiteral
    ;

// export table ...
// 导出完整的表数据和元数据，常用于备份和迁移
exportStatement
    : KW_EXPORT KW_TABLE tableOrPartition KW_TO StringLiteral replicationClause?
    ;

replicationClause
    : KW_FOR KW_METADATA? KW_REPLICATION LPAREN StringLiteral RPAREN
    ;

// import ...
importStatement
    : KW_IMPORT (KW_EXTERNAL? KW_TABLE tableOrPartition)? KW_FROM path = StringLiteral tableLocation?
    ;

tableLocation
    : KW_LOCATION locn = StringLiteral
    ;

// ------------------------------------ DDL ----------------------------------- //

ddlStatement
    : createDatabaseStatement
    | switchDatabaseStatement
    | dropDatabaseStatement
    | createTableStatement
    | dropTableStatement
    | truncateTableStatement
    | alterStatement
    | descStatement
    | showStatement
    | metastoreCheck
    | createViewStatement
    | createMaterializedViewStatement
    | createScheduledQueryStatement
    | alterScheduledQueryStatement
    | dropScheduledQueryStatement
    | dropViewStatement
    | dropMaterializedViewStatement
    | createFunctionStatement
    | createMacroStatement
    | dropFunctionStatement
    | reloadFunctionsStatement
    | dropMacroStatement
    | analyzeStatement
    | lockStatement
    | unlockStatement
    | lockDatabase
    | unlockDatabase
    | createRoleStatement
    | dropRoleStatement
    | grantPrivileges
    | revokePrivileges
    | showGrants
    | showRoleGrants
    | showRolePrincipals
    | showRoles
    | grantRole
    | revokeRole
    | setRole
    | showCurrentRole
    | abortTransactionStatement
    | abortCompactionStatement
    | killQueryStatement
    | resourcePlanDdlStatements
    | createDataConnectorStatement
    | dropDataConnectorStatement
    ;

// create database ...
createDatabaseStatement
    : KW_CREATE db_schema ifNotExists? name = id_ databaseComment? dbLocation? dbManagedLocation? (
        KW_WITH KW_DBPROPERTIES dbprops = dbProperties
    )? // 创建文件数据源
    | KW_CREATE KW_REMOTE db_schema ifNotExists? name = id_ databaseComment? dbConnectorName (
        KW_WITH KW_DBPROPERTIES dbprops = dbProperties
    )? // 映射已有数据库（可通过Apache ADBC实现）
    ;

db_schema
    : KW_DATABASE
    | KW_SCHEMA
    ;

ifNotExists
    : KW_IF KW_NOT KW_EXISTS
    ;

databaseComment
    : KW_COMMENT comment = StringLiteral
    ;

dbLocation
    : KW_LOCATION locn = StringLiteral
    ;

dbManagedLocation
    : KW_MANAGEDLOCATION locn = StringLiteral
    ;

dbProperties
    : LPAREN dbPropertiesList RPAREN
    ;

dbPropertiesList
    : keyValueProperty (COMMA keyValueProperty)*
    ;

keyValueProperty
    : key = StringLiteral EQUAL value = StringLiteral
    ;

dbConnectorName
    : KW_USING dcName = id_
    ;

// use ...
switchDatabaseStatement
    : KW_USE id_
    ;

// drop database ...
dropDatabaseStatement
    : KW_DROP db_schema ifExists? id_ restrictOrCascade?
    ;

ifExists
    : KW_IF KW_EXISTS
    ;

restrictOrCascade
    : KW_RESTRICT
    | KW_CASCADE
    ;

// create table ...
createTableStatement
    : KW_CREATE temp = KW_TEMPORARY? trans = KW_TRANSACTIONAL? ext = KW_EXTERNAL? KW_TABLE ifNotExists? name = tableName (
        likeTableOrFile createTablePartitionSpec? tableRowFormat? tableFileFormat? tableLocation? tablePropertiesPrefixed?
        | (LPAREN columnNameTypeOrConstraintList RPAREN)? tableComment? createTablePartitionSpec? tableBuckets? tableSkewed? tableRowFormat?
            tableFileFormat? tableLocation? tablePropertiesPrefixed? (KW_AS selectStatementWithCTE)?
    )
    | KW_CREATE mgd = KW_MANAGED KW_TABLE ifNotExists? name = tableName (
        likeTableOrFile tableRowFormat? tableFileFormat? tableLocation? tablePropertiesPrefixed?
        | (LPAREN columnNameTypeOrConstraintList RPAREN)? tableComment? createTablePartitionSpec? tableBuckets? tableSkewed? tableRowFormat?
            tableFileFormat? tableLocation? tablePropertiesPrefixed? (KW_AS selectStatementWithCTE)?
    )
    ;

likeTableOrFile
    : KW_LIKE KW_FILE
    | KW_LIKE KW_FILE format = id_ uri = StringLiteral // Like file是Hive为兼容Iceberg表设计的，此处预留此结构暂时不实现
    | KW_LIKE likeName = tableName
    ;

// 把表文件拆分成多个文件保存
createTablePartitionSpec
    : KW_PARTITIONED KW_BY (
        LPAREN (opt1 = createTablePartitionColumnTypeSpec | opt2 = createTablePartitionColumnSpec)
        | KW_SPEC LPAREN spec = partitionTransformSpec
    ) RPAREN
    ;

createTablePartitionColumnTypeSpec
    : columnNameTypeConstraint (COMMA columnNameTypeConstraint)*
    ;

columnNameTypeConstraint
    : colName = id_ colType columnConstraint? (KW_COMMENT comment = StringLiteral)?
    ;

colType
    : type
    ;

// 原生类型和UDT支持
type
    : tplsqlPrimitiveType
    | listType
    | structType
    | mapType
    | unionType
    | complexType
    ;

// array<...>
listType
    : KW_ARRAY LESSTHAN type GREATERTHAN
    ;

// struct<A: type, B: type, ...>
structType
    : KW_STRUCT LESSTHAN columnNameColonTypeList GREATERTHAN
    ;

columnNameColonTypeList
    : columnNameColonType (COMMA columnNameColonType)*
    ;

columnNameColonType
    : colName = id_ COLON colType (KW_COMMENT comment = StringLiteral)?
    ;

// map<key, value>
mapType
    : KW_MAP LESSTHAN left = tplsqlPrimitiveType COMMA right = type GREATERTHAN
    ;

// union<...>
unionType
    : KW_UNIONTYPE LESSTHAN colTypeList GREATERTHAN
    ;

// complex<...>
complexType
    : KW_COMPLEX LESSTHAN tplsqlNumericType GREATERTHAN
    | KW_QUATERNION LESSTHAN tplsqlNumericType GREATERTHAN
    // | KW_HYPERCOMPLEX ... // 功能更强的超复数，但是实现起来过于复杂
    ;

colTypeList
    : colType (COMMA colType)*
    ;

columnConstraint
    : foreignKeyConstraint
    | colConstraint
    ;

// reference ...
foreignKeyConstraint
    : (KW_CONSTRAINT constraintName = id_)? KW_REFERENCES tabName = tableName LPAREN colName = columnName RPAREN constraintOptsCreate?
    ;

constraintOptsCreate
    : enableValidateSpecification relySpecification?
    ;

enableValidateSpecification
    : enableSpecification validateSpecification?
    | enforcedSpecification
    ;

enableSpecification
    : KW_ENABLE
    | KW_DISABLE
    ;

validateSpecification
    : KW_VALIDATE
    | KW_NOVALIDATE
    ;

enforcedSpecification
    : KW_ENFORCED
    | KW_NOT KW_ENFORCED
    ;

relySpecification
    : KW_RELY
    | KW_NORELY
    ;

// constraint ... (default, check, primary key, unique, not null, ...)
colConstraint
    : (KW_CONSTRAINT constraintName = id_)? columnConstraintType constraintOptsCreate?
    ;

columnConstraintType
    : KW_NOT KW_NULL
    | KW_DEFAULT defaultVal
    | checkConstraint
    | tableConstraintType
    ;

defaultVal
    : constant
    | function_
    | castExpression
    ;

checkConstraint
    : KW_CHECK LPAREN expression RPAREN
    ;

tableConstraintType
    : KW_PRIMARY KW_KEY
    | KW_UNIQUE
    ;

createTablePartitionColumnSpec
    : columnName (COMMA columnName)*
    ;

partitionTransformSpec
    : columnNameTransformConstraint (COMMA columnNameTransformConstraint)*
    ;

columnNameTransformConstraint
    : partitionTransformType
    ;

partitionTransformType
    : columnName
    | (KW_YEAR | KW_MONTH | KW_DAY | KW_HOUR) LPAREN columnName RPAREN
    | (KW_TRUNCATE | KW_BUCKET) LPAREN value = Number COMMA columnName RPAREN
    ;

// row format ...
tableRowFormat
    : rowFormatDelimited
    | rowFormatSerde
    ;

// ...delimited fields terminated by ...
rowFormatDelimited
    : KW_ROW KW_FORMAT KW_DELIMITED tableRowFormatFieldIdentifier? tableRowFormatCollItemsIdentifier? tableRowFormatMapKeysIdentifier?
        tableRowFormatLinesIdentifier? tableRowNullFormat?
    ;

tableRowFormatFieldIdentifier
    : KW_FIELDS KW_TERMINATED KW_BY fldIdnt = StringLiteral (
        KW_ESCAPED KW_BY fldEscape = StringLiteral
    )?
    ;

tableRowFormatCollItemsIdentifier
    : KW_COLLECTION KW_ITEMS KW_TERMINATED KW_BY collIdnt = StringLiteral
    ;

tableRowFormatMapKeysIdentifier
    : KW_MAP KW_KEYS KW_TERMINATED KW_BY mapKeysIdnt = StringLiteral
    ;

tableRowFormatLinesIdentifier
    : KW_LINES KW_TERMINATED KW_BY linesIdnt = StringLiteral
    ;

tableRowNullFormat
    : KW_NULL KW_DEFINED KW_AS nullIdnt = StringLiteral
    ;

// ...serde 'Object' ...
rowFormatSerde
    : KW_ROW KW_FORMAT KW_SERDE name = StringLiteral (
        KW_WITH KW_SERDEPROPERTIES serdeprops = tableProperties
    )?
    ;

tableProperties
    : LPAREN tablePropertiesList RPAREN
    ;

tablePropertiesList
    : keyValueProperty (COMMA keyValueProperty)*
    | keyProperty (COMMA keyProperty)*
    ;

keyProperty
    : key = StringLiteral
    ;

// stored as ... (textfile, parquet, orc, ...)
tableFileFormat
    : KW_STORED KW_AS KW_INPUTFORMAT inFmt = StringLiteral KW_OUTPUTFORMAT outFmt = StringLiteral (
        KW_INPUTDRIVER inDriver = StringLiteral KW_OUTPUTDRIVER outDriver = StringLiteral
    )?
    | KW_STORED KW_BY storageHandler = StringLiteral (
        KW_WITH KW_SERDEPROPERTIES serdeprops = tableProperties
    )? (KW_STORED KW_AS fileformat = id_)?
    | KW_STORED KW_BY genericSpec = id_ (KW_WITH KW_SERDEPROPERTIES serdeprops = tableProperties)? (
        KW_STORED KW_AS fileformat = id_
    )?
    | KW_STORED KW_AS genericSpec = id_
    ;

// tblproperties ...
tablePropertiesPrefixed
    : KW_TBLPROPERTIES tableProperties
    ;

columnNameTypeOrConstraintList
    : columnNameTypeOrConstraint (COMMA columnNameTypeOrConstraint)*
    ;

columnNameTypeOrConstraint
    : tableConstraint
    | columnNameTypeConstraint
    ;

tableConstraint
    : createForeignKey
    | createConstraint
    ;

createForeignKey
    : (KW_CONSTRAINT constraintName = id_)? KW_FOREIGN KW_KEY fkCols = columnParenthesesList KW_REFERENCES tabName = tableName parCols =
        columnParenthesesList constraintOptsCreate?
    ;

createConstraint
    : (KW_CONSTRAINT constraintName = id_)? tableLevelConstraint constraintOptsCreate?
    ;

tableLevelConstraint
    : pkUkConstraint
    | checkConstraint
    ;

// primary key(...)
pkUkConstraint
    : tableConstraintType pkCols = columnParenthesesList
    ;

// comment '...' (列注释，只是为了好看，然并卵)
tableComment
    : KW_COMMENT comment = StringLiteral
    ;

// 分桶表相关（TODO）
// clustered by ...
tableBuckets
    : KW_CLUSTERED KW_BY LPAREN bucketCols = columnNameList RPAREN (
        KW_SORTED KW_BY LPAREN sortCols = columnNameOrderList RPAREN
    )? KW_INTO num = Number KW_BUCKETS
    ;

columnNameOrderList
    : columnNameOrder (COMMA columnNameOrder)*
    ;

columnNameOrder
    : id_ orderSpec = orderSpecification? nullSpec = nullOrdering?
    ;

orderSpecification
    : KW_ASC
    | KW_DESC
    ;

// 这个是用来处理数据倾斜的，分布式或多线程处理的时候可以防止一个节点或一条线程需要处理的数据量远大于别的节点或线程拖慢总体速度
tableSkewed
    : KW_SKEWED KW_BY LPAREN skewedCols = columnNameList RPAREN KW_ON LPAREN skewedValues = skewedValueElement RPAREN storedAsDirs?
    ;

skewedValueElement
    : skewedColumnValues
    | skewedColumnValuePairList
    ;

skewedColumnValues
    : skewedColumnValue (COMMA skewedColumnValue)*
    ;

skewedColumnValue
    : constant
    ;

skewedColumnValuePairList
    : skewedColumnValuePair (COMMA skewedColumnValuePair)*
    ;

skewedColumnValuePair
    : LPAREN colValues = skewedColumnValues RPAREN
    ;

storedAsDirs
    : KW_STORED KW_AS KW_DIRECTORIES
    ;

// create table ... as select ...
selectStatementWithCTE
    : w = withClause? selectStatement
    ;

// drop table ...
dropTableStatement
    : KW_DROP KW_TABLE ifExists? tableName KW_PURGE? replicationClause?
    ;

// truncate table ...
truncateTableStatement
    : KW_TRUNCATE KW_TABLE? tablePartitionPrefix (KW_COLUMNS LPAREN columnNameList RPAREN)? force?
    ;

tablePartitionPrefix
    : tableName partitionSpec?
    ;

force
    : KW_FORCE
    ;

// alter table ...
alterStatement
    : KW_ALTER (
        KW_TABLE tableName alterTableStatementSuffix
        | KW_VIEW tableName KW_AS? alterViewStatementSuffix
        | KW_MATERIALIZED KW_VIEW tableNameTree = tableName alterMaterializedViewStatementSuffix
        | db_schema alterDatabaseStatementSuffix
        | KW_DATACONNECTOR alterDataConnectorStatementSuffix
    )
    ;

alterTableStatementSuffix
    : alterStatementSuffixRename
    | alterStatementSuffixDropPartitions
    | alterStatementSuffixAddPartitions
    | alterStatementSuffixTouch
    | alterStatementSuffixArchive
    | alterStatementSuffixUnArchive
    | alterStatementSuffixProperties
    | alterStatementSuffixSkewedby
    | alterStatementSuffixExchangePartition
    | alterStatementPartitionKeyType
    | alterStatementSuffixDropConstraint
    | alterStatementSuffixAddConstraint
    | alterTblPartitionStatementSuffix
    | partitionSpec alterTblPartitionStatementSuffix
    | alterStatementSuffixSetOwner
    | alterStatementSuffixSetPartSpec
    | alterStatementSuffixExecute
    ;

// ...rename to ...
alterStatementSuffixRename
    : KW_RENAME KW_TO tableName // 这个写法是Oracle的写法，MySQL可忽略rename
    ;

// ...drop partition ...
alterStatementSuffixDropPartitions
    : KW_DROP ifExists? KW_PARTITION partitionSelectorSpec (
        COMMA KW_PARTITION partitionSelectorSpec
    )* KW_PURGE? replicationClause?
    ;

partitionSelectorSpec
    : LPAREN partitionSelectorVal (COMMA partitionSelectorVal)* RPAREN
    ;

partitionSelectorVal
    : id_ partitionSelectorOperator constant
    ;

partitionSelectorOperator
    : KW_LIKE
    | subQuerySelectorOperator
    ;

// ...add partition ...
alterStatementSuffixAddPartitions
    : KW_ADD ifNotExists? alterStatementSuffixAddPartitionsElement+
    ;

alterStatementSuffixAddPartitionsElement
    : partitionSpec partitionLocation?
    ;

partitionLocation
    : KW_LOCATION locn = StringLiteral
    ;

// ...touch partition ...
alterStatementSuffixTouch
    : KW_TOUCH partitionSpec*
    ;

// ...archive partition ...
alterStatementSuffixArchive
    : KW_ARCHIVE partitionSpec*
    ;

// ...unarchive partition ...
alterStatementSuffixUnArchive
    : KW_UNARCHIVE partitionSpec*
    ;

// ...set/unset tblproperties
alterStatementSuffixProperties
    : KW_SET KW_TBLPROPERTIES tableProperties
    | KW_UNSET KW_TBLPROPERTIES ifExists? tableProperties
    ;

// ...skewed by
alterStatementSuffixSkewedby
    : tableSkewed
    | KW_NOT (KW_SKEWED | storedAsDirs)
    ;

// ...exchange ... with table ...
alterStatementSuffixExchangePartition
    : KW_EXCHANGE partitionSpec KW_WITH KW_TABLE exchangename = tableName
    ;

// ...partition column ...
alterStatementPartitionKeyType
    : KW_PARTITION KW_COLUMN LPAREN columnNameType RPAREN
    ;

columnNameType
    : colName = id_ colType (KW_COMMENT comment = StringLiteral)?
    ;

// ...drop constraint ...
alterStatementSuffixDropConstraint
    : KW_DROP KW_CONSTRAINT cName = id_
    ;

// ...add ... (forein key, ...)
alterStatementSuffixAddConstraint
    : KW_ADD (fk = alterForeignKeyWithName | alterConstraintWithName)
    ;

alterForeignKeyWithName
    : KW_CONSTRAINT constraintName = id_ KW_FOREIGN KW_KEY fkCols = columnParenthesesList KW_REFERENCES tabName = tableName parCols =
        columnParenthesesList constraintOptsAlter?
    ;

constraintOptsAlter
    : enableValidateSpecification relySpecification?
    ;

alterConstraintWithName
    : KW_CONSTRAINT constraintName = id_ tableLevelConstraint constraintOptsAlter?
    ;

alterTblPartitionStatementSuffix
    : alterStatementSuffixFileFormat
    | alterStatementSuffixLocation
    | alterStatementSuffixMergeFiles
    | alterStatementSuffixSerdeProperties
    | alterStatementSuffixRenamePart
    | alterStatementSuffixBucketNum
    | alterTblPartitionStatementSuffixSkewedLocation
    | alterStatementSuffixClusterbySortby
    | alterStatementSuffixCompact
    | alterStatementSuffixUpdateStatsCol
    | alterStatementSuffixUpdateStats
    | alterStatementSuffixRenameCol
    | alterStatementSuffixAddCol
    | alterStatementSuffixUpdateColumns
    ;

// ...set fileformat ...
alterStatementSuffixFileFormat
    : KW_SET KW_FILEFORMAT fileFormat
    ;

fileFormat
    : KW_INPUTFORMAT inFmt = StringLiteral KW_OUTPUTFORMAT outFmt = StringLiteral KW_SERDE serdeCls = StringLiteral (
        KW_INPUTDRIVER inDriver = StringLiteral KW_OUTPUTDRIVER outDriver = StringLiteral
    )?
    | genericSpec = id_
    ;

// ...set location ...
alterStatementSuffixLocation
    : KW_SET KW_LOCATION newLoc = StringLiteral
    ;

// ...concatenate
alterStatementSuffixMergeFiles
    : KW_CONCATENATE
    ;

// ...set serde ...
alterStatementSuffixSerdeProperties
    : KW_SET (
        KW_SERDE serdeName = StringLiteral (KW_WITH KW_SERDEPROPERTIES tableProperties)?
        | KW_SERDEPROPERTIES tableProperties
    )
    | KW_UNSET KW_SERDEPROPERTIES tableProperties
    ;

// ...rename to partition...
alterStatementSuffixRenamePart
    : KW_RENAME KW_TO partitionSpec
    ;

// ...into ... buckets
alterStatementSuffixBucketNum
    : KW_INTO num = Number KW_BUCKETS
    ;

// ...set skewed location ...
alterTblPartitionStatementSuffixSkewedLocation
    : KW_SET KW_SKEWED KW_LOCATION skewedLocations
    ;

skewedLocations
    : LPAREN skewedLocationsList RPAREN
    ;

skewedLocationsList
    : skewedLocationMap (COMMA skewedLocationMap)*
    ;

skewedLocationMap
    : key = skewedValueLocationElement EQUAL value = StringLiteral
    ;

skewedValueLocationElement
    : skewedColumnValue
    | skewedColumnValuePair
    ;

// ...not clustered/sorted ...
alterStatementSuffixClusterbySortby
    : KW_NOT (KW_CLUSTERED | KW_SORTED)
    | tableBuckets
    ;

// ...compact ...
alterStatementSuffixCompact
    : KW_COMPACT compactType = StringLiteral tableImplBuckets? blocking? compactPool? (
        KW_WITH KW_OVERWRITE KW_TBLPROPERTIES tableProperties
    )?
    ;

tableImplBuckets
    : KW_CLUSTERED KW_INTO num = Number KW_BUCKETS
    ;

blocking
    : KW_AND KW_WAIT
    ;

compactPool
    : KW_POOL poolName = StringLiteral
    ;

// ...update statistics for column ...
alterStatementSuffixUpdateStatsCol
    : KW_UPDATE KW_STATISTICS KW_FOR KW_COLUMN? colName = id_ KW_SET tableProperties (
        KW_COMMENT comment = StringLiteral
    )?
    ;

// ...update statistics set ...
alterStatementSuffixUpdateStats
    : KW_UPDATE KW_STATISTICS KW_SET tableProperties
    ;

// ...change column
alterStatementSuffixRenameCol
    : KW_CHANGE KW_COLUMN? oldName = id_ newName = id_ colType alterColumnConstraint? (
        KW_COMMENT comment = StringLiteral
    )? alterStatementChangeColPosition? restrictOrCascade?
    ;

alterColumnConstraint
    : alterForeignKeyConstraint
    | alterColConstraint
    ;

alterForeignKeyConstraint
    : (KW_CONSTRAINT constraintName = id_)? KW_REFERENCES tabName = tableName LPAREN colName = columnName RPAREN constraintOptsAlter?
    ;

alterColConstraint
    : (KW_CONSTRAINT constraintName = id_)? columnConstraintType constraintOptsAlter?
    ;

alterStatementChangeColPosition
    : first = KW_FIRST
    | KW_AFTER afterCol = id_
    ;

// ...add/replace columns ...
alterStatementSuffixAddCol
    : (add = KW_ADD | replace = KW_REPLACE) KW_COLUMNS LPAREN columnNameTypeList RPAREN restrictOrCascade?
    ;

columnNameTypeList
    : columnNameType (COMMA columnNameType)*
    ;

// ...update columns ...
alterStatementSuffixUpdateColumns
    : KW_UPDATE KW_COLUMNS restrictOrCascade?
    ;

// ...set owner ...
alterStatementSuffixSetOwner
    : KW_SET KW_OWNER principalName
    ;

principalName
    : KW_USER principalIdentifier
    | KW_GROUP principalIdentifier
    | KW_ROLE id_
    ;

principalIdentifier
    : id_
    //| QuotedIdentifier
    ;

// ...set partition spec ...
alterStatementSuffixSetPartSpec
    : KW_SET KW_PARTITION KW_SPEC LPAREN spec = partitionTransformSpec RPAREN
    ;

// ...execute ...
alterStatementSuffixExecute
    : KW_EXECUTE (
        KW_ROLLBACK LPAREN rollbackParam = (StringLiteral | Number)
        | KW_EXPIRE_SNAPSHOTS LPAREN expireParam = StringLiteral
        | KW_SET_CURRENT_SNAPSHOT LPAREN snapshotParam = Number
    ) RPAREN
    ;

alterViewStatementSuffix
    : alterViewSuffixProperties
    | alterStatementSuffixRename
    | alterStatementSuffixAddPartitions
    | alterStatementSuffixDropPartitions
    | selectStatementWithCTE
    ;

// ...set/unset tblproperties
alterViewSuffixProperties
    : KW_SET KW_TBLPROPERTIES tableProperties
    | KW_UNSET KW_TBLPROPERTIES ifExists? tableProperties
    ;

alterMaterializedViewStatementSuffix
    : alterMaterializedViewSuffixRewrite
    | alterMaterializedViewSuffixRebuild
    ;

alterMaterializedViewSuffixRewrite
    : mvRewriteFlag = rewriteEnabled
    | mvRewriteFlag2 = rewriteDisabled
    ;

rewriteEnabled
    : KW_ENABLE KW_REWRITE
    ;

rewriteDisabled
    : KW_DISABLE KW_REWRITE
    ;

alterMaterializedViewSuffixRebuild
    : KW_REBUILD
    ;

alterDatabaseStatementSuffix
    : alterDatabaseSuffixProperties
    | alterDatabaseSuffixSetOwner
    | alterDatabaseSuffixSetLocation
    ;

// ...set dbproperties ...
alterDatabaseSuffixProperties
    : name = id_ KW_SET KW_DBPROPERTIES dbProperties
    ;

// ...set owner ...
alterDatabaseSuffixSetOwner
    : dbName = id_ KW_SET KW_OWNER principalName
    ;

// ...set location ...
alterDatabaseSuffixSetLocation
    : dbName = id_ KW_SET (KW_LOCATION | KW_MANAGEDLOCATION) newLocation = StringLiteral
    ;

alterDataConnectorStatementSuffix
    : alterDataConnectorSuffixProperties
    | alterDataConnectorSuffixSetOwner
    | alterDataConnectorSuffixSetUrl
    ;

alterDataConnectorSuffixProperties
    : name = id_ KW_SET KW_DCPROPERTIES dcProperties
    ;

dcProperties
    : LPAREN dbPropertiesList RPAREN
    ;

alterDataConnectorSuffixSetOwner
    : dcName = id_ KW_SET KW_OWNER principalName
    ;

alterDataConnectorSuffixSetUrl
    : dcName = id_ KW_SET KW_URL newUri = StringLiteral
    ;

// describe ...
descStatement
    : (KW_DESCRIBE | KW_DESC) (
        db_schema KW_EXTENDED? dbName = id_
        | KW_DATACONNECTOR KW_EXTENDED? dcName = id_
        | KW_FUNCTION KW_EXTENDED? name = descFuncNames
        | (descOptions = KW_FORMATTED | descOptions = KW_EXTENDED) parttype = tabPartColTypeExpr
        | parttype = tabPartColTypeExpr
    )
    ;

descFuncNames
    : sysFuncNames
    | StringLiteral
    | functionIdentifier
    ;

sysFuncNames // 这些关键字也作为系统函数
    : KW_AND
    | KW_OR
    | KW_NOT
    | KW_LIKE
    | KW_IF
    | KW_CASE
    | KW_WHEN
    | KW_FLOOR
    | KW_TINYINT
    | KW_SMALLINT
    | KW_INT
    | KW_BIGINT
    | KW_FLOAT
    | KW_REAL
    | KW_DOUBLE
    | KW_BOOLEAN
    | KW_STRING
    | KW_BINARY
    | KW_ARRAY
    | KW_MAP
    | KW_STRUCT
    | KW_UNIONTYPE
    | EQUAL
    | EQUAL_NS
    | NOTEQUAL
    | LESSTHANOREQUALTO
    | LESSTHAN
    | GREATERTHANOREQUALTO
    | GREATERTHAN
    | DIVIDE
    | PLUS
    | MINUS
    | STAR
    | MOD
    | DIV
    | AMPERSAND
    | TILDE
    | BITWISEOR
    | BITWISEXOR
    | KW_RLIKE
    | KW_REGEXP
    | KW_IN
    | KW_BETWEEN
    ;

tabPartColTypeExpr
    : tableName partitionSpec? extColumnName?
    ;

extColumnName
    : id_ (DOT (KW_ELEM_TYPE | KW_KEY_TYPE | KW_VALUE_TYPE | id_))*
    ;

// show ...
showStatement
    : KW_SHOW (KW_DATABASES | KW_SCHEMAS) (KW_LIKE showStmtIdentifier)?
    | KW_SHOW isExtended = KW_EXTENDED? KW_TABLES (from_in db_name = id_)? filter = showTablesFilterExpr?
    | KW_SHOW KW_VIEWS (from_in db_name = id_)? (KW_LIKE showStmtIdentifier | showStmtIdentifier)?
    | KW_SHOW KW_MATERIALIZED KW_VIEWS (from_in db_name = id_)? (
        KW_LIKE showStmtIdentifier
        | showStmtIdentifier
    )?
    | KW_SHOW KW_SORTED? KW_COLUMNS from_in tableName (from_in db_name = id_)? (
        KW_LIKE showStmtIdentifier
        | showStmtIdentifier
    )?
    | KW_SHOW KW_FUNCTIONS (KW_LIKE showFunctionIdentifier)?
    | KW_SHOW KW_PARTITIONS tabName = tableName partitionSpec? whereClause? orderByClause? limitClause?
    | KW_SHOW KW_CREATE (db_schema db_name = id_ | KW_TABLE tabName = tableName)
    | KW_SHOW KW_TABLE KW_EXTENDED (from_in db_name = id_)? KW_LIKE showStmtIdentifier partitionSpec?
    | KW_SHOW KW_TBLPROPERTIES tableName (LPAREN prptyName = StringLiteral RPAREN)?
    | KW_SHOW KW_LOCKS (
        db_schema dbName = id_ isExtended = KW_EXTENDED?
        | parttype = partTypeExpr? isExtended = KW_EXTENDED?
    )
    | KW_SHOW KW_COMPACTIONS (
        compactionId
        | db_schema dbName = id_ compactionPool? compactionType? compactionStatus? orderByClause? limitClause?
        | parttype = partTypeExpr? compactionPool? compactionType? compactionStatus? orderByClause? limitClause?
    )
    | KW_SHOW KW_TRANSACTIONS
    | KW_SHOW KW_CONF StringLiteral
    | KW_SHOW KW_RESOURCE (KW_PLAN rp_name = id_ | KW_PLANS)
    | KW_SHOW KW_DATACONNECTORS
    ;

showStmtIdentifier
    : id_
    | StringLiteral
    ;

from_in
    : KW_FROM
    | KW_IN
    ;

showTablesFilterExpr
    : KW_WHERE id_ EQUAL StringLiteral
    | KW_LIKE showStmtIdentifier
    | showStmtIdentifier
    ;

showFunctionIdentifier
    : functionIdentifier
    | StringLiteral
    ;

partTypeExpr
    : tabTypeExpr partitionSpec?
    ;

tabTypeExpr
    : id_ (DOT id_)? (id_ (DOT (KW_ELEM_TYPE | KW_KEY_TYPE | KW_VALUE_TYPE | id_))*)?
    ;

compactionId
    : KW_COMPACT_ID EQUAL compactId = Number
    ;

compactionPool
    : KW_POOL poolName = StringLiteral
    ;

compactionType
    : KW_TYPE compactType = StringLiteral
    ;

compactionStatus
    : KW_STATUS status = StringLiteral
    ;

// msck repair table...
metastoreCheck
    : KW_MSCK repair = KW_REPAIR? (
        KW_TABLE tableName (
            opt = (KW_ADD | KW_DROP | KW_SYNC) parts = KW_PARTITIONS partitionSelectorSpec?
        )?
    )
    ;

// create view ...
createViewStatement
    : KW_CREATE orReplace? KW_VIEW ifNotExists? name = tableName (
        LPAREN columnNameCommentList RPAREN
    )? tableComment? viewPartition? tablePropertiesPrefixed? KW_AS selectStatementWithCTE
    ;

orReplace
    : KW_OR KW_REPLACE
    ;

columnNameCommentList
    : columnNameComment (COMMA columnNameComment)*
    ;

columnNameComment
    : colName = id_ (KW_COMMENT comment = StringLiteral)?
    ;

viewPartition
    : KW_PARTITIONED KW_ON (LPAREN columnNameList | KW_SPEC LPAREN spec = partitionTransformSpec) RPAREN
    ;

// create materialized view ...
createMaterializedViewStatement
    : KW_CREATE KW_MATERIALIZED KW_VIEW ifNotExists? name = tableName rewriteDisabled? tableComment? viewPartition? viewOrganization? tableRowFormat?
        tableFileFormat? tableLocation? tablePropertiesPrefixed? KW_AS selectStatementWithCTE
    ;

viewOrganization
    : viewClusterSpec
    | viewComplexSpec
    ;

viewClusterSpec
    : KW_CLUSTERED KW_ON LPAREN columnNameList RPAREN
    ;

viewComplexSpec
    : viewDistSpec viewSortSpec
    ;

viewDistSpec
    : KW_DISTRIBUTED KW_ON LPAREN colList = columnNameList RPAREN
    ;

viewSortSpec
    : KW_SORTED KW_ON LPAREN colList = columnNameList RPAREN
    ;

// create scheduled query ...
createScheduledQueryStatement
    : KW_CREATE KW_SCHEDULED KW_QUERY name = id_ scheduleSpec executedAsSpec? enableSpecification? definedAsSpec
    ;

scheduleSpec
    : KW_CRON cronString = StringLiteral
    | KW_EVERY value = Number? qualifier = intervalQualifiers (
        (KW_AT | KW_OFFSET KW_BY) offsetTs = StringLiteral
    )?
    ;

executedAsSpec
    : KW_EXECUTED KW_AS executedAs = StringLiteral
    ;

definedAsSpec
    : KW_DEFINED? KW_AS statement
    ;

// alter scheduled query ...
alterScheduledQueryStatement
    : KW_ALTER KW_SCHEDULED KW_QUERY name = id_ mod = alterScheduledQueryChange
    ;

alterScheduledQueryChange
    : scheduleSpec
    | executedAsSpec
    | enableSpecification
    | definedAsSpec
    | KW_EXECUTE
    ;

// drop scheduled query ...
dropScheduledQueryStatement
    : KW_DROP KW_SCHEDULED KW_QUERY name = id_
    ;

// drop view ...
dropViewStatement
    : KW_DROP KW_VIEW ifExists? viewName
    ;

viewName
    : (db = id_ DOT)? view = id_
    ;

// drop materialized view ...
dropMaterializedViewStatement
    : KW_DROP KW_MATERIALIZED KW_VIEW ifExists? viewName
    ;

createFunctionStatement
    : KW_CREATE temp = KW_TEMPORARY? KW_FUNCTION functionIdentifier KW_AS StringLiteral (
        KW_USING rList = resourceList
    )?
    ;

resourceList
    : resource (COMMA resource)*
    ;

resource
    : resType = resourceType resPath = StringLiteral
    ;

resourceType
    : KW_JAR
    | KW_DLL
    | KW_FILE
    | KW_ARCHIVE
    ;

// create tempoary macro ...
createMacroStatement
    : KW_CREATE KW_TEMPORARY KW_MACRO Identifier LPAREN columnNameTypeList? RPAREN expression
    ;

// 这里原本想着像PG那样再弄一个create prcedure ...的，不过

// drop function ...
dropFunctionStatement
    : KW_DROP temp = KW_TEMPORARY? KW_FUNCTION ifExists? functionIdentifier
    ;

// reload function
reloadFunctionsStatement
    : KW_RELOAD (KW_FUNCTIONS | KW_FUNCTION)
    ;

// drop temporary macro ...
dropMacroStatement
    : KW_DROP KW_TEMPORARY KW_MACRO ifExists? Identifier
    ;

// analyze table ...
analyzeStatement
    : KW_ANALYZE KW_TABLE parttype = tableOrPartition (
        KW_COMPUTE KW_STATISTICS (
            noscan = KW_NOSCAN
            | KW_FOR KW_COLUMNS statsColumnName = columnNameList?
        )?
        | KW_CACHE KW_METADATA
    )
    ;

// lock table ...
lockStatement
    : KW_LOCK KW_TABLE tableName partitionSpec? lockMode
    ;

lockMode
    : KW_SHARED
    | KW_EXCLUSIVE
    ;

// unlock table ...
unlockStatement
    : KW_UNLOCK KW_TABLE tableName partitionSpec?
    ;

// lock database ...
lockDatabase
    : KW_LOCK db_schema dbName = id_ lockMode
    ;

// unlock database ...
unlockDatabase
    : KW_UNLOCK db_schema dbName = id_
    ;

// create role ...
createRoleStatement
    : KW_CREATE KW_ROLE roleName = id_
    ;

// drop role ...
dropRoleStatement
    : KW_DROP KW_ROLE roleName = id_
    ;

// grant ... to ...
grantPrivileges
    : KW_GRANT privList = privilegeList privilegeObject? KW_TO principalSpecification withGrantOption?
    ;

privilegeList
    : privlegeDef (COMMA privlegeDef)*
    ;

privlegeDef
    : privilegeType (LPAREN cols = columnNameList RPAREN)?
    ;

privilegeType
    : KW_ALL
    | KW_ALTER
    | KW_UPDATE
    | KW_CREATE
    | KW_DROP
    | KW_LOCK
    | KW_SELECT
    | KW_SHOW_DATABASE
    | KW_INSERT
    | KW_DELETE
    ;

privilegeObject
    : KW_ON privObject
    ;

privObject
    : db_schema id_
    | KW_TABLE? tableName partitionSpec?
    | KW_URI path = StringLiteral
    | KW_SERVER id_
    ;

principalSpecification
    : principalName (COMMA principalName)*
    ;

withGrantOption
    : KW_WITH KW_GRANT KW_OPTION
    ;

// revoke ... from ...
revokePrivileges
    : KW_REVOKE grantOptionFor? privilegeList privilegeObject? KW_FROM principalSpecification
    ;

grantOptionFor
    : KW_GRANT KW_OPTION KW_FOR
    ;

// show grant ...
showGrants
    : KW_SHOW KW_GRANT principalName? (KW_ON privilegeIncludeColObject)?
    ;

privilegeIncludeColObject
    : KW_ALL
    | privObjectCols
    ;

privObjectCols
    : db_schema id_
    | KW_TABLE? tableName (LPAREN cols = columnNameList RPAREN)? partitionSpec?
    | KW_URI path = StringLiteral
    | KW_SERVER id_
    ;

// show role grant ...
showRoleGrants
    : KW_SHOW KW_ROLE KW_GRANT principalName
    ;

// show principals ...
showRolePrincipals
    : KW_SHOW KW_PRINCIPALS roleName = id_
    ;

// show roles
showRoles
    : KW_SHOW KW_ROLES
    ;

// grant role ... to ...
grantRole
    : KW_GRANT KW_ROLE? id_ (COMMA id_)* KW_TO principalSpecification withAdminOption?
    ;

withAdminOption
    : KW_WITH KW_ADMIN KW_OPTION
    ;

// revoke role ... from ...
revokeRole
    : KW_REVOKE adminOptionFor? KW_ROLE? id_ (COMMA id_)* KW_FROM principalSpecification
    ;

adminOptionFor
    : KW_ADMIN KW_OPTION KW_FOR
    ;

// set role ...
setRole
    : KW_SET KW_ROLE (all = KW_ALL | none = KW_NONE | id_)
    ;

// show current roles ...
showCurrentRole
    : KW_SHOW KW_CURRENT KW_ROLES
    ;

// abort transactions ...
abortTransactionStatement
    : KW_ABORT KW_TRANSACTIONS Number+
    ;

// abort compactions ...
abortCompactionStatement
    : KW_ABORT KW_COMPACTIONS Number+
    ;

// kill query ...
killQueryStatement
    : KW_KILL KW_QUERY StringLiteral+
    ;

// resource plans, triggers, pools, mappings
resourcePlanDdlStatements
    : createResourcePlanStatement
    | alterResourcePlanStatement
    | dropResourcePlanStatement
    | globalWmStatement
    | alterWmStatement
    | replaceResourcePlanStatement
    | createTriggerStatement
    | alterTriggerStatement
    | dropTriggerStatement
    | createPoolStatement
    | alterPoolStatement
    | dropPoolStatement
    | createMappingStatement
    | alterMappingStatement
    | dropMappingStatement
    ;

// create resource plan ...
createResourcePlanStatement
    : KW_CREATE KW_RESOURCE KW_PLAN ifNotExists? (
        name = id_ KW_LIKE likeName = id_
        | name = id_ (KW_WITH rpAssignList)?
    )
    ;

rpAssignList
    : rpAssign (COMMA rpAssign)*
    ;

rpAssign
    : KW_QUERY_PARALLELISM EQUAL parallelism = Number
    | KW_DEFAULT KW_POOL EQUAL poolPath
    ;

poolPath
    : id_ (DOT id_)*
    ;

// alter resource plan ...
alterResourcePlanStatement
    : KW_ALTER KW_RESOURCE KW_PLAN name = id_ (
        KW_VALIDATE
        | KW_DISABLE
        | KW_SET rpAssignList
        | KW_UNSET rpUnassignList
        | KW_RENAME KW_TO newName = id_
        | activate enable?
        | enable activate?
    )
    ;

rpUnassignList
    : rpUnassign (COMMA rpUnassign)*
    ;

rpUnassign
    : KW_QUERY_PARALLELISM
    | KW_DEFAULT KW_POOL
    ;

activate
    : KW_ACTIVATE withReplace?
    ;

withReplace
    : KW_WITH KW_REPLACE
    ;

enable
    : KW_ENABLE
    ;

// drop resource plan ...
dropResourcePlanStatement
    : KW_DROP KW_RESOURCE KW_PLAN ifExists? name = id_
    ;

/** It might make sense to make this more generic, if something else could be enabled/disabled.
    For now, it's only used for WM. Translate into another form of an alter statement. */
globalWmStatement
    : (KW_ENABLE | KW_DISABLE) KW_WORKLOAD KW_MANAGEMENT
    ;

// 丹霞：这里把以上语句的alter形式补充一下，同时保留上述语句以维持HiveSQL兼容性
// 改写成alter workload management enable/disable
alterWmStatement
    : KW_ALTER KW_WORKLOAD KW_MANAGEMENT enableSpecification
    ;

// replace resource plan ...
replaceResourcePlanStatement
    : KW_REPLACE (
        KW_ACTIVE KW_RESOURCE KW_PLAN KW_WITH src = id_
        | KW_RESOURCE KW_PLAN dest = id_ KW_WITH src = id_
    )
    ;

// create trigger ...
createTriggerStatement
    : KW_CREATE KW_TRIGGER rpName = id_ DOT triggerName = id_ KW_WHEN triggerExpression KW_DO triggerActionExpression
    ;

triggerExpression
    : triggerAtomExpression
    ;

triggerAtomExpression
    : id_ comparisionOperator triggerLiteral
    ;

comparisionOperator
    : GREATERTHAN
    ;

triggerLiteral
    : Number
    | StringLiteral
    ;

triggerActionExpression
    : KW_KILL
    | KW_MOVE KW_TO poolPath
    ;

// alter trigger ...
alterTriggerStatement
    : KW_ALTER KW_TRIGGER rpName = id_ DOT triggerName = id_ (
        KW_WHEN triggerExpression KW_DO triggerActionExpression
        | (KW_ADD KW_TO | KW_DROP KW_FROM) (KW_POOL poolName = poolPath | KW_UNMANAGED)
    )
    ;

// drop trigger ...
dropTriggerStatement
    : KW_DROP KW_TRIGGER rpName = id_ DOT triggerName = id_
    ;

// create pool ...
createPoolStatement
    : KW_CREATE KW_POOL rpName = id_ DOT poolPath KW_WITH poolAssignList
    ;

poolAssignList
    : poolAssign (COMMA poolAssign)*
    ;

poolAssign
    : (
        KW_ALLOC_FRACTION EQUAL allocFraction = Number
        | KW_QUERY_PARALLELISM EQUAL parallelism = Number
        | KW_SCHEDULING_POLICY EQUAL policy = StringLiteral
        | KW_PATH EQUAL path = poolPath
    )
    ;

// alter pool ...
alterPoolStatement
    : KW_ALTER KW_POOL rpName = id_ DOT poolPath (
        KW_SET poolAssignList
        | KW_UNSET KW_SCHEDULING_POLICY
        | (KW_ADD | KW_DROP) KW_TRIGGER triggerName = id_
    )
    ;

// drop pool ...
dropPoolStatement
    : KW_DROP KW_POOL rpName = id_ DOT poolPath
    ;

// create mapping ...
createMappingStatement
    : KW_CREATE mappingType = (KW_USER | KW_GROUP | KW_APPLICATION) KW_MAPPING name = StringLiteral KW_IN rpName = id_ (
        KW_TO path = poolPath
        | unmanaged
    ) (KW_WITH KW_ORDER order = Number)?
    ;

unmanaged
    : KW_UNMANAGED
    ;

// alter mapping ...
alterMappingStatement
    : KW_ALTER mappingType = (KW_USER | KW_GROUP | KW_APPLICATION) KW_MAPPING name = StringLiteral KW_IN rpName = id_ (
        KW_TO path = poolPath
        | unmanaged
    ) (KW_WITH KW_ORDER order = Number)?
    ;

// drop mappinbg ...
dropMappingStatement
    : KW_DROP mappingType = (KW_USER | KW_GROUP | KW_APPLICATION) KW_MAPPING name = StringLiteral KW_IN rpName = id_
    ;

// create data connector ...
createDataConnectorStatement
    : KW_CREATE KW_DATACONNECTOR ifNotExists? name = id_ dataConnectorType dataConnectorUrl dataConnectorComment? (
        KW_WITH KW_DCPROPERTIES dcprops = dcProperties
    )?
    ;

dataConnectorType
    : KW_TYPE dcType = StringLiteral
    ;

dataConnectorUrl
    : KW_URL url = StringLiteral
    ;

dataConnectorComment
    : KW_COMMENT comment = StringLiteral
    ;

// drop data connector ...
dropDataConnectorStatement
    : KW_DROP KW_DATACONNECTOR ifExists? id_
    ;

// ---------------------------------------------------------------------------- //

// delete from ...
deleteStatement
    : KW_DELETE KW_FROM tableName whereClause?
    ;

// update ... set ... values ...
updateStatement
    : KW_UPDATE tableName setColumnsClause whereClause?
    ;

setColumnsClause
    : KW_SET columnAssignmentClause (COMMA columnAssignmentClause)*
    ;

columnAssignmentClause
    : tableOrColumn EQUAL precedencePlusExpressionOrDefault
    ;

precedencePlusExpressionOrDefault
    : defaultValue
    | precedencePlusExpression
    ;

// ------------------------------- TRANSACTIONS ------------------------------- //

sqlTransactionStatement
    : startTransactionStatement
    | commitStatement
    | rollbackStatement
    | setAutoCommitStatement
    ;

// start transaction ...
startTransactionStatement
    : KW_START KW_TRANSACTION (transactionMode (COMMA transactionMode)*)?
    ;

transactionMode
    : isolationLevel
    | transactionAccessMode
    ;

isolationLevel
    : KW_ISOLATION KW_LEVEL levelOfIsolation
    ;

levelOfIsolation
    : KW_SNAPSHOT
    ;

transactionAccessMode
    : KW_READ (KW_ONLY | KW_WRITE)
    ;

// commit
commitStatement
    : KW_COMMIT KW_WORK?
    ;

// rollback
rollbackStatement
    : KW_ROLLBACK KW_WORK?
    ;

// set autocommit true/false
setAutoCommitStatement
    : KW_SET KW_AUTOCOMMIT booleanValueTok
    ;

booleanValueTok
    : KW_TRUE
    | KW_FALSE
    ;

// ---------------------------------------------------------------------------- //

// merge into ... using ... on ...
mergeStatement
    : KW_MERGE QUERY_HINT? KW_INTO tableName (KW_AS? id_)? KW_USING joinSourcePart KW_ON expression whenClauses
    ;

/*
    Allow 0,1 or 2 WHEN MATCHED clauses and 0 or 1 WHEN NOT MATCHED
    Each WHEN clause may have AND <boolean predicate>.
    If 2 WHEN MATCHED clauses are present, 1 must be UPDATE the other DELETE and the 1st one
    must have AND <boolean predicate>
*/
whenClauses
    : (whenMatchedAndClause | whenMatchedThenClause)* whenNotMatchedClause?
    ;

whenMatchedAndClause
    : KW_WHEN KW_MATCHED KW_AND expression KW_THEN updateOrDelete
    ;

updateOrDelete
    : KW_UPDATE setColumnsClause
    | KW_DELETE
    ;

whenMatchedThenClause
    : KW_WHEN KW_MATCHED KW_THEN updateOrDelete
    ;

whenNotMatchedClause
    : KW_WHEN KW_NOT KW_MATCHED (KW_AND expression)? KW_THEN KW_INSERT targetCols = columnParenthesesList? KW_VALUES valueRowConstructor
    ;

valueRowConstructor
    : expressionsInParenthesis
    ;

// prepare ... from ...
prepareStatement
    : KW_PREPARE id_ KW_FROM queryStatementExpression
    ;

// execute ... using ...
executeStatement
    : KW_EXECUTE id_ KW_USING executeParamList
    ;

executeParamList
    : constant (COMMA constant)*
    ;