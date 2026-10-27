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

parser grammar ADQLParser;

// ADQL参考文献：https://ivoa.net/documents/ADQL/index.html
// 本语法根据IVOA提供的BNF语法和Hive的语法整理

options
{
    tokenVocab = ADQLLexer;
}

import NonReservedKeywords;

// <query_specification> ::= [ <with_clause> ] <select_expression>
queryStatementExpression
    // ADQL仅支持select语句，因此这个语法中把queryStatementExpression作为顶点，而TplSql将statement作为顶点
    : w = withClause? queryStatementExpressionBody
    ;

// <with_clause> ::= WITH <with_query> {, <with_query>} ...
withClause
    : KW_WITH cteStatement (COMMA cteStatement)*
    ;

// <with_query> := <query_name> AS (<select_expression>)
cteStatement
    // : id_ (LPAREN colAliases = columnNameList RPAREN)? KW_AS LPAREN queryStatementExpression RPAREN
    : id_ KW_AS LPAREN queryStatementExpressionBody RPAREN
    ;

// <query_name> ::= <identifier>
id_
    : Identifier
    | nonReserved
    ;

queryStatementExpressionBody
    // : fromStatement
    : regularBody
    ;

/*
    The valuesClause rule below ensures that the parse tree for
    "insert into table FOO values (1,2),(3,4)" looks the same as
    "insert into table FOO select a,b from (values(1,2),(3,4)) as BAR(a,b)" which itself is made to look
    very similar to the tree for "insert into table FOO select a,b from BAR".
*/
regularBody
    // : i = insertClause s = selectStatement
    : selectStatement
    ;

// <select_expression> ::= <query_set_expression> [ <order_by_clause> ] [ <offset_clause> ]
// <query_set_expression> ::= <query_set_term> | <query_set_expression> UNION [ ALL ] <query_set_term> | <query_set_expression> EXCEPT [ ALL ] <query_set_term>
selectStatement
    : a = atomSelectStatement set = setOpSelectStatement? o = orderByClause? c = clusterByClause? /*d = distributeByClause?*/ /*sort = sortByClause?*/ l =
        limitClause?
    ;

// <query_set_term> ::= <query_set_primary> | <query_set_term> INTERSECT [ ALL ] <query_set_expression>
// <query_set_primary> ::= <select_query> | <left_paren> <select_expression> <right_paren>
// <select_query> ::= SELECT [ <set_quantifier> ] [ <set_limit> ] <select_list> <from_clause> [ <where_clause> ] [ <group_by_clause> ] [ <having_clause> ]
atomSelectStatement
    : s = selectClause f = fromClause? w = whereClause? g = groupByClause? h = havingClause? win = window_clause? /*q = qualifyClause?*/
    | LPAREN selectStatement RPAREN
    // | valuesSource
    ;

/*
    Rules for parsing selectClause
    select a,b,c ...
*/
selectClause
    : KW_SELECT QUERY_HINT? (all_distinct? set_limit? selectList /*| KW_TRANSFORM selectTrfmClause*/)
    // | trfmClause
    ;

// <set_quantifier> ::= DISTINCT | ALL
all_distinct
    : KW_ALL
    | KW_DISTINCT
    ;

// <set_limit> ::= TOP <unsigned_decimal> （ADQL支持，TplSql不支持）
set_limit
    : KW_TOP num = Number
    ;

// <select_list> ::= <asterisk> | <select_sublist> [ { <comma> <select_sublist> }... ]
selectList
    : selectItem (COMMA selectItem)*
    ;

// <select_sublist> ::= <derived_column> | <qualifier> <period> <asterisk>
// <derived_column> ::= <value_expression> [ <as_clause> ]
// <as_clause> ::= [ AS ] <column_name>
selectItem
    : tableAllColumns
    | (expression (KW_AS? id_ /*| KW_AS LPAREN id_ (COMMA id_)* RPAREN*/)?)
    ;

tableAllColumns
    : STAR
    | tableName DOT STAR
    ;

tableName
    : db = id_ DOT tab = id_ /*(DOT meta = id_)?*/
    | tab = id_
    ;

// <value_expression> ::= NULL | <numeric_value_expression> | <string_value_expression> | <geometry_value_expression>
expression
    : precedenceOrExpression
    ;

precedenceOrExpression
    : precedenceAndExpression (precedenceOrOperator precedenceAndExpression)*
    ;

precedenceAndExpression
    : precedenceNotExpression (precedenceAndOperator precedenceNotExpression)*
    ;

precedenceNotExpression
    : precedenceNotOperator* precedenceUnarySuffixExpression
    ;

