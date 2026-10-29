// 这个文件用于存放ADQL的原生数据类型

parser grammar ADQLTypes;

options
{
    tokenVocab = ADQLLexer;
}

adqlPrimitiveType
    // 整数类型
    : KW_BIT
    | KW_SMALLINT
    | KW_INT
    | KW_BIGINT
    // 布尔类型
    | KW_BOOLEAN
    // 浮点类型
    | KW_FLOAT
    | KW_REAL
    | KW_DOUBLE KW_PRECISION?
    // 日期类型
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
    // 字符串类型
    | (KW_VARCHAR | KW_CHAR) (LPAREN length = Number RPAREN)?
    // 原始数据
    | KW_CLOB
    | KW_BLOB
    | (KW_BINARY | KW_VARBINARY) (LPAREN length = Number RPAREN)?
    // 几何类型
    | KW_POINT
    | KW_CIRCLE
    | KW_POLYGON
    //| KW_REGION // 这个类型官方已不再支持了
    ;