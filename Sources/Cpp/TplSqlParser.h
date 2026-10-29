
// Generated from ./TplSqlParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  TplSqlParser : public antlr4::Parser {
public:
  enum {
    KW_TOP = 1, KW_NATURAL = 2, KW_DLL = 3, KW_TINYINT = 4, KW_SMALLINT = 5, 
    KW_INT = 6, KW_BIGINT = 7, KW_INFTYINT = 8, KW_FP4 = 9, KW_FP6E2M3 = 10, 
    KW_FP6E3M2 = 11, KW_FP8E4M3 = 12, KW_FP8E5M2 = 13, KW_FP16 = 14, KW_BFP16 = 15, 
    KW_TF19 = 16, KW_FLOAT = 17, KW_FP64 = 18, KW_FP80 = 19, KW_FP128 = 20, 
    KW_INFTYFLOAT = 21, KW_DECIMAL32 = 22, KW_DECIMAL64 = 23, KW_DECIMAL = 24, 
    KW_INFTYDECIMAL = 25, KW_SEXAGESIMAL = 26, StringLiteral = 27, KW_ABORT = 28, 
    KW_ACTIVATE = 29, KW_ACTIVE = 30, KW_ADD = 31, KW_ADMIN = 32, KW_AFTER = 33, 
    KW_ALL = 34, KW_ALLOC_FRACTION = 35, KW_ALTER = 36, KW_ANALYZE = 37, 
    KW_AND = 38, KW_ANTI = 39, KW_ANY = 40, KW_APPLICATION = 41, KW_ARCHIVE = 42, 
    KW_ARRAY = 43, KW_AS = 44, KW_ASC = 45, KW_AST = 46, KW_AT = 47, KW_AUTHORIZATION = 48, 
    KW_AUTOCOMMIT = 49, KW_BATCH = 50, KW_BEFORE = 51, KW_BETWEEN = 52, 
    KW_BINARY = 53, KW_BOOLEAN = 54, KW_BOTH = 55, KW_BUCKET = 56, KW_BUCKETS = 57, 
    KW_BY = 58, KW_CACHE = 59, KW_CASCADE = 60, KW_CASE = 61, KW_CAST = 62, 
    KW_CBO = 63, KW_CHANGE = 64, KW_CHAR = 65, KW_CHECK = 66, KW_CLUSTER = 67, 
    KW_CLUSTERED = 68, KW_CLUSTERSTATUS = 69, KW_COLLECTION = 70, KW_COLUMN = 71, 
    KW_COLUMNS = 72, KW_COMMENT = 73, KW_COMMIT = 74, KW_COMPACT = 75, KW_COMPACTIONS = 76, 
    KW_COMPACT_ID = 77, KW_COMPUTE = 78, KW_CONCATENATE = 79, KW_CONF = 80, 
    KW_CONSTRAINT = 81, KW_CONTINUE = 82, KW_COST = 83, KW_CREATE = 84, 
    KW_CRON = 85, KW_CROSS = 86, KW_CUBE = 87, KW_CURRENT = 88, KW_CURRENT_DATE = 89, 
    KW_CURRENT_TIMESTAMP = 90, KW_CURSOR = 91, KW_DATA = 92, KW_DATABASE = 93, 
    KW_DATABASES = 94, KW_DATACONNECTOR = 95, KW_DATACONNECTORS = 96, KW_DATE = 97, 
    KW_DATETIME = 98, KW_DAY = 99, KW_DAYOFWEEK = 100, KW_DBPROPERTIES = 101, 
    KW_DCPROPERTIES = 102, KW_DDL = 103, KW_DEBUG = 104, KW_DEFAULT = 105, 
    KW_DEFERRED = 106, KW_DEFINED = 107, KW_DELETE = 108, KW_DELIMITED = 109, 
    KW_DEPENDENCY = 110, KW_DESC = 111, KW_DESCRIBE = 112, KW_DETAIL = 113, 
    KW_DIRECTORIES = 114, KW_DIRECTORY = 115, KW_DISABLE = 116, KW_DISTINCT = 117, 
    KW_DISTRIBUTE = 118, KW_DISTRIBUTED = 119, KW_DO = 120, KW_DOUBLE = 121, 
    KW_DOW = 122, KW_DROP = 123, KW_DUMP = 124, KW_ELEM_TYPE = 125, KW_ELSE = 126, 
    KW_ENABLE = 127, KW_END = 128, KW_ENFORCED = 129, KW_ESCAPED = 130, 
    KW_EVERY = 131, KW_EXCEPT = 132, KW_EXCHANGE = 133, KW_EXCLUSIVE = 134, 
    KW_EXECUTE = 135, KW_EXECUTED = 136, KW_EXISTS = 137, KW_EXPIRE_SNAPSHOTS = 138, 
    KW_EXPLAIN = 139, KW_EXPORT = 140, KW_EXPRESSION = 141, KW_EXTENDED = 142, 
    KW_EXTERNAL = 143, KW_EXTRACT = 144, KW_FALSE = 145, KW_FETCH = 146, 
    KW_FIELDS = 147, KW_FILE = 148, KW_FILEFORMAT = 149, KW_FIRST = 150, 
    KW_FLOOR = 151, KW_FOLLOWING = 152, KW_FOR = 153, KW_FORCE = 154, KW_FOREIGN = 155, 
    KW_FORMAT = 156, KW_FORMATTED = 157, KW_FROM = 158, KW_FULL = 159, KW_FUNCTION = 160, 
    KW_FUNCTIONS = 161, KW_GRANT = 162, KW_GROUP = 163, KW_GROUPING = 164, 
    KW_HAVING = 165, KW_HOLD_DDLTIME = 166, KW_HOUR = 167, KW_IDXPROPERTIES = 168, 
    KW_IF = 169, KW_IGNORE = 170, KW_IMPORT = 171, KW_IN = 172, KW_INDEX = 173, 
    KW_INDEXES = 174, KW_INNER = 175, KW_INPATH = 176, KW_INPUTDRIVER = 177, 
    KW_INPUTFORMAT = 178, KW_INSERT = 179, KW_INTERSECT = 180, KW_INTERVAL = 181, 
    KW_INTO = 182, KW_IS = 183, KW_ISOLATION = 184, KW_ITEMS = 185, KW_JAR = 186, 
    KW_JOIN = 187, KW_JOINCOST = 188, KW_KEY = 189, KW_KEYS = 190, KW_KEY_TYPE = 191, 
    KW_KILL = 192, KW_LAST = 193, KW_LATERAL = 194, KW_LEADING = 195, KW_LEFT = 196, 
    KW_LESS = 197, KW_LEVEL = 198, KW_LIKE = 199, KW_LIMIT = 200, KW_LINES = 201, 
    KW_LOAD = 202, KW_LOCAL = 203, KW_LOCATION = 204, KW_LOCK = 205, KW_LOCKS = 206, 
    KW_LOGICAL = 207, KW_LONG = 208, KW_MACRO = 209, KW_MANAGED = 210, KW_MANAGEDLOCATION = 211, 
    KW_MANAGEMENT = 212, KW_MAP = 213, KW_MAPJOIN = 214, KW_MAPPING = 215, 
    KW_MATCHED = 216, KW_MATERIALIZED = 217, KW_MERGE = 218, KW_METADATA = 219, 
    KW_MINUS = 220, KW_MINUTE = 221, KW_MONTH = 222, KW_MORE = 223, KW_MOVE = 224, 
    KW_MSCK = 225, KW_NONE = 226, KW_NORELY = 227, KW_NOSCAN = 228, KW_NOT = 229, 
    KW_NOVALIDATE = 230, KW_NO_DROP = 231, KW_NULL = 232, KW_NULLS = 233, 
    KW_OF = 234, KW_OFFLINE = 235, KW_OFFSET = 236, KW_ON = 237, KW_ONLY = 238, 
    KW_OPERATOR = 239, KW_OPTION = 240, KW_OR = 241, KW_ORDER = 242, KW_OUT = 243, 
    KW_OUTER = 244, KW_OUTPUTDRIVER = 245, KW_OUTPUTFORMAT = 246, KW_OVER = 247, 
    KW_OVERWRITE = 248, KW_OWNER = 249, KW_PARTITION = 250, KW_PARTITIONED = 251, 
    KW_PARTITIONS = 252, KW_PATH = 253, KW_PERCENT = 254, KW_PKFK_JOIN = 255, 
    KW_PLAN = 256, KW_PLANS = 257, KW_PLUS = 258, KW_POOL = 259, KW_PRECEDING = 260, 
    KW_PRECISION = 261, KW_PREPARE = 262, KW_PRESERVE = 263, KW_PRIMARY = 264, 
    KW_PRINCIPALS = 265, KW_PROCEDURE = 266, KW_PROTECTION = 267, KW_PURGE = 268, 
    KW_QUALIFY = 269, KW_QUARTER = 270, KW_QUERY = 271, KW_QUERY_PARALLELISM = 272, 
    KW_RANGE = 273, KW_READ = 274, KW_READONLY = 275, KW_READS = 276, KW_REAL = 277, 
    KW_REBUILD = 278, KW_RECORDREADER = 279, KW_RECORDWRITER = 280, KW_REDUCE = 281, 
    KW_REFERENCES = 282, KW_REGEXP = 283, KW_RELOAD = 284, KW_RELY = 285, 
    KW_REMOTE = 286, KW_RENAME = 287, KW_REOPTIMIZATION = 288, KW_REPAIR = 289, 
    KW_REPL = 290, KW_REPLACE = 291, KW_REPLICATION = 292, KW_RESOURCE = 293, 
    KW_RESPECT = 294, KW_RESTRICT = 295, KW_REVOKE = 296, KW_REWRITE = 297, 
    KW_RIGHT = 298, KW_RLIKE = 299, KW_ROLE = 300, KW_ROLES = 301, KW_ROLLBACK = 302, 
    KW_ROLLUP = 303, KW_ROW = 304, KW_ROWS = 305, KW_SCHEDULED = 306, KW_SCHEDULING_POLICY = 307, 
    KW_SCHEMA = 308, KW_SCHEMAS = 309, KW_SECOND = 310, KW_SELECT = 311, 
    KW_SEMI = 312, KW_SERDE = 313, KW_SERDEPROPERTIES = 314, KW_SERVER = 315, 
    KW_SET = 316, KW_SETS = 317, KW_SET_CURRENT_SNAPSHOT = 318, KW_SHARED = 319, 
    KW_SHOW = 320, KW_SHOW_DATABASE = 321, KW_SKEWED = 322, KW_SNAPSHOT = 323, 
    KW_SOME = 324, KW_SORT = 325, KW_SORTED = 326, KW_SPEC = 327, KW_SSL = 328, 
    KW_START = 329, KW_STATISTICS = 330, KW_STATUS = 331, KW_STORED = 332, 
    KW_STREAMTABLE = 333, KW_STRING = 334, KW_STRUCT = 335, KW_SUMMARY = 336, 
    KW_SYNC = 337, KW_SYSTEM_TIME = 338, KW_SYSTEM_VERSION = 339, KW_TABLE = 340, 
    KW_TABLES = 341, KW_TABLESAMPLE = 342, KW_TBLPROPERTIES = 343, KW_TEMPORARY = 344, 
    KW_TERMINATED = 345, KW_THEN = 346, KW_TIME = 347, KW_TIMESTAMP = 348, 
    KW_TIMESTAMPLOCALTZ = 349, KW_TIMESTAMPTZ = 350, KW_TO = 351, KW_TOUCH = 352, 
    KW_TRAILING = 353, KW_TRANSACTION = 354, KW_TRANSACTIONAL = 355, KW_TRANSACTIONS = 356, 
    KW_TRANSFORM = 357, KW_TRIGGER = 358, KW_TRIM = 359, KW_TRUE = 360, 
    KW_TRUNCATE = 361, KW_TYPE = 362, KW_UNARCHIVE = 363, KW_UNBOUNDED = 364, 
    KW_UNDO = 365, KW_UNION = 366, KW_UNIONTYPE = 367, KW_UNIQUE = 368, 
    KW_UNIQUEJOIN = 369, KW_UNKNOWN = 370, KW_UNLOCK = 371, KW_UNMANAGED = 372, 
    KW_UNSET = 373, KW_UNSIGNED = 374, KW_UPDATE = 375, KW_URI = 376, KW_URL = 377, 
    KW_USE = 378, KW_USER = 379, KW_USING = 380, KW_UTC = 381, KW_UTCTIMESTAMP = 382, 
    KW_VALIDATE = 383, KW_VALUES = 384, KW_VALUE_TYPE = 385, KW_VARCHAR = 386, 
    KW_VECTORIZATION = 387, KW_VIEW = 388, KW_VIEWS = 389, KW_WAIT = 390, 
    KW_WEEK = 391, KW_WHEN = 392, KW_WHERE = 393, KW_WHILE = 394, KW_WINDOW = 395, 
    KW_WITH = 396, KW_WITHIN = 397, KW_WORK = 398, KW_WORKLOAD = 399, KW_WRITE = 400, 
    KW_YEAR = 401, KW_ZONE = 402, DOT = 403, COLON = 404, COMMA = 405, SEMICOLON = 406, 
    LPAREN = 407, RPAREN = 408, LSQUARE = 409, RSQUARE = 410, LCURLY = 411, 
    RCURLY = 412, EQUAL = 413, EQUAL_NS = 414, NOTEQUAL = 415, LESSTHANOREQUALTO = 416, 
    LESSTHAN = 417, GREATERTHANOREQUALTO = 418, GREATERTHAN = 419, DIVIDE = 420, 
    PLUS = 421, MINUS = 422, STAR = 423, MOD = 424, DIV = 425, AMPERSAND = 426, 
    TILDE = 427, BITWISEOR = 428, CONCATENATE = 429, BITWISEXOR = 430, QUESTION = 431, 
    DOLLAR = 432, CharSetLiteral = 433, IntegralLiteral = 434, NumberLiteral = 435, 
    ByteLengthLiteral = 436, Number = 437, Identifier = 438, CharSetName = 439, 
    WHITE_SPACE = 440, LINE_COMMENT = 441, QUERY_HINT = 442, SHOW_HINT = 443, 
    HIDDEN_HINT = 444
  };

  enum {
    RuleTplsql = 0, RuleStatement = 1, RuleExplainStatement = 2, RuleExplainOption = 3, 
    RuleVectorizationOnly = 4, RuleVectorizatonDetail = 5, RuleExecStatement = 6, 
    RuleCteStatement = 7, RuleQueryStatementExpressionBody = 8, RuleFromStatement = 9, 
    RuleSingleFromStatement = 10, RuleFromSource = 11, RuleUniqueJoinToken = 12, 
    RuleUniqueJoinSource = 13, RuleUniqueJoinTableSource = 14, RuleUniqueJoinExpr = 15, 
    RuleExpressionList = 16, RuleBody = 17, RuleInsertClause = 18, RuleDestination = 19, 
    RuleLateralView = 20, RuleTableAlias = 21, RuleValuesClause = 22, RuleValuesTableConstructor = 23, 
    RuleFirstValueRowConstructor = 24, RuleFirstExpressionsWithAlias = 25, 
    RuleExpressionWithAlias = 26, RuleQualifyClause = 27, RuleRegularBody = 28, 
    RuleSelectStatement = 29, RuleAtomSelectStatement = 30, RuleValuesSource = 31, 
    RuleSelectClause = 32, RuleSelectTrfmClause = 33, RuleSelectExpressionList = 34, 
    RuleRowFormat = 35, RuleRecordWriter = 36, RuleAliasList = 37, RuleRecordReader = 38, 
    RuleTrfmClause = 39, RuleSelectItem = 40, RuleTableName = 41, RuleAtomjoinSource = 42, 
    RuleTableSource = 43, RuleTableSample = 44, RuleTableBucketSample = 45, 
    RuleSplitSample = 46, RuleAsOfClause = 47, RuleVirtualTableSource = 48, 
    RulePartitionedTableFunction = 49, RulePartitionTableFunctionSource = 50, 
    RuleJoinSourcePart = 51, RuleGroupby_expression = 52, RuleRollupStandard = 53, 
    RuleRollupOldSyntax = 54, RuleGroupingSetExpression = 55, RuleGroupingSetExpressionMultiple = 56, 
    RuleGroupingExpressionSingle = 57, RuleLoadStatement = 58, RuleTableOrPartition = 59, 
    RulePartitionSpec = 60, RulePartitionVal = 61, RuleInputFileFormat = 62, 
    RuleExportStatement = 63, RuleReplicationClause = 64, RuleImportStatement = 65, 
    RuleTableLocation = 66, RuleDdlStatement = 67, RuleCreateDatabaseStatement = 68, 
    RuleDb_schema = 69, RuleIfNotExists = 70, RuleDatabaseComment = 71, 
    RuleDbLocation = 72, RuleDbManagedLocation = 73, RuleDbProperties = 74, 
    RuleDbPropertiesList = 75, RuleKeyValueProperty = 76, RuleDbConnectorName = 77, 
    RuleSwitchDatabaseStatement = 78, RuleDropDatabaseStatement = 79, RuleIfExists = 80, 
    RuleRestrictOrCascade = 81, RuleCreateTableStatement = 82, RuleLikeTableOrFile = 83, 
    RuleCreateTablePartitionSpec = 84, RuleCreateTablePartitionColumnTypeSpec = 85, 
    RuleColumnNameTypeConstraint = 86, RuleColType = 87, RuleType = 88, 
    RuleListType = 89, RuleStructType = 90, RuleColumnNameColonTypeList = 91, 
    RuleColumnNameColonType = 92, RuleMapType = 93, RuleUnionType = 94, 
    RuleColTypeList = 95, RuleColumnConstraint = 96, RuleForeignKeyConstraint = 97, 
    RuleConstraintOptsCreate = 98, RuleEnableValidateSpecification = 99, 
    RuleEnableSpecification = 100, RuleValidateSpecification = 101, RuleEnforcedSpecification = 102, 
    RuleRelySpecification = 103, RuleColConstraint = 104, RuleColumnConstraintType = 105, 
    RuleDefaultVal = 106, RuleCheckConstraint = 107, RuleTableConstraintType = 108, 
    RuleCreateTablePartitionColumnSpec = 109, RulePartitionTransformSpec = 110, 
    RuleColumnNameTransformConstraint = 111, RulePartitionTransformType = 112, 
    RuleTableRowFormat = 113, RuleRowFormatDelimited = 114, RuleTableRowFormatFieldIdentifier = 115, 
    RuleTableRowFormatCollItemsIdentifier = 116, RuleTableRowFormatMapKeysIdentifier = 117, 
    RuleTableRowFormatLinesIdentifier = 118, RuleTableRowNullFormat = 119, 
    RuleRowFormatSerde = 120, RuleTableProperties = 121, RuleTablePropertiesList = 122, 
    RuleKeyProperty = 123, RuleTableFileFormat = 124, RuleTablePropertiesPrefixed = 125, 
    RuleColumnNameTypeOrConstraintList = 126, RuleColumnNameTypeOrConstraint = 127, 
    RuleTableConstraint = 128, RuleCreateForeignKey = 129, RuleCreateConstraint = 130, 
    RuleTableLevelConstraint = 131, RulePkUkConstraint = 132, RuleTableComment = 133, 
    RuleTableBuckets = 134, RuleColumnNameOrderList = 135, RuleColumnNameOrder = 136, 
    RuleOrderSpecification = 137, RuleTableSkewed = 138, RuleSkewedValueElement = 139, 
    RuleSkewedColumnValues = 140, RuleSkewedColumnValue = 141, RuleSkewedColumnValuePairList = 142, 
    RuleSkewedColumnValuePair = 143, RuleStoredAsDirs = 144, RuleSelectStatementWithCTE = 145, 
    RuleDropTableStatement = 146, RuleTruncateTableStatement = 147, RuleTablePartitionPrefix = 148, 
    RuleForce = 149, RuleAlterStatement = 150, RuleAlterTableStatementSuffix = 151, 
    RuleAlterStatementSuffixRename = 152, RuleAlterStatementSuffixDropPartitions = 153, 
    RulePartitionSelectorSpec = 154, RulePartitionSelectorVal = 155, RulePartitionSelectorOperator = 156, 
    RuleAlterStatementSuffixAddPartitions = 157, RuleAlterStatementSuffixAddPartitionsElement = 158, 
    RulePartitionLocation = 159, RuleAlterStatementSuffixTouch = 160, RuleAlterStatementSuffixArchive = 161, 
    RuleAlterStatementSuffixUnArchive = 162, RuleAlterStatementSuffixProperties = 163, 
    RuleAlterStatementSuffixSkewedby = 164, RuleAlterStatementSuffixExchangePartition = 165, 
    RuleAlterStatementPartitionKeyType = 166, RuleColumnNameType = 167, 
    RuleAlterStatementSuffixDropConstraint = 168, RuleAlterStatementSuffixAddConstraint = 169, 
    RuleAlterForeignKeyWithName = 170, RuleConstraintOptsAlter = 171, RuleAlterConstraintWithName = 172, 
    RuleAlterTblPartitionStatementSuffix = 173, RuleAlterStatementSuffixFileFormat = 174, 
    RuleFileFormat = 175, RuleAlterStatementSuffixLocation = 176, RuleAlterStatementSuffixMergeFiles = 177, 
    RuleAlterStatementSuffixSerdeProperties = 178, RuleAlterStatementSuffixRenamePart = 179, 
    RuleAlterStatementSuffixBucketNum = 180, RuleAlterTblPartitionStatementSuffixSkewedLocation = 181, 
    RuleSkewedLocations = 182, RuleSkewedLocationsList = 183, RuleSkewedLocationMap = 184, 
    RuleSkewedValueLocationElement = 185, RuleAlterStatementSuffixClusterbySortby = 186, 
    RuleAlterStatementSuffixCompact = 187, RuleTableImplBuckets = 188, RuleBlocking = 189, 
    RuleCompactPool = 190, RuleAlterStatementSuffixUpdateStatsCol = 191, 
    RuleAlterStatementSuffixUpdateStats = 192, RuleAlterStatementSuffixRenameCol = 193, 
    RuleAlterColumnConstraint = 194, RuleAlterForeignKeyConstraint = 195, 
    RuleAlterColConstraint = 196, RuleAlterStatementChangeColPosition = 197, 
    RuleAlterStatementSuffixAddCol = 198, RuleColumnNameTypeList = 199, 
    RuleAlterStatementSuffixUpdateColumns = 200, RuleAlterStatementSuffixSetOwner = 201, 
    RulePrincipalName = 202, RulePrincipalIdentifier = 203, RuleAlterStatementSuffixSetPartSpec = 204, 
    RuleAlterStatementSuffixExecute = 205, RuleAlterViewStatementSuffix = 206, 
    RuleAlterViewSuffixProperties = 207, RuleAlterMaterializedViewStatementSuffix = 208, 
    RuleAlterMaterializedViewSuffixRewrite = 209, RuleRewriteEnabled = 210, 
    RuleRewriteDisabled = 211, RuleAlterMaterializedViewSuffixRebuild = 212, 
    RuleAlterDatabaseStatementSuffix = 213, RuleAlterDatabaseSuffixProperties = 214, 
    RuleAlterDatabaseSuffixSetOwner = 215, RuleAlterDatabaseSuffixSetLocation = 216, 
    RuleAlterDataConnectorStatementSuffix = 217, RuleAlterDataConnectorSuffixProperties = 218, 
    RuleDcProperties = 219, RuleAlterDataConnectorSuffixSetOwner = 220, 
    RuleAlterDataConnectorSuffixSetUrl = 221, RuleDescStatement = 222, RuleDescFuncNames = 223, 
    RuleSysFuncNames = 224, RuleTabPartColTypeExpr = 225, RuleExtColumnName = 226, 
    RuleShowStatement = 227, RuleShowStmtIdentifier = 228, RuleFrom_in = 229, 
    RuleShowTablesFilterExpr = 230, RuleShowFunctionIdentifier = 231, RulePartTypeExpr = 232, 
    RuleTabTypeExpr = 233, RuleCompactionId = 234, RuleCompactionPool = 235, 
    RuleCompactionType = 236, RuleCompactionStatus = 237, RuleMetastoreCheck = 238, 
    RuleCreateViewStatement = 239, RuleOrReplace = 240, RuleColumnNameCommentList = 241, 
    RuleColumnNameComment = 242, RuleViewPartition = 243, RuleCreateMaterializedViewStatement = 244, 
    RuleViewOrganization = 245, RuleViewClusterSpec = 246, RuleViewComplexSpec = 247, 
    RuleViewDistSpec = 248, RuleViewSortSpec = 249, RuleCreateScheduledQueryStatement = 250, 
    RuleScheduleSpec = 251, RuleExecutedAsSpec = 252, RuleDefinedAsSpec = 253, 
    RuleAlterScheduledQueryStatement = 254, RuleAlterScheduledQueryChange = 255, 
    RuleDropScheduledQueryStatement = 256, RuleDropViewStatement = 257, 
    RuleViewName = 258, RuleDropMaterializedViewStatement = 259, RuleCreateFunctionStatement = 260, 
    RuleResourceList = 261, RuleResource = 262, RuleResourceType = 263, 
    RuleCreateMacroStatement = 264, RuleDropFunctionStatement = 265, RuleReloadFunctionsStatement = 266, 
    RuleDropMacroStatement = 267, RuleAnalyzeStatement = 268, RuleLockStatement = 269, 
    RuleLockMode = 270, RuleUnlockStatement = 271, RuleLockDatabase = 272, 
    RuleUnlockDatabase = 273, RuleCreateRoleStatement = 274, RuleDropRoleStatement = 275, 
    RuleGrantPrivileges = 276, RulePrivilegeList = 277, RulePrivlegeDef = 278, 
    RulePrivilegeType = 279, RulePrivilegeObject = 280, RulePrivObject = 281, 
    RulePrincipalSpecification = 282, RuleWithGrantOption = 283, RuleRevokePrivileges = 284, 
    RuleGrantOptionFor = 285, RuleShowGrants = 286, RulePrivilegeIncludeColObject = 287, 
    RulePrivObjectCols = 288, RuleShowRoleGrants = 289, RuleShowRolePrincipals = 290, 
    RuleShowRoles = 291, RuleGrantRole = 292, RuleWithAdminOption = 293, 
    RuleRevokeRole = 294, RuleAdminOptionFor = 295, RuleSetRole = 296, RuleShowCurrentRole = 297, 
    RuleAbortTransactionStatement = 298, RuleAbortCompactionStatement = 299, 
    RuleKillQueryStatement = 300, RuleResourcePlanDdlStatements = 301, RuleCreateResourcePlanStatement = 302, 
    RuleRpAssignList = 303, RuleRpAssign = 304, RulePoolPath = 305, RuleAlterResourcePlanStatement = 306, 
    RuleRpUnassignList = 307, RuleRpUnassign = 308, RuleActivate = 309, 
    RuleWithReplace = 310, RuleEnable = 311, RuleDropResourcePlanStatement = 312, 
    RuleGlobalWmStatement = 313, RuleAlterWmStatement = 314, RuleReplaceResourcePlanStatement = 315, 
    RuleCreateTriggerStatement = 316, RuleTriggerExpression = 317, RuleTriggerAtomExpression = 318, 
    RuleComparisionOperator = 319, RuleTriggerLiteral = 320, RuleTriggerActionExpression = 321, 
    RuleAlterTriggerStatement = 322, RuleDropTriggerStatement = 323, RuleCreatePoolStatement = 324, 
    RulePoolAssignList = 325, RulePoolAssign = 326, RuleAlterPoolStatement = 327, 
    RuleDropPoolStatement = 328, RuleCreateMappingStatement = 329, RuleUnmanaged = 330, 
    RuleAlterMappingStatement = 331, RuleDropMappingStatement = 332, RuleCreateDataConnectorStatement = 333, 
    RuleDataConnectorType = 334, RuleDataConnectorUrl = 335, RuleDataConnectorComment = 336, 
    RuleDropDataConnectorStatement = 337, RuleDeleteStatement = 338, RuleUpdateStatement = 339, 
    RuleSetColumnsClause = 340, RuleColumnAssignmentClause = 341, RulePrecedencePlusExpressionOrDefault = 342, 
    RuleSqlTransactionStatement = 343, RuleStartTransactionStatement = 344, 
    RuleTransactionMode = 345, RuleIsolationLevel = 346, RuleLevelOfIsolation = 347, 
    RuleTransactionAccessMode = 348, RuleCommitStatement = 349, RuleRollbackStatement = 350, 
    RuleSetAutoCommitStatement = 351, RuleBooleanValueTok = 352, RuleMergeStatement = 353, 
    RuleWhenClauses = 354, RuleWhenMatchedAndClause = 355, RuleUpdateOrDelete = 356, 
    RuleWhenMatchedThenClause = 357, RuleWhenNotMatchedClause = 358, RuleValueRowConstructor = 359, 
    RulePrepareStatement = 360, RuleExecuteStatement = 361, RuleExecuteParamList = 362, 
    RuleNonReserved = 363, RuleTplsqlPrimitiveType = 364, RuleAdql = 365, 
    RuleQueryStatementExpression = 366, RuleWithClause = 367, RuleId_ = 368, 
    RuleAll_distinct = 369, RuleSet_limit = 370, RuleSelectList = 371, RuleTableAllColumns = 372, 
    RuleExpression = 373, RulePrecedenceOrExpression = 374, RulePrecedenceAndExpression = 375, 
    RulePrecedenceNotExpression = 376, RulePrecedenceNotOperator = 377, 
    RulePrecedenceUnarySuffixExpression = 378, RulePrecedenceEqualExpression = 379, 
    RulePrecedenceSimilarExpression = 380, RulePrecedenceSimilarExpressionMain = 381, 
    RulePrecedenceBitwiseOrExpression = 382, RulePrecedenceAmpersandExpression = 383, 
    RulePrecedenceConcatenateExpression = 384, RulePrecedencePlusExpression = 385, 
    RulePrecedenceStarExpression = 386, RulePrecedenceBitwiseXorExpression = 387, 
    RulePrecedenceUnaryPrefixExpression = 388, RulePrecedenceUnaryOperator = 389, 
    RulePrecedenceFieldExpression = 390, RuleAtomExpression = 391, RuleConstant = 392, 
    RuleIntervalLiteral = 393, RuleIntervalValue = 394, RuleIntervalQualifiers = 395, 
    RuleDateLiteral = 396, RuleTimestampLiteral = 397, RuleTimestampLocalTZLiteral = 398, 
    RuleStringLiteralSequence = 399, RuleCharSetStringLiteral = 400, RuleBooleanValue = 401, 
    RulePrepareStmtParam = 402, RuleParameterIdx = 403, RuleIntervalExpression = 404, 
    RuleCastExpression = 405, RuleExtractExpression = 406, RuleTimeQualifiers = 407, 
    RuleFloorExpression = 408, RuleFloorDateQualifiers = 409, RuleCaseExpression = 410, 
    RuleWhenExpression = 411, RuleSubQueryExpression = 412, RuleFunction_ = 413, 
    RuleTrimFunction = 414, RuleFunctionName = 415, RuleFunctionIdentifier = 416, 
    RuleSql11ReservedKeywordsUsedAsFunctionName = 417, RuleSelectExpression = 418, 
    RuleOrderByClause = 419, RuleColumnRefOrder = 420, RuleOrderSpecificationRewrite = 421, 
    RuleNullOrdering = 422, RuleNull_treatment = 423, RuleWindow_specification = 424, 
    RulePartitioningSpec = 425, RulePartitionByClause = 426, RuleExpressions = 427, 
    RuleExpressionsInParenthesis = 428, RuleExpressionsNotInParenthesis = 429, 
    RuleExpressionOrDefault = 430, RuleDefaultValue = 431, RuleExpressionPart = 432, 
    RuleDistributeByClause = 433, RuleSortByClause = 434, RuleColumnRefOrderInParenthesis = 435, 
    RuleColumnRefOrderNotInParenthesis = 436, RuleClusterByClause = 437, 
    RuleWindow_frame = 438, RuleWindow_range_expression = 439, RuleWindow_frame_start_boundary = 440, 
    RuleWindow_frame_boundary = 441, RuleWindow_value_expression = 442, 
    RuleTableOrColumn = 443, RulePrecedenceBitwiseXorOperator = 444, RulePrecedenceStarOperator = 445, 
    RulePrecedencePlusOperator = 446, RulePrecedenceConcatenateOperator = 447, 
    RulePrecedenceAmpersandOperator = 448, RulePrecedenceBitwiseOrOperator = 449, 
    RulePrecedenceSimilarExpressionPart = 450, RulePrecedenceSimilarOperator = 451, 
    RulePrecedenceRegexpOperator = 452, RulePrecedenceSimilarExpressionAtom = 453, 
    RulePrecedenceSimilarExpressionQuantifierPredicate = 454, RuleSubQuerySelectorOperator = 455, 
    RuleQuantifierType = 456, RulePrecedenceSimilarExpressionPartNot = 457, 
    RulePrecedenceSimilarExpressionIn = 458, RulePrecedenceEqualOperator = 459, 
    RulePrecedenceDistinctOperator = 460, RuleIsCondition = 461, RulePrecedenceAndOperator = 462, 
    RulePrecedenceOrOperator = 463, RuleFromClause = 464, RuleJoinSource = 465, 
    RuleSubQuerySource = 466, RuleJoinToken = 467, RuleColumnParenthesesList = 468, 
    RuleColumnNameList = 469, RuleColumnName = 470, RuleWhereClause = 471, 
    RuleSearchCondition = 472, RuleGroupByClause = 473, RuleGroupByEmpty = 474, 
    RuleHavingClause = 475, RuleHavingCondition = 476, RuleWindow_clause = 477, 
    RuleWindow_defn = 478, RuleSetOpSelectStatement = 479, RuleSetOperator = 480, 
    RuleLimitClause = 481, RuleAdqlPrimitiveType = 482
  };

  explicit TplSqlParser(antlr4::TokenStream *input);

  TplSqlParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~TplSqlParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class TplsqlContext;
  class StatementContext;
  class ExplainStatementContext;
  class ExplainOptionContext;
  class VectorizationOnlyContext;
  class VectorizatonDetailContext;
  class ExecStatementContext;
  class CteStatementContext;
  class QueryStatementExpressionBodyContext;
  class FromStatementContext;
  class SingleFromStatementContext;
  class FromSourceContext;
  class UniqueJoinTokenContext;
  class UniqueJoinSourceContext;
  class UniqueJoinTableSourceContext;
  class UniqueJoinExprContext;
  class ExpressionListContext;
  class BodyContext;
  class InsertClauseContext;
  class DestinationContext;
  class LateralViewContext;
  class TableAliasContext;
  class ValuesClauseContext;
  class ValuesTableConstructorContext;
  class FirstValueRowConstructorContext;
  class FirstExpressionsWithAliasContext;
  class ExpressionWithAliasContext;
  class QualifyClauseContext;
  class RegularBodyContext;
  class SelectStatementContext;
  class AtomSelectStatementContext;
  class ValuesSourceContext;
  class SelectClauseContext;
  class SelectTrfmClauseContext;
  class SelectExpressionListContext;
  class RowFormatContext;
  class RecordWriterContext;
  class AliasListContext;
  class RecordReaderContext;
  class TrfmClauseContext;
  class SelectItemContext;
  class TableNameContext;
  class AtomjoinSourceContext;
  class TableSourceContext;
  class TableSampleContext;
  class TableBucketSampleContext;
  class SplitSampleContext;
  class AsOfClauseContext;
  class VirtualTableSourceContext;
  class PartitionedTableFunctionContext;
  class PartitionTableFunctionSourceContext;
  class JoinSourcePartContext;
  class Groupby_expressionContext;
  class RollupStandardContext;
  class RollupOldSyntaxContext;
  class GroupingSetExpressionContext;
  class GroupingSetExpressionMultipleContext;
  class GroupingExpressionSingleContext;
  class LoadStatementContext;
  class TableOrPartitionContext;
  class PartitionSpecContext;
  class PartitionValContext;
  class InputFileFormatContext;
  class ExportStatementContext;
  class ReplicationClauseContext;
  class ImportStatementContext;
  class TableLocationContext;
  class DdlStatementContext;
  class CreateDatabaseStatementContext;
  class Db_schemaContext;
  class IfNotExistsContext;
  class DatabaseCommentContext;
  class DbLocationContext;
  class DbManagedLocationContext;
  class DbPropertiesContext;
  class DbPropertiesListContext;
  class KeyValuePropertyContext;
  class DbConnectorNameContext;
  class SwitchDatabaseStatementContext;
  class DropDatabaseStatementContext;
  class IfExistsContext;
  class RestrictOrCascadeContext;
  class CreateTableStatementContext;
  class LikeTableOrFileContext;
  class CreateTablePartitionSpecContext;
  class CreateTablePartitionColumnTypeSpecContext;
  class ColumnNameTypeConstraintContext;
  class ColTypeContext;
  class TypeContext;
  class ListTypeContext;
  class StructTypeContext;
  class ColumnNameColonTypeListContext;
  class ColumnNameColonTypeContext;
  class MapTypeContext;
  class UnionTypeContext;
  class ColTypeListContext;
  class ColumnConstraintContext;
  class ForeignKeyConstraintContext;
  class ConstraintOptsCreateContext;
  class EnableValidateSpecificationContext;
  class EnableSpecificationContext;
  class ValidateSpecificationContext;
  class EnforcedSpecificationContext;
  class RelySpecificationContext;
  class ColConstraintContext;
  class ColumnConstraintTypeContext;
  class DefaultValContext;
  class CheckConstraintContext;
  class TableConstraintTypeContext;
  class CreateTablePartitionColumnSpecContext;
  class PartitionTransformSpecContext;
  class ColumnNameTransformConstraintContext;
  class PartitionTransformTypeContext;
  class TableRowFormatContext;
  class RowFormatDelimitedContext;
  class TableRowFormatFieldIdentifierContext;
  class TableRowFormatCollItemsIdentifierContext;
  class TableRowFormatMapKeysIdentifierContext;
  class TableRowFormatLinesIdentifierContext;
  class TableRowNullFormatContext;
  class RowFormatSerdeContext;
  class TablePropertiesContext;
  class TablePropertiesListContext;
  class KeyPropertyContext;
  class TableFileFormatContext;
  class TablePropertiesPrefixedContext;
  class ColumnNameTypeOrConstraintListContext;
  class ColumnNameTypeOrConstraintContext;
  class TableConstraintContext;
  class CreateForeignKeyContext;
  class CreateConstraintContext;
  class TableLevelConstraintContext;
  class PkUkConstraintContext;
  class TableCommentContext;
  class TableBucketsContext;
  class ColumnNameOrderListContext;
  class ColumnNameOrderContext;
  class OrderSpecificationContext;
  class TableSkewedContext;
  class SkewedValueElementContext;
  class SkewedColumnValuesContext;
  class SkewedColumnValueContext;
  class SkewedColumnValuePairListContext;
  class SkewedColumnValuePairContext;
  class StoredAsDirsContext;
  class SelectStatementWithCTEContext;
  class DropTableStatementContext;
  class TruncateTableStatementContext;
  class TablePartitionPrefixContext;
  class ForceContext;
  class AlterStatementContext;
  class AlterTableStatementSuffixContext;
  class AlterStatementSuffixRenameContext;
  class AlterStatementSuffixDropPartitionsContext;
  class PartitionSelectorSpecContext;
  class PartitionSelectorValContext;
  class PartitionSelectorOperatorContext;
  class AlterStatementSuffixAddPartitionsContext;
  class AlterStatementSuffixAddPartitionsElementContext;
  class PartitionLocationContext;
  class AlterStatementSuffixTouchContext;
  class AlterStatementSuffixArchiveContext;
  class AlterStatementSuffixUnArchiveContext;
  class AlterStatementSuffixPropertiesContext;
  class AlterStatementSuffixSkewedbyContext;
  class AlterStatementSuffixExchangePartitionContext;
  class AlterStatementPartitionKeyTypeContext;
  class ColumnNameTypeContext;
  class AlterStatementSuffixDropConstraintContext;
  class AlterStatementSuffixAddConstraintContext;
  class AlterForeignKeyWithNameContext;
  class ConstraintOptsAlterContext;
  class AlterConstraintWithNameContext;
  class AlterTblPartitionStatementSuffixContext;
  class AlterStatementSuffixFileFormatContext;
  class FileFormatContext;
  class AlterStatementSuffixLocationContext;
  class AlterStatementSuffixMergeFilesContext;
  class AlterStatementSuffixSerdePropertiesContext;
  class AlterStatementSuffixRenamePartContext;
  class AlterStatementSuffixBucketNumContext;
  class AlterTblPartitionStatementSuffixSkewedLocationContext;
  class SkewedLocationsContext;
  class SkewedLocationsListContext;
  class SkewedLocationMapContext;
  class SkewedValueLocationElementContext;
  class AlterStatementSuffixClusterbySortbyContext;
  class AlterStatementSuffixCompactContext;
  class TableImplBucketsContext;
  class BlockingContext;
  class CompactPoolContext;
  class AlterStatementSuffixUpdateStatsColContext;
  class AlterStatementSuffixUpdateStatsContext;
  class AlterStatementSuffixRenameColContext;
  class AlterColumnConstraintContext;
  class AlterForeignKeyConstraintContext;
  class AlterColConstraintContext;
  class AlterStatementChangeColPositionContext;
  class AlterStatementSuffixAddColContext;
  class ColumnNameTypeListContext;
  class AlterStatementSuffixUpdateColumnsContext;
  class AlterStatementSuffixSetOwnerContext;
  class PrincipalNameContext;
  class PrincipalIdentifierContext;
  class AlterStatementSuffixSetPartSpecContext;
  class AlterStatementSuffixExecuteContext;
  class AlterViewStatementSuffixContext;
  class AlterViewSuffixPropertiesContext;
  class AlterMaterializedViewStatementSuffixContext;
  class AlterMaterializedViewSuffixRewriteContext;
  class RewriteEnabledContext;
  class RewriteDisabledContext;
  class AlterMaterializedViewSuffixRebuildContext;
  class AlterDatabaseStatementSuffixContext;
  class AlterDatabaseSuffixPropertiesContext;
  class AlterDatabaseSuffixSetOwnerContext;
  class AlterDatabaseSuffixSetLocationContext;
  class AlterDataConnectorStatementSuffixContext;
  class AlterDataConnectorSuffixPropertiesContext;
  class DcPropertiesContext;
  class AlterDataConnectorSuffixSetOwnerContext;
  class AlterDataConnectorSuffixSetUrlContext;
  class DescStatementContext;
  class DescFuncNamesContext;
  class SysFuncNamesContext;
  class TabPartColTypeExprContext;
  class ExtColumnNameContext;
  class ShowStatementContext;
  class ShowStmtIdentifierContext;
  class From_inContext;
  class ShowTablesFilterExprContext;
  class ShowFunctionIdentifierContext;
  class PartTypeExprContext;
  class TabTypeExprContext;
  class CompactionIdContext;
  class CompactionPoolContext;
  class CompactionTypeContext;
  class CompactionStatusContext;
  class MetastoreCheckContext;
  class CreateViewStatementContext;
  class OrReplaceContext;
  class ColumnNameCommentListContext;
  class ColumnNameCommentContext;
  class ViewPartitionContext;
  class CreateMaterializedViewStatementContext;
  class ViewOrganizationContext;
  class ViewClusterSpecContext;
  class ViewComplexSpecContext;
  class ViewDistSpecContext;
  class ViewSortSpecContext;
  class CreateScheduledQueryStatementContext;
  class ScheduleSpecContext;
  class ExecutedAsSpecContext;
  class DefinedAsSpecContext;
  class AlterScheduledQueryStatementContext;
  class AlterScheduledQueryChangeContext;
  class DropScheduledQueryStatementContext;
  class DropViewStatementContext;
  class ViewNameContext;
  class DropMaterializedViewStatementContext;
  class CreateFunctionStatementContext;
  class ResourceListContext;
  class ResourceContext;
  class ResourceTypeContext;
  class CreateMacroStatementContext;
  class DropFunctionStatementContext;
  class ReloadFunctionsStatementContext;
  class DropMacroStatementContext;
  class AnalyzeStatementContext;
  class LockStatementContext;
  class LockModeContext;
  class UnlockStatementContext;
  class LockDatabaseContext;
  class UnlockDatabaseContext;
  class CreateRoleStatementContext;
  class DropRoleStatementContext;
  class GrantPrivilegesContext;
  class PrivilegeListContext;
  class PrivlegeDefContext;
  class PrivilegeTypeContext;
  class PrivilegeObjectContext;
  class PrivObjectContext;
  class PrincipalSpecificationContext;
  class WithGrantOptionContext;
  class RevokePrivilegesContext;
  class GrantOptionForContext;
  class ShowGrantsContext;
  class PrivilegeIncludeColObjectContext;
  class PrivObjectColsContext;
  class ShowRoleGrantsContext;
  class ShowRolePrincipalsContext;
  class ShowRolesContext;
  class GrantRoleContext;
  class WithAdminOptionContext;
  class RevokeRoleContext;
  class AdminOptionForContext;
  class SetRoleContext;
  class ShowCurrentRoleContext;
  class AbortTransactionStatementContext;
  class AbortCompactionStatementContext;
  class KillQueryStatementContext;
  class ResourcePlanDdlStatementsContext;
  class CreateResourcePlanStatementContext;
  class RpAssignListContext;
  class RpAssignContext;
  class PoolPathContext;
  class AlterResourcePlanStatementContext;
  class RpUnassignListContext;
  class RpUnassignContext;
  class ActivateContext;
  class WithReplaceContext;
  class EnableContext;
  class DropResourcePlanStatementContext;
  class GlobalWmStatementContext;
  class AlterWmStatementContext;
  class ReplaceResourcePlanStatementContext;
  class CreateTriggerStatementContext;
  class TriggerExpressionContext;
  class TriggerAtomExpressionContext;
  class ComparisionOperatorContext;
  class TriggerLiteralContext;
  class TriggerActionExpressionContext;
  class AlterTriggerStatementContext;
  class DropTriggerStatementContext;
  class CreatePoolStatementContext;
  class PoolAssignListContext;
  class PoolAssignContext;
  class AlterPoolStatementContext;
  class DropPoolStatementContext;
  class CreateMappingStatementContext;
  class UnmanagedContext;
  class AlterMappingStatementContext;
  class DropMappingStatementContext;
  class CreateDataConnectorStatementContext;
  class DataConnectorTypeContext;
  class DataConnectorUrlContext;
  class DataConnectorCommentContext;
  class DropDataConnectorStatementContext;
  class DeleteStatementContext;
  class UpdateStatementContext;
  class SetColumnsClauseContext;
  class ColumnAssignmentClauseContext;
  class PrecedencePlusExpressionOrDefaultContext;
  class SqlTransactionStatementContext;
  class StartTransactionStatementContext;
  class TransactionModeContext;
  class IsolationLevelContext;
  class LevelOfIsolationContext;
  class TransactionAccessModeContext;
  class CommitStatementContext;
  class RollbackStatementContext;
  class SetAutoCommitStatementContext;
  class BooleanValueTokContext;
  class MergeStatementContext;
  class WhenClausesContext;
  class WhenMatchedAndClauseContext;
  class UpdateOrDeleteContext;
  class WhenMatchedThenClauseContext;
  class WhenNotMatchedClauseContext;
  class ValueRowConstructorContext;
  class PrepareStatementContext;
  class ExecuteStatementContext;
  class ExecuteParamListContext;
  class NonReservedContext;
  class TplsqlPrimitiveTypeContext;
  class AdqlContext;
  class QueryStatementExpressionContext;
  class WithClauseContext;
  class Id_Context;
  class All_distinctContext;
  class Set_limitContext;
  class SelectListContext;
  class TableAllColumnsContext;
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
  class JoinSourceContext;
  class SubQuerySourceContext;
  class JoinTokenContext;
  class ColumnParenthesesListContext;
  class ColumnNameListContext;
  class ColumnNameContext;
  class WhereClauseContext;
  class SearchConditionContext;
  class GroupByClauseContext;
  class GroupByEmptyContext;
  class HavingClauseContext;
  class HavingConditionContext;
  class Window_clauseContext;
  class Window_defnContext;
  class SetOpSelectStatementContext;
  class SetOperatorContext;
  class LimitClauseContext;
  class AdqlPrimitiveTypeContext; 

  class  TplsqlContext : public antlr4::ParserRuleContext {
  public:
    TplsqlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    antlr4::tree::TerminalNode *SEMICOLON();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TplsqlContext* tplsql();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExplainStatementContext *explainStatement();
    ExecStatementContext *execStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  ExplainStatementContext : public antlr4::ParserRuleContext {
  public:
    ExplainStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_EXPLAIN();
    ExecStatementContext *execStatement();
    antlr4::tree::TerminalNode *KW_REWRITE();
    QueryStatementExpressionContext *queryStatementExpression();
    std::vector<ExplainOptionContext *> explainOption();
    ExplainOptionContext* explainOption(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExplainStatementContext* explainStatement();

  class  ExplainOptionContext : public antlr4::ParserRuleContext {
  public:
    ExplainOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_EXTENDED();
    antlr4::tree::TerminalNode *KW_FORMATTED();
    antlr4::tree::TerminalNode *KW_DEPENDENCY();
    antlr4::tree::TerminalNode *KW_CBO();
    antlr4::tree::TerminalNode *KW_COST();
    antlr4::tree::TerminalNode *KW_JOINCOST();
    antlr4::tree::TerminalNode *KW_LOGICAL();
    antlr4::tree::TerminalNode *KW_AUTHORIZATION();
    antlr4::tree::TerminalNode *KW_ANALYZE();
    antlr4::tree::TerminalNode *KW_REOPTIMIZATION();
    antlr4::tree::TerminalNode *KW_LOCKS();
    antlr4::tree::TerminalNode *KW_AST();
    antlr4::tree::TerminalNode *KW_VECTORIZATION();
    VectorizationOnlyContext *vectorizationOnly();
    VectorizatonDetailContext *vectorizatonDetail();
    antlr4::tree::TerminalNode *KW_DEBUG();
    antlr4::tree::TerminalNode *KW_DDL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExplainOptionContext* explainOption();

  class  VectorizationOnlyContext : public antlr4::ParserRuleContext {
  public:
    VectorizationOnlyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_ONLY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VectorizationOnlyContext* vectorizationOnly();

  class  VectorizatonDetailContext : public antlr4::ParserRuleContext {
  public:
    VectorizatonDetailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_SUMMARY();
    antlr4::tree::TerminalNode *KW_OPERATOR();
    antlr4::tree::TerminalNode *KW_EXPRESSION();
    antlr4::tree::TerminalNode *KW_DETAIL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VectorizatonDetailContext* vectorizatonDetail();

  class  ExecStatementContext : public antlr4::ParserRuleContext {
  public:
    ExecStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QueryStatementExpressionContext *queryStatementExpression();
    LoadStatementContext *loadStatement();
    ExportStatementContext *exportStatement();
    ImportStatementContext *importStatement();
    DdlStatementContext *ddlStatement();
    DeleteStatementContext *deleteStatement();
    UpdateStatementContext *updateStatement();
    SqlTransactionStatementContext *sqlTransactionStatement();
    MergeStatementContext *mergeStatement();
    PrepareStatementContext *prepareStatement();
    ExecuteStatementContext *executeStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExecStatementContext* execStatement();

  class  CteStatementContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::ColumnNameListContext *colAliases = nullptr;
    CteStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    antlr4::tree::TerminalNode *KW_AS();
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    QueryStatementExpressionContext *queryStatementExpression();
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);
    ColumnNameListContext *columnNameList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CteStatementContext* cteStatement();

  class  QueryStatementExpressionBodyContext : public antlr4::ParserRuleContext {
  public:
    QueryStatementExpressionBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FromStatementContext *fromStatement();
    RegularBodyContext *regularBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QueryStatementExpressionBodyContext* queryStatementExpressionBody();

  class  FromStatementContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::SetOperatorContext *u = nullptr;
    TplSqlParser::SingleFromStatementContext *r = nullptr;
    FromStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SingleFromStatementContext *> singleFromStatement();
    SingleFromStatementContext* singleFromStatement(size_t i);
    std::vector<SetOperatorContext *> setOperator();
    SetOperatorContext* setOperator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FromStatementContext* fromStatement();

  class  SingleFromStatementContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::BodyContext *bodyContext = nullptr;
    std::vector<BodyContext *> b;
    SingleFromStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FromClauseContext *fromClause();
    std::vector<BodyContext *> body();
    BodyContext* body(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SingleFromStatementContext* singleFromStatement();

  class  FromSourceContext : public antlr4::ParserRuleContext {
  public:
    FromSourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UniqueJoinTokenContext *uniqueJoinToken();
    std::vector<UniqueJoinSourceContext *> uniqueJoinSource();
    UniqueJoinSourceContext* uniqueJoinSource(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    JoinSourceContext *joinSource();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FromSourceContext* fromSource();

  class  UniqueJoinTokenContext : public antlr4::ParserRuleContext {
  public:
    UniqueJoinTokenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_UNIQUEJOIN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UniqueJoinTokenContext* uniqueJoinToken();

  class  UniqueJoinSourceContext : public antlr4::ParserRuleContext {
  public:
    UniqueJoinSourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UniqueJoinTableSourceContext *uniqueJoinTableSource();
    UniqueJoinExprContext *uniqueJoinExpr();
    antlr4::tree::TerminalNode *KW_PRESERVE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UniqueJoinSourceContext* uniqueJoinSource();

  class  UniqueJoinTableSourceContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::TableNameContext *tabname = nullptr;
    TplSqlParser::TableSampleContext *ts = nullptr;
    TplSqlParser::Id_Context *alias = nullptr;
    UniqueJoinTableSourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableNameContext *tableName();
    TableSampleContext *tableSample();
    Id_Context *id_();
    antlr4::tree::TerminalNode *KW_AS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UniqueJoinTableSourceContext* uniqueJoinTableSource();

  class  UniqueJoinExprContext : public antlr4::ParserRuleContext {
  public:
    UniqueJoinExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionListContext *expressionList();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UniqueJoinExprContext* uniqueJoinExpr();

  class  ExpressionListContext : public antlr4::ParserRuleContext {
  public:
    ExpressionListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionListContext* expressionList();

  class  BodyContext : public antlr4::ParserRuleContext {
  public:
    BodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InsertClauseContext *insertClause();
    SelectClauseContext *selectClause();
    LateralViewContext *lateralView();
    WhereClauseContext *whereClause();
    GroupByClauseContext *groupByClause();
    HavingClauseContext *havingClause();
    Window_clauseContext *window_clause();
    QualifyClauseContext *qualifyClause();
    OrderByClauseContext *orderByClause();
    ClusterByClauseContext *clusterByClause();
    DistributeByClauseContext *distributeByClause();
    SortByClauseContext *sortByClause();
    LimitClauseContext *limitClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BodyContext* body();

  class  InsertClauseContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::ColumnNameListContext *targetCols = nullptr;
    InsertClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_INSERT();
    antlr4::tree::TerminalNode *KW_OVERWRITE();
    DestinationContext *destination();
    antlr4::tree::TerminalNode *KW_INTO();
    TableOrPartitionContext *tableOrPartition();
    IfNotExistsContext *ifNotExists();
    antlr4::tree::TerminalNode *KW_TABLE();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    ColumnNameListContext *columnNameList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InsertClauseContext* insertClause();

  class  DestinationContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *local = nullptr;
    DestinationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_DIRECTORY();
    antlr4::tree::TerminalNode *StringLiteral();
    TableRowFormatContext *tableRowFormat();
    TableFileFormatContext *tableFileFormat();
    antlr4::tree::TerminalNode *KW_LOCAL();
    antlr4::tree::TerminalNode *KW_TABLE();
    TableOrPartitionContext *tableOrPartition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DestinationContext* destination();

  class  LateralViewContext : public antlr4::ParserRuleContext {
  public:
    LateralViewContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_LATERAL();
    antlr4::tree::TerminalNode *KW_VIEW();
    antlr4::tree::TerminalNode *KW_OUTER();
    Function_Context *function_();
    TableAliasContext *tableAlias();
    antlr4::tree::TerminalNode *KW_AS();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *KW_TABLE();
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    ValuesClauseContext *valuesClause();
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LateralViewContext* lateralView();

  class  TableAliasContext : public antlr4::ParserRuleContext {
  public:
    TableAliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableAliasContext* tableAlias();

  class  ValuesClauseContext : public antlr4::ParserRuleContext {
  public:
    ValuesClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_VALUES();
    ValuesTableConstructorContext *valuesTableConstructor();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValuesClauseContext* valuesClause();

  class  ValuesTableConstructorContext : public antlr4::ParserRuleContext {
  public:
    ValuesTableConstructorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ValueRowConstructorContext *> valueRowConstructor();
    ValueRowConstructorContext* valueRowConstructor(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    FirstValueRowConstructorContext *firstValueRowConstructor();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValuesTableConstructorContext* valuesTableConstructor();

  class  FirstValueRowConstructorContext : public antlr4::ParserRuleContext {
  public:
    FirstValueRowConstructorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    FirstExpressionsWithAliasContext *firstExpressionsWithAlias();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FirstValueRowConstructorContext* firstValueRowConstructor();

  class  FirstExpressionsWithAliasContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::ExpressionContext *first = nullptr;
    TplSqlParser::Id_Context *colAlias = nullptr;
    FirstExpressionsWithAliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *KW_AS();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<ExpressionWithAliasContext *> expressionWithAlias();
    ExpressionWithAliasContext* expressionWithAlias(size_t i);
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FirstExpressionsWithAliasContext* firstExpressionsWithAlias();

  class  ExpressionWithAliasContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *alias = nullptr;
    ExpressionWithAliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *KW_AS();
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionWithAliasContext* expressionWithAlias();

  class  QualifyClauseContext : public antlr4::ParserRuleContext {
  public:
    QualifyClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_QUALIFY();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QualifyClauseContext* qualifyClause();

  class  RegularBodyContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::InsertClauseContext *i = nullptr;
    TplSqlParser::SelectStatementContext *s = nullptr;
    RegularBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InsertClauseContext *insertClause();
    SelectStatementContext *selectStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RegularBodyContext* regularBody();

  class  SelectStatementContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::AtomSelectStatementContext *a = nullptr;
    TplSqlParser::SetOpSelectStatementContext *set = nullptr;
    TplSqlParser::OrderByClauseContext *o = nullptr;
    TplSqlParser::ClusterByClauseContext *c = nullptr;
    TplSqlParser::DistributeByClauseContext *d = nullptr;
    TplSqlParser::SortByClauseContext *sort = nullptr;
    TplSqlParser::LimitClauseContext *l = nullptr;
    SelectStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AtomSelectStatementContext *atomSelectStatement();
    SetOpSelectStatementContext *setOpSelectStatement();
    OrderByClauseContext *orderByClause();
    ClusterByClauseContext *clusterByClause();
    DistributeByClauseContext *distributeByClause();
    SortByClauseContext *sortByClause();
    LimitClauseContext *limitClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectStatementContext* selectStatement();

  class  AtomSelectStatementContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::SelectClauseContext *s = nullptr;
    TplSqlParser::FromClauseContext *f = nullptr;
    TplSqlParser::WhereClauseContext *w = nullptr;
    TplSqlParser::GroupByClauseContext *g = nullptr;
    TplSqlParser::HavingClauseContext *h = nullptr;
    TplSqlParser::Window_clauseContext *win = nullptr;
    TplSqlParser::QualifyClauseContext *q = nullptr;
    AtomSelectStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SelectClauseContext *selectClause();
    FromClauseContext *fromClause();
    WhereClauseContext *whereClause();
    GroupByClauseContext *groupByClause();
    HavingClauseContext *havingClause();
    Window_clauseContext *window_clause();
    QualifyClauseContext *qualifyClause();
    antlr4::tree::TerminalNode *LPAREN();
    SelectStatementContext *selectStatement();
    antlr4::tree::TerminalNode *RPAREN();
    ValuesSourceContext *valuesSource();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AtomSelectStatementContext* atomSelectStatement();

  class  ValuesSourceContext : public antlr4::ParserRuleContext {
  public:
    ValuesSourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ValuesClauseContext *valuesClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValuesSourceContext* valuesSource();

  class  SelectClauseContext : public antlr4::ParserRuleContext {
  public:
    SelectClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_SELECT();
    SelectListContext *selectList();
    antlr4::tree::TerminalNode *KW_TRANSFORM();
    SelectTrfmClauseContext *selectTrfmClause();
    antlr4::tree::TerminalNode *QUERY_HINT();
    All_distinctContext *all_distinct();
    Set_limitContext *set_limit();
    TrfmClauseContext *trfmClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectClauseContext* selectClause();

  class  SelectTrfmClauseContext : public antlr4::ParserRuleContext {
  public:
    SelectTrfmClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    SelectExpressionListContext *selectExpressionList();
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);
    std::vector<RowFormatContext *> rowFormat();
    RowFormatContext* rowFormat(size_t i);
    RecordWriterContext *recordWriter();
    antlr4::tree::TerminalNode *KW_USING();
    antlr4::tree::TerminalNode *StringLiteral();
    RecordReaderContext *recordReader();
    antlr4::tree::TerminalNode *KW_AS();
    AliasListContext *aliasList();
    ColumnNameTypeListContext *columnNameTypeList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectTrfmClauseContext* selectTrfmClause();

  class  SelectExpressionListContext : public antlr4::ParserRuleContext {
  public:
    SelectExpressionListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SelectExpressionContext *> selectExpression();
    SelectExpressionContext* selectExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectExpressionListContext* selectExpressionList();

  class  RowFormatContext : public antlr4::ParserRuleContext {
  public:
    RowFormatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RowFormatSerdeContext *rowFormatSerde();
    RowFormatDelimitedContext *rowFormatDelimited();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RowFormatContext* rowFormat();

  class  RecordWriterContext : public antlr4::ParserRuleContext {
  public:
    RecordWriterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_RECORDWRITER();
    antlr4::tree::TerminalNode *StringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RecordWriterContext* recordWriter();

  class  AliasListContext : public antlr4::ParserRuleContext {
  public:
    AliasListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AliasListContext* aliasList();

  class  RecordReaderContext : public antlr4::ParserRuleContext {
  public:
    RecordReaderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_RECORDREADER();
    antlr4::tree::TerminalNode *StringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RecordReaderContext* recordReader();

  class  TrfmClauseContext : public antlr4::ParserRuleContext {
  public:
    TrfmClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SelectExpressionListContext *selectExpressionList();
    std::vector<RowFormatContext *> rowFormat();
    RowFormatContext* rowFormat(size_t i);
    RecordWriterContext *recordWriter();
    antlr4::tree::TerminalNode *KW_USING();
    antlr4::tree::TerminalNode *StringLiteral();
    RecordReaderContext *recordReader();
    antlr4::tree::TerminalNode *KW_MAP();
    antlr4::tree::TerminalNode *KW_REDUCE();
    antlr4::tree::TerminalNode *KW_AS();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    AliasListContext *aliasList();
    ColumnNameTypeListContext *columnNameTypeList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TrfmClauseContext* trfmClause();

  class  SelectItemContext : public antlr4::ParserRuleContext {
  public:
    SelectItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableAllColumnsContext *tableAllColumns();
    ExpressionContext *expression();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *KW_AS();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectItemContext* selectItem();

  class  TableNameContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *db = nullptr;
    TplSqlParser::Id_Context *tab = nullptr;
    TplSqlParser::Id_Context *meta = nullptr;
    TableNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableNameContext* tableName();

  class  AtomjoinSourceContext : public antlr4::ParserRuleContext {
  public:
    AtomjoinSourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableSourceContext *tableSource();
    std::vector<LateralViewContext *> lateralView();
    LateralViewContext* lateralView(size_t i);
    VirtualTableSourceContext *virtualTableSource();
    SubQuerySourceContext *subQuerySource();
    PartitionedTableFunctionContext *partitionedTableFunction();
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
    TplSqlParser::TableNameContext *tabname = nullptr;
    TplSqlParser::TablePropertiesContext *props = nullptr;
    TplSqlParser::TableSampleContext *ts = nullptr;
    TplSqlParser::AsOfClauseContext *asOf = nullptr;
    TplSqlParser::Id_Context *alias = nullptr;
    TableSourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableNameContext *tableName();
    TablePropertiesContext *tableProperties();
    TableSampleContext *tableSample();
    AsOfClauseContext *asOfClause();
    Id_Context *id_();
    antlr4::tree::TerminalNode *KW_AS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableSourceContext* tableSource();

  class  TableSampleContext : public antlr4::ParserRuleContext {
  public:
    TableSampleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableBucketSampleContext *tableBucketSample();
    SplitSampleContext *splitSample();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableSampleContext* tableSample();

  class  TableBucketSampleContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *numerator = nullptr;
    antlr4::Token *denominator = nullptr;
    TplSqlParser::ExpressionContext *expressionContext = nullptr;
    std::vector<ExpressionContext *> expr;
    TableBucketSampleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_TABLESAMPLE();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *KW_BUCKET();
    antlr4::tree::TerminalNode *KW_OUT();
    antlr4::tree::TerminalNode *KW_OF();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> Number();
    antlr4::tree::TerminalNode* Number(size_t i);
    antlr4::tree::TerminalNode *KW_ON();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableBucketSampleContext* tableBucketSample();

  class  SplitSampleContext : public antlr4::ParserRuleContext {
  public:
    SplitSampleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_TABLESAMPLE();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *Number();
    antlr4::tree::TerminalNode *ByteLengthLiteral();
    antlr4::tree::TerminalNode *KW_PERCENT();
    antlr4::tree::TerminalNode *KW_ROWS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SplitSampleContext* splitSample();

  class  AsOfClauseContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::ExpressionContext *asOfTime = nullptr;
    antlr4::Token *asOfVersion = nullptr;
    AsOfClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> KW_FOR();
    antlr4::tree::TerminalNode* KW_FOR(size_t i);
    antlr4::tree::TerminalNode *KW_SYSTEM_TIME();
    antlr4::tree::TerminalNode *KW_AS();
    antlr4::tree::TerminalNode *KW_OF();
    antlr4::tree::TerminalNode *KW_SYSTEM_VERSION();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AsOfClauseContext* asOfClause();

  class  VirtualTableSourceContext : public antlr4::ParserRuleContext {
  public:
    VirtualTableSourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_TABLE();
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    ValuesClauseContext *valuesClause();
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);
    TableAliasContext *tableAlias();
    antlr4::tree::TerminalNode *KW_AS();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VirtualTableSourceContext* virtualTableSource();

  class  PartitionedTableFunctionContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *n = nullptr;
    TplSqlParser::PartitionTableFunctionSourceContext *ptfsrc = nullptr;
    TplSqlParser::PartitioningSpecContext *spec = nullptr;
    TplSqlParser::Id_Context *alias = nullptr;
    PartitionedTableFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    antlr4::tree::TerminalNode *KW_ON();
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    PartitionTableFunctionSourceContext *partitionTableFunctionSource();
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    PartitioningSpecContext *partitioningSpec();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionedTableFunctionContext* partitionedTableFunction();

  class  PartitionTableFunctionSourceContext : public antlr4::ParserRuleContext {
  public:
    PartitionTableFunctionSourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SubQuerySourceContext *subQuerySource();
    TableSourceContext *tableSource();
    PartitionedTableFunctionContext *partitionedTableFunction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionTableFunctionSourceContext* partitionTableFunctionSource();

  class  JoinSourcePartContext : public antlr4::ParserRuleContext {
  public:
    JoinSourcePartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableSourceContext *tableSource();
    VirtualTableSourceContext *virtualTableSource();
    SubQuerySourceContext *subQuerySource();
    PartitionedTableFunctionContext *partitionedTableFunction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JoinSourcePartContext* joinSourcePart();

  class  Groupby_expressionContext : public antlr4::ParserRuleContext {
  public:
    Groupby_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RollupStandardContext *rollupStandard();
    RollupOldSyntaxContext *rollupOldSyntax();
    GroupByEmptyContext *groupByEmpty();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Groupby_expressionContext* groupby_expression();

  class  RollupStandardContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *rollup = nullptr;
    antlr4::Token *cube = nullptr;
    RollupStandardContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *KW_ROLLUP();
    antlr4::tree::TerminalNode *KW_CUBE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RollupStandardContext* rollupStandard();

  class  RollupOldSyntaxContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::ExpressionsNotInParenthesisContext *expr = nullptr;
    antlr4::Token *rollup = nullptr;
    antlr4::Token *cube = nullptr;
    antlr4::Token *sets = nullptr;
    RollupOldSyntaxContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionsNotInParenthesisContext *expressionsNotInParenthesis();
    antlr4::tree::TerminalNode *KW_ROLLUP();
    antlr4::tree::TerminalNode *KW_CUBE();
    antlr4::tree::TerminalNode *KW_SETS();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<GroupingSetExpressionContext *> groupingSetExpression();
    GroupingSetExpressionContext* groupingSetExpression(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *KW_WITH();
    antlr4::tree::TerminalNode *KW_GROUPING();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RollupOldSyntaxContext* rollupOldSyntax();

  class  GroupingSetExpressionContext : public antlr4::ParserRuleContext {
  public:
    GroupingSetExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    GroupingSetExpressionMultipleContext *groupingSetExpressionMultiple();
    GroupingExpressionSingleContext *groupingExpressionSingle();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GroupingSetExpressionContext* groupingSetExpression();

  class  GroupingSetExpressionMultipleContext : public antlr4::ParserRuleContext {
  public:
    GroupingSetExpressionMultipleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GroupingSetExpressionMultipleContext* groupingSetExpressionMultiple();

  class  GroupingExpressionSingleContext : public antlr4::ParserRuleContext {
  public:
    GroupingExpressionSingleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GroupingExpressionSingleContext* groupingExpressionSingle();

  class  LoadStatementContext : public antlr4::ParserRuleContext {
  public:
    LoadStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_LOAD();
    antlr4::tree::TerminalNode *KW_DATA();
    antlr4::tree::TerminalNode *KW_INPATH();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *KW_INTO();
    antlr4::tree::TerminalNode *KW_TABLE();
    TableOrPartitionContext *tableOrPartition();
    antlr4::tree::TerminalNode *KW_LOCAL();
    antlr4::tree::TerminalNode *KW_OVERWRITE();
    InputFileFormatContext *inputFileFormat();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LoadStatementContext* loadStatement();

  class  TableOrPartitionContext : public antlr4::ParserRuleContext {
  public:
    TableOrPartitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableNameContext *tableName();
    PartitionSpecContext *partitionSpec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableOrPartitionContext* tableOrPartition();

  class  PartitionSpecContext : public antlr4::ParserRuleContext {
  public:
    PartitionSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_PARTITION();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<PartitionValContext *> partitionVal();
    PartitionValContext* partitionVal(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionSpecContext* partitionSpec();

  class  PartitionValContext : public antlr4::ParserRuleContext {
  public:
    PartitionValContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    antlr4::tree::TerminalNode *EQUAL();
    ConstantContext *constant();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionValContext* partitionVal();

  class  InputFileFormatContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *inFmt = nullptr;
    antlr4::Token *serdeCls = nullptr;
    InputFileFormatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_INPUTFORMAT();
    antlr4::tree::TerminalNode *KW_SERDE();
    std::vector<antlr4::tree::TerminalNode *> StringLiteral();
    antlr4::tree::TerminalNode* StringLiteral(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InputFileFormatContext* inputFileFormat();

  class  ExportStatementContext : public antlr4::ParserRuleContext {
  public:
    ExportStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_EXPORT();
    antlr4::tree::TerminalNode *KW_TABLE();
    TableOrPartitionContext *tableOrPartition();
    antlr4::tree::TerminalNode *KW_TO();
    antlr4::tree::TerminalNode *StringLiteral();
    ReplicationClauseContext *replicationClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExportStatementContext* exportStatement();

  class  ReplicationClauseContext : public antlr4::ParserRuleContext {
  public:
    ReplicationClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_FOR();
    antlr4::tree::TerminalNode *KW_REPLICATION();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *KW_METADATA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReplicationClauseContext* replicationClause();

  class  ImportStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *path = nullptr;
    ImportStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_IMPORT();
    antlr4::tree::TerminalNode *KW_FROM();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *KW_TABLE();
    TableOrPartitionContext *tableOrPartition();
    TableLocationContext *tableLocation();
    antlr4::tree::TerminalNode *KW_EXTERNAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ImportStatementContext* importStatement();

  class  TableLocationContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *locn = nullptr;
    TableLocationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_LOCATION();
    antlr4::tree::TerminalNode *StringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableLocationContext* tableLocation();

  class  DdlStatementContext : public antlr4::ParserRuleContext {
  public:
    DdlStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CreateDatabaseStatementContext *createDatabaseStatement();
    SwitchDatabaseStatementContext *switchDatabaseStatement();
    DropDatabaseStatementContext *dropDatabaseStatement();
    CreateTableStatementContext *createTableStatement();
    DropTableStatementContext *dropTableStatement();
    TruncateTableStatementContext *truncateTableStatement();
    AlterStatementContext *alterStatement();
    DescStatementContext *descStatement();
    ShowStatementContext *showStatement();
    MetastoreCheckContext *metastoreCheck();
    CreateViewStatementContext *createViewStatement();
    CreateMaterializedViewStatementContext *createMaterializedViewStatement();
    CreateScheduledQueryStatementContext *createScheduledQueryStatement();
    AlterScheduledQueryStatementContext *alterScheduledQueryStatement();
    DropScheduledQueryStatementContext *dropScheduledQueryStatement();
    DropViewStatementContext *dropViewStatement();
    DropMaterializedViewStatementContext *dropMaterializedViewStatement();
    CreateFunctionStatementContext *createFunctionStatement();
    CreateMacroStatementContext *createMacroStatement();
    DropFunctionStatementContext *dropFunctionStatement();
    ReloadFunctionsStatementContext *reloadFunctionsStatement();
    DropMacroStatementContext *dropMacroStatement();
    AnalyzeStatementContext *analyzeStatement();
    LockStatementContext *lockStatement();
    UnlockStatementContext *unlockStatement();
    LockDatabaseContext *lockDatabase();
    UnlockDatabaseContext *unlockDatabase();
    CreateRoleStatementContext *createRoleStatement();
    DropRoleStatementContext *dropRoleStatement();
    GrantPrivilegesContext *grantPrivileges();
    RevokePrivilegesContext *revokePrivileges();
    ShowGrantsContext *showGrants();
    ShowRoleGrantsContext *showRoleGrants();
    ShowRolePrincipalsContext *showRolePrincipals();
    ShowRolesContext *showRoles();
    GrantRoleContext *grantRole();
    RevokeRoleContext *revokeRole();
    SetRoleContext *setRole();
    ShowCurrentRoleContext *showCurrentRole();
    AbortTransactionStatementContext *abortTransactionStatement();
    AbortCompactionStatementContext *abortCompactionStatement();
    KillQueryStatementContext *killQueryStatement();
    ResourcePlanDdlStatementsContext *resourcePlanDdlStatements();
    CreateDataConnectorStatementContext *createDataConnectorStatement();
    DropDataConnectorStatementContext *dropDataConnectorStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DdlStatementContext* ddlStatement();

  class  CreateDatabaseStatementContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *name = nullptr;
    TplSqlParser::DbPropertiesContext *dbprops = nullptr;
    CreateDatabaseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_CREATE();
    Db_schemaContext *db_schema();
    Id_Context *id_();
    IfNotExistsContext *ifNotExists();
    DatabaseCommentContext *databaseComment();
    DbLocationContext *dbLocation();
    DbManagedLocationContext *dbManagedLocation();
    antlr4::tree::TerminalNode *KW_WITH();
    antlr4::tree::TerminalNode *KW_DBPROPERTIES();
    DbPropertiesContext *dbProperties();
    antlr4::tree::TerminalNode *KW_REMOTE();
    DbConnectorNameContext *dbConnectorName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateDatabaseStatementContext* createDatabaseStatement();

  class  Db_schemaContext : public antlr4::ParserRuleContext {
  public:
    Db_schemaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_DATABASE();
    antlr4::tree::TerminalNode *KW_SCHEMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Db_schemaContext* db_schema();

  class  IfNotExistsContext : public antlr4::ParserRuleContext {
  public:
    IfNotExistsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_IF();
    antlr4::tree::TerminalNode *KW_NOT();
    antlr4::tree::TerminalNode *KW_EXISTS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfNotExistsContext* ifNotExists();

  class  DatabaseCommentContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *comment = nullptr;
    DatabaseCommentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_COMMENT();
    antlr4::tree::TerminalNode *StringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DatabaseCommentContext* databaseComment();

  class  DbLocationContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *locn = nullptr;
    DbLocationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_LOCATION();
    antlr4::tree::TerminalNode *StringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DbLocationContext* dbLocation();

  class  DbManagedLocationContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *locn = nullptr;
    DbManagedLocationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_MANAGEDLOCATION();
    antlr4::tree::TerminalNode *StringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DbManagedLocationContext* dbManagedLocation();

  class  DbPropertiesContext : public antlr4::ParserRuleContext {
  public:
    DbPropertiesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    DbPropertiesListContext *dbPropertiesList();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DbPropertiesContext* dbProperties();

  class  DbPropertiesListContext : public antlr4::ParserRuleContext {
  public:
    DbPropertiesListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<KeyValuePropertyContext *> keyValueProperty();
    KeyValuePropertyContext* keyValueProperty(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DbPropertiesListContext* dbPropertiesList();

  class  KeyValuePropertyContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *key = nullptr;
    antlr4::Token *value = nullptr;
    KeyValuePropertyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL();
    std::vector<antlr4::tree::TerminalNode *> StringLiteral();
    antlr4::tree::TerminalNode* StringLiteral(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeyValuePropertyContext* keyValueProperty();

  class  DbConnectorNameContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *dcName = nullptr;
    DbConnectorNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_USING();
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DbConnectorNameContext* dbConnectorName();

  class  SwitchDatabaseStatementContext : public antlr4::ParserRuleContext {
  public:
    SwitchDatabaseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_USE();
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SwitchDatabaseStatementContext* switchDatabaseStatement();

  class  DropDatabaseStatementContext : public antlr4::ParserRuleContext {
  public:
    DropDatabaseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_DROP();
    Db_schemaContext *db_schema();
    Id_Context *id_();
    IfExistsContext *ifExists();
    RestrictOrCascadeContext *restrictOrCascade();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropDatabaseStatementContext* dropDatabaseStatement();

  class  IfExistsContext : public antlr4::ParserRuleContext {
  public:
    IfExistsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_IF();
    antlr4::tree::TerminalNode *KW_EXISTS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfExistsContext* ifExists();

  class  RestrictOrCascadeContext : public antlr4::ParserRuleContext {
  public:
    RestrictOrCascadeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_RESTRICT();
    antlr4::tree::TerminalNode *KW_CASCADE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RestrictOrCascadeContext* restrictOrCascade();

  class  CreateTableStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *temp = nullptr;
    antlr4::Token *trans = nullptr;
    antlr4::Token *ext = nullptr;
    TplSqlParser::TableNameContext *name = nullptr;
    antlr4::Token *mgd = nullptr;
    CreateTableStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_CREATE();
    antlr4::tree::TerminalNode *KW_TABLE();
    TableNameContext *tableName();
    LikeTableOrFileContext *likeTableOrFile();
    IfNotExistsContext *ifNotExists();
    antlr4::tree::TerminalNode *KW_TEMPORARY();
    antlr4::tree::TerminalNode *KW_TRANSACTIONAL();
    antlr4::tree::TerminalNode *KW_EXTERNAL();
    CreateTablePartitionSpecContext *createTablePartitionSpec();
    TableRowFormatContext *tableRowFormat();
    TableFileFormatContext *tableFileFormat();
    TableLocationContext *tableLocation();
    TablePropertiesPrefixedContext *tablePropertiesPrefixed();
    antlr4::tree::TerminalNode *LPAREN();
    ColumnNameTypeOrConstraintListContext *columnNameTypeOrConstraintList();
    antlr4::tree::TerminalNode *RPAREN();
    TableCommentContext *tableComment();
    TableBucketsContext *tableBuckets();
    TableSkewedContext *tableSkewed();
    antlr4::tree::TerminalNode *KW_AS();
    SelectStatementWithCTEContext *selectStatementWithCTE();
    antlr4::tree::TerminalNode *KW_MANAGED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateTableStatementContext* createTableStatement();

  class  LikeTableOrFileContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *format = nullptr;
    antlr4::Token *uri = nullptr;
    TplSqlParser::TableNameContext *likeName = nullptr;
    LikeTableOrFileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_LIKE();
    antlr4::tree::TerminalNode *KW_FILE();
    Id_Context *id_();
    antlr4::tree::TerminalNode *StringLiteral();
    TableNameContext *tableName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LikeTableOrFileContext* likeTableOrFile();

  class  CreateTablePartitionSpecContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::CreateTablePartitionColumnTypeSpecContext *opt1 = nullptr;
    TplSqlParser::CreateTablePartitionColumnSpecContext *opt2 = nullptr;
    TplSqlParser::PartitionTransformSpecContext *spec = nullptr;
    CreateTablePartitionSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_PARTITIONED();
    antlr4::tree::TerminalNode *KW_BY();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *KW_SPEC();
    PartitionTransformSpecContext *partitionTransformSpec();
    CreateTablePartitionColumnTypeSpecContext *createTablePartitionColumnTypeSpec();
    CreateTablePartitionColumnSpecContext *createTablePartitionColumnSpec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateTablePartitionSpecContext* createTablePartitionSpec();

  class  CreateTablePartitionColumnTypeSpecContext : public antlr4::ParserRuleContext {
  public:
    CreateTablePartitionColumnTypeSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ColumnNameTypeConstraintContext *> columnNameTypeConstraint();
    ColumnNameTypeConstraintContext* columnNameTypeConstraint(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateTablePartitionColumnTypeSpecContext* createTablePartitionColumnTypeSpec();

  class  ColumnNameTypeConstraintContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *colName = nullptr;
    antlr4::Token *comment = nullptr;
    ColumnNameTypeConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColTypeContext *colType();
    Id_Context *id_();
    ColumnConstraintContext *columnConstraint();
    antlr4::tree::TerminalNode *KW_COMMENT();
    antlr4::tree::TerminalNode *StringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnNameTypeConstraintContext* columnNameTypeConstraint();

  class  ColTypeContext : public antlr4::ParserRuleContext {
  public:
    ColTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColTypeContext* colType();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TplsqlPrimitiveTypeContext *tplsqlPrimitiveType();
    ListTypeContext *listType();
    StructTypeContext *structType();
    MapTypeContext *mapType();
    UnionTypeContext *unionType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();

  class  ListTypeContext : public antlr4::ParserRuleContext {
  public:
    ListTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_ARRAY();
    antlr4::tree::TerminalNode *LESSTHAN();
    TypeContext *type();
    antlr4::tree::TerminalNode *GREATERTHAN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ListTypeContext* listType();

  class  StructTypeContext : public antlr4::ParserRuleContext {
  public:
    StructTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_STRUCT();
    antlr4::tree::TerminalNode *LESSTHAN();
    ColumnNameColonTypeListContext *columnNameColonTypeList();
    antlr4::tree::TerminalNode *GREATERTHAN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StructTypeContext* structType();

  class  ColumnNameColonTypeListContext : public antlr4::ParserRuleContext {
  public:
    ColumnNameColonTypeListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ColumnNameColonTypeContext *> columnNameColonType();
    ColumnNameColonTypeContext* columnNameColonType(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnNameColonTypeListContext* columnNameColonTypeList();

  class  ColumnNameColonTypeContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *colName = nullptr;
    antlr4::Token *comment = nullptr;
    ColumnNameColonTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    ColTypeContext *colType();
    Id_Context *id_();
    antlr4::tree::TerminalNode *KW_COMMENT();
    antlr4::tree::TerminalNode *StringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnNameColonTypeContext* columnNameColonType();

  class  MapTypeContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::TplsqlPrimitiveTypeContext *left = nullptr;
    TplSqlParser::TypeContext *right = nullptr;
    MapTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_MAP();
    antlr4::tree::TerminalNode *LESSTHAN();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *GREATERTHAN();
    TplsqlPrimitiveTypeContext *tplsqlPrimitiveType();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MapTypeContext* mapType();

  class  UnionTypeContext : public antlr4::ParserRuleContext {
  public:
    UnionTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_UNIONTYPE();
    antlr4::tree::TerminalNode *LESSTHAN();
    ColTypeListContext *colTypeList();
    antlr4::tree::TerminalNode *GREATERTHAN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnionTypeContext* unionType();

  class  ColTypeListContext : public antlr4::ParserRuleContext {
  public:
    ColTypeListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ColTypeContext *> colType();
    ColTypeContext* colType(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColTypeListContext* colTypeList();

  class  ColumnConstraintContext : public antlr4::ParserRuleContext {
  public:
    ColumnConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ForeignKeyConstraintContext *foreignKeyConstraint();
    ColConstraintContext *colConstraint();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnConstraintContext* columnConstraint();

  class  ForeignKeyConstraintContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *constraintName = nullptr;
    TplSqlParser::TableNameContext *tabName = nullptr;
    TplSqlParser::ColumnNameContext *colName = nullptr;
    ForeignKeyConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_REFERENCES();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    TableNameContext *tableName();
    ColumnNameContext *columnName();
    antlr4::tree::TerminalNode *KW_CONSTRAINT();
    ConstraintOptsCreateContext *constraintOptsCreate();
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForeignKeyConstraintContext* foreignKeyConstraint();

  class  ConstraintOptsCreateContext : public antlr4::ParserRuleContext {
  public:
    ConstraintOptsCreateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnableValidateSpecificationContext *enableValidateSpecification();
    RelySpecificationContext *relySpecification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstraintOptsCreateContext* constraintOptsCreate();

  class  EnableValidateSpecificationContext : public antlr4::ParserRuleContext {
  public:
    EnableValidateSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnableSpecificationContext *enableSpecification();
    ValidateSpecificationContext *validateSpecification();
    EnforcedSpecificationContext *enforcedSpecification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnableValidateSpecificationContext* enableValidateSpecification();

  class  EnableSpecificationContext : public antlr4::ParserRuleContext {
  public:
    EnableSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_ENABLE();
    antlr4::tree::TerminalNode *KW_DISABLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnableSpecificationContext* enableSpecification();

  class  ValidateSpecificationContext : public antlr4::ParserRuleContext {
  public:
    ValidateSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_VALIDATE();
    antlr4::tree::TerminalNode *KW_NOVALIDATE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValidateSpecificationContext* validateSpecification();

  class  EnforcedSpecificationContext : public antlr4::ParserRuleContext {
  public:
    EnforcedSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_ENFORCED();
    antlr4::tree::TerminalNode *KW_NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnforcedSpecificationContext* enforcedSpecification();

  class  RelySpecificationContext : public antlr4::ParserRuleContext {
  public:
    RelySpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_RELY();
    antlr4::tree::TerminalNode *KW_NORELY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RelySpecificationContext* relySpecification();

  class  ColConstraintContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *constraintName = nullptr;
    ColConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColumnConstraintTypeContext *columnConstraintType();
    antlr4::tree::TerminalNode *KW_CONSTRAINT();
    ConstraintOptsCreateContext *constraintOptsCreate();
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColConstraintContext* colConstraint();

  class  ColumnConstraintTypeContext : public antlr4::ParserRuleContext {
  public:
    ColumnConstraintTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_NOT();
    antlr4::tree::TerminalNode *KW_NULL();
    antlr4::tree::TerminalNode *KW_DEFAULT();
    DefaultValContext *defaultVal();
    CheckConstraintContext *checkConstraint();
    TableConstraintTypeContext *tableConstraintType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnConstraintTypeContext* columnConstraintType();

  class  DefaultValContext : public antlr4::ParserRuleContext {
  public:
    DefaultValContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantContext *constant();
    Function_Context *function_();
    CastExpressionContext *castExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefaultValContext* defaultVal();

  class  CheckConstraintContext : public antlr4::ParserRuleContext {
  public:
    CheckConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_CHECK();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CheckConstraintContext* checkConstraint();

  class  TableConstraintTypeContext : public antlr4::ParserRuleContext {
  public:
    TableConstraintTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_PRIMARY();
    antlr4::tree::TerminalNode *KW_KEY();
    antlr4::tree::TerminalNode *KW_UNIQUE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableConstraintTypeContext* tableConstraintType();

  class  CreateTablePartitionColumnSpecContext : public antlr4::ParserRuleContext {
  public:
    CreateTablePartitionColumnSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ColumnNameContext *> columnName();
    ColumnNameContext* columnName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateTablePartitionColumnSpecContext* createTablePartitionColumnSpec();

  class  PartitionTransformSpecContext : public antlr4::ParserRuleContext {
  public:
    PartitionTransformSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ColumnNameTransformConstraintContext *> columnNameTransformConstraint();
    ColumnNameTransformConstraintContext* columnNameTransformConstraint(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionTransformSpecContext* partitionTransformSpec();

  class  ColumnNameTransformConstraintContext : public antlr4::ParserRuleContext {
  public:
    ColumnNameTransformConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PartitionTransformTypeContext *partitionTransformType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnNameTransformConstraintContext* columnNameTransformConstraint();

  class  PartitionTransformTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *value = nullptr;
    PartitionTransformTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColumnNameContext *columnName();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *KW_YEAR();
    antlr4::tree::TerminalNode *KW_MONTH();
    antlr4::tree::TerminalNode *KW_DAY();
    antlr4::tree::TerminalNode *KW_HOUR();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *KW_TRUNCATE();
    antlr4::tree::TerminalNode *KW_BUCKET();
    antlr4::tree::TerminalNode *Number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionTransformTypeContext* partitionTransformType();

  class  TableRowFormatContext : public antlr4::ParserRuleContext {
  public:
    TableRowFormatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RowFormatDelimitedContext *rowFormatDelimited();
    RowFormatSerdeContext *rowFormatSerde();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableRowFormatContext* tableRowFormat();

  class  RowFormatDelimitedContext : public antlr4::ParserRuleContext {
  public:
    RowFormatDelimitedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_ROW();
    antlr4::tree::TerminalNode *KW_FORMAT();
    antlr4::tree::TerminalNode *KW_DELIMITED();
    TableRowFormatFieldIdentifierContext *tableRowFormatFieldIdentifier();
    TableRowFormatCollItemsIdentifierContext *tableRowFormatCollItemsIdentifier();
    TableRowFormatMapKeysIdentifierContext *tableRowFormatMapKeysIdentifier();
    TableRowFormatLinesIdentifierContext *tableRowFormatLinesIdentifier();
    TableRowNullFormatContext *tableRowNullFormat();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RowFormatDelimitedContext* rowFormatDelimited();

  class  TableRowFormatFieldIdentifierContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *fldIdnt = nullptr;
    antlr4::Token *fldEscape = nullptr;
    TableRowFormatFieldIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_FIELDS();
    antlr4::tree::TerminalNode *KW_TERMINATED();
    std::vector<antlr4::tree::TerminalNode *> KW_BY();
    antlr4::tree::TerminalNode* KW_BY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> StringLiteral();
    antlr4::tree::TerminalNode* StringLiteral(size_t i);
    antlr4::tree::TerminalNode *KW_ESCAPED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableRowFormatFieldIdentifierContext* tableRowFormatFieldIdentifier();

  class  TableRowFormatCollItemsIdentifierContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *collIdnt = nullptr;
    TableRowFormatCollItemsIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_COLLECTION();
    antlr4::tree::TerminalNode *KW_ITEMS();
    antlr4::tree::TerminalNode *KW_TERMINATED();
    antlr4::tree::TerminalNode *KW_BY();
    antlr4::tree::TerminalNode *StringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableRowFormatCollItemsIdentifierContext* tableRowFormatCollItemsIdentifier();

  class  TableRowFormatMapKeysIdentifierContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *mapKeysIdnt = nullptr;
    TableRowFormatMapKeysIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_MAP();
    antlr4::tree::TerminalNode *KW_KEYS();
    antlr4::tree::TerminalNode *KW_TERMINATED();
    antlr4::tree::TerminalNode *KW_BY();
    antlr4::tree::TerminalNode *StringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableRowFormatMapKeysIdentifierContext* tableRowFormatMapKeysIdentifier();

  class  TableRowFormatLinesIdentifierContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *linesIdnt = nullptr;
    TableRowFormatLinesIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_LINES();
    antlr4::tree::TerminalNode *KW_TERMINATED();
    antlr4::tree::TerminalNode *KW_BY();
    antlr4::tree::TerminalNode *StringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableRowFormatLinesIdentifierContext* tableRowFormatLinesIdentifier();

  class  TableRowNullFormatContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *nullIdnt = nullptr;
    TableRowNullFormatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_NULL();
    antlr4::tree::TerminalNode *KW_DEFINED();
    antlr4::tree::TerminalNode *KW_AS();
    antlr4::tree::TerminalNode *StringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableRowNullFormatContext* tableRowNullFormat();

  class  RowFormatSerdeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;
    TplSqlParser::TablePropertiesContext *serdeprops = nullptr;
    RowFormatSerdeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_ROW();
    antlr4::tree::TerminalNode *KW_FORMAT();
    antlr4::tree::TerminalNode *KW_SERDE();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *KW_WITH();
    antlr4::tree::TerminalNode *KW_SERDEPROPERTIES();
    TablePropertiesContext *tableProperties();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RowFormatSerdeContext* rowFormatSerde();

  class  TablePropertiesContext : public antlr4::ParserRuleContext {
  public:
    TablePropertiesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    TablePropertiesListContext *tablePropertiesList();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TablePropertiesContext* tableProperties();

  class  TablePropertiesListContext : public antlr4::ParserRuleContext {
  public:
    TablePropertiesListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<KeyValuePropertyContext *> keyValueProperty();
    KeyValuePropertyContext* keyValueProperty(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<KeyPropertyContext *> keyProperty();
    KeyPropertyContext* keyProperty(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TablePropertiesListContext* tablePropertiesList();

  class  KeyPropertyContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *key = nullptr;
    KeyPropertyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *StringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeyPropertyContext* keyProperty();

  class  TableFileFormatContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *inFmt = nullptr;
    antlr4::Token *outFmt = nullptr;
    antlr4::Token *inDriver = nullptr;
    antlr4::Token *outDriver = nullptr;
    antlr4::Token *storageHandler = nullptr;
    TplSqlParser::TablePropertiesContext *serdeprops = nullptr;
    TplSqlParser::Id_Context *fileformat = nullptr;
    TplSqlParser::Id_Context *genericSpec = nullptr;
    TableFileFormatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> KW_STORED();
    antlr4::tree::TerminalNode* KW_STORED(size_t i);
    antlr4::tree::TerminalNode *KW_AS();
    antlr4::tree::TerminalNode *KW_INPUTFORMAT();
    antlr4::tree::TerminalNode *KW_OUTPUTFORMAT();
    std::vector<antlr4::tree::TerminalNode *> StringLiteral();
    antlr4::tree::TerminalNode* StringLiteral(size_t i);
    antlr4::tree::TerminalNode *KW_INPUTDRIVER();
    antlr4::tree::TerminalNode *KW_OUTPUTDRIVER();
    antlr4::tree::TerminalNode *KW_BY();
    antlr4::tree::TerminalNode *KW_WITH();
    antlr4::tree::TerminalNode *KW_SERDEPROPERTIES();
    TablePropertiesContext *tableProperties();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableFileFormatContext* tableFileFormat();

  class  TablePropertiesPrefixedContext : public antlr4::ParserRuleContext {
  public:
    TablePropertiesPrefixedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_TBLPROPERTIES();
    TablePropertiesContext *tableProperties();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TablePropertiesPrefixedContext* tablePropertiesPrefixed();

  class  ColumnNameTypeOrConstraintListContext : public antlr4::ParserRuleContext {
  public:
    ColumnNameTypeOrConstraintListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ColumnNameTypeOrConstraintContext *> columnNameTypeOrConstraint();
    ColumnNameTypeOrConstraintContext* columnNameTypeOrConstraint(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnNameTypeOrConstraintListContext* columnNameTypeOrConstraintList();

  class  ColumnNameTypeOrConstraintContext : public antlr4::ParserRuleContext {
  public:
    ColumnNameTypeOrConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableConstraintContext *tableConstraint();
    ColumnNameTypeConstraintContext *columnNameTypeConstraint();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnNameTypeOrConstraintContext* columnNameTypeOrConstraint();

  class  TableConstraintContext : public antlr4::ParserRuleContext {
  public:
    TableConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CreateForeignKeyContext *createForeignKey();
    CreateConstraintContext *createConstraint();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableConstraintContext* tableConstraint();

  class  CreateForeignKeyContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *constraintName = nullptr;
    TplSqlParser::ColumnParenthesesListContext *fkCols = nullptr;
    TplSqlParser::TableNameContext *tabName = nullptr;
    TplSqlParser::ColumnParenthesesListContext *parCols = nullptr;
    CreateForeignKeyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_FOREIGN();
    antlr4::tree::TerminalNode *KW_KEY();
    antlr4::tree::TerminalNode *KW_REFERENCES();
    std::vector<ColumnParenthesesListContext *> columnParenthesesList();
    ColumnParenthesesListContext* columnParenthesesList(size_t i);
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *KW_CONSTRAINT();
    ConstraintOptsCreateContext *constraintOptsCreate();
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateForeignKeyContext* createForeignKey();

  class  CreateConstraintContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *constraintName = nullptr;
    CreateConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableLevelConstraintContext *tableLevelConstraint();
    antlr4::tree::TerminalNode *KW_CONSTRAINT();
    ConstraintOptsCreateContext *constraintOptsCreate();
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateConstraintContext* createConstraint();

  class  TableLevelConstraintContext : public antlr4::ParserRuleContext {
  public:
    TableLevelConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PkUkConstraintContext *pkUkConstraint();
    CheckConstraintContext *checkConstraint();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableLevelConstraintContext* tableLevelConstraint();

  class  PkUkConstraintContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::ColumnParenthesesListContext *pkCols = nullptr;
    PkUkConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableConstraintTypeContext *tableConstraintType();
    ColumnParenthesesListContext *columnParenthesesList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PkUkConstraintContext* pkUkConstraint();

  class  TableCommentContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *comment = nullptr;
    TableCommentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_COMMENT();
    antlr4::tree::TerminalNode *StringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableCommentContext* tableComment();

  class  TableBucketsContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::ColumnNameListContext *bucketCols = nullptr;
    TplSqlParser::ColumnNameOrderListContext *sortCols = nullptr;
    antlr4::Token *num = nullptr;
    TableBucketsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_CLUSTERED();
    std::vector<antlr4::tree::TerminalNode *> KW_BY();
    antlr4::tree::TerminalNode* KW_BY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);
    antlr4::tree::TerminalNode *KW_INTO();
    antlr4::tree::TerminalNode *KW_BUCKETS();
    ColumnNameListContext *columnNameList();
    antlr4::tree::TerminalNode *Number();
    antlr4::tree::TerminalNode *KW_SORTED();
    ColumnNameOrderListContext *columnNameOrderList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableBucketsContext* tableBuckets();

  class  ColumnNameOrderListContext : public antlr4::ParserRuleContext {
  public:
    ColumnNameOrderListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ColumnNameOrderContext *> columnNameOrder();
    ColumnNameOrderContext* columnNameOrder(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnNameOrderListContext* columnNameOrderList();

  class  ColumnNameOrderContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::OrderSpecificationContext *orderSpec = nullptr;
    TplSqlParser::NullOrderingContext *nullSpec = nullptr;
    ColumnNameOrderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    OrderSpecificationContext *orderSpecification();
    NullOrderingContext *nullOrdering();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnNameOrderContext* columnNameOrder();

  class  OrderSpecificationContext : public antlr4::ParserRuleContext {
  public:
    OrderSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_ASC();
    antlr4::tree::TerminalNode *KW_DESC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OrderSpecificationContext* orderSpecification();

  class  TableSkewedContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::ColumnNameListContext *skewedCols = nullptr;
    TplSqlParser::SkewedValueElementContext *skewedValues = nullptr;
    TableSkewedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_SKEWED();
    antlr4::tree::TerminalNode *KW_BY();
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);
    antlr4::tree::TerminalNode *KW_ON();
    ColumnNameListContext *columnNameList();
    SkewedValueElementContext *skewedValueElement();
    StoredAsDirsContext *storedAsDirs();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableSkewedContext* tableSkewed();

  class  SkewedValueElementContext : public antlr4::ParserRuleContext {
  public:
    SkewedValueElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SkewedColumnValuesContext *skewedColumnValues();
    SkewedColumnValuePairListContext *skewedColumnValuePairList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SkewedValueElementContext* skewedValueElement();

  class  SkewedColumnValuesContext : public antlr4::ParserRuleContext {
  public:
    SkewedColumnValuesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SkewedColumnValueContext *> skewedColumnValue();
    SkewedColumnValueContext* skewedColumnValue(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SkewedColumnValuesContext* skewedColumnValues();

  class  SkewedColumnValueContext : public antlr4::ParserRuleContext {
  public:
    SkewedColumnValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantContext *constant();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SkewedColumnValueContext* skewedColumnValue();

  class  SkewedColumnValuePairListContext : public antlr4::ParserRuleContext {
  public:
    SkewedColumnValuePairListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SkewedColumnValuePairContext *> skewedColumnValuePair();
    SkewedColumnValuePairContext* skewedColumnValuePair(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SkewedColumnValuePairListContext* skewedColumnValuePairList();

  class  SkewedColumnValuePairContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::SkewedColumnValuesContext *colValues = nullptr;
    SkewedColumnValuePairContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    SkewedColumnValuesContext *skewedColumnValues();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SkewedColumnValuePairContext* skewedColumnValuePair();

  class  StoredAsDirsContext : public antlr4::ParserRuleContext {
  public:
    StoredAsDirsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_STORED();
    antlr4::tree::TerminalNode *KW_AS();
    antlr4::tree::TerminalNode *KW_DIRECTORIES();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StoredAsDirsContext* storedAsDirs();

  class  SelectStatementWithCTEContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::WithClauseContext *w = nullptr;
    SelectStatementWithCTEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SelectStatementContext *selectStatement();
    WithClauseContext *withClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectStatementWithCTEContext* selectStatementWithCTE();

  class  DropTableStatementContext : public antlr4::ParserRuleContext {
  public:
    DropTableStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_DROP();
    antlr4::tree::TerminalNode *KW_TABLE();
    TableNameContext *tableName();
    IfExistsContext *ifExists();
    antlr4::tree::TerminalNode *KW_PURGE();
    ReplicationClauseContext *replicationClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropTableStatementContext* dropTableStatement();

  class  TruncateTableStatementContext : public antlr4::ParserRuleContext {
  public:
    TruncateTableStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_TRUNCATE();
    TablePartitionPrefixContext *tablePartitionPrefix();
    antlr4::tree::TerminalNode *KW_TABLE();
    antlr4::tree::TerminalNode *KW_COLUMNS();
    antlr4::tree::TerminalNode *LPAREN();
    ColumnNameListContext *columnNameList();
    antlr4::tree::TerminalNode *RPAREN();
    ForceContext *force();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TruncateTableStatementContext* truncateTableStatement();

  class  TablePartitionPrefixContext : public antlr4::ParserRuleContext {
  public:
    TablePartitionPrefixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableNameContext *tableName();
    PartitionSpecContext *partitionSpec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TablePartitionPrefixContext* tablePartitionPrefix();

  class  ForceContext : public antlr4::ParserRuleContext {
  public:
    ForceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_FORCE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForceContext* force();

  class  AlterStatementContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::TableNameContext *tableNameTree = nullptr;
    AlterStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_ALTER();
    antlr4::tree::TerminalNode *KW_TABLE();
    TableNameContext *tableName();
    AlterTableStatementSuffixContext *alterTableStatementSuffix();
    antlr4::tree::TerminalNode *KW_VIEW();
    AlterViewStatementSuffixContext *alterViewStatementSuffix();
    antlr4::tree::TerminalNode *KW_MATERIALIZED();
    AlterMaterializedViewStatementSuffixContext *alterMaterializedViewStatementSuffix();
    Db_schemaContext *db_schema();
    AlterDatabaseStatementSuffixContext *alterDatabaseStatementSuffix();
    antlr4::tree::TerminalNode *KW_DATACONNECTOR();
    AlterDataConnectorStatementSuffixContext *alterDataConnectorStatementSuffix();
    antlr4::tree::TerminalNode *KW_AS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterStatementContext* alterStatement();

  class  AlterTableStatementSuffixContext : public antlr4::ParserRuleContext {
  public:
    AlterTableStatementSuffixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AlterStatementSuffixRenameContext *alterStatementSuffixRename();
    AlterStatementSuffixDropPartitionsContext *alterStatementSuffixDropPartitions();
    AlterStatementSuffixAddPartitionsContext *alterStatementSuffixAddPartitions();
    AlterStatementSuffixTouchContext *alterStatementSuffixTouch();
    AlterStatementSuffixArchiveContext *alterStatementSuffixArchive();
    AlterStatementSuffixUnArchiveContext *alterStatementSuffixUnArchive();
    AlterStatementSuffixPropertiesContext *alterStatementSuffixProperties();
    AlterStatementSuffixSkewedbyContext *alterStatementSuffixSkewedby();
    AlterStatementSuffixExchangePartitionContext *alterStatementSuffixExchangePartition();
    AlterStatementPartitionKeyTypeContext *alterStatementPartitionKeyType();
    AlterStatementSuffixDropConstraintContext *alterStatementSuffixDropConstraint();
    AlterStatementSuffixAddConstraintContext *alterStatementSuffixAddConstraint();
    AlterTblPartitionStatementSuffixContext *alterTblPartitionStatementSuffix();
    PartitionSpecContext *partitionSpec();
    AlterStatementSuffixSetOwnerContext *alterStatementSuffixSetOwner();
    AlterStatementSuffixSetPartSpecContext *alterStatementSuffixSetPartSpec();
    AlterStatementSuffixExecuteContext *alterStatementSuffixExecute();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterTableStatementSuffixContext* alterTableStatementSuffix();

  class  AlterStatementSuffixRenameContext : public antlr4::ParserRuleContext {
  public:
    AlterStatementSuffixRenameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_RENAME();
    antlr4::tree::TerminalNode *KW_TO();
    TableNameContext *tableName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterStatementSuffixRenameContext* alterStatementSuffixRename();

  class  AlterStatementSuffixDropPartitionsContext : public antlr4::ParserRuleContext {
  public:
    AlterStatementSuffixDropPartitionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_DROP();
    std::vector<antlr4::tree::TerminalNode *> KW_PARTITION();
    antlr4::tree::TerminalNode* KW_PARTITION(size_t i);
    std::vector<PartitionSelectorSpecContext *> partitionSelectorSpec();
    PartitionSelectorSpecContext* partitionSelectorSpec(size_t i);
    IfExistsContext *ifExists();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *KW_PURGE();
    ReplicationClauseContext *replicationClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterStatementSuffixDropPartitionsContext* alterStatementSuffixDropPartitions();

  class  PartitionSelectorSpecContext : public antlr4::ParserRuleContext {
  public:
    PartitionSelectorSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<PartitionSelectorValContext *> partitionSelectorVal();
    PartitionSelectorValContext* partitionSelectorVal(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionSelectorSpecContext* partitionSelectorSpec();

  class  PartitionSelectorValContext : public antlr4::ParserRuleContext {
  public:
    PartitionSelectorValContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    PartitionSelectorOperatorContext *partitionSelectorOperator();
    ConstantContext *constant();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionSelectorValContext* partitionSelectorVal();

  class  PartitionSelectorOperatorContext : public antlr4::ParserRuleContext {
  public:
    PartitionSelectorOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_LIKE();
    SubQuerySelectorOperatorContext *subQuerySelectorOperator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionSelectorOperatorContext* partitionSelectorOperator();

  class  AlterStatementSuffixAddPartitionsContext : public antlr4::ParserRuleContext {
  public:
    AlterStatementSuffixAddPartitionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_ADD();
    IfNotExistsContext *ifNotExists();
    std::vector<AlterStatementSuffixAddPartitionsElementContext *> alterStatementSuffixAddPartitionsElement();
    AlterStatementSuffixAddPartitionsElementContext* alterStatementSuffixAddPartitionsElement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterStatementSuffixAddPartitionsContext* alterStatementSuffixAddPartitions();

  class  AlterStatementSuffixAddPartitionsElementContext : public antlr4::ParserRuleContext {
  public:
    AlterStatementSuffixAddPartitionsElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PartitionSpecContext *partitionSpec();
    PartitionLocationContext *partitionLocation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterStatementSuffixAddPartitionsElementContext* alterStatementSuffixAddPartitionsElement();

  class  PartitionLocationContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *locn = nullptr;
    PartitionLocationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_LOCATION();
    antlr4::tree::TerminalNode *StringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionLocationContext* partitionLocation();

  class  AlterStatementSuffixTouchContext : public antlr4::ParserRuleContext {
  public:
    AlterStatementSuffixTouchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_TOUCH();
    std::vector<PartitionSpecContext *> partitionSpec();
    PartitionSpecContext* partitionSpec(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterStatementSuffixTouchContext* alterStatementSuffixTouch();

  class  AlterStatementSuffixArchiveContext : public antlr4::ParserRuleContext {
  public:
    AlterStatementSuffixArchiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_ARCHIVE();
    std::vector<PartitionSpecContext *> partitionSpec();
    PartitionSpecContext* partitionSpec(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterStatementSuffixArchiveContext* alterStatementSuffixArchive();

  class  AlterStatementSuffixUnArchiveContext : public antlr4::ParserRuleContext {
  public:
    AlterStatementSuffixUnArchiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_UNARCHIVE();
    std::vector<PartitionSpecContext *> partitionSpec();
    PartitionSpecContext* partitionSpec(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterStatementSuffixUnArchiveContext* alterStatementSuffixUnArchive();

  class  AlterStatementSuffixPropertiesContext : public antlr4::ParserRuleContext {
  public:
    AlterStatementSuffixPropertiesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_SET();
    antlr4::tree::TerminalNode *KW_TBLPROPERTIES();
    TablePropertiesContext *tableProperties();
    antlr4::tree::TerminalNode *KW_UNSET();
    IfExistsContext *ifExists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterStatementSuffixPropertiesContext* alterStatementSuffixProperties();

  class  AlterStatementSuffixSkewedbyContext : public antlr4::ParserRuleContext {
  public:
    AlterStatementSuffixSkewedbyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableSkewedContext *tableSkewed();
    antlr4::tree::TerminalNode *KW_NOT();
    antlr4::tree::TerminalNode *KW_SKEWED();
    StoredAsDirsContext *storedAsDirs();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterStatementSuffixSkewedbyContext* alterStatementSuffixSkewedby();

  class  AlterStatementSuffixExchangePartitionContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::TableNameContext *exchangename = nullptr;
    AlterStatementSuffixExchangePartitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_EXCHANGE();
    PartitionSpecContext *partitionSpec();
    antlr4::tree::TerminalNode *KW_WITH();
    antlr4::tree::TerminalNode *KW_TABLE();
    TableNameContext *tableName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterStatementSuffixExchangePartitionContext* alterStatementSuffixExchangePartition();

  class  AlterStatementPartitionKeyTypeContext : public antlr4::ParserRuleContext {
  public:
    AlterStatementPartitionKeyTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_PARTITION();
    antlr4::tree::TerminalNode *KW_COLUMN();
    antlr4::tree::TerminalNode *LPAREN();
    ColumnNameTypeContext *columnNameType();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterStatementPartitionKeyTypeContext* alterStatementPartitionKeyType();

  class  ColumnNameTypeContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *colName = nullptr;
    antlr4::Token *comment = nullptr;
    ColumnNameTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColTypeContext *colType();
    Id_Context *id_();
    antlr4::tree::TerminalNode *KW_COMMENT();
    antlr4::tree::TerminalNode *StringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnNameTypeContext* columnNameType();

  class  AlterStatementSuffixDropConstraintContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *cName = nullptr;
    AlterStatementSuffixDropConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_DROP();
    antlr4::tree::TerminalNode *KW_CONSTRAINT();
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterStatementSuffixDropConstraintContext* alterStatementSuffixDropConstraint();

  class  AlterStatementSuffixAddConstraintContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::AlterForeignKeyWithNameContext *fk = nullptr;
    AlterStatementSuffixAddConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_ADD();
    AlterConstraintWithNameContext *alterConstraintWithName();
    AlterForeignKeyWithNameContext *alterForeignKeyWithName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterStatementSuffixAddConstraintContext* alterStatementSuffixAddConstraint();

  class  AlterForeignKeyWithNameContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *constraintName = nullptr;
    TplSqlParser::ColumnParenthesesListContext *fkCols = nullptr;
    TplSqlParser::TableNameContext *tabName = nullptr;
    TplSqlParser::ColumnParenthesesListContext *parCols = nullptr;
    AlterForeignKeyWithNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_CONSTRAINT();
    antlr4::tree::TerminalNode *KW_FOREIGN();
    antlr4::tree::TerminalNode *KW_KEY();
    antlr4::tree::TerminalNode *KW_REFERENCES();
    Id_Context *id_();
    std::vector<ColumnParenthesesListContext *> columnParenthesesList();
    ColumnParenthesesListContext* columnParenthesesList(size_t i);
    TableNameContext *tableName();
    ConstraintOptsAlterContext *constraintOptsAlter();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterForeignKeyWithNameContext* alterForeignKeyWithName();

  class  ConstraintOptsAlterContext : public antlr4::ParserRuleContext {
  public:
    ConstraintOptsAlterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnableValidateSpecificationContext *enableValidateSpecification();
    RelySpecificationContext *relySpecification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstraintOptsAlterContext* constraintOptsAlter();

  class  AlterConstraintWithNameContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *constraintName = nullptr;
    AlterConstraintWithNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_CONSTRAINT();
    TableLevelConstraintContext *tableLevelConstraint();
    Id_Context *id_();
    ConstraintOptsAlterContext *constraintOptsAlter();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterConstraintWithNameContext* alterConstraintWithName();

  class  AlterTblPartitionStatementSuffixContext : public antlr4::ParserRuleContext {
  public:
    AlterTblPartitionStatementSuffixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AlterStatementSuffixFileFormatContext *alterStatementSuffixFileFormat();
    AlterStatementSuffixLocationContext *alterStatementSuffixLocation();
    AlterStatementSuffixMergeFilesContext *alterStatementSuffixMergeFiles();
    AlterStatementSuffixSerdePropertiesContext *alterStatementSuffixSerdeProperties();
    AlterStatementSuffixRenamePartContext *alterStatementSuffixRenamePart();
    AlterStatementSuffixBucketNumContext *alterStatementSuffixBucketNum();
    AlterTblPartitionStatementSuffixSkewedLocationContext *alterTblPartitionStatementSuffixSkewedLocation();
    AlterStatementSuffixClusterbySortbyContext *alterStatementSuffixClusterbySortby();
    AlterStatementSuffixCompactContext *alterStatementSuffixCompact();
    AlterStatementSuffixUpdateStatsColContext *alterStatementSuffixUpdateStatsCol();
    AlterStatementSuffixUpdateStatsContext *alterStatementSuffixUpdateStats();
    AlterStatementSuffixRenameColContext *alterStatementSuffixRenameCol();
    AlterStatementSuffixAddColContext *alterStatementSuffixAddCol();
    AlterStatementSuffixUpdateColumnsContext *alterStatementSuffixUpdateColumns();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterTblPartitionStatementSuffixContext* alterTblPartitionStatementSuffix();

  class  AlterStatementSuffixFileFormatContext : public antlr4::ParserRuleContext {
  public:
    AlterStatementSuffixFileFormatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_SET();
    antlr4::tree::TerminalNode *KW_FILEFORMAT();
    FileFormatContext *fileFormat();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterStatementSuffixFileFormatContext* alterStatementSuffixFileFormat();

  class  FileFormatContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *inFmt = nullptr;
    antlr4::Token *outFmt = nullptr;
    antlr4::Token *serdeCls = nullptr;
    antlr4::Token *inDriver = nullptr;
    antlr4::Token *outDriver = nullptr;
    TplSqlParser::Id_Context *genericSpec = nullptr;
    FileFormatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_INPUTFORMAT();
    antlr4::tree::TerminalNode *KW_OUTPUTFORMAT();
    antlr4::tree::TerminalNode *KW_SERDE();
    std::vector<antlr4::tree::TerminalNode *> StringLiteral();
    antlr4::tree::TerminalNode* StringLiteral(size_t i);
    antlr4::tree::TerminalNode *KW_INPUTDRIVER();
    antlr4::tree::TerminalNode *KW_OUTPUTDRIVER();
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FileFormatContext* fileFormat();

  class  AlterStatementSuffixLocationContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *newLoc = nullptr;
    AlterStatementSuffixLocationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_SET();
    antlr4::tree::TerminalNode *KW_LOCATION();
    antlr4::tree::TerminalNode *StringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterStatementSuffixLocationContext* alterStatementSuffixLocation();

  class  AlterStatementSuffixMergeFilesContext : public antlr4::ParserRuleContext {
  public:
    AlterStatementSuffixMergeFilesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_CONCATENATE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterStatementSuffixMergeFilesContext* alterStatementSuffixMergeFiles();

  class  AlterStatementSuffixSerdePropertiesContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *serdeName = nullptr;
    AlterStatementSuffixSerdePropertiesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_SET();
    antlr4::tree::TerminalNode *KW_SERDE();
    antlr4::tree::TerminalNode *KW_SERDEPROPERTIES();
    TablePropertiesContext *tableProperties();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *KW_WITH();
    antlr4::tree::TerminalNode *KW_UNSET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterStatementSuffixSerdePropertiesContext* alterStatementSuffixSerdeProperties();

  class  AlterStatementSuffixRenamePartContext : public antlr4::ParserRuleContext {
  public:
    AlterStatementSuffixRenamePartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_RENAME();
    antlr4::tree::TerminalNode *KW_TO();
    PartitionSpecContext *partitionSpec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterStatementSuffixRenamePartContext* alterStatementSuffixRenamePart();

  class  AlterStatementSuffixBucketNumContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *num = nullptr;
    AlterStatementSuffixBucketNumContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_INTO();
    antlr4::tree::TerminalNode *KW_BUCKETS();
    antlr4::tree::TerminalNode *Number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterStatementSuffixBucketNumContext* alterStatementSuffixBucketNum();

  class  AlterTblPartitionStatementSuffixSkewedLocationContext : public antlr4::ParserRuleContext {
  public:
    AlterTblPartitionStatementSuffixSkewedLocationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_SET();
    antlr4::tree::TerminalNode *KW_SKEWED();
    antlr4::tree::TerminalNode *KW_LOCATION();
    SkewedLocationsContext *skewedLocations();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterTblPartitionStatementSuffixSkewedLocationContext* alterTblPartitionStatementSuffixSkewedLocation();

  class  SkewedLocationsContext : public antlr4::ParserRuleContext {
  public:
    SkewedLocationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    SkewedLocationsListContext *skewedLocationsList();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SkewedLocationsContext* skewedLocations();

  class  SkewedLocationsListContext : public antlr4::ParserRuleContext {
  public:
    SkewedLocationsListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SkewedLocationMapContext *> skewedLocationMap();
    SkewedLocationMapContext* skewedLocationMap(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SkewedLocationsListContext* skewedLocationsList();

  class  SkewedLocationMapContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::SkewedValueLocationElementContext *key = nullptr;
    antlr4::Token *value = nullptr;
    SkewedLocationMapContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL();
    SkewedValueLocationElementContext *skewedValueLocationElement();
    antlr4::tree::TerminalNode *StringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SkewedLocationMapContext* skewedLocationMap();

  class  SkewedValueLocationElementContext : public antlr4::ParserRuleContext {
  public:
    SkewedValueLocationElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SkewedColumnValueContext *skewedColumnValue();
    SkewedColumnValuePairContext *skewedColumnValuePair();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SkewedValueLocationElementContext* skewedValueLocationElement();

  class  AlterStatementSuffixClusterbySortbyContext : public antlr4::ParserRuleContext {
  public:
    AlterStatementSuffixClusterbySortbyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_NOT();
    antlr4::tree::TerminalNode *KW_CLUSTERED();
    antlr4::tree::TerminalNode *KW_SORTED();
    TableBucketsContext *tableBuckets();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterStatementSuffixClusterbySortbyContext* alterStatementSuffixClusterbySortby();

  class  AlterStatementSuffixCompactContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *compactType = nullptr;
    AlterStatementSuffixCompactContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_COMPACT();
    antlr4::tree::TerminalNode *StringLiteral();
    TableImplBucketsContext *tableImplBuckets();
    BlockingContext *blocking();
    CompactPoolContext *compactPool();
    antlr4::tree::TerminalNode *KW_WITH();
    antlr4::tree::TerminalNode *KW_OVERWRITE();
    antlr4::tree::TerminalNode *KW_TBLPROPERTIES();
    TablePropertiesContext *tableProperties();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterStatementSuffixCompactContext* alterStatementSuffixCompact();

  class  TableImplBucketsContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *num = nullptr;
    TableImplBucketsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_CLUSTERED();
    antlr4::tree::TerminalNode *KW_INTO();
    antlr4::tree::TerminalNode *KW_BUCKETS();
    antlr4::tree::TerminalNode *Number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableImplBucketsContext* tableImplBuckets();

  class  BlockingContext : public antlr4::ParserRuleContext {
  public:
    BlockingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_AND();
    antlr4::tree::TerminalNode *KW_WAIT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockingContext* blocking();

  class  CompactPoolContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *poolName = nullptr;
    CompactPoolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_POOL();
    antlr4::tree::TerminalNode *StringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompactPoolContext* compactPool();

  class  AlterStatementSuffixUpdateStatsColContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *colName = nullptr;
    antlr4::Token *comment = nullptr;
    AlterStatementSuffixUpdateStatsColContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_UPDATE();
    antlr4::tree::TerminalNode *KW_STATISTICS();
    antlr4::tree::TerminalNode *KW_FOR();
    antlr4::tree::TerminalNode *KW_SET();
    TablePropertiesContext *tableProperties();
    Id_Context *id_();
    antlr4::tree::TerminalNode *KW_COLUMN();
    antlr4::tree::TerminalNode *KW_COMMENT();
    antlr4::tree::TerminalNode *StringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterStatementSuffixUpdateStatsColContext* alterStatementSuffixUpdateStatsCol();

  class  AlterStatementSuffixUpdateStatsContext : public antlr4::ParserRuleContext {
  public:
    AlterStatementSuffixUpdateStatsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_UPDATE();
    antlr4::tree::TerminalNode *KW_STATISTICS();
    antlr4::tree::TerminalNode *KW_SET();
    TablePropertiesContext *tableProperties();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterStatementSuffixUpdateStatsContext* alterStatementSuffixUpdateStats();

  class  AlterStatementSuffixRenameColContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *oldName = nullptr;
    TplSqlParser::Id_Context *newName = nullptr;
    antlr4::Token *comment = nullptr;
    AlterStatementSuffixRenameColContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_CHANGE();
    ColTypeContext *colType();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *KW_COLUMN();
    AlterColumnConstraintContext *alterColumnConstraint();
    antlr4::tree::TerminalNode *KW_COMMENT();
    AlterStatementChangeColPositionContext *alterStatementChangeColPosition();
    RestrictOrCascadeContext *restrictOrCascade();
    antlr4::tree::TerminalNode *StringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterStatementSuffixRenameColContext* alterStatementSuffixRenameCol();

  class  AlterColumnConstraintContext : public antlr4::ParserRuleContext {
  public:
    AlterColumnConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AlterForeignKeyConstraintContext *alterForeignKeyConstraint();
    AlterColConstraintContext *alterColConstraint();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterColumnConstraintContext* alterColumnConstraint();

  class  AlterForeignKeyConstraintContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *constraintName = nullptr;
    TplSqlParser::TableNameContext *tabName = nullptr;
    TplSqlParser::ColumnNameContext *colName = nullptr;
    AlterForeignKeyConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_REFERENCES();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    TableNameContext *tableName();
    ColumnNameContext *columnName();
    antlr4::tree::TerminalNode *KW_CONSTRAINT();
    ConstraintOptsAlterContext *constraintOptsAlter();
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterForeignKeyConstraintContext* alterForeignKeyConstraint();

  class  AlterColConstraintContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *constraintName = nullptr;
    AlterColConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColumnConstraintTypeContext *columnConstraintType();
    antlr4::tree::TerminalNode *KW_CONSTRAINT();
    ConstraintOptsAlterContext *constraintOptsAlter();
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterColConstraintContext* alterColConstraint();

  class  AlterStatementChangeColPositionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *first = nullptr;
    TplSqlParser::Id_Context *afterCol = nullptr;
    AlterStatementChangeColPositionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_FIRST();
    antlr4::tree::TerminalNode *KW_AFTER();
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterStatementChangeColPositionContext* alterStatementChangeColPosition();

  class  AlterStatementSuffixAddColContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *add = nullptr;
    antlr4::Token *replace = nullptr;
    AlterStatementSuffixAddColContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_COLUMNS();
    antlr4::tree::TerminalNode *LPAREN();
    ColumnNameTypeListContext *columnNameTypeList();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *KW_ADD();
    antlr4::tree::TerminalNode *KW_REPLACE();
    RestrictOrCascadeContext *restrictOrCascade();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterStatementSuffixAddColContext* alterStatementSuffixAddCol();

  class  ColumnNameTypeListContext : public antlr4::ParserRuleContext {
  public:
    ColumnNameTypeListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ColumnNameTypeContext *> columnNameType();
    ColumnNameTypeContext* columnNameType(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnNameTypeListContext* columnNameTypeList();

  class  AlterStatementSuffixUpdateColumnsContext : public antlr4::ParserRuleContext {
  public:
    AlterStatementSuffixUpdateColumnsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_UPDATE();
    antlr4::tree::TerminalNode *KW_COLUMNS();
    RestrictOrCascadeContext *restrictOrCascade();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterStatementSuffixUpdateColumnsContext* alterStatementSuffixUpdateColumns();

  class  AlterStatementSuffixSetOwnerContext : public antlr4::ParserRuleContext {
  public:
    AlterStatementSuffixSetOwnerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_SET();
    antlr4::tree::TerminalNode *KW_OWNER();
    PrincipalNameContext *principalName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterStatementSuffixSetOwnerContext* alterStatementSuffixSetOwner();

  class  PrincipalNameContext : public antlr4::ParserRuleContext {
  public:
    PrincipalNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_USER();
    PrincipalIdentifierContext *principalIdentifier();
    antlr4::tree::TerminalNode *KW_GROUP();
    antlr4::tree::TerminalNode *KW_ROLE();
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrincipalNameContext* principalName();

  class  PrincipalIdentifierContext : public antlr4::ParserRuleContext {
  public:
    PrincipalIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrincipalIdentifierContext* principalIdentifier();

  class  AlterStatementSuffixSetPartSpecContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::PartitionTransformSpecContext *spec = nullptr;
    AlterStatementSuffixSetPartSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_SET();
    antlr4::tree::TerminalNode *KW_PARTITION();
    antlr4::tree::TerminalNode *KW_SPEC();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    PartitionTransformSpecContext *partitionTransformSpec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterStatementSuffixSetPartSpecContext* alterStatementSuffixSetPartSpec();

  class  AlterStatementSuffixExecuteContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *rollbackParam = nullptr;
    antlr4::Token *expireParam = nullptr;
    antlr4::Token *snapshotParam = nullptr;
    AlterStatementSuffixExecuteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_EXECUTE();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *KW_ROLLBACK();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *KW_EXPIRE_SNAPSHOTS();
    antlr4::tree::TerminalNode *KW_SET_CURRENT_SNAPSHOT();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *Number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterStatementSuffixExecuteContext* alterStatementSuffixExecute();

  class  AlterViewStatementSuffixContext : public antlr4::ParserRuleContext {
  public:
    AlterViewStatementSuffixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AlterViewSuffixPropertiesContext *alterViewSuffixProperties();
    AlterStatementSuffixRenameContext *alterStatementSuffixRename();
    AlterStatementSuffixAddPartitionsContext *alterStatementSuffixAddPartitions();
    AlterStatementSuffixDropPartitionsContext *alterStatementSuffixDropPartitions();
    SelectStatementWithCTEContext *selectStatementWithCTE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterViewStatementSuffixContext* alterViewStatementSuffix();

  class  AlterViewSuffixPropertiesContext : public antlr4::ParserRuleContext {
  public:
    AlterViewSuffixPropertiesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_SET();
    antlr4::tree::TerminalNode *KW_TBLPROPERTIES();
    TablePropertiesContext *tableProperties();
    antlr4::tree::TerminalNode *KW_UNSET();
    IfExistsContext *ifExists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterViewSuffixPropertiesContext* alterViewSuffixProperties();

  class  AlterMaterializedViewStatementSuffixContext : public antlr4::ParserRuleContext {
  public:
    AlterMaterializedViewStatementSuffixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AlterMaterializedViewSuffixRewriteContext *alterMaterializedViewSuffixRewrite();
    AlterMaterializedViewSuffixRebuildContext *alterMaterializedViewSuffixRebuild();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterMaterializedViewStatementSuffixContext* alterMaterializedViewStatementSuffix();

  class  AlterMaterializedViewSuffixRewriteContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::RewriteEnabledContext *mvRewriteFlag = nullptr;
    TplSqlParser::RewriteDisabledContext *mvRewriteFlag2 = nullptr;
    AlterMaterializedViewSuffixRewriteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RewriteEnabledContext *rewriteEnabled();
    RewriteDisabledContext *rewriteDisabled();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterMaterializedViewSuffixRewriteContext* alterMaterializedViewSuffixRewrite();

  class  RewriteEnabledContext : public antlr4::ParserRuleContext {
  public:
    RewriteEnabledContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_ENABLE();
    antlr4::tree::TerminalNode *KW_REWRITE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RewriteEnabledContext* rewriteEnabled();

  class  RewriteDisabledContext : public antlr4::ParserRuleContext {
  public:
    RewriteDisabledContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_DISABLE();
    antlr4::tree::TerminalNode *KW_REWRITE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RewriteDisabledContext* rewriteDisabled();

  class  AlterMaterializedViewSuffixRebuildContext : public antlr4::ParserRuleContext {
  public:
    AlterMaterializedViewSuffixRebuildContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_REBUILD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterMaterializedViewSuffixRebuildContext* alterMaterializedViewSuffixRebuild();

  class  AlterDatabaseStatementSuffixContext : public antlr4::ParserRuleContext {
  public:
    AlterDatabaseStatementSuffixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AlterDatabaseSuffixPropertiesContext *alterDatabaseSuffixProperties();
    AlterDatabaseSuffixSetOwnerContext *alterDatabaseSuffixSetOwner();
    AlterDatabaseSuffixSetLocationContext *alterDatabaseSuffixSetLocation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterDatabaseStatementSuffixContext* alterDatabaseStatementSuffix();

  class  AlterDatabaseSuffixPropertiesContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *name = nullptr;
    AlterDatabaseSuffixPropertiesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_SET();
    antlr4::tree::TerminalNode *KW_DBPROPERTIES();
    DbPropertiesContext *dbProperties();
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterDatabaseSuffixPropertiesContext* alterDatabaseSuffixProperties();

  class  AlterDatabaseSuffixSetOwnerContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *dbName = nullptr;
    AlterDatabaseSuffixSetOwnerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_SET();
    antlr4::tree::TerminalNode *KW_OWNER();
    PrincipalNameContext *principalName();
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterDatabaseSuffixSetOwnerContext* alterDatabaseSuffixSetOwner();

  class  AlterDatabaseSuffixSetLocationContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *dbName = nullptr;
    antlr4::Token *newLocation = nullptr;
    AlterDatabaseSuffixSetLocationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_SET();
    Id_Context *id_();
    antlr4::tree::TerminalNode *KW_LOCATION();
    antlr4::tree::TerminalNode *KW_MANAGEDLOCATION();
    antlr4::tree::TerminalNode *StringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterDatabaseSuffixSetLocationContext* alterDatabaseSuffixSetLocation();

  class  AlterDataConnectorStatementSuffixContext : public antlr4::ParserRuleContext {
  public:
    AlterDataConnectorStatementSuffixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AlterDataConnectorSuffixPropertiesContext *alterDataConnectorSuffixProperties();
    AlterDataConnectorSuffixSetOwnerContext *alterDataConnectorSuffixSetOwner();
    AlterDataConnectorSuffixSetUrlContext *alterDataConnectorSuffixSetUrl();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterDataConnectorStatementSuffixContext* alterDataConnectorStatementSuffix();

  class  AlterDataConnectorSuffixPropertiesContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *name = nullptr;
    AlterDataConnectorSuffixPropertiesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_SET();
    antlr4::tree::TerminalNode *KW_DCPROPERTIES();
    DcPropertiesContext *dcProperties();
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterDataConnectorSuffixPropertiesContext* alterDataConnectorSuffixProperties();

  class  DcPropertiesContext : public antlr4::ParserRuleContext {
  public:
    DcPropertiesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    DbPropertiesListContext *dbPropertiesList();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DcPropertiesContext* dcProperties();

  class  AlterDataConnectorSuffixSetOwnerContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *dcName = nullptr;
    AlterDataConnectorSuffixSetOwnerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_SET();
    antlr4::tree::TerminalNode *KW_OWNER();
    PrincipalNameContext *principalName();
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterDataConnectorSuffixSetOwnerContext* alterDataConnectorSuffixSetOwner();

  class  AlterDataConnectorSuffixSetUrlContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *dcName = nullptr;
    antlr4::Token *newUri = nullptr;
    AlterDataConnectorSuffixSetUrlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_SET();
    antlr4::tree::TerminalNode *KW_URL();
    Id_Context *id_();
    antlr4::tree::TerminalNode *StringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterDataConnectorSuffixSetUrlContext* alterDataConnectorSuffixSetUrl();

  class  DescStatementContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *dbName = nullptr;
    TplSqlParser::Id_Context *dcName = nullptr;
    TplSqlParser::DescFuncNamesContext *name = nullptr;
    antlr4::Token *descOptions = nullptr;
    TplSqlParser::TabPartColTypeExprContext *parttype = nullptr;
    DescStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_DESCRIBE();
    antlr4::tree::TerminalNode *KW_DESC();
    Db_schemaContext *db_schema();
    antlr4::tree::TerminalNode *KW_DATACONNECTOR();
    antlr4::tree::TerminalNode *KW_FUNCTION();
    Id_Context *id_();
    DescFuncNamesContext *descFuncNames();
    TabPartColTypeExprContext *tabPartColTypeExpr();
    antlr4::tree::TerminalNode *KW_EXTENDED();
    antlr4::tree::TerminalNode *KW_FORMATTED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DescStatementContext* descStatement();

  class  DescFuncNamesContext : public antlr4::ParserRuleContext {
  public:
    DescFuncNamesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SysFuncNamesContext *sysFuncNames();
    antlr4::tree::TerminalNode *StringLiteral();
    FunctionIdentifierContext *functionIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DescFuncNamesContext* descFuncNames();

  class  SysFuncNamesContext : public antlr4::ParserRuleContext {
  public:
    SysFuncNamesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_AND();
    antlr4::tree::TerminalNode *KW_OR();
    antlr4::tree::TerminalNode *KW_NOT();
    antlr4::tree::TerminalNode *KW_LIKE();
    antlr4::tree::TerminalNode *KW_IF();
    antlr4::tree::TerminalNode *KW_CASE();
    antlr4::tree::TerminalNode *KW_WHEN();
    antlr4::tree::TerminalNode *KW_FLOOR();
    antlr4::tree::TerminalNode *KW_TINYINT();
    antlr4::tree::TerminalNode *KW_SMALLINT();
    antlr4::tree::TerminalNode *KW_INT();
    antlr4::tree::TerminalNode *KW_BIGINT();
    antlr4::tree::TerminalNode *KW_FLOAT();
    antlr4::tree::TerminalNode *KW_REAL();
    antlr4::tree::TerminalNode *KW_DOUBLE();
    antlr4::tree::TerminalNode *KW_BOOLEAN();
    antlr4::tree::TerminalNode *KW_STRING();
    antlr4::tree::TerminalNode *KW_BINARY();
    antlr4::tree::TerminalNode *KW_ARRAY();
    antlr4::tree::TerminalNode *KW_MAP();
    antlr4::tree::TerminalNode *KW_STRUCT();
    antlr4::tree::TerminalNode *KW_UNIONTYPE();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *EQUAL_NS();
    antlr4::tree::TerminalNode *NOTEQUAL();
    antlr4::tree::TerminalNode *LESSTHANOREQUALTO();
    antlr4::tree::TerminalNode *LESSTHAN();
    antlr4::tree::TerminalNode *GREATERTHANOREQUALTO();
    antlr4::tree::TerminalNode *GREATERTHAN();
    antlr4::tree::TerminalNode *DIVIDE();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *MOD();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *AMPERSAND();
    antlr4::tree::TerminalNode *TILDE();
    antlr4::tree::TerminalNode *BITWISEOR();
    antlr4::tree::TerminalNode *BITWISEXOR();
    antlr4::tree::TerminalNode *KW_RLIKE();
    antlr4::tree::TerminalNode *KW_REGEXP();
    antlr4::tree::TerminalNode *KW_IN();
    antlr4::tree::TerminalNode *KW_BETWEEN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SysFuncNamesContext* sysFuncNames();

  class  TabPartColTypeExprContext : public antlr4::ParserRuleContext {
  public:
    TabPartColTypeExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableNameContext *tableName();
    PartitionSpecContext *partitionSpec();
    ExtColumnNameContext *extColumnName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TabPartColTypeExprContext* tabPartColTypeExpr();

  class  ExtColumnNameContext : public antlr4::ParserRuleContext {
  public:
    ExtColumnNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> KW_ELEM_TYPE();
    antlr4::tree::TerminalNode* KW_ELEM_TYPE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> KW_KEY_TYPE();
    antlr4::tree::TerminalNode* KW_KEY_TYPE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> KW_VALUE_TYPE();
    antlr4::tree::TerminalNode* KW_VALUE_TYPE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExtColumnNameContext* extColumnName();

  class  ShowStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *isExtended = nullptr;
    TplSqlParser::Id_Context *db_name = nullptr;
    TplSqlParser::ShowTablesFilterExprContext *filter = nullptr;
    TplSqlParser::TableNameContext *tabName = nullptr;
    antlr4::Token *prptyName = nullptr;
    TplSqlParser::Id_Context *dbName = nullptr;
    TplSqlParser::PartTypeExprContext *parttype = nullptr;
    TplSqlParser::Id_Context *rp_name = nullptr;
    ShowStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_SHOW();
    antlr4::tree::TerminalNode *KW_DATABASES();
    antlr4::tree::TerminalNode *KW_SCHEMAS();
    antlr4::tree::TerminalNode *KW_LIKE();
    ShowStmtIdentifierContext *showStmtIdentifier();
    antlr4::tree::TerminalNode *KW_TABLES();
    std::vector<From_inContext *> from_in();
    From_inContext* from_in(size_t i);
    antlr4::tree::TerminalNode *KW_EXTENDED();
    Id_Context *id_();
    ShowTablesFilterExprContext *showTablesFilterExpr();
    antlr4::tree::TerminalNode *KW_VIEWS();
    antlr4::tree::TerminalNode *KW_MATERIALIZED();
    antlr4::tree::TerminalNode *KW_COLUMNS();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *KW_SORTED();
    antlr4::tree::TerminalNode *KW_FUNCTIONS();
    ShowFunctionIdentifierContext *showFunctionIdentifier();
    antlr4::tree::TerminalNode *KW_PARTITIONS();
    PartitionSpecContext *partitionSpec();
    WhereClauseContext *whereClause();
    OrderByClauseContext *orderByClause();
    LimitClauseContext *limitClause();
    antlr4::tree::TerminalNode *KW_CREATE();
    Db_schemaContext *db_schema();
    antlr4::tree::TerminalNode *KW_TABLE();
    antlr4::tree::TerminalNode *KW_TBLPROPERTIES();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *KW_LOCKS();
    PartTypeExprContext *partTypeExpr();
    antlr4::tree::TerminalNode *KW_COMPACTIONS();
    CompactionIdContext *compactionId();
    CompactionPoolContext *compactionPool();
    CompactionTypeContext *compactionType();
    CompactionStatusContext *compactionStatus();
    antlr4::tree::TerminalNode *KW_TRANSACTIONS();
    antlr4::tree::TerminalNode *KW_CONF();
    antlr4::tree::TerminalNode *KW_RESOURCE();
    antlr4::tree::TerminalNode *KW_PLAN();
    antlr4::tree::TerminalNode *KW_PLANS();
    antlr4::tree::TerminalNode *KW_DATACONNECTORS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowStatementContext* showStatement();

  class  ShowStmtIdentifierContext : public antlr4::ParserRuleContext {
  public:
    ShowStmtIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    antlr4::tree::TerminalNode *StringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowStmtIdentifierContext* showStmtIdentifier();

  class  From_inContext : public antlr4::ParserRuleContext {
  public:
    From_inContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_FROM();
    antlr4::tree::TerminalNode *KW_IN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  From_inContext* from_in();

  class  ShowTablesFilterExprContext : public antlr4::ParserRuleContext {
  public:
    ShowTablesFilterExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_WHERE();
    Id_Context *id_();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *KW_LIKE();
    ShowStmtIdentifierContext *showStmtIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowTablesFilterExprContext* showTablesFilterExpr();

  class  ShowFunctionIdentifierContext : public antlr4::ParserRuleContext {
  public:
    ShowFunctionIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionIdentifierContext *functionIdentifier();
    antlr4::tree::TerminalNode *StringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowFunctionIdentifierContext* showFunctionIdentifier();

  class  PartTypeExprContext : public antlr4::ParserRuleContext {
  public:
    PartTypeExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TabTypeExprContext *tabTypeExpr();
    PartitionSpecContext *partitionSpec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartTypeExprContext* partTypeExpr();

  class  TabTypeExprContext : public antlr4::ParserRuleContext {
  public:
    TabTypeExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> KW_ELEM_TYPE();
    antlr4::tree::TerminalNode* KW_ELEM_TYPE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> KW_KEY_TYPE();
    antlr4::tree::TerminalNode* KW_KEY_TYPE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> KW_VALUE_TYPE();
    antlr4::tree::TerminalNode* KW_VALUE_TYPE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TabTypeExprContext* tabTypeExpr();

  class  CompactionIdContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *compactId = nullptr;
    CompactionIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_COMPACT_ID();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *Number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompactionIdContext* compactionId();

  class  CompactionPoolContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *poolName = nullptr;
    CompactionPoolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_POOL();
    antlr4::tree::TerminalNode *StringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompactionPoolContext* compactionPool();

  class  CompactionTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *compactType = nullptr;
    CompactionTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_TYPE();
    antlr4::tree::TerminalNode *StringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompactionTypeContext* compactionType();

  class  CompactionStatusContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *status = nullptr;
    CompactionStatusContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_STATUS();
    antlr4::tree::TerminalNode *StringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompactionStatusContext* compactionStatus();

  class  MetastoreCheckContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *repair = nullptr;
    antlr4::Token *opt = nullptr;
    antlr4::Token *parts = nullptr;
    MetastoreCheckContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_MSCK();
    antlr4::tree::TerminalNode *KW_TABLE();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *KW_REPAIR();
    antlr4::tree::TerminalNode *KW_PARTITIONS();
    antlr4::tree::TerminalNode *KW_ADD();
    antlr4::tree::TerminalNode *KW_DROP();
    antlr4::tree::TerminalNode *KW_SYNC();
    PartitionSelectorSpecContext *partitionSelectorSpec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MetastoreCheckContext* metastoreCheck();

  class  CreateViewStatementContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::TableNameContext *name = nullptr;
    CreateViewStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_CREATE();
    antlr4::tree::TerminalNode *KW_VIEW();
    antlr4::tree::TerminalNode *KW_AS();
    SelectStatementWithCTEContext *selectStatementWithCTE();
    TableNameContext *tableName();
    OrReplaceContext *orReplace();
    IfNotExistsContext *ifNotExists();
    antlr4::tree::TerminalNode *LPAREN();
    ColumnNameCommentListContext *columnNameCommentList();
    antlr4::tree::TerminalNode *RPAREN();
    TableCommentContext *tableComment();
    ViewPartitionContext *viewPartition();
    TablePropertiesPrefixedContext *tablePropertiesPrefixed();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateViewStatementContext* createViewStatement();

  class  OrReplaceContext : public antlr4::ParserRuleContext {
  public:
    OrReplaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_OR();
    antlr4::tree::TerminalNode *KW_REPLACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OrReplaceContext* orReplace();

  class  ColumnNameCommentListContext : public antlr4::ParserRuleContext {
  public:
    ColumnNameCommentListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ColumnNameCommentContext *> columnNameComment();
    ColumnNameCommentContext* columnNameComment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnNameCommentListContext* columnNameCommentList();

  class  ColumnNameCommentContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *colName = nullptr;
    antlr4::Token *comment = nullptr;
    ColumnNameCommentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    antlr4::tree::TerminalNode *KW_COMMENT();
    antlr4::tree::TerminalNode *StringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnNameCommentContext* columnNameComment();

  class  ViewPartitionContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::PartitionTransformSpecContext *spec = nullptr;
    ViewPartitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_PARTITIONED();
    antlr4::tree::TerminalNode *KW_ON();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *LPAREN();
    ColumnNameListContext *columnNameList();
    antlr4::tree::TerminalNode *KW_SPEC();
    PartitionTransformSpecContext *partitionTransformSpec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ViewPartitionContext* viewPartition();

  class  CreateMaterializedViewStatementContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::TableNameContext *name = nullptr;
    CreateMaterializedViewStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_CREATE();
    antlr4::tree::TerminalNode *KW_MATERIALIZED();
    antlr4::tree::TerminalNode *KW_VIEW();
    antlr4::tree::TerminalNode *KW_AS();
    SelectStatementWithCTEContext *selectStatementWithCTE();
    TableNameContext *tableName();
    IfNotExistsContext *ifNotExists();
    RewriteDisabledContext *rewriteDisabled();
    TableCommentContext *tableComment();
    ViewPartitionContext *viewPartition();
    ViewOrganizationContext *viewOrganization();
    TableRowFormatContext *tableRowFormat();
    TableFileFormatContext *tableFileFormat();
    TableLocationContext *tableLocation();
    TablePropertiesPrefixedContext *tablePropertiesPrefixed();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateMaterializedViewStatementContext* createMaterializedViewStatement();

  class  ViewOrganizationContext : public antlr4::ParserRuleContext {
  public:
    ViewOrganizationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ViewClusterSpecContext *viewClusterSpec();
    ViewComplexSpecContext *viewComplexSpec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ViewOrganizationContext* viewOrganization();

  class  ViewClusterSpecContext : public antlr4::ParserRuleContext {
  public:
    ViewClusterSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_CLUSTERED();
    antlr4::tree::TerminalNode *KW_ON();
    antlr4::tree::TerminalNode *LPAREN();
    ColumnNameListContext *columnNameList();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ViewClusterSpecContext* viewClusterSpec();

  class  ViewComplexSpecContext : public antlr4::ParserRuleContext {
  public:
    ViewComplexSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ViewDistSpecContext *viewDistSpec();
    ViewSortSpecContext *viewSortSpec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ViewComplexSpecContext* viewComplexSpec();

  class  ViewDistSpecContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::ColumnNameListContext *colList = nullptr;
    ViewDistSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_DISTRIBUTED();
    antlr4::tree::TerminalNode *KW_ON();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    ColumnNameListContext *columnNameList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ViewDistSpecContext* viewDistSpec();

  class  ViewSortSpecContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::ColumnNameListContext *colList = nullptr;
    ViewSortSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_SORTED();
    antlr4::tree::TerminalNode *KW_ON();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    ColumnNameListContext *columnNameList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ViewSortSpecContext* viewSortSpec();

  class  CreateScheduledQueryStatementContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *name = nullptr;
    CreateScheduledQueryStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_CREATE();
    antlr4::tree::TerminalNode *KW_SCHEDULED();
    antlr4::tree::TerminalNode *KW_QUERY();
    ScheduleSpecContext *scheduleSpec();
    DefinedAsSpecContext *definedAsSpec();
    Id_Context *id_();
    ExecutedAsSpecContext *executedAsSpec();
    EnableSpecificationContext *enableSpecification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateScheduledQueryStatementContext* createScheduledQueryStatement();

  class  ScheduleSpecContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *cronString = nullptr;
    antlr4::Token *value = nullptr;
    TplSqlParser::IntervalQualifiersContext *qualifier = nullptr;
    antlr4::Token *offsetTs = nullptr;
    ScheduleSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_CRON();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *KW_EVERY();
    IntervalQualifiersContext *intervalQualifiers();
    antlr4::tree::TerminalNode *Number();
    antlr4::tree::TerminalNode *KW_AT();
    antlr4::tree::TerminalNode *KW_OFFSET();
    antlr4::tree::TerminalNode *KW_BY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ScheduleSpecContext* scheduleSpec();

  class  ExecutedAsSpecContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *executedAs = nullptr;
    ExecutedAsSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_EXECUTED();
    antlr4::tree::TerminalNode *KW_AS();
    antlr4::tree::TerminalNode *StringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExecutedAsSpecContext* executedAsSpec();

  class  DefinedAsSpecContext : public antlr4::ParserRuleContext {
  public:
    DefinedAsSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_AS();
    StatementContext *statement();
    antlr4::tree::TerminalNode *KW_DEFINED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefinedAsSpecContext* definedAsSpec();

  class  AlterScheduledQueryStatementContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *name = nullptr;
    TplSqlParser::AlterScheduledQueryChangeContext *mod = nullptr;
    AlterScheduledQueryStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_ALTER();
    antlr4::tree::TerminalNode *KW_SCHEDULED();
    antlr4::tree::TerminalNode *KW_QUERY();
    Id_Context *id_();
    AlterScheduledQueryChangeContext *alterScheduledQueryChange();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterScheduledQueryStatementContext* alterScheduledQueryStatement();

  class  AlterScheduledQueryChangeContext : public antlr4::ParserRuleContext {
  public:
    AlterScheduledQueryChangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ScheduleSpecContext *scheduleSpec();
    ExecutedAsSpecContext *executedAsSpec();
    EnableSpecificationContext *enableSpecification();
    DefinedAsSpecContext *definedAsSpec();
    antlr4::tree::TerminalNode *KW_EXECUTE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterScheduledQueryChangeContext* alterScheduledQueryChange();

  class  DropScheduledQueryStatementContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *name = nullptr;
    DropScheduledQueryStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_DROP();
    antlr4::tree::TerminalNode *KW_SCHEDULED();
    antlr4::tree::TerminalNode *KW_QUERY();
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropScheduledQueryStatementContext* dropScheduledQueryStatement();

  class  DropViewStatementContext : public antlr4::ParserRuleContext {
  public:
    DropViewStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_DROP();
    antlr4::tree::TerminalNode *KW_VIEW();
    ViewNameContext *viewName();
    IfExistsContext *ifExists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropViewStatementContext* dropViewStatement();

  class  ViewNameContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *db = nullptr;
    TplSqlParser::Id_Context *view = nullptr;
    ViewNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ViewNameContext* viewName();

  class  DropMaterializedViewStatementContext : public antlr4::ParserRuleContext {
  public:
    DropMaterializedViewStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_DROP();
    antlr4::tree::TerminalNode *KW_MATERIALIZED();
    antlr4::tree::TerminalNode *KW_VIEW();
    ViewNameContext *viewName();
    IfExistsContext *ifExists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropMaterializedViewStatementContext* dropMaterializedViewStatement();

  class  CreateFunctionStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *temp = nullptr;
    TplSqlParser::ResourceListContext *rList = nullptr;
    CreateFunctionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_CREATE();
    antlr4::tree::TerminalNode *KW_FUNCTION();
    FunctionIdentifierContext *functionIdentifier();
    antlr4::tree::TerminalNode *KW_AS();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *KW_USING();
    antlr4::tree::TerminalNode *KW_TEMPORARY();
    ResourceListContext *resourceList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateFunctionStatementContext* createFunctionStatement();

  class  ResourceListContext : public antlr4::ParserRuleContext {
  public:
    ResourceListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ResourceContext *> resource();
    ResourceContext* resource(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResourceListContext* resourceList();

  class  ResourceContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::ResourceTypeContext *resType = nullptr;
    antlr4::Token *resPath = nullptr;
    ResourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ResourceTypeContext *resourceType();
    antlr4::tree::TerminalNode *StringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResourceContext* resource();

  class  ResourceTypeContext : public antlr4::ParserRuleContext {
  public:
    ResourceTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_JAR();
    antlr4::tree::TerminalNode *KW_DLL();
    antlr4::tree::TerminalNode *KW_FILE();
    antlr4::tree::TerminalNode *KW_ARCHIVE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResourceTypeContext* resourceType();

  class  CreateMacroStatementContext : public antlr4::ParserRuleContext {
  public:
    CreateMacroStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_CREATE();
    antlr4::tree::TerminalNode *KW_TEMPORARY();
    antlr4::tree::TerminalNode *KW_MACRO();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    ExpressionContext *expression();
    ColumnNameTypeListContext *columnNameTypeList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateMacroStatementContext* createMacroStatement();

  class  DropFunctionStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *temp = nullptr;
    DropFunctionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_DROP();
    antlr4::tree::TerminalNode *KW_FUNCTION();
    FunctionIdentifierContext *functionIdentifier();
    IfExistsContext *ifExists();
    antlr4::tree::TerminalNode *KW_TEMPORARY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropFunctionStatementContext* dropFunctionStatement();

  class  ReloadFunctionsStatementContext : public antlr4::ParserRuleContext {
  public:
    ReloadFunctionsStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_RELOAD();
    antlr4::tree::TerminalNode *KW_FUNCTIONS();
    antlr4::tree::TerminalNode *KW_FUNCTION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReloadFunctionsStatementContext* reloadFunctionsStatement();

  class  DropMacroStatementContext : public antlr4::ParserRuleContext {
  public:
    DropMacroStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_DROP();
    antlr4::tree::TerminalNode *KW_TEMPORARY();
    antlr4::tree::TerminalNode *KW_MACRO();
    antlr4::tree::TerminalNode *Identifier();
    IfExistsContext *ifExists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropMacroStatementContext* dropMacroStatement();

  class  AnalyzeStatementContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::TableOrPartitionContext *parttype = nullptr;
    antlr4::Token *noscan = nullptr;
    TplSqlParser::ColumnNameListContext *statsColumnName = nullptr;
    AnalyzeStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_ANALYZE();
    antlr4::tree::TerminalNode *KW_TABLE();
    TableOrPartitionContext *tableOrPartition();
    antlr4::tree::TerminalNode *KW_COMPUTE();
    antlr4::tree::TerminalNode *KW_STATISTICS();
    antlr4::tree::TerminalNode *KW_CACHE();
    antlr4::tree::TerminalNode *KW_METADATA();
    antlr4::tree::TerminalNode *KW_FOR();
    antlr4::tree::TerminalNode *KW_COLUMNS();
    antlr4::tree::TerminalNode *KW_NOSCAN();
    ColumnNameListContext *columnNameList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AnalyzeStatementContext* analyzeStatement();

  class  LockStatementContext : public antlr4::ParserRuleContext {
  public:
    LockStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_LOCK();
    antlr4::tree::TerminalNode *KW_TABLE();
    TableNameContext *tableName();
    LockModeContext *lockMode();
    PartitionSpecContext *partitionSpec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LockStatementContext* lockStatement();

  class  LockModeContext : public antlr4::ParserRuleContext {
  public:
    LockModeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_SHARED();
    antlr4::tree::TerminalNode *KW_EXCLUSIVE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LockModeContext* lockMode();

  class  UnlockStatementContext : public antlr4::ParserRuleContext {
  public:
    UnlockStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_UNLOCK();
    antlr4::tree::TerminalNode *KW_TABLE();
    TableNameContext *tableName();
    PartitionSpecContext *partitionSpec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnlockStatementContext* unlockStatement();

  class  LockDatabaseContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *dbName = nullptr;
    LockDatabaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_LOCK();
    Db_schemaContext *db_schema();
    LockModeContext *lockMode();
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LockDatabaseContext* lockDatabase();

  class  UnlockDatabaseContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *dbName = nullptr;
    UnlockDatabaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_UNLOCK();
    Db_schemaContext *db_schema();
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnlockDatabaseContext* unlockDatabase();

  class  CreateRoleStatementContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *roleName = nullptr;
    CreateRoleStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_CREATE();
    antlr4::tree::TerminalNode *KW_ROLE();
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateRoleStatementContext* createRoleStatement();

  class  DropRoleStatementContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *roleName = nullptr;
    DropRoleStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_DROP();
    antlr4::tree::TerminalNode *KW_ROLE();
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropRoleStatementContext* dropRoleStatement();

  class  GrantPrivilegesContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::PrivilegeListContext *privList = nullptr;
    GrantPrivilegesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_GRANT();
    antlr4::tree::TerminalNode *KW_TO();
    PrincipalSpecificationContext *principalSpecification();
    PrivilegeListContext *privilegeList();
    PrivilegeObjectContext *privilegeObject();
    WithGrantOptionContext *withGrantOption();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GrantPrivilegesContext* grantPrivileges();

  class  PrivilegeListContext : public antlr4::ParserRuleContext {
  public:
    PrivilegeListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PrivlegeDefContext *> privlegeDef();
    PrivlegeDefContext* privlegeDef(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrivilegeListContext* privilegeList();

  class  PrivlegeDefContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::ColumnNameListContext *cols = nullptr;
    PrivlegeDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrivilegeTypeContext *privilegeType();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    ColumnNameListContext *columnNameList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrivlegeDefContext* privlegeDef();

  class  PrivilegeTypeContext : public antlr4::ParserRuleContext {
  public:
    PrivilegeTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_ALL();
    antlr4::tree::TerminalNode *KW_ALTER();
    antlr4::tree::TerminalNode *KW_UPDATE();
    antlr4::tree::TerminalNode *KW_CREATE();
    antlr4::tree::TerminalNode *KW_DROP();
    antlr4::tree::TerminalNode *KW_LOCK();
    antlr4::tree::TerminalNode *KW_SELECT();
    antlr4::tree::TerminalNode *KW_SHOW_DATABASE();
    antlr4::tree::TerminalNode *KW_INSERT();
    antlr4::tree::TerminalNode *KW_DELETE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrivilegeTypeContext* privilegeType();

  class  PrivilegeObjectContext : public antlr4::ParserRuleContext {
  public:
    PrivilegeObjectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_ON();
    PrivObjectContext *privObject();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrivilegeObjectContext* privilegeObject();

  class  PrivObjectContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *path = nullptr;
    PrivObjectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Db_schemaContext *db_schema();
    Id_Context *id_();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *KW_TABLE();
    PartitionSpecContext *partitionSpec();
    antlr4::tree::TerminalNode *KW_URI();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *KW_SERVER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrivObjectContext* privObject();

  class  PrincipalSpecificationContext : public antlr4::ParserRuleContext {
  public:
    PrincipalSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PrincipalNameContext *> principalName();
    PrincipalNameContext* principalName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrincipalSpecificationContext* principalSpecification();

  class  WithGrantOptionContext : public antlr4::ParserRuleContext {
  public:
    WithGrantOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_WITH();
    antlr4::tree::TerminalNode *KW_GRANT();
    antlr4::tree::TerminalNode *KW_OPTION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WithGrantOptionContext* withGrantOption();

  class  RevokePrivilegesContext : public antlr4::ParserRuleContext {
  public:
    RevokePrivilegesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_REVOKE();
    PrivilegeListContext *privilegeList();
    antlr4::tree::TerminalNode *KW_FROM();
    PrincipalSpecificationContext *principalSpecification();
    GrantOptionForContext *grantOptionFor();
    PrivilegeObjectContext *privilegeObject();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RevokePrivilegesContext* revokePrivileges();

  class  GrantOptionForContext : public antlr4::ParserRuleContext {
  public:
    GrantOptionForContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_GRANT();
    antlr4::tree::TerminalNode *KW_OPTION();
    antlr4::tree::TerminalNode *KW_FOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GrantOptionForContext* grantOptionFor();

  class  ShowGrantsContext : public antlr4::ParserRuleContext {
  public:
    ShowGrantsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_SHOW();
    antlr4::tree::TerminalNode *KW_GRANT();
    PrincipalNameContext *principalName();
    antlr4::tree::TerminalNode *KW_ON();
    PrivilegeIncludeColObjectContext *privilegeIncludeColObject();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowGrantsContext* showGrants();

  class  PrivilegeIncludeColObjectContext : public antlr4::ParserRuleContext {
  public:
    PrivilegeIncludeColObjectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_ALL();
    PrivObjectColsContext *privObjectCols();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrivilegeIncludeColObjectContext* privilegeIncludeColObject();

  class  PrivObjectColsContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::ColumnNameListContext *cols = nullptr;
    antlr4::Token *path = nullptr;
    PrivObjectColsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Db_schemaContext *db_schema();
    Id_Context *id_();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *KW_TABLE();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    PartitionSpecContext *partitionSpec();
    ColumnNameListContext *columnNameList();
    antlr4::tree::TerminalNode *KW_URI();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *KW_SERVER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrivObjectColsContext* privObjectCols();

  class  ShowRoleGrantsContext : public antlr4::ParserRuleContext {
  public:
    ShowRoleGrantsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_SHOW();
    antlr4::tree::TerminalNode *KW_ROLE();
    antlr4::tree::TerminalNode *KW_GRANT();
    PrincipalNameContext *principalName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowRoleGrantsContext* showRoleGrants();

  class  ShowRolePrincipalsContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *roleName = nullptr;
    ShowRolePrincipalsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_SHOW();
    antlr4::tree::TerminalNode *KW_PRINCIPALS();
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowRolePrincipalsContext* showRolePrincipals();

  class  ShowRolesContext : public antlr4::ParserRuleContext {
  public:
    ShowRolesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_SHOW();
    antlr4::tree::TerminalNode *KW_ROLES();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowRolesContext* showRoles();

  class  GrantRoleContext : public antlr4::ParserRuleContext {
  public:
    GrantRoleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_GRANT();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *KW_TO();
    PrincipalSpecificationContext *principalSpecification();
    antlr4::tree::TerminalNode *KW_ROLE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    WithAdminOptionContext *withAdminOption();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GrantRoleContext* grantRole();

  class  WithAdminOptionContext : public antlr4::ParserRuleContext {
  public:
    WithAdminOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_WITH();
    antlr4::tree::TerminalNode *KW_ADMIN();
    antlr4::tree::TerminalNode *KW_OPTION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WithAdminOptionContext* withAdminOption();

  class  RevokeRoleContext : public antlr4::ParserRuleContext {
  public:
    RevokeRoleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_REVOKE();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *KW_FROM();
    PrincipalSpecificationContext *principalSpecification();
    AdminOptionForContext *adminOptionFor();
    antlr4::tree::TerminalNode *KW_ROLE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RevokeRoleContext* revokeRole();

  class  AdminOptionForContext : public antlr4::ParserRuleContext {
  public:
    AdminOptionForContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_ADMIN();
    antlr4::tree::TerminalNode *KW_OPTION();
    antlr4::tree::TerminalNode *KW_FOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AdminOptionForContext* adminOptionFor();

  class  SetRoleContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *all = nullptr;
    antlr4::Token *none = nullptr;
    SetRoleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_SET();
    antlr4::tree::TerminalNode *KW_ROLE();
    Id_Context *id_();
    antlr4::tree::TerminalNode *KW_ALL();
    antlr4::tree::TerminalNode *KW_NONE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetRoleContext* setRole();

  class  ShowCurrentRoleContext : public antlr4::ParserRuleContext {
  public:
    ShowCurrentRoleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_SHOW();
    antlr4::tree::TerminalNode *KW_CURRENT();
    antlr4::tree::TerminalNode *KW_ROLES();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowCurrentRoleContext* showCurrentRole();

  class  AbortTransactionStatementContext : public antlr4::ParserRuleContext {
  public:
    AbortTransactionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_ABORT();
    antlr4::tree::TerminalNode *KW_TRANSACTIONS();
    std::vector<antlr4::tree::TerminalNode *> Number();
    antlr4::tree::TerminalNode* Number(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AbortTransactionStatementContext* abortTransactionStatement();

  class  AbortCompactionStatementContext : public antlr4::ParserRuleContext {
  public:
    AbortCompactionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_ABORT();
    antlr4::tree::TerminalNode *KW_COMPACTIONS();
    std::vector<antlr4::tree::TerminalNode *> Number();
    antlr4::tree::TerminalNode* Number(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AbortCompactionStatementContext* abortCompactionStatement();

  class  KillQueryStatementContext : public antlr4::ParserRuleContext {
  public:
    KillQueryStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_KILL();
    antlr4::tree::TerminalNode *KW_QUERY();
    std::vector<antlr4::tree::TerminalNode *> StringLiteral();
    antlr4::tree::TerminalNode* StringLiteral(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KillQueryStatementContext* killQueryStatement();

  class  ResourcePlanDdlStatementsContext : public antlr4::ParserRuleContext {
  public:
    ResourcePlanDdlStatementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CreateResourcePlanStatementContext *createResourcePlanStatement();
    AlterResourcePlanStatementContext *alterResourcePlanStatement();
    DropResourcePlanStatementContext *dropResourcePlanStatement();
    GlobalWmStatementContext *globalWmStatement();
    AlterWmStatementContext *alterWmStatement();
    ReplaceResourcePlanStatementContext *replaceResourcePlanStatement();
    CreateTriggerStatementContext *createTriggerStatement();
    AlterTriggerStatementContext *alterTriggerStatement();
    DropTriggerStatementContext *dropTriggerStatement();
    CreatePoolStatementContext *createPoolStatement();
    AlterPoolStatementContext *alterPoolStatement();
    DropPoolStatementContext *dropPoolStatement();
    CreateMappingStatementContext *createMappingStatement();
    AlterMappingStatementContext *alterMappingStatement();
    DropMappingStatementContext *dropMappingStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResourcePlanDdlStatementsContext* resourcePlanDdlStatements();

  class  CreateResourcePlanStatementContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *name = nullptr;
    TplSqlParser::Id_Context *likeName = nullptr;
    CreateResourcePlanStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_CREATE();
    antlr4::tree::TerminalNode *KW_RESOURCE();
    antlr4::tree::TerminalNode *KW_PLAN();
    antlr4::tree::TerminalNode *KW_LIKE();
    IfNotExistsContext *ifNotExists();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *KW_WITH();
    RpAssignListContext *rpAssignList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateResourcePlanStatementContext* createResourcePlanStatement();

  class  RpAssignListContext : public antlr4::ParserRuleContext {
  public:
    RpAssignListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RpAssignContext *> rpAssign();
    RpAssignContext* rpAssign(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RpAssignListContext* rpAssignList();

  class  RpAssignContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *parallelism = nullptr;
    RpAssignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_QUERY_PARALLELISM();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *Number();
    antlr4::tree::TerminalNode *KW_DEFAULT();
    antlr4::tree::TerminalNode *KW_POOL();
    PoolPathContext *poolPath();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RpAssignContext* rpAssign();

  class  PoolPathContext : public antlr4::ParserRuleContext {
  public:
    PoolPathContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PoolPathContext* poolPath();

  class  AlterResourcePlanStatementContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *name = nullptr;
    TplSqlParser::Id_Context *newName = nullptr;
    AlterResourcePlanStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_ALTER();
    antlr4::tree::TerminalNode *KW_RESOURCE();
    antlr4::tree::TerminalNode *KW_PLAN();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *KW_VALIDATE();
    antlr4::tree::TerminalNode *KW_DISABLE();
    antlr4::tree::TerminalNode *KW_SET();
    RpAssignListContext *rpAssignList();
    antlr4::tree::TerminalNode *KW_UNSET();
    RpUnassignListContext *rpUnassignList();
    antlr4::tree::TerminalNode *KW_RENAME();
    antlr4::tree::TerminalNode *KW_TO();
    ActivateContext *activate();
    EnableContext *enable();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterResourcePlanStatementContext* alterResourcePlanStatement();

  class  RpUnassignListContext : public antlr4::ParserRuleContext {
  public:
    RpUnassignListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RpUnassignContext *> rpUnassign();
    RpUnassignContext* rpUnassign(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RpUnassignListContext* rpUnassignList();

  class  RpUnassignContext : public antlr4::ParserRuleContext {
  public:
    RpUnassignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_QUERY_PARALLELISM();
    antlr4::tree::TerminalNode *KW_DEFAULT();
    antlr4::tree::TerminalNode *KW_POOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RpUnassignContext* rpUnassign();

  class  ActivateContext : public antlr4::ParserRuleContext {
  public:
    ActivateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_ACTIVATE();
    WithReplaceContext *withReplace();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ActivateContext* activate();

  class  WithReplaceContext : public antlr4::ParserRuleContext {
  public:
    WithReplaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_WITH();
    antlr4::tree::TerminalNode *KW_REPLACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WithReplaceContext* withReplace();

  class  EnableContext : public antlr4::ParserRuleContext {
  public:
    EnableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_ENABLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnableContext* enable();

  class  DropResourcePlanStatementContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *name = nullptr;
    DropResourcePlanStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_DROP();
    antlr4::tree::TerminalNode *KW_RESOURCE();
    antlr4::tree::TerminalNode *KW_PLAN();
    Id_Context *id_();
    IfExistsContext *ifExists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropResourcePlanStatementContext* dropResourcePlanStatement();

  class  GlobalWmStatementContext : public antlr4::ParserRuleContext {
  public:
    GlobalWmStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_WORKLOAD();
    antlr4::tree::TerminalNode *KW_MANAGEMENT();
    antlr4::tree::TerminalNode *KW_ENABLE();
    antlr4::tree::TerminalNode *KW_DISABLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GlobalWmStatementContext* globalWmStatement();

  class  AlterWmStatementContext : public antlr4::ParserRuleContext {
  public:
    AlterWmStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_ALTER();
    antlr4::tree::TerminalNode *KW_WORKLOAD();
    antlr4::tree::TerminalNode *KW_MANAGEMENT();
    EnableSpecificationContext *enableSpecification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterWmStatementContext* alterWmStatement();

  class  ReplaceResourcePlanStatementContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *src = nullptr;
    TplSqlParser::Id_Context *dest = nullptr;
    ReplaceResourcePlanStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_REPLACE();
    antlr4::tree::TerminalNode *KW_ACTIVE();
    antlr4::tree::TerminalNode *KW_RESOURCE();
    antlr4::tree::TerminalNode *KW_PLAN();
    antlr4::tree::TerminalNode *KW_WITH();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReplaceResourcePlanStatementContext* replaceResourcePlanStatement();

  class  CreateTriggerStatementContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *rpName = nullptr;
    TplSqlParser::Id_Context *triggerName = nullptr;
    CreateTriggerStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_CREATE();
    antlr4::tree::TerminalNode *KW_TRIGGER();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *KW_WHEN();
    TriggerExpressionContext *triggerExpression();
    antlr4::tree::TerminalNode *KW_DO();
    TriggerActionExpressionContext *triggerActionExpression();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateTriggerStatementContext* createTriggerStatement();

  class  TriggerExpressionContext : public antlr4::ParserRuleContext {
  public:
    TriggerExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TriggerAtomExpressionContext *triggerAtomExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TriggerExpressionContext* triggerExpression();

  class  TriggerAtomExpressionContext : public antlr4::ParserRuleContext {
  public:
    TriggerAtomExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    ComparisionOperatorContext *comparisionOperator();
    TriggerLiteralContext *triggerLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TriggerAtomExpressionContext* triggerAtomExpression();

  class  ComparisionOperatorContext : public antlr4::ParserRuleContext {
  public:
    ComparisionOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GREATERTHAN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComparisionOperatorContext* comparisionOperator();

  class  TriggerLiteralContext : public antlr4::ParserRuleContext {
  public:
    TriggerLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Number();
    antlr4::tree::TerminalNode *StringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TriggerLiteralContext* triggerLiteral();

  class  TriggerActionExpressionContext : public antlr4::ParserRuleContext {
  public:
    TriggerActionExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_KILL();
    antlr4::tree::TerminalNode *KW_MOVE();
    antlr4::tree::TerminalNode *KW_TO();
    PoolPathContext *poolPath();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TriggerActionExpressionContext* triggerActionExpression();

  class  AlterTriggerStatementContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *rpName = nullptr;
    TplSqlParser::Id_Context *triggerName = nullptr;
    TplSqlParser::PoolPathContext *poolName = nullptr;
    AlterTriggerStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_ALTER();
    antlr4::tree::TerminalNode *KW_TRIGGER();
    antlr4::tree::TerminalNode *DOT();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *KW_WHEN();
    TriggerExpressionContext *triggerExpression();
    antlr4::tree::TerminalNode *KW_DO();
    TriggerActionExpressionContext *triggerActionExpression();
    antlr4::tree::TerminalNode *KW_ADD();
    antlr4::tree::TerminalNode *KW_TO();
    antlr4::tree::TerminalNode *KW_DROP();
    antlr4::tree::TerminalNode *KW_FROM();
    antlr4::tree::TerminalNode *KW_POOL();
    antlr4::tree::TerminalNode *KW_UNMANAGED();
    PoolPathContext *poolPath();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterTriggerStatementContext* alterTriggerStatement();

  class  DropTriggerStatementContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *rpName = nullptr;
    TplSqlParser::Id_Context *triggerName = nullptr;
    DropTriggerStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_DROP();
    antlr4::tree::TerminalNode *KW_TRIGGER();
    antlr4::tree::TerminalNode *DOT();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropTriggerStatementContext* dropTriggerStatement();

  class  CreatePoolStatementContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *rpName = nullptr;
    CreatePoolStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_CREATE();
    antlr4::tree::TerminalNode *KW_POOL();
    antlr4::tree::TerminalNode *DOT();
    PoolPathContext *poolPath();
    antlr4::tree::TerminalNode *KW_WITH();
    PoolAssignListContext *poolAssignList();
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreatePoolStatementContext* createPoolStatement();

  class  PoolAssignListContext : public antlr4::ParserRuleContext {
  public:
    PoolAssignListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PoolAssignContext *> poolAssign();
    PoolAssignContext* poolAssign(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PoolAssignListContext* poolAssignList();

  class  PoolAssignContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *allocFraction = nullptr;
    antlr4::Token *parallelism = nullptr;
    antlr4::Token *policy = nullptr;
    TplSqlParser::PoolPathContext *path = nullptr;
    PoolAssignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_ALLOC_FRACTION();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *KW_QUERY_PARALLELISM();
    antlr4::tree::TerminalNode *KW_SCHEDULING_POLICY();
    antlr4::tree::TerminalNode *KW_PATH();
    antlr4::tree::TerminalNode *Number();
    antlr4::tree::TerminalNode *StringLiteral();
    PoolPathContext *poolPath();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PoolAssignContext* poolAssign();

  class  AlterPoolStatementContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *rpName = nullptr;
    TplSqlParser::Id_Context *triggerName = nullptr;
    AlterPoolStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_ALTER();
    antlr4::tree::TerminalNode *KW_POOL();
    antlr4::tree::TerminalNode *DOT();
    PoolPathContext *poolPath();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *KW_SET();
    PoolAssignListContext *poolAssignList();
    antlr4::tree::TerminalNode *KW_UNSET();
    antlr4::tree::TerminalNode *KW_SCHEDULING_POLICY();
    antlr4::tree::TerminalNode *KW_TRIGGER();
    antlr4::tree::TerminalNode *KW_ADD();
    antlr4::tree::TerminalNode *KW_DROP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterPoolStatementContext* alterPoolStatement();

  class  DropPoolStatementContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *rpName = nullptr;
    DropPoolStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_DROP();
    antlr4::tree::TerminalNode *KW_POOL();
    antlr4::tree::TerminalNode *DOT();
    PoolPathContext *poolPath();
    Id_Context *id_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropPoolStatementContext* dropPoolStatement();

  class  CreateMappingStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *mappingType = nullptr;
    antlr4::Token *name = nullptr;
    TplSqlParser::Id_Context *rpName = nullptr;
    TplSqlParser::PoolPathContext *path = nullptr;
    antlr4::Token *order = nullptr;
    CreateMappingStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_CREATE();
    antlr4::tree::TerminalNode *KW_MAPPING();
    antlr4::tree::TerminalNode *KW_IN();
    antlr4::tree::TerminalNode *StringLiteral();
    Id_Context *id_();
    antlr4::tree::TerminalNode *KW_USER();
    antlr4::tree::TerminalNode *KW_GROUP();
    antlr4::tree::TerminalNode *KW_APPLICATION();
    antlr4::tree::TerminalNode *KW_TO();
    UnmanagedContext *unmanaged();
    PoolPathContext *poolPath();
    antlr4::tree::TerminalNode *KW_WITH();
    antlr4::tree::TerminalNode *KW_ORDER();
    antlr4::tree::TerminalNode *Number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateMappingStatementContext* createMappingStatement();

  class  UnmanagedContext : public antlr4::ParserRuleContext {
  public:
    UnmanagedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_UNMANAGED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnmanagedContext* unmanaged();

  class  AlterMappingStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *mappingType = nullptr;
    antlr4::Token *name = nullptr;
    TplSqlParser::Id_Context *rpName = nullptr;
    TplSqlParser::PoolPathContext *path = nullptr;
    antlr4::Token *order = nullptr;
    AlterMappingStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_ALTER();
    antlr4::tree::TerminalNode *KW_MAPPING();
    antlr4::tree::TerminalNode *KW_IN();
    antlr4::tree::TerminalNode *StringLiteral();
    Id_Context *id_();
    antlr4::tree::TerminalNode *KW_USER();
    antlr4::tree::TerminalNode *KW_GROUP();
    antlr4::tree::TerminalNode *KW_APPLICATION();
    antlr4::tree::TerminalNode *KW_TO();
    UnmanagedContext *unmanaged();
    PoolPathContext *poolPath();
    antlr4::tree::TerminalNode *KW_WITH();
    antlr4::tree::TerminalNode *KW_ORDER();
    antlr4::tree::TerminalNode *Number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlterMappingStatementContext* alterMappingStatement();

  class  DropMappingStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *mappingType = nullptr;
    antlr4::Token *name = nullptr;
    TplSqlParser::Id_Context *rpName = nullptr;
    DropMappingStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_DROP();
    antlr4::tree::TerminalNode *KW_MAPPING();
    antlr4::tree::TerminalNode *KW_IN();
    antlr4::tree::TerminalNode *StringLiteral();
    Id_Context *id_();
    antlr4::tree::TerminalNode *KW_USER();
    antlr4::tree::TerminalNode *KW_GROUP();
    antlr4::tree::TerminalNode *KW_APPLICATION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropMappingStatementContext* dropMappingStatement();

  class  CreateDataConnectorStatementContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::Id_Context *name = nullptr;
    TplSqlParser::DcPropertiesContext *dcprops = nullptr;
    CreateDataConnectorStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_CREATE();
    antlr4::tree::TerminalNode *KW_DATACONNECTOR();
    DataConnectorTypeContext *dataConnectorType();
    DataConnectorUrlContext *dataConnectorUrl();
    Id_Context *id_();
    IfNotExistsContext *ifNotExists();
    DataConnectorCommentContext *dataConnectorComment();
    antlr4::tree::TerminalNode *KW_WITH();
    antlr4::tree::TerminalNode *KW_DCPROPERTIES();
    DcPropertiesContext *dcProperties();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateDataConnectorStatementContext* createDataConnectorStatement();

  class  DataConnectorTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *dcType = nullptr;
    DataConnectorTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_TYPE();
    antlr4::tree::TerminalNode *StringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DataConnectorTypeContext* dataConnectorType();

  class  DataConnectorUrlContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *url = nullptr;
    DataConnectorUrlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_URL();
    antlr4::tree::TerminalNode *StringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DataConnectorUrlContext* dataConnectorUrl();

  class  DataConnectorCommentContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *comment = nullptr;
    DataConnectorCommentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_COMMENT();
    antlr4::tree::TerminalNode *StringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DataConnectorCommentContext* dataConnectorComment();

  class  DropDataConnectorStatementContext : public antlr4::ParserRuleContext {
  public:
    DropDataConnectorStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_DROP();
    antlr4::tree::TerminalNode *KW_DATACONNECTOR();
    Id_Context *id_();
    IfExistsContext *ifExists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropDataConnectorStatementContext* dropDataConnectorStatement();

  class  DeleteStatementContext : public antlr4::ParserRuleContext {
  public:
    DeleteStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_DELETE();
    antlr4::tree::TerminalNode *KW_FROM();
    TableNameContext *tableName();
    WhereClauseContext *whereClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeleteStatementContext* deleteStatement();

  class  UpdateStatementContext : public antlr4::ParserRuleContext {
  public:
    UpdateStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_UPDATE();
    TableNameContext *tableName();
    SetColumnsClauseContext *setColumnsClause();
    WhereClauseContext *whereClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UpdateStatementContext* updateStatement();

  class  SetColumnsClauseContext : public antlr4::ParserRuleContext {
  public:
    SetColumnsClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_SET();
    std::vector<ColumnAssignmentClauseContext *> columnAssignmentClause();
    ColumnAssignmentClauseContext* columnAssignmentClause(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetColumnsClauseContext* setColumnsClause();

  class  ColumnAssignmentClauseContext : public antlr4::ParserRuleContext {
  public:
    ColumnAssignmentClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableOrColumnContext *tableOrColumn();
    antlr4::tree::TerminalNode *EQUAL();
    PrecedencePlusExpressionOrDefaultContext *precedencePlusExpressionOrDefault();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnAssignmentClauseContext* columnAssignmentClause();

  class  PrecedencePlusExpressionOrDefaultContext : public antlr4::ParserRuleContext {
  public:
    PrecedencePlusExpressionOrDefaultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DefaultValueContext *defaultValue();
    PrecedencePlusExpressionContext *precedencePlusExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrecedencePlusExpressionOrDefaultContext* precedencePlusExpressionOrDefault();

  class  SqlTransactionStatementContext : public antlr4::ParserRuleContext {
  public:
    SqlTransactionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StartTransactionStatementContext *startTransactionStatement();
    CommitStatementContext *commitStatement();
    RollbackStatementContext *rollbackStatement();
    SetAutoCommitStatementContext *setAutoCommitStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SqlTransactionStatementContext* sqlTransactionStatement();

  class  StartTransactionStatementContext : public antlr4::ParserRuleContext {
  public:
    StartTransactionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_START();
    antlr4::tree::TerminalNode *KW_TRANSACTION();
    std::vector<TransactionModeContext *> transactionMode();
    TransactionModeContext* transactionMode(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StartTransactionStatementContext* startTransactionStatement();

  class  TransactionModeContext : public antlr4::ParserRuleContext {
  public:
    TransactionModeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IsolationLevelContext *isolationLevel();
    TransactionAccessModeContext *transactionAccessMode();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TransactionModeContext* transactionMode();

  class  IsolationLevelContext : public antlr4::ParserRuleContext {
  public:
    IsolationLevelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_ISOLATION();
    antlr4::tree::TerminalNode *KW_LEVEL();
    LevelOfIsolationContext *levelOfIsolation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IsolationLevelContext* isolationLevel();

  class  LevelOfIsolationContext : public antlr4::ParserRuleContext {
  public:
    LevelOfIsolationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_SNAPSHOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LevelOfIsolationContext* levelOfIsolation();

  class  TransactionAccessModeContext : public antlr4::ParserRuleContext {
  public:
    TransactionAccessModeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_READ();
    antlr4::tree::TerminalNode *KW_ONLY();
    antlr4::tree::TerminalNode *KW_WRITE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TransactionAccessModeContext* transactionAccessMode();

  class  CommitStatementContext : public antlr4::ParserRuleContext {
  public:
    CommitStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_COMMIT();
    antlr4::tree::TerminalNode *KW_WORK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CommitStatementContext* commitStatement();

  class  RollbackStatementContext : public antlr4::ParserRuleContext {
  public:
    RollbackStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_ROLLBACK();
    antlr4::tree::TerminalNode *KW_WORK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RollbackStatementContext* rollbackStatement();

  class  SetAutoCommitStatementContext : public antlr4::ParserRuleContext {
  public:
    SetAutoCommitStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_SET();
    antlr4::tree::TerminalNode *KW_AUTOCOMMIT();
    BooleanValueTokContext *booleanValueTok();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetAutoCommitStatementContext* setAutoCommitStatement();

  class  BooleanValueTokContext : public antlr4::ParserRuleContext {
  public:
    BooleanValueTokContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_TRUE();
    antlr4::tree::TerminalNode *KW_FALSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BooleanValueTokContext* booleanValueTok();

  class  MergeStatementContext : public antlr4::ParserRuleContext {
  public:
    MergeStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_MERGE();
    antlr4::tree::TerminalNode *KW_INTO();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *KW_USING();
    JoinSourcePartContext *joinSourcePart();
    antlr4::tree::TerminalNode *KW_ON();
    ExpressionContext *expression();
    WhenClausesContext *whenClauses();
    antlr4::tree::TerminalNode *QUERY_HINT();
    Id_Context *id_();
    antlr4::tree::TerminalNode *KW_AS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MergeStatementContext* mergeStatement();

  class  WhenClausesContext : public antlr4::ParserRuleContext {
  public:
    WhenClausesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<WhenMatchedAndClauseContext *> whenMatchedAndClause();
    WhenMatchedAndClauseContext* whenMatchedAndClause(size_t i);
    std::vector<WhenMatchedThenClauseContext *> whenMatchedThenClause();
    WhenMatchedThenClauseContext* whenMatchedThenClause(size_t i);
    WhenNotMatchedClauseContext *whenNotMatchedClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhenClausesContext* whenClauses();

  class  WhenMatchedAndClauseContext : public antlr4::ParserRuleContext {
  public:
    WhenMatchedAndClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_WHEN();
    antlr4::tree::TerminalNode *KW_MATCHED();
    antlr4::tree::TerminalNode *KW_AND();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *KW_THEN();
    UpdateOrDeleteContext *updateOrDelete();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhenMatchedAndClauseContext* whenMatchedAndClause();

  class  UpdateOrDeleteContext : public antlr4::ParserRuleContext {
  public:
    UpdateOrDeleteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_UPDATE();
    SetColumnsClauseContext *setColumnsClause();
    antlr4::tree::TerminalNode *KW_DELETE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UpdateOrDeleteContext* updateOrDelete();

  class  WhenMatchedThenClauseContext : public antlr4::ParserRuleContext {
  public:
    WhenMatchedThenClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_WHEN();
    antlr4::tree::TerminalNode *KW_MATCHED();
    antlr4::tree::TerminalNode *KW_THEN();
    UpdateOrDeleteContext *updateOrDelete();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhenMatchedThenClauseContext* whenMatchedThenClause();

  class  WhenNotMatchedClauseContext : public antlr4::ParserRuleContext {
  public:
    TplSqlParser::ColumnParenthesesListContext *targetCols = nullptr;
    WhenNotMatchedClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_WHEN();
    antlr4::tree::TerminalNode *KW_NOT();
    antlr4::tree::TerminalNode *KW_MATCHED();
    antlr4::tree::TerminalNode *KW_THEN();
    antlr4::tree::TerminalNode *KW_INSERT();
    antlr4::tree::TerminalNode *KW_VALUES();
    ValueRowConstructorContext *valueRowConstructor();
    antlr4::tree::TerminalNode *KW_AND();
    ExpressionContext *expression();
    ColumnParenthesesListContext *columnParenthesesList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhenNotMatchedClauseContext* whenNotMatchedClause();

  class  ValueRowConstructorContext : public antlr4::ParserRuleContext {
  public:
    ValueRowConstructorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionsInParenthesisContext *expressionsInParenthesis();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValueRowConstructorContext* valueRowConstructor();

  class  PrepareStatementContext : public antlr4::ParserRuleContext {
  public:
    PrepareStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_PREPARE();
    Id_Context *id_();
    antlr4::tree::TerminalNode *KW_FROM();
    QueryStatementExpressionContext *queryStatementExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrepareStatementContext* prepareStatement();

  class  ExecuteStatementContext : public antlr4::ParserRuleContext {
  public:
    ExecuteStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_EXECUTE();
    Id_Context *id_();
    antlr4::tree::TerminalNode *KW_USING();
    ExecuteParamListContext *executeParamList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExecuteStatementContext* executeStatement();

  class  ExecuteParamListContext : public antlr4::ParserRuleContext {
  public:
    ExecuteParamListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ConstantContext *> constant();
    ConstantContext* constant(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExecuteParamListContext* executeParamList();

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

  class  TplsqlPrimitiveTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *exponent = nullptr;
    antlr4::Token *mantissa = nullptr;
    antlr4::Token *length = nullptr;
    antlr4::Token *scaleof32 = nullptr;
    TplsqlPrimitiveTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_TINYINT();
    antlr4::tree::TerminalNode *KW_SMALLINT();
    antlr4::tree::TerminalNode *KW_INT();
    antlr4::tree::TerminalNode *KW_BIGINT();
    antlr4::tree::TerminalNode *KW_INFTYINT();
    antlr4::tree::TerminalNode *KW_BOOLEAN();
    antlr4::tree::TerminalNode *KW_FP4();
    antlr4::tree::TerminalNode *KW_FP6E2M3();
    antlr4::tree::TerminalNode *KW_FP6E3M2();
    antlr4::tree::TerminalNode *KW_FP8E4M3();
    antlr4::tree::TerminalNode *KW_FP8E5M2();
    antlr4::tree::TerminalNode *KW_FP16();
    antlr4::tree::TerminalNode *KW_BFP16();
    antlr4::tree::TerminalNode *KW_TF19();
    antlr4::tree::TerminalNode *KW_FLOAT();
    antlr4::tree::TerminalNode *KW_REAL();
    antlr4::tree::TerminalNode *KW_DOUBLE();
    antlr4::tree::TerminalNode *KW_FP64();
    antlr4::tree::TerminalNode *KW_PRECISION();
    antlr4::tree::TerminalNode *KW_FP80();
    antlr4::tree::TerminalNode *KW_FP128();
    antlr4::tree::TerminalNode *KW_INFTYFLOAT();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> Number();
    antlr4::tree::TerminalNode* Number(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *KW_DATE();
    antlr4::tree::TerminalNode *KW_DATETIME();
    antlr4::tree::TerminalNode *KW_TIMESTAMP();
    antlr4::tree::TerminalNode *KW_TIMESTAMPLOCALTZ();
    antlr4::tree::TerminalNode *KW_WITH();
    antlr4::tree::TerminalNode *KW_LOCAL();
    antlr4::tree::TerminalNode *KW_TIME();
    antlr4::tree::TerminalNode *KW_ZONE();
    antlr4::tree::TerminalNode *KW_STRING();
    antlr4::tree::TerminalNode *KW_VARCHAR();
    antlr4::tree::TerminalNode *KW_CHAR();
    antlr4::tree::TerminalNode *KW_BINARY();
    antlr4::tree::TerminalNode *KW_DECIMAL32();
    antlr4::tree::TerminalNode *KW_DECIMAL64();
    antlr4::tree::TerminalNode *KW_DECIMAL();
    antlr4::tree::TerminalNode *KW_INFTYDECIMAL();
    antlr4::tree::TerminalNode *KW_SEXAGESIMAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TplsqlPrimitiveTypeContext* tplsqlPrimitiveType();

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
    TplSqlParser::WithClauseContext *w = nullptr;
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
    TplSqlParser::PrecedenceEqualOperatorContext *precedenceEqualOperatorContext = nullptr;
    std::vector<PrecedenceEqualOperatorContext *> equal;
    TplSqlParser::PrecedenceSimilarExpressionContext *precedenceSimilarExpressionContext = nullptr;
    std::vector<PrecedenceSimilarExpressionContext *> p;
    TplSqlParser::PrecedenceDistinctOperatorContext *precedenceDistinctOperatorContext = nullptr;
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
    TplSqlParser::PrecedenceBitwiseOrExpressionContext *a = nullptr;
    TplSqlParser::PrecedenceSimilarExpressionPartContext *part = nullptr;
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
    TplSqlParser::PrecedencePlusExpressionContext *plus = nullptr;
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
    TplSqlParser::IntervalValueContext *value = nullptr;
    TplSqlParser::IntervalQualifiersContext *qualifiers = nullptr;
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
    TplSqlParser::ParameterIdxContext *p = nullptr;
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
    TplSqlParser::IntervalValueContext *value = nullptr;
    TplSqlParser::IntervalQualifiersContext *qualifiers = nullptr;
    TplSqlParser::ExpressionContext *expr = nullptr;
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
    TplSqlParser::AdqlPrimitiveTypeContext *toType = nullptr;
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
    TplSqlParser::TimeQualifiersContext *timeUnit = nullptr;
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
    TplSqlParser::FloorDateQualifiersContext *floorUnit = nullptr;
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
    TplSqlParser::All_distinctContext *dist = nullptr;
    antlr4::Token *within = nullptr;
    TplSqlParser::OrderByClauseContext *ordBy = nullptr;
    TplSqlParser::Null_treatmentContext *nt = nullptr;
    TplSqlParser::Window_specificationContext *ws = nullptr;
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
    TplSqlParser::SelectExpressionContext *trim_characters = nullptr;
    TplSqlParser::SelectExpressionContext *str = nullptr;
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
    TplSqlParser::Id_Context *fn = nullptr;
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
    TplSqlParser::OrderSpecificationRewriteContext *orderSpec = nullptr;
    TplSqlParser::NullOrderingContext *nullSpec = nullptr;
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
    TplSqlParser::ExpressionOrDefaultContext *first = nullptr;
    TplSqlParser::ExpressionPartContext *more = nullptr;
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
    TplSqlParser::PrecedenceBitwiseOrExpressionContext *equalExpr = nullptr;
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
    TplSqlParser::PrecedenceBitwiseOrExpressionContext *min = nullptr;
    TplSqlParser::PrecedenceBitwiseOrExpressionContext *max = nullptr;
    TplSqlParser::ExpressionsInParenthesisContext *expr = nullptr;
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
    TplSqlParser::PrecedenceBitwiseOrExpressionContext *notExpr = nullptr;
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
    TplSqlParser::ExpressionsInParenthesisContext *expr = nullptr;
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
    TplSqlParser::SetOperatorContext *u = nullptr;
    TplSqlParser::AtomSelectStatementContext *b = nullptr;
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