precedenceNotOperator
    : KW_NOT
    ;

precedenceUnarySuffixExpression
    : precedenceEqualExpression (a = KW_IS isCondition)?
    ;

precedenceEqualExpression
    : precedenceSimilarExpression (
        equal += precedenceEqualOperator p += precedenceSimilarExpression
        | dist += precedenceDistinctOperator p += precedenceSimilarExpression
    )*
    ;

precedenceSimilarExpression
    : precedenceSimilarExpressionMain
    | KW_EXISTS subQueryExpression
    ;

precedenceSimilarExpressionMain
    : a = precedenceBitwiseOrExpression part = precedenceSimilarExpressionPart?
    ;

precedenceBitwiseOrExpression
    : precedenceAmpersandExpression (precedenceBitwiseOrOperator precedenceAmpersandExpression)*
    ;

precedenceAmpersandExpression
    : precedenceConcatenateExpression (precedenceAmpersandOperator precedenceConcatenateExpression)*
    ;

precedenceConcatenateExpression
    : precedencePlusExpression (precedenceConcatenateOperator plus = precedencePlusExpression)*
    ;

precedencePlusExpression
    : precedenceStarExpression (precedencePlusOperator precedenceStarExpression)*
    ;

precedenceStarExpression
    : precedenceBitwiseXorExpression (precedenceStarOperator precedenceBitwiseXorExpression)*
    ;

precedenceBitwiseXorExpression
    : precedenceUnaryPrefixExpression (
        precedenceBitwiseXorOperator precedenceUnaryPrefixExpression
    )*
    ;

precedenceUnaryPrefixExpression
    : precedenceUnaryOperator* precedenceFieldExpression
    ;

precedenceUnaryOperator
    : PLUS
    | MINUS
    | TILDE
    ;

precedenceFieldExpression
    : atomExpression (LSQUARE expression RSQUARE | DOT id_)*
    ;

atomExpression
    : constant
    | intervalExpression
    | castExpression
    | extractExpression
    | floorExpression
    | caseExpression
    | whenExpression
    | subQueryExpression
    | function_
    | tableOrColumn
    | expressionsInParenthesis
    ;

constant
    : intervalLiteral
    | Number
    | dateLiteral
    | timestampLiteral
    | timestampLocalTZLiteral
    | StringLiteral
    | stringLiteralSequence
    | IntegralLiteral
    | NumberLiteral
    | charSetStringLiteral
    | booleanValue
    | KW_NULL
    | prepareStmtParam
    ;

intervalLiteral
    : value = intervalValue qualifiers = intervalQualifiers
    ;

intervalValue
    : StringLiteral
    | Number
    ;

intervalQualifiers
    : KW_YEAR KW_TO KW_MONTH
    | KW_DAY KW_TO KW_SECOND
    | KW_YEAR
    | KW_MONTH
    | KW_DAY
    | KW_HOUR
    | KW_MINUTE
    | KW_SECOND
    ;

dateLiteral
    : KW_DATE StringLiteral
    | KW_CURRENT_DATE
    ;

timestampLiteral
    : KW_TIMESTAMP StringLiteral
    | KW_CURRENT_TIMESTAMP
    ;

timestampLocalTZLiteral
    : KW_TIMESTAMPLOCALTZ StringLiteral
    ;

stringLiteralSequence
    : StringLiteral StringLiteral+
    ;

charSetStringLiteral
    : csName = CharSetName csLiteral = CharSetLiteral
    ;

booleanValue
    : KW_TRUE
    | KW_FALSE
    ;

prepareStmtParam
    : p = parameterIdx
    ;

parameterIdx // 我目前仍然没有搞清楚ADQL有没有Prepare这种概念，但最好还是加上
    : QUESTION
    ;

intervalExpression
    : LPAREN value = intervalValue RPAREN qualifiers = intervalQualifiers
    | KW_INTERVAL (value = intervalValue | LPAREN expr = expression RPAREN) qualifiers = intervalQualifiers
    ;

castExpression
    : KW_CAST LPAREN expression KW_AS toType = primitiveType (fmt = KW_FORMAT StringLiteral)? RPAREN
    ;

