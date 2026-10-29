
// Generated from ./ADQLParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  ADQLParser : public antlr4::Parser {
public:
  enum {
    KW_TOP = 1, KW_NATURAL = 2, KW_DECIMAL = 3, StringLiteral = 4, KW_ABORT = 5, 
    KW_ACTIVATE = 6, KW_ACTIVE = 7, KW_ADD = 8, KW_ADMIN = 9, KW_AFTER = 10, 
    KW_ALL = 11, KW_ALLOC_FRACTION = 12, KW_ALTER = 13, KW_ANALYZE = 14, 
    KW_AND = 15, KW_ANTI = 16, KW_ANY = 17, KW_APPLICATION = 18, KW_ARCHIVE = 19, 
    KW_ARRAY = 20, KW_AS = 21, KW_ASC = 22, KW_AST = 23, KW_AT = 24, KW_AUTHORIZATION = 25, 
    KW_AUTOCOMMIT = 26, KW_BATCH = 27, KW_BEFORE = 28, KW_BETWEEN = 29, 
    KW_BIGINT = 30, KW_BINARY = 31, KW_BOOLEAN = 32, KW_BOTH = 33, KW_BUCKET = 34, 
    KW_BUCKETS = 35, KW_BY = 36, KW_CACHE = 37, KW_CASCADE = 38, KW_CASE = 39, 
    KW_CAST = 40, KW_CBO = 41, KW_CHANGE = 42, KW_CHAR = 43, KW_CHECK = 44, 
    KW_CLUSTER = 45, KW_CLUSTERED = 46, KW_CLUSTERSTATUS = 47, KW_COLLECTION = 48, 
    KW_COLUMN = 49, KW_COLUMNS = 50, KW_COMMENT = 51, KW_COMMIT = 52, KW_COMPACT = 53, 
    KW_COMPACTIONS = 54, KW_COMPACT_ID = 55, KW_COMPUTE = 56, KW_CONCATENATE = 57, 
    KW_CONF = 58, KW_CONSTRAINT = 59, KW_CONTINUE = 60, KW_COST = 61, KW_CREATE = 62, 
    KW_CRON = 63, KW_CROSS = 64, KW_CUBE = 65, KW_CURRENT = 66, KW_CURRENT_DATE = 67, 
    KW_CURRENT_TIMESTAMP = 68, KW_CURSOR = 69, KW_DATA = 70, KW_DATABASE = 71, 
    KW_DATABASES = 72, KW_DATACONNECTOR = 73, KW_DATACONNECTORS = 74, KW_DATE = 75, 
    KW_DATETIME = 76, KW_DAY = 77, KW_DAYOFWEEK = 78, KW_DBPROPERTIES = 79, 
    KW_DCPROPERTIES = 80, KW_DDL = 81, KW_DEBUG = 82, KW_DEFAULT = 83, KW_DEFERRED = 84, 
    KW_DEFINED = 85, KW_DELETE = 86, KW_DELIMITED = 87, KW_DEPENDENCY = 88, 
    KW_DESC = 89, KW_DESCRIBE = 90, KW_DETAIL = 91, KW_DIRECTORIES = 92, 
    KW_DIRECTORY = 93, KW_DISABLE = 94, KW_DISTINCT = 95, KW_DISTRIBUTE = 96, 
    KW_DISTRIBUTED = 97, KW_DO = 98, KW_DOUBLE = 99, KW_DOW = 100, KW_DROP = 101, 
    KW_DUMP = 102, KW_ELEM_TYPE = 103, KW_ELSE = 104, KW_ENABLE = 105, KW_END = 106, 
    KW_ENFORCED = 107, KW_ESCAPED = 108, KW_EVERY = 109, KW_EXCEPT = 110, 
    KW_EXCHANGE = 111, KW_EXCLUSIVE = 112, KW_EXECUTE = 113, KW_EXECUTED = 114, 
    KW_EXISTS = 115, KW_EXPIRE_SNAPSHOTS = 116, KW_EXPLAIN = 117, KW_EXPORT = 118, 
    KW_EXPRESSION = 119, KW_EXTENDED = 120, KW_EXTERNAL = 121, KW_EXTRACT = 122, 
    KW_FALSE = 123, KW_FETCH = 124, KW_FIELDS = 125, KW_FILE = 126, KW_FILEFORMAT = 127, 
    KW_FIRST = 128, KW_FLOAT = 129, KW_FLOOR = 130, KW_FOLLOWING = 131, 
    KW_FOR = 132, KW_FORCE = 133, KW_FOREIGN = 134, KW_FORMAT = 135, KW_FORMATTED = 136, 
    KW_FROM = 137, KW_FULL = 138, KW_FUNCTION = 139, KW_FUNCTIONS = 140, 
    KW_GRANT = 141, KW_GROUP = 142, KW_GROUPING = 143, KW_HAVING = 144, 
    KW_HOLD_DDLTIME = 145, KW_HOUR = 146, KW_IDXPROPERTIES = 147, KW_IF = 148, 
    KW_IGNORE = 149, KW_IMPORT = 150, KW_IN = 151, KW_INDEX = 152, KW_INDEXES = 153, 
    KW_INNER = 154, KW_INPATH = 155, KW_INPUTDRIVER = 156, KW_INPUTFORMAT = 157, 
    KW_INSERT = 158, KW_INT = 159, KW_INTERSECT = 160, KW_INTERVAL = 161, 
    KW_INTO = 162, KW_IS = 163, KW_ISOLATION = 164, KW_ITEMS = 165, KW_JAR = 166, 
    KW_JOIN = 167, KW_JOINCOST = 168, KW_KEY = 169, KW_KEYS = 170, KW_KEY_TYPE = 171, 
    KW_KILL = 172, KW_LAST = 173, KW_LATERAL = 174, KW_LEADING = 175, KW_LEFT = 176, 
    KW_LESS = 177, KW_LEVEL = 178, KW_LIKE = 179, KW_LIMIT = 180, KW_LINES = 181, 
    KW_LOAD = 182, KW_LOCAL = 183, KW_LOCATION = 184, KW_LOCK = 185, KW_LOCKS = 186, 
    KW_LOGICAL = 187, KW_LONG = 188, KW_MACRO = 189, KW_MANAGED = 190, KW_MANAGEDLOCATION = 191, 
    KW_MANAGEMENT = 192, KW_MAP = 193, KW_MAPJOIN = 194, KW_MAPPING = 195, 
    KW_MATCHED = 196, KW_MATERIALIZED = 197, KW_MERGE = 198, KW_METADATA = 199, 
    KW_MINUS = 200, KW_MINUTE = 201, KW_MONTH = 202, KW_MORE = 203, KW_MOVE = 204, 
    KW_MSCK = 205, KW_NONE = 206, KW_NORELY = 207, KW_NOSCAN = 208, KW_NOT = 209, 
    KW_NOVALIDATE = 210, KW_NO_DROP = 211, KW_NULL = 212, KW_NULLS = 213, 
    KW_OF = 214, KW_OFFLINE = 215, KW_OFFSET = 216, KW_ON = 217, KW_ONLY = 218, 
    KW_OPERATOR = 219, KW_OPTION = 220, KW_OR = 221, KW_ORDER = 222, KW_OUT = 223, 
    KW_OUTER = 224, KW_OUTPUTDRIVER = 225, KW_OUTPUTFORMAT = 226, KW_OVER = 227, 
    KW_OVERWRITE = 228, KW_OWNER = 229, KW_PARTITION = 230, KW_PARTITIONED = 231, 
    KW_PARTITIONS = 232, KW_PATH = 233, KW_PERCENT = 234, KW_PKFK_JOIN = 235, 
    KW_PLAN = 236, KW_PLANS = 237, KW_PLUS = 238, KW_POOL = 239, KW_PRECEDING = 240, 
    KW_PRECISION = 241, KW_PREPARE = 242, KW_PRESERVE = 243, KW_PRIMARY = 244, 
    KW_PRINCIPALS = 245, KW_PROCEDURE = 246, KW_PROTECTION = 247, KW_PURGE = 248, 
    KW_QUALIFY = 249, KW_QUARTER = 250, KW_QUERY = 251, KW_QUERY_PARALLELISM = 252, 
    KW_RANGE = 253, KW_READ = 254, KW_READONLY = 255, KW_READS = 256, KW_REAL = 257, 
    KW_REBUILD = 258, KW_RECORDREADER = 259, KW_RECORDWRITER = 260, KW_REDUCE = 261, 
    KW_REFERENCES = 262, KW_REGEXP = 263, KW_RELOAD = 264, KW_RELY = 265, 
    KW_REMOTE = 266, KW_RENAME = 267, KW_REOPTIMIZATION = 268, KW_REPAIR = 269, 
    KW_REPL = 270, KW_REPLACE = 271, KW_REPLICATION = 272, KW_RESOURCE = 273, 
    KW_RESPECT = 274, KW_RESTRICT = 275, KW_REVOKE = 276, KW_REWRITE = 277, 
    KW_RIGHT = 278, KW_RLIKE = 279, KW_ROLE = 280, KW_ROLES = 281, KW_ROLLBACK = 282, 
    KW_ROLLUP = 283, KW_ROW = 284, KW_ROWS = 285, KW_SCHEDULED = 286, KW_SCHEDULING_POLICY = 287, 
    KW_SCHEMA = 288, KW_SCHEMAS = 289, KW_SECOND = 290, KW_SELECT = 291, 
    KW_SEMI = 292, KW_SERDE = 293, KW_SERDEPROPERTIES = 294, KW_SERVER = 295, 
    KW_SET = 296, KW_SETS = 297, KW_SET_CURRENT_SNAPSHOT = 298, KW_SHARED = 299, 
    KW_SHOW = 300, KW_SHOW_DATABASE = 301, KW_SKEWED = 302, KW_SMALLINT = 303, 
    KW_SNAPSHOT = 304, KW_SOME = 305, KW_SORT = 306, KW_SORTED = 307, KW_SPEC = 308, 
    KW_SSL = 309, KW_START = 310, KW_STATISTICS = 311, KW_STATUS = 312, 
    KW_STORED = 313, KW_STREAMTABLE = 314, KW_STRING = 315, KW_STRUCT = 316, 
    KW_SUMMARY = 317, KW_SYNC = 318, KW_SYSTEM_TIME = 319, KW_SYSTEM_VERSION = 320, 
    KW_TABLE = 321, KW_TABLES = 322, KW_TABLESAMPLE = 323, KW_TBLPROPERTIES = 324, 
    KW_TEMPORARY = 325, KW_TERMINATED = 326, KW_THEN = 327, KW_TIME = 328, 
    KW_TIMESTAMP = 329, KW_TIMESTAMPLOCALTZ = 330, KW_TIMESTAMPTZ = 331, 
    KW_TINYINT = 332, KW_TO = 333, KW_TOUCH = 334, KW_TRAILING = 335, KW_TRANSACTION = 336, 
    KW_TRANSACTIONAL = 337, KW_TRANSACTIONS = 338, KW_TRANSFORM = 339, KW_TRIGGER = 340, 
    KW_TRIM = 341, KW_TRUE = 342, KW_TRUNCATE = 343, KW_TYPE = 344, KW_UNARCHIVE = 345, 
    KW_UNBOUNDED = 346, KW_UNDO = 347, KW_UNION = 348, KW_UNIONTYPE = 349, 
    KW_UNIQUE = 350, KW_UNIQUEJOIN = 351, KW_UNKNOWN = 352, KW_UNLOCK = 353, 
    KW_UNMANAGED = 354, KW_UNSET = 355, KW_UNSIGNED = 356, KW_UPDATE = 357, 
    KW_URI = 358, KW_URL = 359, KW_USE = 360, KW_USER = 361, KW_USING = 362, 
    KW_UTC = 363, KW_UTCTIMESTAMP = 364, KW_VALIDATE = 365, KW_VALUES = 366, 
    KW_VALUE_TYPE = 367, KW_VARCHAR = 368, KW_VECTORIZATION = 369, KW_VIEW = 370, 
    KW_VIEWS = 371, KW_WAIT = 372, KW_WEEK = 373, KW_WHEN = 374, KW_WHERE = 375, 
    KW_WHILE = 376, KW_WINDOW = 377, KW_WITH = 378, KW_WITHIN = 379, KW_WORK = 380, 
    KW_WORKLOAD = 381, KW_WRITE = 382, KW_YEAR = 383, KW_ZONE = 384, DOT = 385, 
    COLON = 386, COMMA = 387, SEMICOLON = 388, LPAREN = 389, RPAREN = 390, 
    LSQUARE = 391, RSQUARE = 392, LCURLY = 393, RCURLY = 394, EQUAL = 395, 
    EQUAL_NS = 396, NOTEQUAL = 397, LESSTHANOREQUALTO = 398, LESSTHAN = 399, 
    GREATERTHANOREQUALTO = 400, GREATERTHAN = 401, DIVIDE = 402, PLUS = 403, 
    MINUS = 404, STAR = 405, MOD = 406, DIV = 407, AMPERSAND = 408, TILDE = 409, 
    BITWISEOR = 410, CONCATENATE = 411, BITWISEXOR = 412, QUESTION = 413, 
    DOLLAR = 414, CharSetLiteral = 415, IntegralLiteral = 416, NumberLiteral = 417, 
    ByteLengthLiteral = 418, Number = 419, Identifier = 420, CharSetName = 421, 
    WHITE_SPACE = 422, LINE_COMMENT = 423, QUERY_HINT = 424, SHOW_HINT = 425, 
    HIDDEN_HINT = 426
  };

  enum {
    RuleAdql = 0, RuleQueryStatementExpression = 1, RuleWithClause = 2, 
    RuleCteStatement = 3, RuleId_ = 4, RuleQueryStatementExpressionBody = 5, 
    RuleRegularBody = 6, RuleSelectStatement = 7, RuleAtomSelectStatement = 8, 
    RuleSelectClause = 9, RuleAll_distinct = 10, RuleSet_limit = 11, RuleSelectList = 12, 
    RuleSelectItem = 13, RuleTableAllColumns = 14, RuleTableName = 15, RuleExpression = 16, 
    RulePrecedenceOrExpression = 17, RulePrecedenceAndExpression = 18, RulePrecedenceNotExpression = 19, 
    RulePrecedenceNotOperator = 20, RulePrecedenceUnarySuffixExpression = 21, 
    RulePrecedenceEqualExpression = 22, RulePrecedenceSimilarExpression = 23, 
    RulePrecedenceSimilarExpressionMain = 24, RulePrecedenceBitwiseOrExpression = 25, 
    RulePrecedenceAmpersandExpression = 26, RulePrecedenceConcatenateExpression = 27, 
    RulePrecedencePlusExpression = 28, RulePrecedenceStarExpression = 29, 
    RulePrecedenceBitwiseXorExpression = 30, RulePrecedenceUnaryPrefixExpression = 31, 
    RulePrecedenceUnaryOperator = 32, RulePrecedenceFieldExpression = 33, 
    RuleAtomExpression = 34, RuleConstant = 35, RuleIntervalLiteral = 36, 
    RuleIntervalValue = 37, RuleIntervalQualifiers = 38, RuleDateLiteral = 39, 
    RuleTimestampLiteral = 40, RuleTimestampLocalTZLiteral = 41, RuleStringLiteralSequence = 42, 
    RuleCharSetStringLiteral = 43, RuleBooleanValue = 44, RulePrepareStmtParam = 45, 
    RuleParameterIdx = 46, RuleIntervalExpression = 47, RuleCastExpression = 48, 
    RuleExtractExpression = 49, RuleTimeQualifiers = 50, RuleFloorExpression = 51, 
    RuleFloorDateQualifiers = 52, RuleCaseExpression = 53, RuleWhenExpression = 54, 
    RuleSubQueryExpression = 55, RuleFunction_ = 56, RuleTrimFunction = 57, 
    RuleFunctionName = 58, RuleFunctionIdentifier = 59, RuleSql11ReservedKeywordsUsedAsFunctionName = 60, 
    RuleSelectExpression = 61, RuleOrderByClause = 62, RuleColumnRefOrder = 63, 
    RuleOrderSpecificationRewrite = 64, RuleNullOrdering = 65, RuleNull_treatment = 66, 
    RuleWindow_specification = 67, RulePartitioningSpec = 68, RulePartitionByClause = 69, 
    RuleExpressions = 70, RuleExpressionsInParenthesis = 71, RuleExpressionsNotInParenthesis = 72, 
    RuleExpressionOrDefault = 73, RuleDefaultValue = 74, RuleExpressionPart = 75, 
    RuleDistributeByClause = 76, RuleSortByClause = 77, RuleColumnRefOrderInParenthesis = 78, 
    RuleColumnRefOrderNotInParenthesis = 79, RuleClusterByClause = 80, RuleWindow_frame = 81, 
    RuleWindow_range_expression = 82, RuleWindow_frame_start_boundary = 83, 
    RuleWindow_frame_boundary = 84, RuleWindow_value_expression = 85, RuleTableOrColumn = 86, 
    RulePrecedenceBitwiseXorOperator = 87, RulePrecedenceStarOperator = 88, 
    RulePrecedencePlusOperator = 89, RulePrecedenceConcatenateOperator = 90, 
    RulePrecedenceAmpersandOperator = 91, RulePrecedenceBitwiseOrOperator = 92, 
    RulePrecedenceSimilarExpressionPart = 93, RulePrecedenceSimilarOperator = 94, 
    RulePrecedenceRegexpOperator = 95, RulePrecedenceSimilarExpressionAtom = 96, 
    RulePrecedenceSimilarExpressionQuantifierPredicate = 97, RuleSubQuerySelectorOperator = 98, 
    RuleQuantifierType = 99, RulePrecedenceSimilarExpressionPartNot = 100, 
    RulePrecedenceSimilarExpressionIn = 101, RulePrecedenceEqualOperator = 102, 
    RulePrecedenceDistinctOperator = 103, RuleIsCondition = 104, RulePrecedenceAndOperator = 105, 
    RulePrecedenceOrOperator = 106, RuleFromClause = 107, RuleFromSource = 108, 
    RuleJoinSource = 109, RuleAtomjoinSource = 110, RuleTableSource = 111, 
    RuleSubQuerySource = 112, RuleJoinToken = 113, RuleJoinSourcePart = 114, 
    RuleColumnParenthesesList = 115, RuleColumnNameList = 116, RuleColumnName = 117, 
    RuleWhereClause = 118, RuleSearchCondition = 119, RuleGroupByClause = 120, 
    RuleGroupby_expression = 121, RuleRollupOldSyntax = 122, RuleGroupByEmpty = 123, 
    RuleHavingClause = 124, RuleHavingCondition = 125, RuleWindow_clause = 126, 
    RuleWindow_defn = 127, RuleSetOpSelectStatement = 128, RuleSetOperator = 129, 
    RuleLimitClause = 130, RuleNonReserved = 131, RuleAdqlPrimitiveType = 132
  };

  explicit ADQLParser(antlr4::TokenStream *input);

  ADQLParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~ADQLParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class AdqlContext;
  class QueryStatementExpressionContext;
  class WithClauseContext;
  class CteStatementContext;
  class Id_Context;
  class QueryStatementExpressionBodyContext;
  class RegularBodyContext;
  class SelectStatementContext;
  class AtomSelectStatementContext;
  class SelectClauseContext;
  class All_distinctContext;
  class Set_limitContext;
  class SelectListContext;
  class SelectItemContext;
  class TableAllColumnsContext;
  class TableNameContext;
  class ExpressionContext;
  class PrecedenceOrExpressionContext;
  class PrecedenceAndExpressionContext;
  class PrecedenceNotExpressionContext;
  class PrecedenceNotOperatorContext;
  class PrecedenceUnarySuffixExpressionContext;
  class PrecedenceEqualExpressionContext;
  class PrecedenceSimilarExpressionContext;
  class PrecedenceSimilarExpressionMainContext;
  class PrecedenceBitwiseOrExpressionContext;
  class PrecedenceAmpersandExpressionContext;
  class PrecedenceConcatenateExpressionContext;
  class PrecedencePlusExpressionContext;
  class PrecedenceStarExpressionContext;
  class PrecedenceBitwiseXorExpressionContext;
  class PrecedenceUnaryPrefixExpressionContext;
  class PrecedenceUnaryOperatorContext;
  class PrecedenceFieldExpressionContext;
  class AtomExpressionContext;
  class ConstantContext;
  class IntervalLiteralContext;
  class IntervalValueContext;
  class IntervalQualifiersContext;
  class DateLiteralContext;
  class TimestampLiteralContext;
  class TimestampLocalTZLiteralContext;
  class StringLiteralSequenceContext;
  class CharSetStringLiteralContext;
  class BooleanValueContext;
  class PrepareStmtParamContext;
  class ParameterIdxContext;
  class IntervalExpressionContext;
  class CastExpressionContext;
  class ExtractExpressionContext;
  class TimeQualifiersContext;
  class FloorExpressionContext;
  class FloorDateQualifiersContext;
  class CaseExpressionContext;
  class WhenExpressionContext;
  class SubQueryExpressionContext;
  class Function_Context;
  class TrimFunctionContext;
  class FunctionNameContext;
  class FunctionIdentifierContext;
  class Sql11ReservedKeywordsUsedAsFunctionNameContext;
  class SelectExpressionContext;
  class OrderByClauseContext;
  class ColumnRefOrderContext;
  class OrderSpecificationRewriteContext;
  class NullOrderingContext;
  class Null_treatmentContext;
  class Window_specificationContext;
  class PartitioningSpecContext;
  class PartitionByClauseContext;
  class ExpressionsContext;
  class ExpressionsInParenthesisContext;
  class ExpressionsNotInParenthesisContext;
  class ExpressionOrDefaultContext;
  class DefaultValueContext;
  class ExpressionPartContext;
  class DistributeByClauseContext;
  class SortByClauseContext;
  class ColumnRefOrderInParenthesisContext;
  class ColumnRefOrderNotInParenthesisContext;
  class ClusterByClauseContext;
  class Window_frameContext;
  class Window_range_expressionContext;
  class Window_frame_start_boundaryContext;
  class Window_frame_boundaryContext;
  class Window_value_expressionContext;
  class TableOrColumnContext;
  class PrecedenceBitwiseXorOperatorContext;
  class PrecedenceStarOperatorContext;
  class PrecedencePlusOperatorContext;
  class PrecedenceConcatenateOperatorContext;
  class PrecedenceAmpersandOperatorContext;
  class PrecedenceBitwiseOrOperatorContext;
  class PrecedenceSimilarExpressionPartContext;
  class PrecedenceSimilarOperatorContext;
  class PrecedenceRegexpOperatorContext;
  class PrecedenceSimilarExpressionAtomContext;
  class PrecedenceSimilarExpressionQuantifierPredicateContext;
  class SubQuerySelectorOperatorContext;
  class QuantifierTypeContext;
  class PrecedenceSimilarExpressionPartNotContext;
  class PrecedenceSimilarExpressionInContext;
  class PrecedenceEqualOperatorContext;
  class PrecedenceDistinctOperatorContext;
  class IsConditionContext;
  class PrecedenceAndOperatorContext;
  class PrecedenceOrOperatorContext;
  class FromClauseContext;
  class FromSourceContext;
  class JoinSourceContext;
  class AtomjoinSourceContext;
  class TableSourceContext;
  class SubQuerySourceContext;
  class JoinTokenContext;
  class JoinSourcePartContext;
  class ColumnParenthesesListContext;
  class ColumnNameListContext;
  class ColumnNameContext;
  class WhereClauseContext;
  class SearchConditionContext;
  class GroupByClauseContext;
  class Groupby_expressionContext;
  class RollupOldSyntaxContext;
  class GroupByEmptyContext;
  class HavingClauseContext;
  class HavingConditionContext;
  class Window_clauseContext;
  class Window_defnContext;
  class SetOpSelectStatementContext;
  class SetOperatorContext;
  class LimitClauseContext;
  class NonReservedContext;
  class AdqlPrimitiveTypeContext; 

  class  AdqlContext : public antlr4::ParserRuleContext {
  public:
    AdqlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QueryStatementExpressionContext *queryStatementExpression();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AdqlContext* adql();

  class  QueryStatementExpressionContext : public antlr4::ParserRuleContext {
  public:
    ADQLParser::WithClauseContext *w = nullptr;
    QueryStatementExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QueryStatementExpressionBodyContext *queryStatementExpressionBody();
    WithClauseContext *withClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QueryStatementExpressionContext* queryStatementExpression();

  class  WithClauseContext : public antlr4::ParserRuleContext {
  public:
    WithClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_WITH();
    std::vector<CteStatementContext *> cteStatement();
    CteStatementContext* cteStatement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WithClauseContext* withClause();

  class  CteStatementContext : public antlr4::ParserRuleContext {
  public:
    CteStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    antlr4::tree::TerminalNode *KW_AS();
    antlr4::tree::TerminalNode *LPAREN();
    QueryStatementExpressionBodyContext *queryStatementExpressionBody();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CteStatementContext* cteStatement();

  class  Id_Context : public antlr4::ParserRuleContext {
  public:
    Id_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    NonReservedContext *nonReserved();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Id_Context* id_();

  class  QueryStatementExpressionBodyContext : public antlr4::ParserRuleContext {
  public:
    QueryStatementExpressionBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RegularBodyContext *regularBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QueryStatementExpressionBodyContext* queryStatementExpressionBody();

  class  RegularBodyContext : public antlr4::ParserRuleContext {
  public:
    RegularBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SelectStatementContext *selectStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RegularBodyContext* regularBody();

  class  SelectStatementContext : public antlr4::ParserRuleContext {
  public:
    ADQLParser::AtomSelectStatementContext *a = nullptr;
    ADQLParser::SetOpSelectStatementContext *set = nullptr;
    ADQLParser::OrderByClauseContext *o = nullptr;
    ADQLParser::ClusterByClauseContext *c = nullptr;
    ADQLParser::LimitClauseContext *l = nullptr;
    SelectStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AtomSelectStatementContext *atomSelectStatement();
    SetOpSelectStatementContext *setOpSelectStatement();
    OrderByClauseContext *orderByClause();
    ClusterByClauseContext *clusterByClause();
    LimitClauseContext *limitClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectStatementContext* selectStatement();

  class  AtomSelectStatementContext : public antlr4::ParserRuleContext {
  public:
    ADQLParser::SelectClauseContext *s = nullptr;
    ADQLParser::FromClauseContext *f = nullptr;
    ADQLParser::WhereClauseContext *w = nullptr;
    ADQLParser::GroupByClauseContext *g = nullptr;
    ADQLParser::HavingClauseContext *h = nullptr;
    ADQLParser::Window_clauseContext *win = nullptr;
    AtomSelectStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SelectClauseContext *selectClause();
    FromClauseContext *fromClause();
    WhereClauseContext *whereClause();
    GroupByClauseContext *groupByClause();
    HavingClauseContext *havingClause();
    Window_clauseContext *window_clause();
    antlr4::tree::TerminalNode *LPAREN();
    SelectStatementContext *selectStatement();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AtomSelectStatementContext* atomSelectStatement();

  class  SelectClauseContext : public antlr4::ParserRuleContext {
  public:
    SelectClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_SELECT();
    SelectListContext *selectList();
    antlr4::tree::TerminalNode *QUERY_HINT();
    All_distinctContext *all_distinct();
    Set_limitContext *set_limit();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectClauseContext* selectClause();

  class  All_distinctContext : public antlr4::ParserRuleContext {
  public:
    All_distinctContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_ALL();
    antlr4::tree::TerminalNode *KW_DISTINCT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  All_distinctContext* all_distinct();

  class  Set_limitContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *num = nullptr;
    Set_limitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_TOP();
    antlr4::tree::TerminalNode *Number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Set_limitContext* set_limit();

  class  SelectListContext : public antlr4::ParserRuleContext {
  public:
    SelectListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SelectItemContext *> selectItem();
    SelectItemContext* selectItem(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectListContext* selectList();

  class  SelectItemContext : public antlr4::ParserRuleContext {
  public:
    SelectItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableAllColumnsContext *tableAllColumns();
    ExpressionContext *expression();
    Id_Context *id_();
    antlr4::tree::TerminalNode *KW_AS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectItemContext* selectItem();

  class  TableAllColumnsContext : public antlr4::ParserRuleContext {
  public:
    TableAllColumnsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STAR();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableAllColumnsContext* tableAllColumns();

  class  TableNameContext : public antlr4::ParserRuleContext {
  public:
    ADQLParser::Id_Context *db = nullptr;
    ADQLParser::Id_Context *tab = nullptr;
    TableNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableNameContext* tableName();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrecedenceOrExpressionContext *precedenceOrExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class  PrecedenceOrExpressionContext : public antlr4::ParserRuleContext {
  public:
    PrecedenceOrExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PrecedenceAndExpressionContext *> precedenceAndExpression();
    PrecedenceAndExpressionContext* precedenceAndExpression(size_t i);
    std::vector<PrecedenceOrOperatorContext *> precedenceOrOperator();
    PrecedenceOrOperatorContext* precedenceOrOperator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrecedenceOrExpressionContext* precedenceOrExpression();

  class  PrecedenceAndExpressionContext : public antlr4::ParserRuleContext {
  public:
    PrecedenceAndExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PrecedenceNotExpressionContext *> precedenceNotExpression();
    PrecedenceNotExpressionContext* precedenceNotExpression(size_t i);
    std::vector<PrecedenceAndOperatorContext *> precedenceAndOperator();
    PrecedenceAndOperatorContext* precedenceAndOperator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrecedenceAndExpressionContext* precedenceAndExpression();

  class  PrecedenceNotExpressionContext : public antlr4::ParserRuleContext {
  public:
    PrecedenceNotExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrecedenceUnarySuffixExpressionContext *precedenceUnarySuffixExpression();
    std::vector<PrecedenceNotOperatorContext *> precedenceNotOperator();
    PrecedenceNotOperatorContext* precedenceNotOperator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrecedenceNotExpressionContext* precedenceNotExpression();

  class  PrecedenceNotOperatorContext : public antlr4::ParserRuleContext {
  public:
    PrecedenceNotOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrecedenceNotOperatorContext* precedenceNotOperator();

  class  PrecedenceUnarySuffixExpressionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *a = nullptr;
    PrecedenceUnarySuffixExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrecedenceEqualExpressionContext *precedenceEqualExpression();
    IsConditionContext *isCondition();
    antlr4::tree::TerminalNode *KW_IS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrecedenceUnarySuffixExpressionContext* precedenceUnarySuffixExpression();

  class  PrecedenceEqualExpressionContext : public antlr4::ParserRuleContext {
  public:
    ADQLParser::PrecedenceEqualOperatorContext *precedenceEqualOperatorContext = nullptr;
    std::vector<PrecedenceEqualOperatorContext *> equal;
    ADQLParser::PrecedenceSimilarExpressionContext *precedenceSimilarExpressionContext = nullptr;
    std::vector<PrecedenceSimilarExpressionContext *> p;
    ADQLParser::PrecedenceDistinctOperatorContext *precedenceDistinctOperatorContext = nullptr;
    std::vector<PrecedenceDistinctOperatorContext *> dist;
    PrecedenceEqualExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PrecedenceSimilarExpressionContext *> precedenceSimilarExpression();
    PrecedenceSimilarExpressionContext* precedenceSimilarExpression(size_t i);
    std::vector<PrecedenceEqualOperatorContext *> precedenceEqualOperator();
    PrecedenceEqualOperatorContext* precedenceEqualOperator(size_t i);
    std::vector<PrecedenceDistinctOperatorContext *> precedenceDistinctOperator();
    PrecedenceDistinctOperatorContext* precedenceDistinctOperator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrecedenceEqualExpressionContext* precedenceEqualExpression();

  class  PrecedenceSimilarExpressionContext : public antlr4::ParserRuleContext {
  public:
    PrecedenceSimilarExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrecedenceSimilarExpressionMainContext *precedenceSimilarExpressionMain();
    antlr4::tree::TerminalNode *KW_EXISTS();
    SubQueryExpressionContext *subQueryExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrecedenceSimilarExpressionContext* precedenceSimilarExpression();

  class  PrecedenceSimilarExpressionMainContext : public antlr4::ParserRuleContext {
  public:
    ADQLParser::PrecedenceBitwiseOrExpressionContext *a = nullptr;
    ADQLParser::PrecedenceSimilarExpressionPartContext *part = nullptr;
    PrecedenceSimilarExpressionMainContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrecedenceBitwiseOrExpressionContext *precedenceBitwiseOrExpression();
    PrecedenceSimilarExpressionPartContext *precedenceSimilarExpressionPart();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrecedenceSimilarExpressionMainContext* precedenceSimilarExpressionMain();

  class  PrecedenceBitwiseOrExpressionContext : public antlr4::ParserRuleContext {
  public:
    PrecedenceBitwiseOrExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PrecedenceAmpersandExpressionContext *> precedenceAmpersandExpression();
    PrecedenceAmpersandExpressionContext* precedenceAmpersandExpression(size_t i);
    std::vector<PrecedenceBitwiseOrOperatorContext *> precedenceBitwiseOrOperator();
    PrecedenceBitwiseOrOperatorContext* precedenceBitwiseOrOperator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrecedenceBitwiseOrExpressionContext* precedenceBitwiseOrExpression();

  class  PrecedenceAmpersandExpressionContext : public antlr4::ParserRuleContext {
  public:
    PrecedenceAmpersandExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PrecedenceConcatenateExpressionContext *> precedenceConcatenateExpression();
    PrecedenceConcatenateExpressionContext* precedenceConcatenateExpression(size_t i);
    std::vector<PrecedenceAmpersandOperatorContext *> precedenceAmpersandOperator();
    PrecedenceAmpersandOperatorContext* precedenceAmpersandOperator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrecedenceAmpersandExpressionContext* precedenceAmpersandExpression();

  class  PrecedenceConcatenateExpressionContext : public antlr4::ParserRuleContext {
  public:
    ADQLParser::PrecedencePlusExpressionContext *plus = nullptr;
    PrecedenceConcatenateExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PrecedencePlusExpressionContext *> precedencePlusExpression();
    PrecedencePlusExpressionContext* precedencePlusExpression(size_t i);
    std::vector<PrecedenceConcatenateOperatorContext *> precedenceConcatenateOperator();
    PrecedenceConcatenateOperatorContext* precedenceConcatenateOperator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrecedenceConcatenateExpressionContext* precedenceConcatenateExpression();

  class  PrecedencePlusExpressionContext : public antlr4::ParserRuleContext {
  public:
    PrecedencePlusExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PrecedenceStarExpressionContext *> precedenceStarExpression();
    PrecedenceStarExpressionContext* precedenceStarExpression(size_t i);
    std::vector<PrecedencePlusOperatorContext *> precedencePlusOperator();
    PrecedencePlusOperatorContext* precedencePlusOperator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrecedencePlusExpressionContext* precedencePlusExpression();

  class  PrecedenceStarExpressionContext : public antlr4::ParserRuleContext {
  public:
    PrecedenceStarExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PrecedenceBitwiseXorExpressionContext *> precedenceBitwiseXorExpression();
    PrecedenceBitwiseXorExpressionContext* precedenceBitwiseXorExpression(size_t i);
    std::vector<PrecedenceStarOperatorContext *> precedenceStarOperator();
    PrecedenceStarOperatorContext* precedenceStarOperator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrecedenceStarExpressionContext* precedenceStarExpression();

  class  PrecedenceBitwiseXorExpressionContext : public antlr4::ParserRuleContext {
  public:
    PrecedenceBitwiseXorExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PrecedenceUnaryPrefixExpressionContext *> precedenceUnaryPrefixExpression();
    PrecedenceUnaryPrefixExpressionContext* precedenceUnaryPrefixExpression(size_t i);
    std::vector<PrecedenceBitwiseXorOperatorContext *> precedenceBitwiseXorOperator();
    PrecedenceBitwiseXorOperatorContext* precedenceBitwiseXorOperator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrecedenceBitwiseXorExpressionContext* precedenceBitwiseXorExpression();

  class  PrecedenceUnaryPrefixExpressionContext : public antlr4::ParserRuleContext {
  public:
    PrecedenceUnaryPrefixExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrecedenceFieldExpressionContext *precedenceFieldExpression();
    std::vector<PrecedenceUnaryOperatorContext *> precedenceUnaryOperator();
    PrecedenceUnaryOperatorContext* precedenceUnaryOperator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrecedenceUnaryPrefixExpressionContext* precedenceUnaryPrefixExpression();

  class  PrecedenceUnaryOperatorContext : public antlr4::ParserRuleContext {
  public:
    PrecedenceUnaryOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *TILDE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrecedenceUnaryOperatorContext* precedenceUnaryOperator();

  class  PrecedenceFieldExpressionContext : public antlr4::ParserRuleContext {
  public:
    PrecedenceFieldExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AtomExpressionContext *atomExpression();
    std::vector<antlr4::tree::TerminalNode *> LSQUARE();
    antlr4::tree::TerminalNode* LSQUARE(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RSQUARE();
    antlr4::tree::TerminalNode* RSQUARE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrecedenceFieldExpressionContext* precedenceFieldExpression();

  class  AtomExpressionContext : public antlr4::ParserRuleContext {
  public:
    AtomExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantContext *constant();
    IntervalExpressionContext *intervalExpression();
    CastExpressionContext *castExpression();
    ExtractExpressionContext *extractExpression();
    FloorExpressionContext *floorExpression();
    CaseExpressionContext *caseExpression();
    WhenExpressionContext *whenExpression();
    SubQueryExpressionContext *subQueryExpression();
    Function_Context *function_();
    TableOrColumnContext *tableOrColumn();
    ExpressionsInParenthesisContext *expressionsInParenthesis();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AtomExpressionContext* atomExpression();

  class  ConstantContext : public antlr4::ParserRuleContext {
  public:
    ConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntervalLiteralContext *intervalLiteral();
    antlr4::tree::TerminalNode *Number();
    DateLiteralContext *dateLiteral();
    TimestampLiteralContext *timestampLiteral();
    TimestampLocalTZLiteralContext *timestampLocalTZLiteral();
    antlr4::tree::TerminalNode *StringLiteral();
    StringLiteralSequenceContext *stringLiteralSequence();
    antlr4::tree::TerminalNode *IntegralLiteral();
    antlr4::tree::TerminalNode *NumberLiteral();
    CharSetStringLiteralContext *charSetStringLiteral();
    BooleanValueContext *booleanValue();
    antlr4::tree::TerminalNode *KW_NULL();
    PrepareStmtParamContext *prepareStmtParam();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantContext* constant();

  class  IntervalLiteralContext : public antlr4::ParserRuleContext {
  public:
    ADQLParser::IntervalValueContext *value = nullptr;
    ADQLParser::IntervalQualifiersContext *qualifiers = nullptr;
    IntervalLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntervalValueContext *intervalValue();
    IntervalQualifiersContext *intervalQualifiers();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntervalLiteralContext* intervalLiteral();

  class  IntervalValueContext : public antlr4::ParserRuleContext {
  public:
    IntervalValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *Number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntervalValueContext* intervalValue();

  class  IntervalQualifiersContext : public antlr4::ParserRuleContext {
  public:
    IntervalQualifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_YEAR();
    antlr4::tree::TerminalNode *KW_TO();
    antlr4::tree::TerminalNode *KW_MONTH();
    antlr4::tree::TerminalNode *KW_DAY();
    antlr4::tree::TerminalNode *KW_SECOND();
    antlr4::tree::TerminalNode *KW_HOUR();
    antlr4::tree::TerminalNode *KW_MINUTE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntervalQualifiersContext* intervalQualifiers();

  class  DateLiteralContext : public antlr4::ParserRuleContext {
  public:
    DateLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_DATE();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *KW_CURRENT_DATE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DateLiteralContext* dateLiteral();

  class  TimestampLiteralContext : public antlr4::ParserRuleContext {
  public:
    TimestampLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_TIMESTAMP();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *KW_CURRENT_TIMESTAMP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TimestampLiteralContext* timestampLiteral();

  class  TimestampLocalTZLiteralContext : public antlr4::ParserRuleContext {
  public:
    TimestampLocalTZLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_TIMESTAMPLOCALTZ();
    antlr4::tree::TerminalNode *StringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TimestampLocalTZLiteralContext* timestampLocalTZLiteral();

  class  StringLiteralSequenceContext : public antlr4::ParserRuleContext {
  public:
    StringLiteralSequenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> StringLiteral();
    antlr4::tree::TerminalNode* StringLiteral(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringLiteralSequenceContext* stringLiteralSequence();

  class  CharSetStringLiteralContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *csName = nullptr;
    antlr4::Token *csLiteral = nullptr;
    CharSetStringLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CharSetName();
    antlr4::tree::TerminalNode *CharSetLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CharSetStringLiteralContext* charSetStringLiteral();

  class  BooleanValueContext : public antlr4::ParserRuleContext {
  public:
    BooleanValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_TRUE();
    antlr4::tree::TerminalNode *KW_FALSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BooleanValueContext* booleanValue();

  class  PrepareStmtParamContext : public antlr4::ParserRuleContext {
  public:
    ADQLParser::ParameterIdxContext *p = nullptr;
    PrepareStmtParamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterIdxContext *parameterIdx();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrepareStmtParamContext* prepareStmtParam();

  class  ParameterIdxContext : public antlr4::ParserRuleContext {
  public:
    ParameterIdxContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QUESTION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterIdxContext* parameterIdx();

  class  IntervalExpressionContext : public antlr4::ParserRuleContext {
  public:
    ADQLParser::IntervalValueContext *value = nullptr;
    ADQLParser::IntervalQualifiersContext *qualifiers = nullptr;
    ADQLParser::ExpressionContext *expr = nullptr;
    IntervalExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    IntervalValueContext *intervalValue();
    IntervalQualifiersContext *intervalQualifiers();
    antlr4::tree::TerminalNode *KW_INTERVAL();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntervalExpressionContext* intervalExpression();

  class  CastExpressionContext : public antlr4::ParserRuleContext {
  public:
    ADQLParser::AdqlPrimitiveTypeContext *toType = nullptr;
    antlr4::Token *fmt = nullptr;
    CastExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_CAST();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *KW_AS();
    antlr4::tree::TerminalNode *RPAREN();
    AdqlPrimitiveTypeContext *adqlPrimitiveType();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *KW_FORMAT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CastExpressionContext* castExpression();

  class  ExtractExpressionContext : public antlr4::ParserRuleContext {
  public:
    ADQLParser::TimeQualifiersContext *timeUnit = nullptr;
    ExtractExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_EXTRACT();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *KW_FROM();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    TimeQualifiersContext *timeQualifiers();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExtractExpressionContext* extractExpression();

  class  TimeQualifiersContext : public antlr4::ParserRuleContext {
  public:
    TimeQualifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_YEAR();
    antlr4::tree::TerminalNode *KW_QUARTER();
    antlr4::tree::TerminalNode *KW_MONTH();
    antlr4::tree::TerminalNode *KW_WEEK();
    antlr4::tree::TerminalNode *KW_DAY();
    antlr4::tree::TerminalNode *KW_DOW();
    antlr4::tree::TerminalNode *KW_HOUR();
    antlr4::tree::TerminalNode *KW_MINUTE();
    antlr4::tree::TerminalNode *KW_SECOND();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TimeQualifiersContext* timeQualifiers();

  class  FloorExpressionContext : public antlr4::ParserRuleContext {
  public:
    ADQLParser::FloorDateQualifiersContext *floorUnit = nullptr;
    FloorExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_FLOOR();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *KW_TO();
    FloorDateQualifiersContext *floorDateQualifiers();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FloorExpressionContext* floorExpression();

  class  FloorDateQualifiersContext : public antlr4::ParserRuleContext {
  public:
    FloorDateQualifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_YEAR();
    antlr4::tree::TerminalNode *KW_QUARTER();
    antlr4::tree::TerminalNode *KW_MONTH();
    antlr4::tree::TerminalNode *KW_WEEK();
    antlr4::tree::TerminalNode *KW_DAY();
    antlr4::tree::TerminalNode *KW_HOUR();
    antlr4::tree::TerminalNode *KW_MINUTE();
    antlr4::tree::TerminalNode *KW_SECOND();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FloorDateQualifiersContext* floorDateQualifiers();

  class  CaseExpressionContext : public antlr4::ParserRuleContext {
  public:
    CaseExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_CASE();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *KW_END();
    std::vector<antlr4::tree::TerminalNode *> KW_WHEN();
    antlr4::tree::TerminalNode* KW_WHEN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> KW_THEN();
    antlr4::tree::TerminalNode* KW_THEN(size_t i);
    antlr4::tree::TerminalNode *KW_ELSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CaseExpressionContext* caseExpression();

  class  WhenExpressionContext : public antlr4::ParserRuleContext {
  public:
    WhenExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_CASE();
    antlr4::tree::TerminalNode *KW_END();
    std::vector<antlr4::tree::TerminalNode *> KW_WHEN();
    antlr4::tree::TerminalNode* KW_WHEN(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> KW_THEN();
    antlr4::tree::TerminalNode* KW_THEN(size_t i);
    antlr4::tree::TerminalNode *KW_ELSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhenExpressionContext* whenExpression();

  class  SubQueryExpressionContext : public antlr4::ParserRuleContext {
  public:
    SubQueryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    SelectStatementContext *selectStatement();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubQueryExpressionContext* subQueryExpression();

  class  Function_Context : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *star = nullptr;
    ADQLParser::All_distinctContext *dist = nullptr;
    antlr4::Token *within = nullptr;
    ADQLParser::OrderByClauseContext *ordBy = nullptr;
    ADQLParser::Null_treatmentContext *nt = nullptr;
    ADQLParser::Window_specificationContext *ws = nullptr;
    Function_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TrimFunctionContext *trimFunction();
    FunctionNameContext *functionName();
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);
    antlr4::tree::TerminalNode *KW_GROUP();
    antlr4::tree::TerminalNode *KW_OVER();
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *KW_WITHIN();
    OrderByClauseContext *orderByClause();
    Window_specificationContext *window_specification();
    Null_treatmentContext *null_treatment();
    std::vector<SelectExpressionContext *> selectExpression();
    SelectExpressionContext* selectExpression(size_t i);
    All_distinctContext *all_distinct();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_Context* function_();

  class  TrimFunctionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *leading = nullptr;
    antlr4::Token *trailing = nullptr;
    ADQLParser::SelectExpressionContext *trim_characters = nullptr;
    ADQLParser::SelectExpressionContext *str = nullptr;
    TrimFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_TRIM();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *KW_FROM();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<SelectExpressionContext *> selectExpression();
    SelectExpressionContext* selectExpression(size_t i);
    antlr4::tree::TerminalNode *KW_BOTH();
    antlr4::tree::TerminalNode *KW_LEADING();
    antlr4::tree::TerminalNode *KW_TRAILING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TrimFunctionContext* trimFunction();

  class  FunctionNameContext : public antlr4::ParserRuleContext {
  public:
    FunctionNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionIdentifierContext *functionIdentifier();
    Sql11ReservedKeywordsUsedAsFunctionNameContext *sql11ReservedKeywordsUsedAsFunctionName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionNameContext* functionName();

  class  FunctionIdentifierContext : public antlr4::ParserRuleContext {
  public:
    ADQLParser::Id_Context *fn = nullptr;
    FunctionIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionIdentifierContext* functionIdentifier();

  class  Sql11ReservedKeywordsUsedAsFunctionNameContext : public antlr4::ParserRuleContext {
  public:
    Sql11ReservedKeywordsUsedAsFunctionNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_ARRAY();
    antlr4::tree::TerminalNode *KW_BIGINT();
    antlr4::tree::TerminalNode *KW_BINARY();
    antlr4::tree::TerminalNode *KW_BOOLEAN();
    antlr4::tree::TerminalNode *KW_CURRENT_DATE();
    antlr4::tree::TerminalNode *KW_CURRENT_TIMESTAMP();
    antlr4::tree::TerminalNode *KW_DATE();
    antlr4::tree::TerminalNode *KW_DOUBLE();
    antlr4::tree::TerminalNode *KW_FLOAT();
    antlr4::tree::TerminalNode *KW_GROUPING();
    antlr4::tree::TerminalNode *KW_IF();
    antlr4::tree::TerminalNode *KW_INT();
    antlr4::tree::TerminalNode *KW_MAP();
    antlr4::tree::TerminalNode *KW_REAL();
    antlr4::tree::TerminalNode *KW_SMALLINT();
    antlr4::tree::TerminalNode *KW_TIMESTAMP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sql11ReservedKeywordsUsedAsFunctionNameContext* sql11ReservedKeywordsUsedAsFunctionName();

  class  SelectExpressionContext : public antlr4::ParserRuleContext {
  public:
    SelectExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableAllColumnsContext *tableAllColumns();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectExpressionContext* selectExpression();

  class  OrderByClauseContext : public antlr4::ParserRuleContext {
  public:
    OrderByClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_ORDER();
    antlr4::tree::TerminalNode *KW_BY();
    std::vector<ColumnRefOrderContext *> columnRefOrder();
    ColumnRefOrderContext* columnRefOrder(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OrderByClauseContext* orderByClause();

  class  ColumnRefOrderContext : public antlr4::ParserRuleContext {
  public:
    ADQLParser::OrderSpecificationRewriteContext *orderSpec = nullptr;
    ADQLParser::NullOrderingContext *nullSpec = nullptr;
    ColumnRefOrderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    OrderSpecificationRewriteContext *orderSpecificationRewrite();
    NullOrderingContext *nullOrdering();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnRefOrderContext* columnRefOrder();

  class  OrderSpecificationRewriteContext : public antlr4::ParserRuleContext {
  public:
    OrderSpecificationRewriteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_ASC();
    antlr4::tree::TerminalNode *KW_DESC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OrderSpecificationRewriteContext* orderSpecificationRewrite();

  class  NullOrderingContext : public antlr4::ParserRuleContext {
  public:
    NullOrderingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_NULLS();
    antlr4::tree::TerminalNode *KW_FIRST();
    antlr4::tree::TerminalNode *KW_LAST();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NullOrderingContext* nullOrdering();

  class  Null_treatmentContext : public antlr4::ParserRuleContext {
  public:
    Null_treatmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_RESPECT();
    antlr4::tree::TerminalNode *KW_NULLS();
    antlr4::tree::TerminalNode *KW_IGNORE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Null_treatmentContext* null_treatment();

  class  Window_specificationContext : public antlr4::ParserRuleContext {
  public:
    Window_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    PartitioningSpecContext *partitioningSpec();
    Window_frameContext *window_frame();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Window_specificationContext* window_specification();

  class  PartitioningSpecContext : public antlr4::ParserRuleContext {
  public:
    PartitioningSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PartitionByClauseContext *partitionByClause();
    OrderByClauseContext *orderByClause();
    DistributeByClauseContext *distributeByClause();
    SortByClauseContext *sortByClause();
    ClusterByClauseContext *clusterByClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitioningSpecContext* partitioningSpec();

  class  PartitionByClauseContext : public antlr4::ParserRuleContext {
  public:
    PartitionByClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_PARTITION();
    antlr4::tree::TerminalNode *KW_BY();
    ExpressionsContext *expressions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionByClauseContext* partitionByClause();

  class  ExpressionsContext : public antlr4::ParserRuleContext {
  public:
    ExpressionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionsInParenthesisContext *expressionsInParenthesis();
    ExpressionsNotInParenthesisContext *expressionsNotInParenthesis();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionsContext* expressions();

  class  ExpressionsInParenthesisContext : public antlr4::ParserRuleContext {
  public:
    ExpressionsInParenthesisContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionsNotInParenthesisContext *expressionsNotInParenthesis();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionsInParenthesisContext* expressionsInParenthesis();

  class  ExpressionsNotInParenthesisContext : public antlr4::ParserRuleContext {
  public:
    ADQLParser::ExpressionOrDefaultContext *first = nullptr;
    ADQLParser::ExpressionPartContext *more = nullptr;
    ExpressionsNotInParenthesisContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionOrDefaultContext *expressionOrDefault();
    ExpressionPartContext *expressionPart();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionsNotInParenthesisContext* expressionsNotInParenthesis();

  class  ExpressionOrDefaultContext : public antlr4::ParserRuleContext {
  public:
    ExpressionOrDefaultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DefaultValueContext *defaultValue();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionOrDefaultContext* expressionOrDefault();

  class  DefaultValueContext : public antlr4::ParserRuleContext {
  public:
    DefaultValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefaultValueContext* defaultValue();

  class  ExpressionPartContext : public antlr4::ParserRuleContext {
  public:
    ExpressionPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<ExpressionOrDefaultContext *> expressionOrDefault();
    ExpressionOrDefaultContext* expressionOrDefault(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionPartContext* expressionPart();

  class  DistributeByClauseContext : public antlr4::ParserRuleContext {
  public:
    DistributeByClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_DISTRIBUTE();
    antlr4::tree::TerminalNode *KW_BY();
    ExpressionsContext *expressions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DistributeByClauseContext* distributeByClause();

  class  SortByClauseContext : public antlr4::ParserRuleContext {
  public:
    SortByClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_SORT();
    antlr4::tree::TerminalNode *KW_BY();
    ColumnRefOrderInParenthesisContext *columnRefOrderInParenthesis();
    ColumnRefOrderNotInParenthesisContext *columnRefOrderNotInParenthesis();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SortByClauseContext* sortByClause();

  class  ColumnRefOrderInParenthesisContext : public antlr4::ParserRuleContext {
  public:
    ColumnRefOrderInParenthesisContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<ColumnRefOrderContext *> columnRefOrder();
    ColumnRefOrderContext* columnRefOrder(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnRefOrderInParenthesisContext* columnRefOrderInParenthesis();

  class  ColumnRefOrderNotInParenthesisContext : public antlr4::ParserRuleContext {
  public:
    ColumnRefOrderNotInParenthesisContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ColumnRefOrderContext *> columnRefOrder();
    ColumnRefOrderContext* columnRefOrder(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnRefOrderNotInParenthesisContext* columnRefOrderNotInParenthesis();

  class  ClusterByClauseContext : public antlr4::ParserRuleContext {
  public:
    ClusterByClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_CLUSTER();
    antlr4::tree::TerminalNode *KW_BY();
    ExpressionsContext *expressions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClusterByClauseContext* clusterByClause();

  class  Window_frameContext : public antlr4::ParserRuleContext {
  public:
    Window_frameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Window_range_expressionContext *window_range_expression();
    Window_value_expressionContext *window_value_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Window_frameContext* window_frame();

  class  Window_range_expressionContext : public antlr4::ParserRuleContext {
  public:
    Window_range_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_ROWS();
    Window_frame_start_boundaryContext *window_frame_start_boundary();
    antlr4::tree::TerminalNode *KW_BETWEEN();
    std::vector<Window_frame_boundaryContext *> window_frame_boundary();
    Window_frame_boundaryContext* window_frame_boundary(size_t i);
    antlr4::tree::TerminalNode *KW_AND();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Window_range_expressionContext* window_range_expression();

  class  Window_frame_start_boundaryContext : public antlr4::ParserRuleContext {
  public:
    Window_frame_start_boundaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_UNBOUNDED();
    antlr4::tree::TerminalNode *KW_PRECEDING();
    antlr4::tree::TerminalNode *KW_CURRENT();
    antlr4::tree::TerminalNode *KW_ROW();
    antlr4::tree::TerminalNode *Number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Window_frame_start_boundaryContext* window_frame_start_boundary();

  class  Window_frame_boundaryContext : public antlr4::ParserRuleContext {
  public:
    Window_frame_boundaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_UNBOUNDED();
    antlr4::tree::TerminalNode *Number();
    antlr4::tree::TerminalNode *KW_PRECEDING();
    antlr4::tree::TerminalNode *KW_FOLLOWING();
    antlr4::tree::TerminalNode *KW_CURRENT();
    antlr4::tree::TerminalNode *KW_ROW();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Window_frame_boundaryContext* window_frame_boundary();

  class  Window_value_expressionContext : public antlr4::ParserRuleContext {
  public:
    Window_value_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_RANGE();
    Window_frame_start_boundaryContext *window_frame_start_boundary();
    antlr4::tree::TerminalNode *KW_BETWEEN();
    std::vector<Window_frame_boundaryContext *> window_frame_boundary();
    Window_frame_boundaryContext* window_frame_boundary(size_t i);
    antlr4::tree::TerminalNode *KW_AND();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Window_value_expressionContext* window_value_expression();

  class  TableOrColumnContext : public antlr4::ParserRuleContext {
  public:
    TableOrColumnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableOrColumnContext* tableOrColumn();

  class  PrecedenceBitwiseXorOperatorContext : public antlr4::ParserRuleContext {
  public:
    PrecedenceBitwiseXorOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BITWISEXOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrecedenceBitwiseXorOperatorContext* precedenceBitwiseXorOperator();

  class  PrecedenceStarOperatorContext : public antlr4::ParserRuleContext {
  public:
    PrecedenceStarOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *DIVIDE();
    antlr4::tree::TerminalNode *MOD();
    antlr4::tree::TerminalNode *DIV();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrecedenceStarOperatorContext* precedenceStarOperator();

  class  PrecedencePlusOperatorContext : public antlr4::ParserRuleContext {
  public:
    PrecedencePlusOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrecedencePlusOperatorContext* precedencePlusOperator();

  class  PrecedenceConcatenateOperatorContext : public antlr4::ParserRuleContext {
  public:
    PrecedenceConcatenateOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONCATENATE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrecedenceConcatenateOperatorContext* precedenceConcatenateOperator();

  class  PrecedenceAmpersandOperatorContext : public antlr4::ParserRuleContext {
  public:
    PrecedenceAmpersandOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AMPERSAND();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrecedenceAmpersandOperatorContext* precedenceAmpersandOperator();

  class  PrecedenceBitwiseOrOperatorContext : public antlr4::ParserRuleContext {
  public:
    PrecedenceBitwiseOrOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BITWISEOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrecedenceBitwiseOrOperatorContext* precedenceBitwiseOrOperator();

  class  PrecedenceSimilarExpressionPartContext : public antlr4::ParserRuleContext {
  public:
    ADQLParser::PrecedenceBitwiseOrExpressionContext *equalExpr = nullptr;
    PrecedenceSimilarExpressionPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrecedenceSimilarOperatorContext *precedenceSimilarOperator();
    PrecedenceBitwiseOrExpressionContext *precedenceBitwiseOrExpression();
    PrecedenceSimilarExpressionAtomContext *precedenceSimilarExpressionAtom();
    antlr4::tree::TerminalNode *KW_NOT();
    PrecedenceSimilarExpressionPartNotContext *precedenceSimilarExpressionPartNot();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrecedenceSimilarExpressionPartContext* precedenceSimilarExpressionPart();

  class  PrecedenceSimilarOperatorContext : public antlr4::ParserRuleContext {
  public:
    PrecedenceSimilarOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrecedenceRegexpOperatorContext *precedenceRegexpOperator();
    antlr4::tree::TerminalNode *LESSTHANOREQUALTO();
    antlr4::tree::TerminalNode *LESSTHAN();
    antlr4::tree::TerminalNode *GREATERTHANOREQUALTO();
    antlr4::tree::TerminalNode *GREATERTHAN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrecedenceSimilarOperatorContext* precedenceSimilarOperator();

  class  PrecedenceRegexpOperatorContext : public antlr4::ParserRuleContext {
  public:
    PrecedenceRegexpOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_LIKE();
    antlr4::tree::TerminalNode *KW_RLIKE();
    antlr4::tree::TerminalNode *KW_REGEXP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrecedenceRegexpOperatorContext* precedenceRegexpOperator();

  class  PrecedenceSimilarExpressionAtomContext : public antlr4::ParserRuleContext {
  public:
    ADQLParser::PrecedenceBitwiseOrExpressionContext *min = nullptr;
    ADQLParser::PrecedenceBitwiseOrExpressionContext *max = nullptr;
    ADQLParser::ExpressionsInParenthesisContext *expr = nullptr;
    PrecedenceSimilarExpressionAtomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_IN();
    PrecedenceSimilarExpressionInContext *precedenceSimilarExpressionIn();
    antlr4::tree::TerminalNode *KW_BETWEEN();
    antlr4::tree::TerminalNode *KW_AND();
    std::vector<PrecedenceBitwiseOrExpressionContext *> precedenceBitwiseOrExpression();
    PrecedenceBitwiseOrExpressionContext* precedenceBitwiseOrExpression(size_t i);
    antlr4::tree::TerminalNode *KW_LIKE();
    antlr4::tree::TerminalNode *KW_ANY();
    antlr4::tree::TerminalNode *KW_ALL();
    ExpressionsInParenthesisContext *expressionsInParenthesis();
    PrecedenceSimilarExpressionQuantifierPredicateContext *precedenceSimilarExpressionQuantifierPredicate();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrecedenceSimilarExpressionAtomContext* precedenceSimilarExpressionAtom();

  class  PrecedenceSimilarExpressionQuantifierPredicateContext : public antlr4::ParserRuleContext {
  public:
    PrecedenceSimilarExpressionQuantifierPredicateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SubQuerySelectorOperatorContext *subQuerySelectorOperator();
    QuantifierTypeContext *quantifierType();
    SubQueryExpressionContext *subQueryExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrecedenceSimilarExpressionQuantifierPredicateContext* precedenceSimilarExpressionQuantifierPredicate();

  class  SubQuerySelectorOperatorContext : public antlr4::ParserRuleContext {
  public:
    SubQuerySelectorOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *NOTEQUAL();
    antlr4::tree::TerminalNode *LESSTHANOREQUALTO();
    antlr4::tree::TerminalNode *LESSTHAN();
    antlr4::tree::TerminalNode *GREATERTHANOREQUALTO();
    antlr4::tree::TerminalNode *GREATERTHAN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubQuerySelectorOperatorContext* subQuerySelectorOperator();

  class  QuantifierTypeContext : public antlr4::ParserRuleContext {
  public:
    QuantifierTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_ANY();
    antlr4::tree::TerminalNode *KW_SOME();
    antlr4::tree::TerminalNode *KW_ALL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QuantifierTypeContext* quantifierType();

  class  PrecedenceSimilarExpressionPartNotContext : public antlr4::ParserRuleContext {
  public:
    ADQLParser::PrecedenceBitwiseOrExpressionContext *notExpr = nullptr;
    PrecedenceSimilarExpressionPartNotContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrecedenceRegexpOperatorContext *precedenceRegexpOperator();
    PrecedenceBitwiseOrExpressionContext *precedenceBitwiseOrExpression();
    PrecedenceSimilarExpressionAtomContext *precedenceSimilarExpressionAtom();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrecedenceSimilarExpressionPartNotContext* precedenceSimilarExpressionPartNot();

  class  PrecedenceSimilarExpressionInContext : public antlr4::ParserRuleContext {
  public:
    ADQLParser::ExpressionsInParenthesisContext *expr = nullptr;
    PrecedenceSimilarExpressionInContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SubQueryExpressionContext *subQueryExpression();
    ExpressionsInParenthesisContext *expressionsInParenthesis();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrecedenceSimilarExpressionInContext* precedenceSimilarExpressionIn();

  class  PrecedenceEqualOperatorContext : public antlr4::ParserRuleContext {
  public:
    PrecedenceEqualOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *EQUAL_NS();
    antlr4::tree::TerminalNode *NOTEQUAL();
    antlr4::tree::TerminalNode *KW_IS();
    antlr4::tree::TerminalNode *KW_NOT();
    antlr4::tree::TerminalNode *KW_DISTINCT();
    antlr4::tree::TerminalNode *KW_FROM();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrecedenceEqualOperatorContext* precedenceEqualOperator();

  class  PrecedenceDistinctOperatorContext : public antlr4::ParserRuleContext {
  public:
    PrecedenceDistinctOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_IS();
    antlr4::tree::TerminalNode *KW_DISTINCT();
    antlr4::tree::TerminalNode *KW_FROM();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrecedenceDistinctOperatorContext* precedenceDistinctOperator();

  class  IsConditionContext : public antlr4::ParserRuleContext {
  public:
    IsConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_NULL();
    antlr4::tree::TerminalNode *KW_TRUE();
    antlr4::tree::TerminalNode *KW_FALSE();
    antlr4::tree::TerminalNode *KW_UNKNOWN();
    antlr4::tree::TerminalNode *KW_NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IsConditionContext* isCondition();

  class  PrecedenceAndOperatorContext : public antlr4::ParserRuleContext {
  public:
    PrecedenceAndOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_AND();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrecedenceAndOperatorContext* precedenceAndOperator();

  class  PrecedenceOrOperatorContext : public antlr4::ParserRuleContext {
  public:
    PrecedenceOrOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_OR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrecedenceOrOperatorContext* precedenceOrOperator();

  class  FromClauseContext : public antlr4::ParserRuleContext {
  public:
    FromClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_FROM();
    FromSourceContext *fromSource();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FromClauseContext* fromClause();

  class  FromSourceContext : public antlr4::ParserRuleContext {
  public:
    FromSourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    JoinSourceContext *joinSource();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FromSourceContext* fromSource();

  class  JoinSourceContext : public antlr4::ParserRuleContext {
  public:
    JoinSourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AtomjoinSourceContext *atomjoinSource();
    std::vector<JoinTokenContext *> joinToken();
    JoinTokenContext* joinToken(size_t i);
    std::vector<JoinSourcePartContext *> joinSourcePart();
    JoinSourcePartContext* joinSourcePart(size_t i);
    std::vector<antlr4::tree::TerminalNode *> KW_ON();
    antlr4::tree::TerminalNode* KW_ON(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> KW_USING();
    antlr4::tree::TerminalNode* KW_USING(size_t i);
    std::vector<ColumnParenthesesListContext *> columnParenthesesList();
    ColumnParenthesesListContext* columnParenthesesList(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JoinSourceContext* joinSource();

  class  AtomjoinSourceContext : public antlr4::ParserRuleContext {
  public:
    AtomjoinSourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableSourceContext *tableSource();
    SubQuerySourceContext *subQuerySource();
    antlr4::tree::TerminalNode *LPAREN();
    JoinSourceContext *joinSource();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AtomjoinSourceContext* atomjoinSource();

  class  TableSourceContext : public antlr4::ParserRuleContext {
  public:
    ADQLParser::TableNameContext *tabname = nullptr;
    ADQLParser::Id_Context *alias = nullptr;
    TableSourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableNameContext *tableName();
    Id_Context *id_();
    antlr4::tree::TerminalNode *KW_AS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableSourceContext* tableSource();

  class  SubQuerySourceContext : public antlr4::ParserRuleContext {
  public:
    SubQuerySourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    QueryStatementExpressionContext *queryStatementExpression();
    antlr4::tree::TerminalNode *RPAREN();
    Id_Context *id_();
    antlr4::tree::TerminalNode *KW_AS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubQuerySourceContext* subQuerySource();

  class  JoinTokenContext : public antlr4::ParserRuleContext {
  public:
    JoinTokenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *KW_JOIN();
    antlr4::tree::TerminalNode *KW_NATURAL();
    antlr4::tree::TerminalNode *KW_INNER();
    antlr4::tree::TerminalNode *KW_CROSS();
    antlr4::tree::TerminalNode *KW_LEFT();
    antlr4::tree::TerminalNode *KW_RIGHT();
    antlr4::tree::TerminalNode *KW_FULL();
    antlr4::tree::TerminalNode *KW_OUTER();
    antlr4::tree::TerminalNode *KW_SEMI();
    antlr4::tree::TerminalNode *KW_ANTI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JoinTokenContext* joinToken();

  class  JoinSourcePartContext : public antlr4::ParserRuleContext {
  public:
    JoinSourcePartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableSourceContext *tableSource();
    SubQuerySourceContext *subQuerySource();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JoinSourcePartContext* joinSourcePart();

  class  ColumnParenthesesListContext : public antlr4::ParserRuleContext {
  public:
    ColumnParenthesesListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    ColumnNameListContext *columnNameList();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnParenthesesListContext* columnParenthesesList();

  class  ColumnNameListContext : public antlr4::ParserRuleContext {
  public:
    ColumnNameListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ColumnNameContext *> columnName();
    ColumnNameContext* columnName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnNameListContext* columnNameList();

  class  ColumnNameContext : public antlr4::ParserRuleContext {
  public:
    ColumnNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnNameContext* columnName();

  class  WhereClauseContext : public antlr4::ParserRuleContext {
  public:
    WhereClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_WHERE();
    SearchConditionContext *searchCondition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhereClauseContext* whereClause();

  class  SearchConditionContext : public antlr4::ParserRuleContext {
  public:
    SearchConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SearchConditionContext* searchCondition();

  class  GroupByClauseContext : public antlr4::ParserRuleContext {
  public:
    GroupByClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_GROUP();
    antlr4::tree::TerminalNode *KW_BY();
    Groupby_expressionContext *groupby_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GroupByClauseContext* groupByClause();

  class  Groupby_expressionContext : public antlr4::ParserRuleContext {
  public:
    Groupby_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RollupOldSyntaxContext *rollupOldSyntax();
    GroupByEmptyContext *groupByEmpty();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Groupby_expressionContext* groupby_expression();

  class  RollupOldSyntaxContext : public antlr4::ParserRuleContext {
  public:
    ADQLParser::ExpressionsNotInParenthesisContext *expr = nullptr;
    RollupOldSyntaxContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionsNotInParenthesisContext *expressionsNotInParenthesis();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RollupOldSyntaxContext* rollupOldSyntax();

  class  GroupByEmptyContext : public antlr4::ParserRuleContext {
  public:
    GroupByEmptyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GroupByEmptyContext* groupByEmpty();

  class  HavingClauseContext : public antlr4::ParserRuleContext {
  public:
    HavingClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_HAVING();
    HavingConditionContext *havingCondition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HavingClauseContext* havingClause();

  class  HavingConditionContext : public antlr4::ParserRuleContext {
  public:
    HavingConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HavingConditionContext* havingCondition();

  class  Window_clauseContext : public antlr4::ParserRuleContext {
  public:
    Window_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_WINDOW();
    std::vector<Window_defnContext *> window_defn();
    Window_defnContext* window_defn(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Window_clauseContext* window_clause();

  class  Window_defnContext : public antlr4::ParserRuleContext {
  public:
    Window_defnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    antlr4::tree::TerminalNode *KW_AS();
    Window_specificationContext *window_specification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Window_defnContext* window_defn();

  class  SetOpSelectStatementContext : public antlr4::ParserRuleContext {
  public:
    ADQLParser::SetOperatorContext *u = nullptr;
    ADQLParser::AtomSelectStatementContext *b = nullptr;
    SetOpSelectStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SetOperatorContext *> setOperator();
    SetOperatorContext* setOperator(size_t i);
    std::vector<AtomSelectStatementContext *> atomSelectStatement();
    AtomSelectStatementContext* atomSelectStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetOpSelectStatementContext* setOpSelectStatement();

  class  SetOperatorContext : public antlr4::ParserRuleContext {
  public:
    SetOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_UNION();
    antlr4::tree::TerminalNode *KW_INTERSECT();
    antlr4::tree::TerminalNode *KW_EXCEPT();
    antlr4::tree::TerminalNode *KW_MINUS();
    antlr4::tree::TerminalNode *KW_ALL();
    antlr4::tree::TerminalNode *KW_DISTINCT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetOperatorContext* setOperator();

  class  LimitClauseContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *offset = nullptr;
    antlr4::Token *num = nullptr;
    LimitClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_LIMIT();
    antlr4::tree::TerminalNode *KW_OFFSET();
    std::vector<antlr4::tree::TerminalNode *> Number();
    antlr4::tree::TerminalNode* Number(size_t i);
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LimitClauseContext* limitClause();

  class  NonReservedContext : public antlr4::ParserRuleContext {
  public:
    NonReservedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_ABORT();
    antlr4::tree::TerminalNode *KW_ACTIVATE();
    antlr4::tree::TerminalNode *KW_ACTIVE();
    antlr4::tree::TerminalNode *KW_ADD();
    antlr4::tree::TerminalNode *KW_ADMIN();
    antlr4::tree::TerminalNode *KW_AFTER();
    antlr4::tree::TerminalNode *KW_ALLOC_FRACTION();
    antlr4::tree::TerminalNode *KW_ANALYZE();
    antlr4::tree::TerminalNode *KW_ARCHIVE();
    antlr4::tree::TerminalNode *KW_ASC();
    antlr4::tree::TerminalNode *KW_AST();
    antlr4::tree::TerminalNode *KW_AT();
    antlr4::tree::TerminalNode *KW_AUTOCOMMIT();
    antlr4::tree::TerminalNode *KW_BATCH();
    antlr4::tree::TerminalNode *KW_BEFORE();
    antlr4::tree::TerminalNode *KW_BUCKET();
    antlr4::tree::TerminalNode *KW_BUCKETS();
    antlr4::tree::TerminalNode *KW_CACHE();
    antlr4::tree::TerminalNode *KW_CASCADE();
    antlr4::tree::TerminalNode *KW_CBO();
    antlr4::tree::TerminalNode *KW_CHANGE();
    antlr4::tree::TerminalNode *KW_CHECK();
    antlr4::tree::TerminalNode *KW_CLUSTER();
    antlr4::tree::TerminalNode *KW_CLUSTERED();
    antlr4::tree::TerminalNode *KW_CLUSTERSTATUS();
    antlr4::tree::TerminalNode *KW_COLLECTION();
    antlr4::tree::TerminalNode *KW_COLUMNS();
    antlr4::tree::TerminalNode *KW_COMMENT();
    antlr4::tree::TerminalNode *KW_COMPACT();
    antlr4::tree::TerminalNode *KW_COMPACTIONS();
    antlr4::tree::TerminalNode *KW_COMPUTE();
    antlr4::tree::TerminalNode *KW_CONCATENATE();
    antlr4::tree::TerminalNode *KW_CONTINUE();
    antlr4::tree::TerminalNode *KW_COST();
    antlr4::tree::TerminalNode *KW_CRON();
    antlr4::tree::TerminalNode *KW_DATA();
    antlr4::tree::TerminalNode *KW_DATABASES();
    antlr4::tree::TerminalNode *KW_DATETIME();
    antlr4::tree::TerminalNode *KW_DAY();
    antlr4::tree::TerminalNode *KW_DAYOFWEEK();
    antlr4::tree::TerminalNode *KW_DBPROPERTIES();
    antlr4::tree::TerminalNode *KW_DCPROPERTIES();
    antlr4::tree::TerminalNode *KW_DEBUG();
    antlr4::tree::TerminalNode *KW_DEFAULT();
    antlr4::tree::TerminalNode *KW_DEFERRED();
    antlr4::tree::TerminalNode *KW_DEFINED();
    antlr4::tree::TerminalNode *KW_DELIMITED();
    antlr4::tree::TerminalNode *KW_DEPENDENCY();
    antlr4::tree::TerminalNode *KW_DESC();
    antlr4::tree::TerminalNode *KW_DETAIL();
    antlr4::tree::TerminalNode *KW_DIRECTORIES();
    antlr4::tree::TerminalNode *KW_DIRECTORY();
    antlr4::tree::TerminalNode *KW_DISABLE();
    antlr4::tree::TerminalNode *KW_DISTRIBUTE();
    antlr4::tree::TerminalNode *KW_DISTRIBUTED();
    antlr4::tree::TerminalNode *KW_DO();
    antlr4::tree::TerminalNode *KW_DOW();
    antlr4::tree::TerminalNode *KW_DUMP();
    antlr4::tree::TerminalNode *KW_ELEM_TYPE();
    antlr4::tree::TerminalNode *KW_ENABLE();
    antlr4::tree::TerminalNode *KW_ENFORCED();
    antlr4::tree::TerminalNode *KW_ESCAPED();
    antlr4::tree::TerminalNode *KW_EVERY();
    antlr4::tree::TerminalNode *KW_EXCLUSIVE();
    antlr4::tree::TerminalNode *KW_EXECUTE();
    antlr4::tree::TerminalNode *KW_EXECUTED();
    antlr4::tree::TerminalNode *KW_EXPIRE_SNAPSHOTS();
    antlr4::tree::TerminalNode *KW_EXPLAIN();
    antlr4::tree::TerminalNode *KW_EXPORT();
    antlr4::tree::TerminalNode *KW_EXPRESSION();
    antlr4::tree::TerminalNode *KW_FIELDS();
    antlr4::tree::TerminalNode *KW_FILE();
    antlr4::tree::TerminalNode *KW_FILEFORMAT();
    antlr4::tree::TerminalNode *KW_FIRST();
    antlr4::tree::TerminalNode *KW_FORMAT();
    antlr4::tree::TerminalNode *KW_FORMATTED();
    antlr4::tree::TerminalNode *KW_FUNCTIONS();
    antlr4::tree::TerminalNode *KW_HOLD_DDLTIME();
    antlr4::tree::TerminalNode *KW_HOUR();
    antlr4::tree::TerminalNode *KW_IDXPROPERTIES();
    antlr4::tree::TerminalNode *KW_IGNORE();
    antlr4::tree::TerminalNode *KW_INDEX();
    antlr4::tree::TerminalNode *KW_INDEXES();
    antlr4::tree::TerminalNode *KW_INPATH();
    antlr4::tree::TerminalNode *KW_INPUTDRIVER();
    antlr4::tree::TerminalNode *KW_INPUTFORMAT();
    antlr4::tree::TerminalNode *KW_ISOLATION();
    antlr4::tree::TerminalNode *KW_ITEMS();
    antlr4::tree::TerminalNode *KW_JAR();
    antlr4::tree::TerminalNode *KW_JOINCOST();
    antlr4::tree::TerminalNode *KW_KEY();
    antlr4::tree::TerminalNode *KW_KEYS();
    antlr4::tree::TerminalNode *KW_KEY_TYPE();
    antlr4::tree::TerminalNode *KW_KILL();
    antlr4::tree::TerminalNode *KW_LAST();
    antlr4::tree::TerminalNode *KW_LEVEL();
    antlr4::tree::TerminalNode *KW_LIMIT();
    antlr4::tree::TerminalNode *KW_LINES();
    antlr4::tree::TerminalNode *KW_LOAD();
    antlr4::tree::TerminalNode *KW_LOCATION();
    antlr4::tree::TerminalNode *KW_LOCK();
    antlr4::tree::TerminalNode *KW_LOCKS();
    antlr4::tree::TerminalNode *KW_LOGICAL();
    antlr4::tree::TerminalNode *KW_LONG();
    antlr4::tree::TerminalNode *KW_MANAGED();
    antlr4::tree::TerminalNode *KW_MANAGEDLOCATION();
    antlr4::tree::TerminalNode *KW_MANAGEMENT();
    antlr4::tree::TerminalNode *KW_MAPJOIN();
    antlr4::tree::TerminalNode *KW_MAPPING();
    antlr4::tree::TerminalNode *KW_MATCHED();
    antlr4::tree::TerminalNode *KW_MATERIALIZED();
    antlr4::tree::TerminalNode *KW_METADATA();
    antlr4::tree::TerminalNode *KW_MINUTE();
    antlr4::tree::TerminalNode *KW_MONTH();
    antlr4::tree::TerminalNode *KW_MOVE();
    antlr4::tree::TerminalNode *KW_MSCK();
    antlr4::tree::TerminalNode *KW_NORELY();
    antlr4::tree::TerminalNode *KW_NOSCAN();
    antlr4::tree::TerminalNode *KW_NOVALIDATE();
    antlr4::tree::TerminalNode *KW_NO_DROP();
    antlr4::tree::TerminalNode *KW_NULLS();
    antlr4::tree::TerminalNode *KW_OFFLINE();
    antlr4::tree::TerminalNode *KW_OFFSET();
    antlr4::tree::TerminalNode *KW_OPERATOR();
    antlr4::tree::TerminalNode *KW_OPTION();
    antlr4::tree::TerminalNode *KW_OUTPUTDRIVER();
    antlr4::tree::TerminalNode *KW_OUTPUTFORMAT();
    antlr4::tree::TerminalNode *KW_OVERWRITE();
    antlr4::tree::TerminalNode *KW_OWNER();
    antlr4::tree::TerminalNode *KW_PARTITIONED();
    antlr4::tree::TerminalNode *KW_PARTITIONS();
    antlr4::tree::TerminalNode *KW_PATH();
    antlr4::tree::TerminalNode *KW_PLAN();
    antlr4::tree::TerminalNode *KW_PLANS();
    antlr4::tree::TerminalNode *KW_PLUS();
    antlr4::tree::TerminalNode *KW_POOL();
    antlr4::tree::TerminalNode *KW_PRINCIPALS();
    antlr4::tree::TerminalNode *KW_PROTECTION();
    antlr4::tree::TerminalNode *KW_PURGE();
    antlr4::tree::TerminalNode *KW_QUARTER();
    antlr4::tree::TerminalNode *KW_QUERY();
    antlr4::tree::TerminalNode *KW_QUERY_PARALLELISM();
    antlr4::tree::TerminalNode *KW_READ();
    antlr4::tree::TerminalNode *KW_READONLY();
    antlr4::tree::TerminalNode *KW_REBUILD();
    antlr4::tree::TerminalNode *KW_RECORDREADER();
    antlr4::tree::TerminalNode *KW_RECORDWRITER();
    antlr4::tree::TerminalNode *KW_RELOAD();
    antlr4::tree::TerminalNode *KW_RELY();
    antlr4::tree::TerminalNode *KW_REMOTE();
    antlr4::tree::TerminalNode *KW_RENAME();
    antlr4::tree::TerminalNode *KW_REOPTIMIZATION();
    antlr4::tree::TerminalNode *KW_REPAIR();
    antlr4::tree::TerminalNode *KW_REPL();
    antlr4::tree::TerminalNode *KW_REPLACE();
    antlr4::tree::TerminalNode *KW_REPLICATION();
    antlr4::tree::TerminalNode *KW_RESOURCE();
    antlr4::tree::TerminalNode *KW_RESPECT();
    antlr4::tree::TerminalNode *KW_RESTRICT();
    antlr4::tree::TerminalNode *KW_REWRITE();
    antlr4::tree::TerminalNode *KW_ROLE();
    antlr4::tree::TerminalNode *KW_ROLES();
    antlr4::tree::TerminalNode *KW_SCHEDULED();
    antlr4::tree::TerminalNode *KW_SCHEDULING_POLICY();
    antlr4::tree::TerminalNode *KW_SCHEMA();
    antlr4::tree::TerminalNode *KW_SCHEMAS();
    antlr4::tree::TerminalNode *KW_SECOND();
    antlr4::tree::TerminalNode *KW_SEMI();
    antlr4::tree::TerminalNode *KW_SERDE();
    antlr4::tree::TerminalNode *KW_SERDEPROPERTIES();
    antlr4::tree::TerminalNode *KW_SERVER();
    antlr4::tree::TerminalNode *KW_SETS();
    antlr4::tree::TerminalNode *KW_SET_CURRENT_SNAPSHOT();
    antlr4::tree::TerminalNode *KW_SHARED();
    antlr4::tree::TerminalNode *KW_SHOW();
    antlr4::tree::TerminalNode *KW_SHOW_DATABASE();
    antlr4::tree::TerminalNode *KW_SKEWED();
    antlr4::tree::TerminalNode *KW_SNAPSHOT();
    antlr4::tree::TerminalNode *KW_SORT();
    antlr4::tree::TerminalNode *KW_SORTED();
    antlr4::tree::TerminalNode *KW_SPEC();
    antlr4::tree::TerminalNode *KW_SSL();
    antlr4::tree::TerminalNode *KW_STATISTICS();
    antlr4::tree::TerminalNode *KW_STATUS();
    antlr4::tree::TerminalNode *KW_STORED();
    antlr4::tree::TerminalNode *KW_STREAMTABLE();
    antlr4::tree::TerminalNode *KW_STRING();
    antlr4::tree::TerminalNode *KW_STRUCT();
    antlr4::tree::TerminalNode *KW_SUMMARY();
    antlr4::tree::TerminalNode *KW_SYSTEM_TIME();
    antlr4::tree::TerminalNode *KW_SYSTEM_VERSION();
    antlr4::tree::TerminalNode *KW_TABLES();
    antlr4::tree::TerminalNode *KW_TBLPROPERTIES();
    antlr4::tree::TerminalNode *KW_TEMPORARY();
    antlr4::tree::TerminalNode *KW_TERMINATED();
    antlr4::tree::TerminalNode *KW_TIMESTAMPTZ();
    antlr4::tree::TerminalNode *KW_TINYINT();
    antlr4::tree::TerminalNode *KW_TOUCH();
    antlr4::tree::TerminalNode *KW_TRANSACTION();
    antlr4::tree::TerminalNode *KW_TRANSACTIONAL();
    antlr4::tree::TerminalNode *KW_TRANSACTIONS();
    antlr4::tree::TerminalNode *KW_TRIM();
    antlr4::tree::TerminalNode *KW_TYPE();
    antlr4::tree::TerminalNode *KW_UNARCHIVE();
    antlr4::tree::TerminalNode *KW_UNDO();
    antlr4::tree::TerminalNode *KW_UNIONTYPE();
    antlr4::tree::TerminalNode *KW_UNKNOWN();
    antlr4::tree::TerminalNode *KW_UNLOCK();
    antlr4::tree::TerminalNode *KW_UNMANAGED();
    antlr4::tree::TerminalNode *KW_UNSET();
    antlr4::tree::TerminalNode *KW_UNSIGNED();
    antlr4::tree::TerminalNode *KW_URI();
    antlr4::tree::TerminalNode *KW_URL();
    antlr4::tree::TerminalNode *KW_USE();
    antlr4::tree::TerminalNode *KW_UTC();
    antlr4::tree::TerminalNode *KW_UTCTIMESTAMP();
    antlr4::tree::TerminalNode *KW_VALIDATE();
    antlr4::tree::TerminalNode *KW_VALUE_TYPE();
    antlr4::tree::TerminalNode *KW_VECTORIZATION();
    antlr4::tree::TerminalNode *KW_VIEW();
    antlr4::tree::TerminalNode *KW_VIEWS();
    antlr4::tree::TerminalNode *KW_WAIT();
    antlr4::tree::TerminalNode *KW_WEEK();
    antlr4::tree::TerminalNode *KW_WHILE();
    antlr4::tree::TerminalNode *KW_WITHIN();
    antlr4::tree::TerminalNode *KW_WORK();
    antlr4::tree::TerminalNode *KW_WORKLOAD();
    antlr4::tree::TerminalNode *KW_WRITE();
    antlr4::tree::TerminalNode *KW_YEAR();
    antlr4::tree::TerminalNode *KW_ZONE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NonReservedContext* nonReserved();

  class  AdqlPrimitiveTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *prec = nullptr;
    antlr4::Token *scale = nullptr;
    antlr4::Token *length = nullptr;
    AdqlPrimitiveTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_TINYINT();
    antlr4::tree::TerminalNode *KW_SMALLINT();
    antlr4::tree::TerminalNode *KW_INT();
    antlr4::tree::TerminalNode *KW_BIGINT();
    antlr4::tree::TerminalNode *KW_BOOLEAN();
    antlr4::tree::TerminalNode *KW_FLOAT();
    antlr4::tree::TerminalNode *KW_REAL();
    antlr4::tree::TerminalNode *KW_DOUBLE();
    antlr4::tree::TerminalNode *KW_PRECISION();
    antlr4::tree::TerminalNode *KW_DATE();
    antlr4::tree::TerminalNode *KW_DATETIME();
    antlr4::tree::TerminalNode *KW_TIMESTAMP();
    antlr4::tree::TerminalNode *KW_TIMESTAMPLOCALTZ();
    antlr4::tree::TerminalNode *KW_WITH();
    antlr4::tree::TerminalNode *KW_LOCAL();
    antlr4::tree::TerminalNode *KW_TIME();
    antlr4::tree::TerminalNode *KW_ZONE();
    antlr4::tree::TerminalNode *KW_STRING();
    antlr4::tree::TerminalNode *KW_BINARY();
    antlr4::tree::TerminalNode *KW_DECIMAL();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> Number();
    antlr4::tree::TerminalNode* Number(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *KW_VARCHAR();
    antlr4::tree::TerminalNode *KW_CHAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AdqlPrimitiveTypeContext* adqlPrimitiveType();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

