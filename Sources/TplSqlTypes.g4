// 这个文件用于存放TplSql的原生数据类型

parser grammar TplSqlTypes;

options
{
    tokenVocab = TplSqlLexer;
}

tplsqlPrimitiveType
    // 整数类型
    : KW_TINYINT
    | KW_SMALLINT
    | KW_INT
    | KW_BIGINT
    | KW_INFTYINT
    // 布尔类型
    | KW_BOOLEAN
    // 浮点类型
    | KW_FP4
    | KW_FP6E2M3
    | KW_FP6E3M2
    | KW_FP8E4M3
    | KW_FP8E5M2
    | KW_FP16
    | KW_BFP16
    | KW_TF19
    | KW_FLOAT
    | KW_REAL
    | (KW_DOUBLE KW_PRECISION? | KW_FP64)
    | KW_FP80
    | KW_FP128
    | KW_INFTYFLOAT (LPAREN (exponent = Number COMMA)? mantissa = Number RPAREN)?
    // 时间类型
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
    | KW_STRING
    | (KW_VARCHAR | KW_CHAR) LPAREN length = Number RPAREN
    // 原始数据
    | KW_BINARY
    // 十进制浮点
    | KW_DECIMAL32
    | KW_DECIMAL64
    | KW_DECIMAL
    | KW_INFTYDECIMAL (LPAREN scaleof32 = Number RPAREN)? // IEEE754标准中无限精度十进制浮点强制对齐到32位的整数倍
    // 六十进制类型
    | KW_SEXAGESIMAL
    ;