primitiveType
    : KW_TINYINT
    | KW_SMALLINT
    | KW_INT
    | KW_BIGINT
    | KW_BOOLEAN
    | KW_FLOAT
    | KW_REAL
    | KW_DOUBLE KW_PRECISION?
    | KW_DATE
    | KW_DATETIME
    | KW_TIMESTAMP
    | KW_TIMESTAMPLOCALTZ
    //| KW_TIMESTAMPTZ
    | KW_TIMESTAMP KW_WITH KW_LOCAL KW_TIME KW_ZONE
    //| KW_TIMESTAMP KW_WITH KW_TIME KW_ZONE
    // Uncomment to allow intervals as table column types
    //| KW_INTERVAL KW_YEAR KW_TO KW_MONTH
    //| KW_INTERVAL KW_DAY KW_TO KW_SECOND
    | KW_STRING
    | KW_BINARY
    | KW_DECIMAL (LPAREN prec = Number (COMMA scale = Number)? RPAREN)?
    | (KW_VARCHAR | KW_CHAR) LPAREN length = Number RPAREN
    ;

extractExpression
    : KW_EXTRACT LPAREN timeUnit = timeQualifiers KW_FROM expression RPAREN
    ;

timeQualifiers
    : KW_YEAR
    | KW_QUARTER
    | KW_MONTH
    | KW_WEEK
    | KW_DAY
    | KW_DOW
    | KW_HOUR
    | KW_MINUTE
    | KW_SECOND
    ;

floorExpression
    : KW_FLOOR LPAREN expression (KW_TO floorUnit = floorDateQualifiers)? RPAREN
    ;

floorDateQualifiers
    : KW_YEAR
    | KW_QUARTER
    | KW_MONTH
    | KW_WEEK
    | KW_DAY
    | KW_HOUR
    | KW_MINUTE
    | KW_SECOND
    ;

caseExpression
    : KW_CASE expression (KW_WHEN expression KW_THEN expression)+ (KW_ELSE expression)? KW_END
    ;

whenExpression
    : KW_CASE (KW_WHEN expression KW_THEN expression)+ (KW_ELSE expression)? KW_END
    ;

subQueryExpression
    : LPAREN selectStatement RPAREN
    ;

function_
    : trimFunction
    | functionName LPAREN (
        star = STAR
        | dist = all_distinct? (selectExpression (COMMA selectExpression)*)?
    ) (
        // SELECT rank(3) WITHIN GROUP (<order by clause>)
        RPAREN within = KW_WITHIN KW_GROUP LPAREN ordBy = orderByClause RPAREN
        // No null treatment: SELECT first_value(b) OVER (<window spec>)
        // Standard null treatment spec: SELECT first_value(b) IGNORE NULLS OVER (<window spec>)
        | RPAREN nt = null_treatment? KW_OVER ws = window_specification
        // Non-standard null treatment spec: SELECT first_value(b IGNORE NULLS) OVER (<window spec>)
        | nt = null_treatment RPAREN KW_OVER ws = window_specification
        | RPAREN
    )
    ;

// TRIM([LEADING|TRAILING|BOTH] trim_characters FROM str)
trimFunction
    : KW_TRIM LPAREN (leading = KW_LEADING | trailing = KW_TRAILING | KW_BOTH)? trim_characters = selectExpression? KW_FROM str = selectExpression
        RPAREN
    ;

functionName
    : functionIdentifier // Keyword IF is also a function name
    | sql11ReservedKeywordsUsedAsFunctionName
    ;

functionIdentifier
    : id_ (DOT fn = id_)?
    ;

/*
    The following SQL2011 reserved keywords are used as function name only, but not as identifiers.
*/
sql11ReservedKeywordsUsedAsFunctionName
    : KW_ARRAY
    | KW_BIGINT
    | KW_BINARY
    | KW_BOOLEAN
    | KW_CURRENT_DATE
    | KW_CURRENT_TIMESTAMP
    | KW_DATE
    | KW_DOUBLE
    | KW_FLOAT
    | KW_GROUPING
    | KW_IF
    | KW_INT
    | KW_MAP
    | KW_REAL
    | KW_SMALLINT
    | KW_TIMESTAMP
    ;

selectExpression
    : tableAllColumns
    | expression
    ;

// order by a,b
orderByClause
    : KW_ORDER KW_BY columnRefOrder (COMMA columnRefOrder)*
    ;

columnRefOrder
    : expression orderSpec = orderSpecificationRewrite? nullSpec = nullOrdering?
    ;

orderSpecificationRewrite
    : KW_ASC
    | KW_DESC
    ;

nullOrdering
    : KW_NULLS (KW_FIRST | KW_LAST)
    ;

null_treatment
    : KW_RESPECT KW_NULLS
    | KW_IGNORE KW_NULLS
    ;

window_specification
    : id_
    | LPAREN id_? partitioningSpec? window_frame? RPAREN
    ;

