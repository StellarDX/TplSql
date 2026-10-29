
// Generated from ./TplSqlParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "TplSqlParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by TplSqlParser.
 */
class  TplSqlParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by TplSqlParser.
   */
    virtual std::any visitTplsql(TplSqlParser::TplsqlContext *context) = 0;

    virtual std::any visitStatement(TplSqlParser::StatementContext *context) = 0;

    virtual std::any visitExplainStatement(TplSqlParser::ExplainStatementContext *context) = 0;

    virtual std::any visitExplainOption(TplSqlParser::ExplainOptionContext *context) = 0;

    virtual std::any visitVectorizationOnly(TplSqlParser::VectorizationOnlyContext *context) = 0;

    virtual std::any visitVectorizatonDetail(TplSqlParser::VectorizatonDetailContext *context) = 0;

    virtual std::any visitExecStatement(TplSqlParser::ExecStatementContext *context) = 0;

    virtual std::any visitCteStatement(TplSqlParser::CteStatementContext *context) = 0;

    virtual std::any visitQueryStatementExpressionBody(TplSqlParser::QueryStatementExpressionBodyContext *context) = 0;

    virtual std::any visitFromStatement(TplSqlParser::FromStatementContext *context) = 0;

    virtual std::any visitSingleFromStatement(TplSqlParser::SingleFromStatementContext *context) = 0;

    virtual std::any visitFromSource(TplSqlParser::FromSourceContext *context) = 0;

    virtual std::any visitUniqueJoinToken(TplSqlParser::UniqueJoinTokenContext *context) = 0;

    virtual std::any visitUniqueJoinSource(TplSqlParser::UniqueJoinSourceContext *context) = 0;

    virtual std::any visitUniqueJoinTableSource(TplSqlParser::UniqueJoinTableSourceContext *context) = 0;

    virtual std::any visitUniqueJoinExpr(TplSqlParser::UniqueJoinExprContext *context) = 0;

    virtual std::any visitExpressionList(TplSqlParser::ExpressionListContext *context) = 0;

    virtual std::any visitBody(TplSqlParser::BodyContext *context) = 0;

    virtual std::any visitInsertClause(TplSqlParser::InsertClauseContext *context) = 0;

    virtual std::any visitDestination(TplSqlParser::DestinationContext *context) = 0;

    virtual std::any visitLateralView(TplSqlParser::LateralViewContext *context) = 0;

    virtual std::any visitTableAlias(TplSqlParser::TableAliasContext *context) = 0;

    virtual std::any visitValuesClause(TplSqlParser::ValuesClauseContext *context) = 0;

    virtual std::any visitValuesTableConstructor(TplSqlParser::ValuesTableConstructorContext *context) = 0;

    virtual std::any visitFirstValueRowConstructor(TplSqlParser::FirstValueRowConstructorContext *context) = 0;

    virtual std::any visitFirstExpressionsWithAlias(TplSqlParser::FirstExpressionsWithAliasContext *context) = 0;

    virtual std::any visitExpressionWithAlias(TplSqlParser::ExpressionWithAliasContext *context) = 0;

    virtual std::any visitQualifyClause(TplSqlParser::QualifyClauseContext *context) = 0;

    virtual std::any visitRegularBody(TplSqlParser::RegularBodyContext *context) = 0;

    virtual std::any visitSelectStatement(TplSqlParser::SelectStatementContext *context) = 0;

    virtual std::any visitAtomSelectStatement(TplSqlParser::AtomSelectStatementContext *context) = 0;

    virtual std::any visitValuesSource(TplSqlParser::ValuesSourceContext *context) = 0;

    virtual std::any visitSelectClause(TplSqlParser::SelectClauseContext *context) = 0;

    virtual std::any visitSelectTrfmClause(TplSqlParser::SelectTrfmClauseContext *context) = 0;

    virtual std::any visitSelectExpressionList(TplSqlParser::SelectExpressionListContext *context) = 0;

    virtual std::any visitRowFormat(TplSqlParser::RowFormatContext *context) = 0;

    virtual std::any visitRecordWriter(TplSqlParser::RecordWriterContext *context) = 0;

    virtual std::any visitAliasList(TplSqlParser::AliasListContext *context) = 0;

    virtual std::any visitRecordReader(TplSqlParser::RecordReaderContext *context) = 0;

    virtual std::any visitTrfmClause(TplSqlParser::TrfmClauseContext *context) = 0;

    virtual std::any visitSelectItem(TplSqlParser::SelectItemContext *context) = 0;

    virtual std::any visitTableName(TplSqlParser::TableNameContext *context) = 0;

    virtual std::any visitAtomjoinSource(TplSqlParser::AtomjoinSourceContext *context) = 0;

    virtual std::any visitTableSource(TplSqlParser::TableSourceContext *context) = 0;

    virtual std::any visitTableSample(TplSqlParser::TableSampleContext *context) = 0;

    virtual std::any visitTableBucketSample(TplSqlParser::TableBucketSampleContext *context) = 0;

    virtual std::any visitSplitSample(TplSqlParser::SplitSampleContext *context) = 0;

    virtual std::any visitAsOfClause(TplSqlParser::AsOfClauseContext *context) = 0;

    virtual std::any visitVirtualTableSource(TplSqlParser::VirtualTableSourceContext *context) = 0;

    virtual std::any visitPartitionedTableFunction(TplSqlParser::PartitionedTableFunctionContext *context) = 0;

    virtual std::any visitPartitionTableFunctionSource(TplSqlParser::PartitionTableFunctionSourceContext *context) = 0;

    virtual std::any visitJoinSourcePart(TplSqlParser::JoinSourcePartContext *context) = 0;

    virtual std::any visitGroupby_expression(TplSqlParser::Groupby_expressionContext *context) = 0;

    virtual std::any visitRollupStandard(TplSqlParser::RollupStandardContext *context) = 0;

    virtual std::any visitRollupOldSyntax(TplSqlParser::RollupOldSyntaxContext *context) = 0;

    virtual std::any visitGroupingSetExpression(TplSqlParser::GroupingSetExpressionContext *context) = 0;

    virtual std::any visitGroupingSetExpressionMultiple(TplSqlParser::GroupingSetExpressionMultipleContext *context) = 0;

    virtual std::any visitGroupingExpressionSingle(TplSqlParser::GroupingExpressionSingleContext *context) = 0;

    virtual std::any visitLoadStatement(TplSqlParser::LoadStatementContext *context) = 0;

    virtual std::any visitTableOrPartition(TplSqlParser::TableOrPartitionContext *context) = 0;

    virtual std::any visitPartitionSpec(TplSqlParser::PartitionSpecContext *context) = 0;

    virtual std::any visitPartitionVal(TplSqlParser::PartitionValContext *context) = 0;

    virtual std::any visitInputFileFormat(TplSqlParser::InputFileFormatContext *context) = 0;

    virtual std::any visitExportStatement(TplSqlParser::ExportStatementContext *context) = 0;

    virtual std::any visitReplicationClause(TplSqlParser::ReplicationClauseContext *context) = 0;

    virtual std::any visitImportStatement(TplSqlParser::ImportStatementContext *context) = 0;

    virtual std::any visitTableLocation(TplSqlParser::TableLocationContext *context) = 0;

    virtual std::any visitDdlStatement(TplSqlParser::DdlStatementContext *context) = 0;

    virtual std::any visitCreateDatabaseStatement(TplSqlParser::CreateDatabaseStatementContext *context) = 0;

    virtual std::any visitDb_schema(TplSqlParser::Db_schemaContext *context) = 0;

    virtual std::any visitIfNotExists(TplSqlParser::IfNotExistsContext *context) = 0;

    virtual std::any visitDatabaseComment(TplSqlParser::DatabaseCommentContext *context) = 0;

    virtual std::any visitDbLocation(TplSqlParser::DbLocationContext *context) = 0;

    virtual std::any visitDbManagedLocation(TplSqlParser::DbManagedLocationContext *context) = 0;

    virtual std::any visitDbProperties(TplSqlParser::DbPropertiesContext *context) = 0;

    virtual std::any visitDbPropertiesList(TplSqlParser::DbPropertiesListContext *context) = 0;

    virtual std::any visitKeyValueProperty(TplSqlParser::KeyValuePropertyContext *context) = 0;

    virtual std::any visitDbConnectorName(TplSqlParser::DbConnectorNameContext *context) = 0;

    virtual std::any visitSwitchDatabaseStatement(TplSqlParser::SwitchDatabaseStatementContext *context) = 0;

    virtual std::any visitDropDatabaseStatement(TplSqlParser::DropDatabaseStatementContext *context) = 0;

    virtual std::any visitIfExists(TplSqlParser::IfExistsContext *context) = 0;

    virtual std::any visitRestrictOrCascade(TplSqlParser::RestrictOrCascadeContext *context) = 0;

    virtual std::any visitCreateTableStatement(TplSqlParser::CreateTableStatementContext *context) = 0;

    virtual std::any visitLikeTableOrFile(TplSqlParser::LikeTableOrFileContext *context) = 0;

    virtual std::any visitCreateTablePartitionSpec(TplSqlParser::CreateTablePartitionSpecContext *context) = 0;

    virtual std::any visitCreateTablePartitionColumnTypeSpec(TplSqlParser::CreateTablePartitionColumnTypeSpecContext *context) = 0;

    virtual std::any visitColumnNameTypeConstraint(TplSqlParser::ColumnNameTypeConstraintContext *context) = 0;

    virtual std::any visitColType(TplSqlParser::ColTypeContext *context) = 0;

    virtual std::any visitType(TplSqlParser::TypeContext *context) = 0;

    virtual std::any visitListType(TplSqlParser::ListTypeContext *context) = 0;

    virtual std::any visitStructType(TplSqlParser::StructTypeContext *context) = 0;

    virtual std::any visitColumnNameColonTypeList(TplSqlParser::ColumnNameColonTypeListContext *context) = 0;

    virtual std::any visitColumnNameColonType(TplSqlParser::ColumnNameColonTypeContext *context) = 0;

    virtual std::any visitMapType(TplSqlParser::MapTypeContext *context) = 0;

    virtual std::any visitUnionType(TplSqlParser::UnionTypeContext *context) = 0;

    virtual std::any visitComplexType(TplSqlParser::ComplexTypeContext *context) = 0;

    virtual std::any visitColTypeList(TplSqlParser::ColTypeListContext *context) = 0;

    virtual std::any visitColumnConstraint(TplSqlParser::ColumnConstraintContext *context) = 0;

    virtual std::any visitForeignKeyConstraint(TplSqlParser::ForeignKeyConstraintContext *context) = 0;

    virtual std::any visitConstraintOptsCreate(TplSqlParser::ConstraintOptsCreateContext *context) = 0;

    virtual std::any visitEnableValidateSpecification(TplSqlParser::EnableValidateSpecificationContext *context) = 0;

    virtual std::any visitEnableSpecification(TplSqlParser::EnableSpecificationContext *context) = 0;

    virtual std::any visitValidateSpecification(TplSqlParser::ValidateSpecificationContext *context) = 0;

    virtual std::any visitEnforcedSpecification(TplSqlParser::EnforcedSpecificationContext *context) = 0;

    virtual std::any visitRelySpecification(TplSqlParser::RelySpecificationContext *context) = 0;

    virtual std::any visitColConstraint(TplSqlParser::ColConstraintContext *context) = 0;

    virtual std::any visitColumnConstraintType(TplSqlParser::ColumnConstraintTypeContext *context) = 0;

    virtual std::any visitDefaultVal(TplSqlParser::DefaultValContext *context) = 0;

    virtual std::any visitCheckConstraint(TplSqlParser::CheckConstraintContext *context) = 0;

    virtual std::any visitTableConstraintType(TplSqlParser::TableConstraintTypeContext *context) = 0;

    virtual std::any visitCreateTablePartitionColumnSpec(TplSqlParser::CreateTablePartitionColumnSpecContext *context) = 0;

    virtual std::any visitPartitionTransformSpec(TplSqlParser::PartitionTransformSpecContext *context) = 0;

    virtual std::any visitColumnNameTransformConstraint(TplSqlParser::ColumnNameTransformConstraintContext *context) = 0;

    virtual std::any visitPartitionTransformType(TplSqlParser::PartitionTransformTypeContext *context) = 0;

    virtual std::any visitTableRowFormat(TplSqlParser::TableRowFormatContext *context) = 0;

    virtual std::any visitRowFormatDelimited(TplSqlParser::RowFormatDelimitedContext *context) = 0;

    virtual std::any visitTableRowFormatFieldIdentifier(TplSqlParser::TableRowFormatFieldIdentifierContext *context) = 0;

    virtual std::any visitTableRowFormatCollItemsIdentifier(TplSqlParser::TableRowFormatCollItemsIdentifierContext *context) = 0;

    virtual std::any visitTableRowFormatMapKeysIdentifier(TplSqlParser::TableRowFormatMapKeysIdentifierContext *context) = 0;

    virtual std::any visitTableRowFormatLinesIdentifier(TplSqlParser::TableRowFormatLinesIdentifierContext *context) = 0;

    virtual std::any visitTableRowNullFormat(TplSqlParser::TableRowNullFormatContext *context) = 0;

    virtual std::any visitRowFormatSerde(TplSqlParser::RowFormatSerdeContext *context) = 0;

    virtual std::any visitTableProperties(TplSqlParser::TablePropertiesContext *context) = 0;

    virtual std::any visitTablePropertiesList(TplSqlParser::TablePropertiesListContext *context) = 0;

    virtual std::any visitKeyProperty(TplSqlParser::KeyPropertyContext *context) = 0;

    virtual std::any visitTableFileFormat(TplSqlParser::TableFileFormatContext *context) = 0;

    virtual std::any visitTablePropertiesPrefixed(TplSqlParser::TablePropertiesPrefixedContext *context) = 0;

    virtual std::any visitColumnNameTypeOrConstraintList(TplSqlParser::ColumnNameTypeOrConstraintListContext *context) = 0;

    virtual std::any visitColumnNameTypeOrConstraint(TplSqlParser::ColumnNameTypeOrConstraintContext *context) = 0;

    virtual std::any visitTableConstraint(TplSqlParser::TableConstraintContext *context) = 0;

    virtual std::any visitCreateForeignKey(TplSqlParser::CreateForeignKeyContext *context) = 0;

    virtual std::any visitCreateConstraint(TplSqlParser::CreateConstraintContext *context) = 0;

    virtual std::any visitTableLevelConstraint(TplSqlParser::TableLevelConstraintContext *context) = 0;

    virtual std::any visitPkUkConstraint(TplSqlParser::PkUkConstraintContext *context) = 0;

    virtual std::any visitTableComment(TplSqlParser::TableCommentContext *context) = 0;

    virtual std::any visitTableBuckets(TplSqlParser::TableBucketsContext *context) = 0;

    virtual std::any visitColumnNameOrderList(TplSqlParser::ColumnNameOrderListContext *context) = 0;

    virtual std::any visitColumnNameOrder(TplSqlParser::ColumnNameOrderContext *context) = 0;

    virtual std::any visitOrderSpecification(TplSqlParser::OrderSpecificationContext *context) = 0;

    virtual std::any visitTableSkewed(TplSqlParser::TableSkewedContext *context) = 0;

    virtual std::any visitSkewedValueElement(TplSqlParser::SkewedValueElementContext *context) = 0;

    virtual std::any visitSkewedColumnValues(TplSqlParser::SkewedColumnValuesContext *context) = 0;

    virtual std::any visitSkewedColumnValue(TplSqlParser::SkewedColumnValueContext *context) = 0;

    virtual std::any visitSkewedColumnValuePairList(TplSqlParser::SkewedColumnValuePairListContext *context) = 0;

    virtual std::any visitSkewedColumnValuePair(TplSqlParser::SkewedColumnValuePairContext *context) = 0;

    virtual std::any visitStoredAsDirs(TplSqlParser::StoredAsDirsContext *context) = 0;

    virtual std::any visitSelectStatementWithCTE(TplSqlParser::SelectStatementWithCTEContext *context) = 0;

    virtual std::any visitDropTableStatement(TplSqlParser::DropTableStatementContext *context) = 0;

    virtual std::any visitTruncateTableStatement(TplSqlParser::TruncateTableStatementContext *context) = 0;

    virtual std::any visitTablePartitionPrefix(TplSqlParser::TablePartitionPrefixContext *context) = 0;

    virtual std::any visitForce(TplSqlParser::ForceContext *context) = 0;

    virtual std::any visitAlterStatement(TplSqlParser::AlterStatementContext *context) = 0;

    virtual std::any visitAlterTableStatementSuffix(TplSqlParser::AlterTableStatementSuffixContext *context) = 0;

    virtual std::any visitAlterStatementSuffixRename(TplSqlParser::AlterStatementSuffixRenameContext *context) = 0;

    virtual std::any visitAlterStatementSuffixDropPartitions(TplSqlParser::AlterStatementSuffixDropPartitionsContext *context) = 0;

    virtual std::any visitPartitionSelectorSpec(TplSqlParser::PartitionSelectorSpecContext *context) = 0;

    virtual std::any visitPartitionSelectorVal(TplSqlParser::PartitionSelectorValContext *context) = 0;

    virtual std::any visitPartitionSelectorOperator(TplSqlParser::PartitionSelectorOperatorContext *context) = 0;

    virtual std::any visitAlterStatementSuffixAddPartitions(TplSqlParser::AlterStatementSuffixAddPartitionsContext *context) = 0;

    virtual std::any visitAlterStatementSuffixAddPartitionsElement(TplSqlParser::AlterStatementSuffixAddPartitionsElementContext *context) = 0;

    virtual std::any visitPartitionLocation(TplSqlParser::PartitionLocationContext *context) = 0;

    virtual std::any visitAlterStatementSuffixTouch(TplSqlParser::AlterStatementSuffixTouchContext *context) = 0;

    virtual std::any visitAlterStatementSuffixArchive(TplSqlParser::AlterStatementSuffixArchiveContext *context) = 0;

    virtual std::any visitAlterStatementSuffixUnArchive(TplSqlParser::AlterStatementSuffixUnArchiveContext *context) = 0;

    virtual std::any visitAlterStatementSuffixProperties(TplSqlParser::AlterStatementSuffixPropertiesContext *context) = 0;

    virtual std::any visitAlterStatementSuffixSkewedby(TplSqlParser::AlterStatementSuffixSkewedbyContext *context) = 0;

    virtual std::any visitAlterStatementSuffixExchangePartition(TplSqlParser::AlterStatementSuffixExchangePartitionContext *context) = 0;

    virtual std::any visitAlterStatementPartitionKeyType(TplSqlParser::AlterStatementPartitionKeyTypeContext *context) = 0;

    virtual std::any visitColumnNameType(TplSqlParser::ColumnNameTypeContext *context) = 0;

    virtual std::any visitAlterStatementSuffixDropConstraint(TplSqlParser::AlterStatementSuffixDropConstraintContext *context) = 0;

    virtual std::any visitAlterStatementSuffixAddConstraint(TplSqlParser::AlterStatementSuffixAddConstraintContext *context) = 0;

    virtual std::any visitAlterForeignKeyWithName(TplSqlParser::AlterForeignKeyWithNameContext *context) = 0;

    virtual std::any visitConstraintOptsAlter(TplSqlParser::ConstraintOptsAlterContext *context) = 0;

    virtual std::any visitAlterConstraintWithName(TplSqlParser::AlterConstraintWithNameContext *context) = 0;

    virtual std::any visitAlterTblPartitionStatementSuffix(TplSqlParser::AlterTblPartitionStatementSuffixContext *context) = 0;

    virtual std::any visitAlterStatementSuffixFileFormat(TplSqlParser::AlterStatementSuffixFileFormatContext *context) = 0;

    virtual std::any visitFileFormat(TplSqlParser::FileFormatContext *context) = 0;

    virtual std::any visitAlterStatementSuffixLocation(TplSqlParser::AlterStatementSuffixLocationContext *context) = 0;

    virtual std::any visitAlterStatementSuffixMergeFiles(TplSqlParser::AlterStatementSuffixMergeFilesContext *context) = 0;

    virtual std::any visitAlterStatementSuffixSerdeProperties(TplSqlParser::AlterStatementSuffixSerdePropertiesContext *context) = 0;

    virtual std::any visitAlterStatementSuffixRenamePart(TplSqlParser::AlterStatementSuffixRenamePartContext *context) = 0;

    virtual std::any visitAlterStatementSuffixBucketNum(TplSqlParser::AlterStatementSuffixBucketNumContext *context) = 0;

    virtual std::any visitAlterTblPartitionStatementSuffixSkewedLocation(TplSqlParser::AlterTblPartitionStatementSuffixSkewedLocationContext *context) = 0;

    virtual std::any visitSkewedLocations(TplSqlParser::SkewedLocationsContext *context) = 0;

    virtual std::any visitSkewedLocationsList(TplSqlParser::SkewedLocationsListContext *context) = 0;

    virtual std::any visitSkewedLocationMap(TplSqlParser::SkewedLocationMapContext *context) = 0;

    virtual std::any visitSkewedValueLocationElement(TplSqlParser::SkewedValueLocationElementContext *context) = 0;

    virtual std::any visitAlterStatementSuffixClusterbySortby(TplSqlParser::AlterStatementSuffixClusterbySortbyContext *context) = 0;

    virtual std::any visitAlterStatementSuffixCompact(TplSqlParser::AlterStatementSuffixCompactContext *context) = 0;

    virtual std::any visitTableImplBuckets(TplSqlParser::TableImplBucketsContext *context) = 0;

    virtual std::any visitBlocking(TplSqlParser::BlockingContext *context) = 0;

    virtual std::any visitCompactPool(TplSqlParser::CompactPoolContext *context) = 0;

    virtual std::any visitAlterStatementSuffixUpdateStatsCol(TplSqlParser::AlterStatementSuffixUpdateStatsColContext *context) = 0;

    virtual std::any visitAlterStatementSuffixUpdateStats(TplSqlParser::AlterStatementSuffixUpdateStatsContext *context) = 0;

    virtual std::any visitAlterStatementSuffixRenameCol(TplSqlParser::AlterStatementSuffixRenameColContext *context) = 0;

    virtual std::any visitAlterColumnConstraint(TplSqlParser::AlterColumnConstraintContext *context) = 0;

    virtual std::any visitAlterForeignKeyConstraint(TplSqlParser::AlterForeignKeyConstraintContext *context) = 0;

    virtual std::any visitAlterColConstraint(TplSqlParser::AlterColConstraintContext *context) = 0;

    virtual std::any visitAlterStatementChangeColPosition(TplSqlParser::AlterStatementChangeColPositionContext *context) = 0;

    virtual std::any visitAlterStatementSuffixAddCol(TplSqlParser::AlterStatementSuffixAddColContext *context) = 0;

    virtual std::any visitColumnNameTypeList(TplSqlParser::ColumnNameTypeListContext *context) = 0;

    virtual std::any visitAlterStatementSuffixUpdateColumns(TplSqlParser::AlterStatementSuffixUpdateColumnsContext *context) = 0;

    virtual std::any visitAlterStatementSuffixSetOwner(TplSqlParser::AlterStatementSuffixSetOwnerContext *context) = 0;

    virtual std::any visitPrincipalName(TplSqlParser::PrincipalNameContext *context) = 0;

    virtual std::any visitPrincipalIdentifier(TplSqlParser::PrincipalIdentifierContext *context) = 0;

    virtual std::any visitAlterStatementSuffixSetPartSpec(TplSqlParser::AlterStatementSuffixSetPartSpecContext *context) = 0;

    virtual std::any visitAlterStatementSuffixExecute(TplSqlParser::AlterStatementSuffixExecuteContext *context) = 0;

    virtual std::any visitAlterViewStatementSuffix(TplSqlParser::AlterViewStatementSuffixContext *context) = 0;

    virtual std::any visitAlterViewSuffixProperties(TplSqlParser::AlterViewSuffixPropertiesContext *context) = 0;

    virtual std::any visitAlterMaterializedViewStatementSuffix(TplSqlParser::AlterMaterializedViewStatementSuffixContext *context) = 0;

    virtual std::any visitAlterMaterializedViewSuffixRewrite(TplSqlParser::AlterMaterializedViewSuffixRewriteContext *context) = 0;

    virtual std::any visitRewriteEnabled(TplSqlParser::RewriteEnabledContext *context) = 0;

    virtual std::any visitRewriteDisabled(TplSqlParser::RewriteDisabledContext *context) = 0;

    virtual std::any visitAlterMaterializedViewSuffixRebuild(TplSqlParser::AlterMaterializedViewSuffixRebuildContext *context) = 0;

    virtual std::any visitAlterDatabaseStatementSuffix(TplSqlParser::AlterDatabaseStatementSuffixContext *context) = 0;

    virtual std::any visitAlterDatabaseSuffixProperties(TplSqlParser::AlterDatabaseSuffixPropertiesContext *context) = 0;

    virtual std::any visitAlterDatabaseSuffixSetOwner(TplSqlParser::AlterDatabaseSuffixSetOwnerContext *context) = 0;

    virtual std::any visitAlterDatabaseSuffixSetLocation(TplSqlParser::AlterDatabaseSuffixSetLocationContext *context) = 0;

    virtual std::any visitAlterDataConnectorStatementSuffix(TplSqlParser::AlterDataConnectorStatementSuffixContext *context) = 0;

    virtual std::any visitAlterDataConnectorSuffixProperties(TplSqlParser::AlterDataConnectorSuffixPropertiesContext *context) = 0;

    virtual std::any visitDcProperties(TplSqlParser::DcPropertiesContext *context) = 0;

    virtual std::any visitAlterDataConnectorSuffixSetOwner(TplSqlParser::AlterDataConnectorSuffixSetOwnerContext *context) = 0;

    virtual std::any visitAlterDataConnectorSuffixSetUrl(TplSqlParser::AlterDataConnectorSuffixSetUrlContext *context) = 0;

    virtual std::any visitDescStatement(TplSqlParser::DescStatementContext *context) = 0;

    virtual std::any visitDescFuncNames(TplSqlParser::DescFuncNamesContext *context) = 0;

    virtual std::any visitSysFuncNames(TplSqlParser::SysFuncNamesContext *context) = 0;

    virtual std::any visitTabPartColTypeExpr(TplSqlParser::TabPartColTypeExprContext *context) = 0;

    virtual std::any visitExtColumnName(TplSqlParser::ExtColumnNameContext *context) = 0;

    virtual std::any visitShowStatement(TplSqlParser::ShowStatementContext *context) = 0;

    virtual std::any visitShowStmtIdentifier(TplSqlParser::ShowStmtIdentifierContext *context) = 0;

    virtual std::any visitFrom_in(TplSqlParser::From_inContext *context) = 0;

    virtual std::any visitShowTablesFilterExpr(TplSqlParser::ShowTablesFilterExprContext *context) = 0;

    virtual std::any visitShowFunctionIdentifier(TplSqlParser::ShowFunctionIdentifierContext *context) = 0;

    virtual std::any visitPartTypeExpr(TplSqlParser::PartTypeExprContext *context) = 0;

    virtual std::any visitTabTypeExpr(TplSqlParser::TabTypeExprContext *context) = 0;

    virtual std::any visitCompactionId(TplSqlParser::CompactionIdContext *context) = 0;

    virtual std::any visitCompactionPool(TplSqlParser::CompactionPoolContext *context) = 0;

    virtual std::any visitCompactionType(TplSqlParser::CompactionTypeContext *context) = 0;

    virtual std::any visitCompactionStatus(TplSqlParser::CompactionStatusContext *context) = 0;

    virtual std::any visitMetastoreCheck(TplSqlParser::MetastoreCheckContext *context) = 0;

    virtual std::any visitCreateViewStatement(TplSqlParser::CreateViewStatementContext *context) = 0;

    virtual std::any visitOrReplace(TplSqlParser::OrReplaceContext *context) = 0;

    virtual std::any visitColumnNameCommentList(TplSqlParser::ColumnNameCommentListContext *context) = 0;

    virtual std::any visitColumnNameComment(TplSqlParser::ColumnNameCommentContext *context) = 0;

    virtual std::any visitViewPartition(TplSqlParser::ViewPartitionContext *context) = 0;

    virtual std::any visitCreateMaterializedViewStatement(TplSqlParser::CreateMaterializedViewStatementContext *context) = 0;

    virtual std::any visitViewOrganization(TplSqlParser::ViewOrganizationContext *context) = 0;

    virtual std::any visitViewClusterSpec(TplSqlParser::ViewClusterSpecContext *context) = 0;

    virtual std::any visitViewComplexSpec(TplSqlParser::ViewComplexSpecContext *context) = 0;

    virtual std::any visitViewDistSpec(TplSqlParser::ViewDistSpecContext *context) = 0;

    virtual std::any visitViewSortSpec(TplSqlParser::ViewSortSpecContext *context) = 0;

    virtual std::any visitCreateScheduledQueryStatement(TplSqlParser::CreateScheduledQueryStatementContext *context) = 0;

    virtual std::any visitScheduleSpec(TplSqlParser::ScheduleSpecContext *context) = 0;

    virtual std::any visitExecutedAsSpec(TplSqlParser::ExecutedAsSpecContext *context) = 0;

    virtual std::any visitDefinedAsSpec(TplSqlParser::DefinedAsSpecContext *context) = 0;

    virtual std::any visitAlterScheduledQueryStatement(TplSqlParser::AlterScheduledQueryStatementContext *context) = 0;

    virtual std::any visitAlterScheduledQueryChange(TplSqlParser::AlterScheduledQueryChangeContext *context) = 0;

    virtual std::any visitDropScheduledQueryStatement(TplSqlParser::DropScheduledQueryStatementContext *context) = 0;

    virtual std::any visitDropViewStatement(TplSqlParser::DropViewStatementContext *context) = 0;

    virtual std::any visitViewName(TplSqlParser::ViewNameContext *context) = 0;

    virtual std::any visitDropMaterializedViewStatement(TplSqlParser::DropMaterializedViewStatementContext *context) = 0;

    virtual std::any visitCreateFunctionStatement(TplSqlParser::CreateFunctionStatementContext *context) = 0;

    virtual std::any visitResourceList(TplSqlParser::ResourceListContext *context) = 0;

    virtual std::any visitResource(TplSqlParser::ResourceContext *context) = 0;

    virtual std::any visitResourceType(TplSqlParser::ResourceTypeContext *context) = 0;

    virtual std::any visitCreateMacroStatement(TplSqlParser::CreateMacroStatementContext *context) = 0;

    virtual std::any visitDropFunctionStatement(TplSqlParser::DropFunctionStatementContext *context) = 0;

    virtual std::any visitReloadFunctionsStatement(TplSqlParser::ReloadFunctionsStatementContext *context) = 0;

    virtual std::any visitDropMacroStatement(TplSqlParser::DropMacroStatementContext *context) = 0;

    virtual std::any visitAnalyzeStatement(TplSqlParser::AnalyzeStatementContext *context) = 0;

    virtual std::any visitLockStatement(TplSqlParser::LockStatementContext *context) = 0;

    virtual std::any visitLockMode(TplSqlParser::LockModeContext *context) = 0;

    virtual std::any visitUnlockStatement(TplSqlParser::UnlockStatementContext *context) = 0;

    virtual std::any visitLockDatabase(TplSqlParser::LockDatabaseContext *context) = 0;

    virtual std::any visitUnlockDatabase(TplSqlParser::UnlockDatabaseContext *context) = 0;

    virtual std::any visitCreateRoleStatement(TplSqlParser::CreateRoleStatementContext *context) = 0;

    virtual std::any visitDropRoleStatement(TplSqlParser::DropRoleStatementContext *context) = 0;

    virtual std::any visitGrantPrivileges(TplSqlParser::GrantPrivilegesContext *context) = 0;

    virtual std::any visitPrivilegeList(TplSqlParser::PrivilegeListContext *context) = 0;

    virtual std::any visitPrivlegeDef(TplSqlParser::PrivlegeDefContext *context) = 0;

    virtual std::any visitPrivilegeType(TplSqlParser::PrivilegeTypeContext *context) = 0;

    virtual std::any visitPrivilegeObject(TplSqlParser::PrivilegeObjectContext *context) = 0;

    virtual std::any visitPrivObject(TplSqlParser::PrivObjectContext *context) = 0;

    virtual std::any visitPrincipalSpecification(TplSqlParser::PrincipalSpecificationContext *context) = 0;

    virtual std::any visitWithGrantOption(TplSqlParser::WithGrantOptionContext *context) = 0;

    virtual std::any visitRevokePrivileges(TplSqlParser::RevokePrivilegesContext *context) = 0;

    virtual std::any visitGrantOptionFor(TplSqlParser::GrantOptionForContext *context) = 0;

    virtual std::any visitShowGrants(TplSqlParser::ShowGrantsContext *context) = 0;

    virtual std::any visitPrivilegeIncludeColObject(TplSqlParser::PrivilegeIncludeColObjectContext *context) = 0;

    virtual std::any visitPrivObjectCols(TplSqlParser::PrivObjectColsContext *context) = 0;

    virtual std::any visitShowRoleGrants(TplSqlParser::ShowRoleGrantsContext *context) = 0;

    virtual std::any visitShowRolePrincipals(TplSqlParser::ShowRolePrincipalsContext *context) = 0;

    virtual std::any visitShowRoles(TplSqlParser::ShowRolesContext *context) = 0;

    virtual std::any visitGrantRole(TplSqlParser::GrantRoleContext *context) = 0;

    virtual std::any visitWithAdminOption(TplSqlParser::WithAdminOptionContext *context) = 0;

    virtual std::any visitRevokeRole(TplSqlParser::RevokeRoleContext *context) = 0;

    virtual std::any visitAdminOptionFor(TplSqlParser::AdminOptionForContext *context) = 0;

    virtual std::any visitSetRole(TplSqlParser::SetRoleContext *context) = 0;

    virtual std::any visitShowCurrentRole(TplSqlParser::ShowCurrentRoleContext *context) = 0;

    virtual std::any visitAbortTransactionStatement(TplSqlParser::AbortTransactionStatementContext *context) = 0;

    virtual std::any visitAbortCompactionStatement(TplSqlParser::AbortCompactionStatementContext *context) = 0;

    virtual std::any visitKillQueryStatement(TplSqlParser::KillQueryStatementContext *context) = 0;

    virtual std::any visitResourcePlanDdlStatements(TplSqlParser::ResourcePlanDdlStatementsContext *context) = 0;

    virtual std::any visitCreateResourcePlanStatement(TplSqlParser::CreateResourcePlanStatementContext *context) = 0;

    virtual std::any visitRpAssignList(TplSqlParser::RpAssignListContext *context) = 0;

    virtual std::any visitRpAssign(TplSqlParser::RpAssignContext *context) = 0;

    virtual std::any visitPoolPath(TplSqlParser::PoolPathContext *context) = 0;

    virtual std::any visitAlterResourcePlanStatement(TplSqlParser::AlterResourcePlanStatementContext *context) = 0;

    virtual std::any visitRpUnassignList(TplSqlParser::RpUnassignListContext *context) = 0;

    virtual std::any visitRpUnassign(TplSqlParser::RpUnassignContext *context) = 0;

    virtual std::any visitActivate(TplSqlParser::ActivateContext *context) = 0;

    virtual std::any visitWithReplace(TplSqlParser::WithReplaceContext *context) = 0;

    virtual std::any visitEnable(TplSqlParser::EnableContext *context) = 0;

    virtual std::any visitDropResourcePlanStatement(TplSqlParser::DropResourcePlanStatementContext *context) = 0;

    virtual std::any visitGlobalWmStatement(TplSqlParser::GlobalWmStatementContext *context) = 0;

    virtual std::any visitAlterWmStatement(TplSqlParser::AlterWmStatementContext *context) = 0;

    virtual std::any visitReplaceResourcePlanStatement(TplSqlParser::ReplaceResourcePlanStatementContext *context) = 0;

    virtual std::any visitCreateTriggerStatement(TplSqlParser::CreateTriggerStatementContext *context) = 0;

    virtual std::any visitTriggerExpression(TplSqlParser::TriggerExpressionContext *context) = 0;

    virtual std::any visitTriggerAtomExpression(TplSqlParser::TriggerAtomExpressionContext *context) = 0;

    virtual std::any visitComparisionOperator(TplSqlParser::ComparisionOperatorContext *context) = 0;

    virtual std::any visitTriggerLiteral(TplSqlParser::TriggerLiteralContext *context) = 0;

    virtual std::any visitTriggerActionExpression(TplSqlParser::TriggerActionExpressionContext *context) = 0;

    virtual std::any visitAlterTriggerStatement(TplSqlParser::AlterTriggerStatementContext *context) = 0;

    virtual std::any visitDropTriggerStatement(TplSqlParser::DropTriggerStatementContext *context) = 0;

    virtual std::any visitCreatePoolStatement(TplSqlParser::CreatePoolStatementContext *context) = 0;

    virtual std::any visitPoolAssignList(TplSqlParser::PoolAssignListContext *context) = 0;

    virtual std::any visitPoolAssign(TplSqlParser::PoolAssignContext *context) = 0;

    virtual std::any visitAlterPoolStatement(TplSqlParser::AlterPoolStatementContext *context) = 0;

    virtual std::any visitDropPoolStatement(TplSqlParser::DropPoolStatementContext *context) = 0;

    virtual std::any visitCreateMappingStatement(TplSqlParser::CreateMappingStatementContext *context) = 0;

    virtual std::any visitUnmanaged(TplSqlParser::UnmanagedContext *context) = 0;

    virtual std::any visitAlterMappingStatement(TplSqlParser::AlterMappingStatementContext *context) = 0;

    virtual std::any visitDropMappingStatement(TplSqlParser::DropMappingStatementContext *context) = 0;

    virtual std::any visitCreateDataConnectorStatement(TplSqlParser::CreateDataConnectorStatementContext *context) = 0;

    virtual std::any visitDataConnectorType(TplSqlParser::DataConnectorTypeContext *context) = 0;

    virtual std::any visitDataConnectorUrl(TplSqlParser::DataConnectorUrlContext *context) = 0;

    virtual std::any visitDataConnectorComment(TplSqlParser::DataConnectorCommentContext *context) = 0;

    virtual std::any visitDropDataConnectorStatement(TplSqlParser::DropDataConnectorStatementContext *context) = 0;

    virtual std::any visitDeleteStatement(TplSqlParser::DeleteStatementContext *context) = 0;

    virtual std::any visitUpdateStatement(TplSqlParser::UpdateStatementContext *context) = 0;

    virtual std::any visitSetColumnsClause(TplSqlParser::SetColumnsClauseContext *context) = 0;

    virtual std::any visitColumnAssignmentClause(TplSqlParser::ColumnAssignmentClauseContext *context) = 0;

    virtual std::any visitPrecedencePlusExpressionOrDefault(TplSqlParser::PrecedencePlusExpressionOrDefaultContext *context) = 0;

    virtual std::any visitSqlTransactionStatement(TplSqlParser::SqlTransactionStatementContext *context) = 0;

    virtual std::any visitStartTransactionStatement(TplSqlParser::StartTransactionStatementContext *context) = 0;

    virtual std::any visitTransactionMode(TplSqlParser::TransactionModeContext *context) = 0;

    virtual std::any visitIsolationLevel(TplSqlParser::IsolationLevelContext *context) = 0;

    virtual std::any visitLevelOfIsolation(TplSqlParser::LevelOfIsolationContext *context) = 0;

    virtual std::any visitTransactionAccessMode(TplSqlParser::TransactionAccessModeContext *context) = 0;

    virtual std::any visitCommitStatement(TplSqlParser::CommitStatementContext *context) = 0;

    virtual std::any visitRollbackStatement(TplSqlParser::RollbackStatementContext *context) = 0;

    virtual std::any visitSetAutoCommitStatement(TplSqlParser::SetAutoCommitStatementContext *context) = 0;

    virtual std::any visitBooleanValueTok(TplSqlParser::BooleanValueTokContext *context) = 0;

    virtual std::any visitMergeStatement(TplSqlParser::MergeStatementContext *context) = 0;

    virtual std::any visitWhenClauses(TplSqlParser::WhenClausesContext *context) = 0;

    virtual std::any visitWhenMatchedAndClause(TplSqlParser::WhenMatchedAndClauseContext *context) = 0;

    virtual std::any visitUpdateOrDelete(TplSqlParser::UpdateOrDeleteContext *context) = 0;

    virtual std::any visitWhenMatchedThenClause(TplSqlParser::WhenMatchedThenClauseContext *context) = 0;

    virtual std::any visitWhenNotMatchedClause(TplSqlParser::WhenNotMatchedClauseContext *context) = 0;

    virtual std::any visitValueRowConstructor(TplSqlParser::ValueRowConstructorContext *context) = 0;

    virtual std::any visitPrepareStatement(TplSqlParser::PrepareStatementContext *context) = 0;

    virtual std::any visitExecuteStatement(TplSqlParser::ExecuteStatementContext *context) = 0;

    virtual std::any visitExecuteParamList(TplSqlParser::ExecuteParamListContext *context) = 0;

    virtual std::any visitNonReserved(TplSqlParser::NonReservedContext *context) = 0;

    virtual std::any visitTplsqlPrimitiveType(TplSqlParser::TplsqlPrimitiveTypeContext *context) = 0;

    virtual std::any visitTplsqlNumericType(TplSqlParser::TplsqlNumericTypeContext *context) = 0;

    virtual std::any visitAdql(TplSqlParser::AdqlContext *context) = 0;

    virtual std::any visitQueryStatementExpression(TplSqlParser::QueryStatementExpressionContext *context) = 0;

    virtual std::any visitWithClause(TplSqlParser::WithClauseContext *context) = 0;

    virtual std::any visitId_(TplSqlParser::Id_Context *context) = 0;

    virtual std::any visitAll_distinct(TplSqlParser::All_distinctContext *context) = 0;

    virtual std::any visitSet_limit(TplSqlParser::Set_limitContext *context) = 0;

    virtual std::any visitSelectList(TplSqlParser::SelectListContext *context) = 0;

    virtual std::any visitTableAllColumns(TplSqlParser::TableAllColumnsContext *context) = 0;

    virtual std::any visitExpression(TplSqlParser::ExpressionContext *context) = 0;

    virtual std::any visitPrecedenceOrExpression(TplSqlParser::PrecedenceOrExpressionContext *context) = 0;

    virtual std::any visitPrecedenceAndExpression(TplSqlParser::PrecedenceAndExpressionContext *context) = 0;

    virtual std::any visitPrecedenceNotExpression(TplSqlParser::PrecedenceNotExpressionContext *context) = 0;

    virtual std::any visitPrecedenceNotOperator(TplSqlParser::PrecedenceNotOperatorContext *context) = 0;

    virtual std::any visitPrecedenceUnarySuffixExpression(TplSqlParser::PrecedenceUnarySuffixExpressionContext *context) = 0;

    virtual std::any visitPrecedenceEqualExpression(TplSqlParser::PrecedenceEqualExpressionContext *context) = 0;

    virtual std::any visitPrecedenceSimilarExpression(TplSqlParser::PrecedenceSimilarExpressionContext *context) = 0;

    virtual std::any visitPrecedenceSimilarExpressionMain(TplSqlParser::PrecedenceSimilarExpressionMainContext *context) = 0;

    virtual std::any visitPrecedenceBitwiseOrExpression(TplSqlParser::PrecedenceBitwiseOrExpressionContext *context) = 0;

    virtual std::any visitPrecedenceAmpersandExpression(TplSqlParser::PrecedenceAmpersandExpressionContext *context) = 0;

    virtual std::any visitPrecedenceConcatenateExpression(TplSqlParser::PrecedenceConcatenateExpressionContext *context) = 0;

    virtual std::any visitPrecedencePlusExpression(TplSqlParser::PrecedencePlusExpressionContext *context) = 0;

    virtual std::any visitPrecedenceStarExpression(TplSqlParser::PrecedenceStarExpressionContext *context) = 0;

    virtual std::any visitPrecedenceBitwiseXorExpression(TplSqlParser::PrecedenceBitwiseXorExpressionContext *context) = 0;

    virtual std::any visitPrecedenceUnaryPrefixExpression(TplSqlParser::PrecedenceUnaryPrefixExpressionContext *context) = 0;

    virtual std::any visitPrecedenceUnaryOperator(TplSqlParser::PrecedenceUnaryOperatorContext *context) = 0;

    virtual std::any visitPrecedenceFieldExpression(TplSqlParser::PrecedenceFieldExpressionContext *context) = 0;

    virtual std::any visitAtomExpression(TplSqlParser::AtomExpressionContext *context) = 0;

    virtual std::any visitConstant(TplSqlParser::ConstantContext *context) = 0;

    virtual std::any visitIntervalLiteral(TplSqlParser::IntervalLiteralContext *context) = 0;

    virtual std::any visitIntervalValue(TplSqlParser::IntervalValueContext *context) = 0;

    virtual std::any visitIntervalQualifiers(TplSqlParser::IntervalQualifiersContext *context) = 0;

    virtual std::any visitDateLiteral(TplSqlParser::DateLiteralContext *context) = 0;

    virtual std::any visitTimestampLiteral(TplSqlParser::TimestampLiteralContext *context) = 0;

    virtual std::any visitTimestampLocalTZLiteral(TplSqlParser::TimestampLocalTZLiteralContext *context) = 0;

    virtual std::any visitStringLiteralSequence(TplSqlParser::StringLiteralSequenceContext *context) = 0;

    virtual std::any visitCharSetStringLiteral(TplSqlParser::CharSetStringLiteralContext *context) = 0;

    virtual std::any visitBooleanValue(TplSqlParser::BooleanValueContext *context) = 0;

    virtual std::any visitPrepareStmtParam(TplSqlParser::PrepareStmtParamContext *context) = 0;

    virtual std::any visitParameterIdx(TplSqlParser::ParameterIdxContext *context) = 0;

    virtual std::any visitIntervalExpression(TplSqlParser::IntervalExpressionContext *context) = 0;

    virtual std::any visitCastExpression(TplSqlParser::CastExpressionContext *context) = 0;

    virtual std::any visitExtractExpression(TplSqlParser::ExtractExpressionContext *context) = 0;

    virtual std::any visitTimeQualifiers(TplSqlParser::TimeQualifiersContext *context) = 0;

    virtual std::any visitFloorExpression(TplSqlParser::FloorExpressionContext *context) = 0;

    virtual std::any visitFloorDateQualifiers(TplSqlParser::FloorDateQualifiersContext *context) = 0;

    virtual std::any visitCaseExpression(TplSqlParser::CaseExpressionContext *context) = 0;

    virtual std::any visitWhenExpression(TplSqlParser::WhenExpressionContext *context) = 0;

    virtual std::any visitSubQueryExpression(TplSqlParser::SubQueryExpressionContext *context) = 0;

    virtual std::any visitFunction_(TplSqlParser::Function_Context *context) = 0;

    virtual std::any visitTrimFunction(TplSqlParser::TrimFunctionContext *context) = 0;

    virtual std::any visitFunctionName(TplSqlParser::FunctionNameContext *context) = 0;

    virtual std::any visitFunctionIdentifier(TplSqlParser::FunctionIdentifierContext *context) = 0;

    virtual std::any visitSql11ReservedKeywordsUsedAsFunctionName(TplSqlParser::Sql11ReservedKeywordsUsedAsFunctionNameContext *context) = 0;

    virtual std::any visitSelectExpression(TplSqlParser::SelectExpressionContext *context) = 0;

    virtual std::any visitOrderByClause(TplSqlParser::OrderByClauseContext *context) = 0;

    virtual std::any visitColumnRefOrder(TplSqlParser::ColumnRefOrderContext *context) = 0;

    virtual std::any visitOrderSpecificationRewrite(TplSqlParser::OrderSpecificationRewriteContext *context) = 0;

    virtual std::any visitNullOrdering(TplSqlParser::NullOrderingContext *context) = 0;

    virtual std::any visitNull_treatment(TplSqlParser::Null_treatmentContext *context) = 0;

    virtual std::any visitWindow_specification(TplSqlParser::Window_specificationContext *context) = 0;

    virtual std::any visitPartitioningSpec(TplSqlParser::PartitioningSpecContext *context) = 0;

    virtual std::any visitPartitionByClause(TplSqlParser::PartitionByClauseContext *context) = 0;

    virtual std::any visitExpressions(TplSqlParser::ExpressionsContext *context) = 0;

    virtual std::any visitExpressionsInParenthesis(TplSqlParser::ExpressionsInParenthesisContext *context) = 0;

    virtual std::any visitExpressionsNotInParenthesis(TplSqlParser::ExpressionsNotInParenthesisContext *context) = 0;

    virtual std::any visitExpressionOrDefault(TplSqlParser::ExpressionOrDefaultContext *context) = 0;

    virtual std::any visitDefaultValue(TplSqlParser::DefaultValueContext *context) = 0;

    virtual std::any visitExpressionPart(TplSqlParser::ExpressionPartContext *context) = 0;

    virtual std::any visitDistributeByClause(TplSqlParser::DistributeByClauseContext *context) = 0;

    virtual std::any visitSortByClause(TplSqlParser::SortByClauseContext *context) = 0;

    virtual std::any visitColumnRefOrderInParenthesis(TplSqlParser::ColumnRefOrderInParenthesisContext *context) = 0;

    virtual std::any visitColumnRefOrderNotInParenthesis(TplSqlParser::ColumnRefOrderNotInParenthesisContext *context) = 0;

    virtual std::any visitClusterByClause(TplSqlParser::ClusterByClauseContext *context) = 0;

    virtual std::any visitWindow_frame(TplSqlParser::Window_frameContext *context) = 0;

    virtual std::any visitWindow_range_expression(TplSqlParser::Window_range_expressionContext *context) = 0;

    virtual std::any visitWindow_frame_start_boundary(TplSqlParser::Window_frame_start_boundaryContext *context) = 0;

    virtual std::any visitWindow_frame_boundary(TplSqlParser::Window_frame_boundaryContext *context) = 0;

    virtual std::any visitWindow_value_expression(TplSqlParser::Window_value_expressionContext *context) = 0;

    virtual std::any visitTableOrColumn(TplSqlParser::TableOrColumnContext *context) = 0;

    virtual std::any visitPrecedenceBitwiseXorOperator(TplSqlParser::PrecedenceBitwiseXorOperatorContext *context) = 0;

    virtual std::any visitPrecedenceStarOperator(TplSqlParser::PrecedenceStarOperatorContext *context) = 0;

    virtual std::any visitPrecedencePlusOperator(TplSqlParser::PrecedencePlusOperatorContext *context) = 0;

    virtual std::any visitPrecedenceConcatenateOperator(TplSqlParser::PrecedenceConcatenateOperatorContext *context) = 0;

    virtual std::any visitPrecedenceAmpersandOperator(TplSqlParser::PrecedenceAmpersandOperatorContext *context) = 0;

    virtual std::any visitPrecedenceBitwiseOrOperator(TplSqlParser::PrecedenceBitwiseOrOperatorContext *context) = 0;

    virtual std::any visitPrecedenceSimilarExpressionPart(TplSqlParser::PrecedenceSimilarExpressionPartContext *context) = 0;

    virtual std::any visitPrecedenceSimilarOperator(TplSqlParser::PrecedenceSimilarOperatorContext *context) = 0;

    virtual std::any visitPrecedenceRegexpOperator(TplSqlParser::PrecedenceRegexpOperatorContext *context) = 0;

    virtual std::any visitPrecedenceSimilarExpressionAtom(TplSqlParser::PrecedenceSimilarExpressionAtomContext *context) = 0;

    virtual std::any visitPrecedenceSimilarExpressionQuantifierPredicate(TplSqlParser::PrecedenceSimilarExpressionQuantifierPredicateContext *context) = 0;

    virtual std::any visitSubQuerySelectorOperator(TplSqlParser::SubQuerySelectorOperatorContext *context) = 0;

    virtual std::any visitQuantifierType(TplSqlParser::QuantifierTypeContext *context) = 0;

    virtual std::any visitPrecedenceSimilarExpressionPartNot(TplSqlParser::PrecedenceSimilarExpressionPartNotContext *context) = 0;

    virtual std::any visitPrecedenceSimilarExpressionIn(TplSqlParser::PrecedenceSimilarExpressionInContext *context) = 0;

    virtual std::any visitPrecedenceEqualOperator(TplSqlParser::PrecedenceEqualOperatorContext *context) = 0;

    virtual std::any visitPrecedenceDistinctOperator(TplSqlParser::PrecedenceDistinctOperatorContext *context) = 0;

    virtual std::any visitIsCondition(TplSqlParser::IsConditionContext *context) = 0;

    virtual std::any visitPrecedenceAndOperator(TplSqlParser::PrecedenceAndOperatorContext *context) = 0;

    virtual std::any visitPrecedenceOrOperator(TplSqlParser::PrecedenceOrOperatorContext *context) = 0;

    virtual std::any visitFromClause(TplSqlParser::FromClauseContext *context) = 0;

    virtual std::any visitJoinSource(TplSqlParser::JoinSourceContext *context) = 0;

    virtual std::any visitSubQuerySource(TplSqlParser::SubQuerySourceContext *context) = 0;

    virtual std::any visitJoinToken(TplSqlParser::JoinTokenContext *context) = 0;

    virtual std::any visitColumnParenthesesList(TplSqlParser::ColumnParenthesesListContext *context) = 0;

    virtual std::any visitColumnNameList(TplSqlParser::ColumnNameListContext *context) = 0;

    virtual std::any visitColumnName(TplSqlParser::ColumnNameContext *context) = 0;

    virtual std::any visitWhereClause(TplSqlParser::WhereClauseContext *context) = 0;

    virtual std::any visitSearchCondition(TplSqlParser::SearchConditionContext *context) = 0;

    virtual std::any visitGroupByClause(TplSqlParser::GroupByClauseContext *context) = 0;

    virtual std::any visitGroupByEmpty(TplSqlParser::GroupByEmptyContext *context) = 0;

    virtual std::any visitHavingClause(TplSqlParser::HavingClauseContext *context) = 0;

    virtual std::any visitHavingCondition(TplSqlParser::HavingConditionContext *context) = 0;

    virtual std::any visitWindow_clause(TplSqlParser::Window_clauseContext *context) = 0;

    virtual std::any visitWindow_defn(TplSqlParser::Window_defnContext *context) = 0;

    virtual std::any visitSetOpSelectStatement(TplSqlParser::SetOpSelectStatementContext *context) = 0;

    virtual std::any visitSetOperator(TplSqlParser::SetOperatorContext *context) = 0;

    virtual std::any visitLimitClause(TplSqlParser::LimitClauseContext *context) = 0;

    virtual std::any visitAdqlPrimitiveType(TplSqlParser::AdqlPrimitiveTypeContext *context) = 0;


};

