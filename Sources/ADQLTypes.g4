// 这个文件用于存放ADQL的原生数据类型

parser grammar ADQLTypes;

options
{
    tokenVocab = ADQLLexer;
}

adqlPrimitiveType
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