/*
    Rules for parsing PTF clauses
*/
partitioningSpec
    : partitionByClause orderByClause?
    | orderByClause
    | distributeByClause sortByClause?
    | sortByClause
    | clusterByClause
    ;

partitionByClause
    : KW_PARTITION KW_BY expressions
    ;

expressions
    : expressionsInParenthesis
    | expressionsNotInParenthesis
    ;

expressionsInParenthesis
    : LPAREN expressionsNotInParenthesis RPAREN
    ;

expressionsNotInParenthesis
    : first = expressionOrDefault more = expressionPart?
    ;

expressionOrDefault
    : defaultValue
    | expression
    ;

defaultValue
    : KW_DEFAULT
    ;

expressionPart
    : (COMMA expressionOrDefault)+
    ;

distributeByClause
    : KW_DISTRIBUTE KW_BY expressions
    ;

sortByClause
    : KW_SORT KW_BY (columnRefOrderInParenthesis | columnRefOrderNotInParenthesis)
    ;

columnRefOrderInParenthesis
    : LPAREN columnRefOrder (COMMA columnRefOrder)* RPAREN
    ;

columnRefOrderNotInParenthesis
    : columnRefOrder (COMMA columnRefOrder)*
    ;

clusterByClause
    : KW_CLUSTER KW_BY expressions
    ;

window_frame
    : window_range_expression
    | window_value_expression
    ;

window_range_expression
    : KW_ROWS (
        window_frame_start_boundary
        | KW_BETWEEN window_frame_boundary KW_AND window_frame_boundary
    )
    ;

window_frame_start_boundary
    : KW_UNBOUNDED KW_PRECEDING
    | KW_CURRENT KW_ROW
    | Number KW_PRECEDING
    ;

window_frame_boundary
    : (KW_UNBOUNDED | Number) (KW_PRECEDING | KW_FOLLOWING)
    | KW_CURRENT KW_ROW
    ;

window_value_expression
    : KW_RANGE (
        window_frame_start_boundary
        | KW_BETWEEN window_frame_boundary KW_AND window_frame_boundary
    )
    ;

// (table|column)
tableOrColumn
    : id_
    ;

precedenceBitwiseXorOperator
    : BITWISEXOR
    ;

precedenceStarOperator
    : STAR
    | DIVIDE
    | MOD
    | DIV
    ;

precedencePlusOperator
    : PLUS
    | MINUS
    ;

precedenceConcatenateOperator
    : CONCATENATE
    ;

precedenceAmpersandOperator
    : AMPERSAND
    ;

precedenceBitwiseOrOperator
    : BITWISEOR
    ;

precedenceSimilarExpressionPart
    : precedenceSimilarOperator equalExpr = precedenceBitwiseOrExpression
    | precedenceSimilarExpressionAtom
    | KW_NOT precedenceSimilarExpressionPartNot
    ;

precedenceSimilarOperator
    : precedenceRegexpOperator
    | LESSTHANOREQUALTO
    | LESSTHAN
    | GREATERTHANOREQUALTO
    | GREATERTHAN
    ;

precedenceRegexpOperator
    : KW_LIKE
    | KW_RLIKE
    | KW_REGEXP
    ;

precedenceSimilarExpressionAtom
    : KW_IN precedenceSimilarExpressionIn
    | KW_BETWEEN min = precedenceBitwiseOrExpression KW_AND max = precedenceBitwiseOrExpression
    | KW_LIKE (KW_ANY | KW_ALL) expr = expressionsInParenthesis
    | precedenceSimilarExpressionQuantifierPredicate
    ;

precedenceSimilarExpressionQuantifierPredicate
    : subQuerySelectorOperator quantifierType subQueryExpression
    ;

subQuerySelectorOperator
    : EQUAL
    | NOTEQUAL
    | LESSTHANOREQUALTO
    | LESSTHAN
    | GREATERTHANOREQUALTO
    | GREATERTHAN
    ;

quantifierType
    : KW_ANY
    | KW_SOME
    | KW_ALL
    ;

precedenceSimilarExpressionPartNot
    : precedenceRegexpOperator notExpr = precedenceBitwiseOrExpression
    | precedenceSimilarExpressionAtom
    ;

precedenceSimilarExpressionIn
    : subQueryExpression
    | expr = expressionsInParenthesis
    ;

precedenceEqualOperator
    : EQUAL
    | EQUAL_NS
    | NOTEQUAL
    | KW_IS KW_NOT KW_DISTINCT KW_FROM
    ;

precedenceDistinctOperator
    : KW_IS KW_DISTINCT KW_FROM
    ;

isCondition
    : KW_NULL
    | KW_TRUE
    | KW_FALSE
    | KW_UNKNOWN
    | KW_NOT KW_NULL
    | KW_NOT KW_TRUE
    | KW_NOT KW_FALSE
    | KW_NOT KW_UNKNOWN
    ;

precedenceAndOperator
    : KW_AND
    ;

precedenceOrOperator
    : KW_OR
    ;

// <from_clause> ::= FROM <table_reference> [ { <comma> <table_reference> }... ]
fromClause
    : KW_FROM fromSource
    ;

fromSource
    // : uniqueJoinToken uniqueJoinSource (COMMA uniqueJoinSource)+
    : joinSource
    ;

// <joined_table> ::= <qualified_join> | <left_paren> <joined_table> <right_paren>
// <qualified_join> ::= <table_reference> [ NATURAL ] [ <join_type> ] JOIN <table_reference> [ <join_specification> ]
// <join_specification> ::= <join_condition> | <named_columns_join>
// <join_condition> ::= ON <search_condition>
joinSource
    : atomjoinSource (
        joinToken joinSourcePart (KW_ON expression | KW_USING columnParenthesesList)?
    )*
    ;

// <query_expression> ::= <select_expression> | <joined_table>
atomjoinSource
    : tableSource /*lateralView**/
    // | virtualTableSource lateralView*
    | subQuerySource /*lateralView**/
    // | partitionedTableFunction lateralView*
    | LPAREN joinSource RPAREN
    ;

// <table_reference> ::= <table_name> [ <correlation_specification> ] | <derived_table> <correlation_specification> | <joined_table>
// <correlation_specification> ::= [ AS ] <correlation_name>
tableSource
    : tabname = tableName /*props = tableProperties?*/ /*ts = tableSample?*/ /*asOf = asOfClause?*/ (
        KW_AS? alias = id_
    )?
    ;

// <derived_table> ::= <table_subquery>
// <table_subquery> ::= <subquery>
// <subquery> ::= <left_paren> <query_expression> <right_paren>
subQuerySource
    : LPAREN queryStatementExpression RPAREN (KW_AS? id_)?
    ;

joinToken
    : COMMA
    | KW_NATURAL? (
        KW_INNER
        | KW_CROSS
        | (KW_RIGHT | KW_FULL) KW_OUTER?
        | KW_LEFT (KW_SEMI | KW_ANTI | KW_OUTER)?
    )? KW_JOIN
    ;

joinSourcePart
    : (tableSource /*| virtualTableSource*/ | subQuerySource /*| partitionedTableFunction*/) /*lateralView**/
    ;

columnParenthesesList
    : LPAREN columnNameList RPAREN
    ;

columnNameList
    : columnName (COMMA columnName)*
    ;

columnName
    : id_
    ;

// <where_clause> ::= WHERE <search_condition>
whereClause
    : KW_WHERE searchCondition
    ;

// <search_condition> ::= <boolean_term> | <search_condition> OR <boolean_term>
searchCondition
    : expression
    ;

// <group_by_clause> ::= GROUP BY <group_by_term_list>
groupByClause
    : KW_GROUP KW_BY groupby_expression
    ;

// <group_by_term_list> ::= <group_by_term> [ { <comma> <group_by_term> }... ]
groupby_expression
    // : rollupStandard
    : rollupOldSyntax
    | groupByEmpty
    ;

// old hive rollup syntax
rollupOldSyntax
    : expr = expressionsNotInParenthesis /*(rollup = KW_WITH KW_ROLLUP | cube = KW_WITH KW_CUBE)?*/ /*(
        sets = KW_GROUPING KW_SETS LPAREN groupingSetExpression (COMMA groupingSetExpression)* RPAREN
    )?*/
    ;

groupByEmpty
    : LPAREN RPAREN
    ;

// <having_clause> ::= HAVING <search_condition>
havingClause
    : KW_HAVING havingCondition
    ;

havingCondition
    : expression
    ;

/*
    Rules for windowing clauses
*/
window_clause
    : KW_WINDOW window_defn (COMMA window_defn)*
    ;

window_defn
    : id_ KW_AS window_specification
    ;

setOpSelectStatement
    : (u = setOperator b = atomSelectStatement)+
    ;

setOperator
    : (KW_UNION | KW_INTERSECT | KW_EXCEPT | KW_MINUS) (KW_ALL | KW_DISTINCT)?
    ;

limitClause
    : KW_LIMIT ((offset = Number COMMA)? num = Number | num = Number KW_OFFSET offset = Number)
    ;