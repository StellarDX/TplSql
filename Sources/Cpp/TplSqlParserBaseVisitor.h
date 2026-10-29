
// Generated from ./TplSqlParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "TplSqlParserVisitor.h"


/**
 * This class provides an empty implementation of TplSqlParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  TplSqlParserBaseVisitor : public TplSqlParserVisitor {
public:

  virtual std::any visitTplsql(TplSqlParser::TplsqlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(TplSqlParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExplainStatement(TplSqlParser::ExplainStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExplainOption(TplSqlParser::ExplainOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVectorizationOnly(TplSqlParser::VectorizationOnlyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVectorizatonDetail(TplSqlParser::VectorizatonDetailContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExecStatement(TplSqlParser::ExecStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCteStatement(TplSqlParser::CteStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQueryStatementExpressionBody(TplSqlParser::QueryStatementExpressionBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFromStatement(TplSqlParser::FromStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSingleFromStatement(TplSqlParser::SingleFromStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFromSource(TplSqlParser::FromSourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUniqueJoinToken(TplSqlParser::UniqueJoinTokenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUniqueJoinSource(TplSqlParser::UniqueJoinSourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUniqueJoinTableSource(TplSqlParser::UniqueJoinTableSourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUniqueJoinExpr(TplSqlParser::UniqueJoinExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressionList(TplSqlParser::ExpressionListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBody(TplSqlParser::BodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInsertClause(TplSqlParser::InsertClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDestination(TplSqlParser::DestinationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLateralView(TplSqlParser::LateralViewContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableAlias(TplSqlParser::TableAliasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValuesClause(TplSqlParser::ValuesClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValuesTableConstructor(TplSqlParser::ValuesTableConstructorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFirstValueRowConstructor(TplSqlParser::FirstValueRowConstructorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFirstExpressionsWithAlias(TplSqlParser::FirstExpressionsWithAliasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressionWithAlias(TplSqlParser::ExpressionWithAliasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQualifyClause(TplSqlParser::QualifyClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRegularBody(TplSqlParser::RegularBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelectStatement(TplSqlParser::SelectStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtomSelectStatement(TplSqlParser::AtomSelectStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValuesSource(TplSqlParser::ValuesSourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelectClause(TplSqlParser::SelectClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelectTrfmClause(TplSqlParser::SelectTrfmClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelectExpressionList(TplSqlParser::SelectExpressionListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRowFormat(TplSqlParser::RowFormatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRecordWriter(TplSqlParser::RecordWriterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAliasList(TplSqlParser::AliasListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRecordReader(TplSqlParser::RecordReaderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTrfmClause(TplSqlParser::TrfmClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelectItem(TplSqlParser::SelectItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableName(TplSqlParser::TableNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtomjoinSource(TplSqlParser::AtomjoinSourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableSource(TplSqlParser::TableSourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableSample(TplSqlParser::TableSampleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableBucketSample(TplSqlParser::TableBucketSampleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSplitSample(TplSqlParser::SplitSampleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAsOfClause(TplSqlParser::AsOfClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVirtualTableSource(TplSqlParser::VirtualTableSourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPartitionedTableFunction(TplSqlParser::PartitionedTableFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPartitionTableFunctionSource(TplSqlParser::PartitionTableFunctionSourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJoinSourcePart(TplSqlParser::JoinSourcePartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGroupby_expression(TplSqlParser::Groupby_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRollupStandard(TplSqlParser::RollupStandardContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRollupOldSyntax(TplSqlParser::RollupOldSyntaxContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGroupingSetExpression(TplSqlParser::GroupingSetExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGroupingSetExpressionMultiple(TplSqlParser::GroupingSetExpressionMultipleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGroupingExpressionSingle(TplSqlParser::GroupingExpressionSingleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLoadStatement(TplSqlParser::LoadStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableOrPartition(TplSqlParser::TableOrPartitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPartitionSpec(TplSqlParser::PartitionSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPartitionVal(TplSqlParser::PartitionValContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInputFileFormat(TplSqlParser::InputFileFormatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExportStatement(TplSqlParser::ExportStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReplicationClause(TplSqlParser::ReplicationClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImportStatement(TplSqlParser::ImportStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableLocation(TplSqlParser::TableLocationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDdlStatement(TplSqlParser::DdlStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreateDatabaseStatement(TplSqlParser::CreateDatabaseStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDb_schema(TplSqlParser::Db_schemaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfNotExists(TplSqlParser::IfNotExistsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDatabaseComment(TplSqlParser::DatabaseCommentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDbLocation(TplSqlParser::DbLocationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDbManagedLocation(TplSqlParser::DbManagedLocationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDbProperties(TplSqlParser::DbPropertiesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDbPropertiesList(TplSqlParser::DbPropertiesListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitKeyValueProperty(TplSqlParser::KeyValuePropertyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDbConnectorName(TplSqlParser::DbConnectorNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSwitchDatabaseStatement(TplSqlParser::SwitchDatabaseStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDropDatabaseStatement(TplSqlParser::DropDatabaseStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfExists(TplSqlParser::IfExistsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRestrictOrCascade(TplSqlParser::RestrictOrCascadeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreateTableStatement(TplSqlParser::CreateTableStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLikeTableOrFile(TplSqlParser::LikeTableOrFileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreateTablePartitionSpec(TplSqlParser::CreateTablePartitionSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreateTablePartitionColumnTypeSpec(TplSqlParser::CreateTablePartitionColumnTypeSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumnNameTypeConstraint(TplSqlParser::ColumnNameTypeConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColType(TplSqlParser::ColTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType(TplSqlParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitListType(TplSqlParser::ListTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStructType(TplSqlParser::StructTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumnNameColonTypeList(TplSqlParser::ColumnNameColonTypeListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumnNameColonType(TplSqlParser::ColumnNameColonTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMapType(TplSqlParser::MapTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnionType(TplSqlParser::UnionTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComplexType(TplSqlParser::ComplexTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColTypeList(TplSqlParser::ColTypeListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumnConstraint(TplSqlParser::ColumnConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForeignKeyConstraint(TplSqlParser::ForeignKeyConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstraintOptsCreate(TplSqlParser::ConstraintOptsCreateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnableValidateSpecification(TplSqlParser::EnableValidateSpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnableSpecification(TplSqlParser::EnableSpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValidateSpecification(TplSqlParser::ValidateSpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnforcedSpecification(TplSqlParser::EnforcedSpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelySpecification(TplSqlParser::RelySpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColConstraint(TplSqlParser::ColConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumnConstraintType(TplSqlParser::ColumnConstraintTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefaultVal(TplSqlParser::DefaultValContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCheckConstraint(TplSqlParser::CheckConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableConstraintType(TplSqlParser::TableConstraintTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreateTablePartitionColumnSpec(TplSqlParser::CreateTablePartitionColumnSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPartitionTransformSpec(TplSqlParser::PartitionTransformSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumnNameTransformConstraint(TplSqlParser::ColumnNameTransformConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPartitionTransformType(TplSqlParser::PartitionTransformTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableRowFormat(TplSqlParser::TableRowFormatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRowFormatDelimited(TplSqlParser::RowFormatDelimitedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableRowFormatFieldIdentifier(TplSqlParser::TableRowFormatFieldIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableRowFormatCollItemsIdentifier(TplSqlParser::TableRowFormatCollItemsIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableRowFormatMapKeysIdentifier(TplSqlParser::TableRowFormatMapKeysIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableRowFormatLinesIdentifier(TplSqlParser::TableRowFormatLinesIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableRowNullFormat(TplSqlParser::TableRowNullFormatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRowFormatSerde(TplSqlParser::RowFormatSerdeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableProperties(TplSqlParser::TablePropertiesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTablePropertiesList(TplSqlParser::TablePropertiesListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitKeyProperty(TplSqlParser::KeyPropertyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableFileFormat(TplSqlParser::TableFileFormatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTablePropertiesPrefixed(TplSqlParser::TablePropertiesPrefixedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumnNameTypeOrConstraintList(TplSqlParser::ColumnNameTypeOrConstraintListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumnNameTypeOrConstraint(TplSqlParser::ColumnNameTypeOrConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableConstraint(TplSqlParser::TableConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreateForeignKey(TplSqlParser::CreateForeignKeyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreateConstraint(TplSqlParser::CreateConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableLevelConstraint(TplSqlParser::TableLevelConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPkUkConstraint(TplSqlParser::PkUkConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableComment(TplSqlParser::TableCommentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableBuckets(TplSqlParser::TableBucketsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumnNameOrderList(TplSqlParser::ColumnNameOrderListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumnNameOrder(TplSqlParser::ColumnNameOrderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOrderSpecification(TplSqlParser::OrderSpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableSkewed(TplSqlParser::TableSkewedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSkewedValueElement(TplSqlParser::SkewedValueElementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSkewedColumnValues(TplSqlParser::SkewedColumnValuesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSkewedColumnValue(TplSqlParser::SkewedColumnValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSkewedColumnValuePairList(TplSqlParser::SkewedColumnValuePairListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSkewedColumnValuePair(TplSqlParser::SkewedColumnValuePairContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStoredAsDirs(TplSqlParser::StoredAsDirsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelectStatementWithCTE(TplSqlParser::SelectStatementWithCTEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDropTableStatement(TplSqlParser::DropTableStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTruncateTableStatement(TplSqlParser::TruncateTableStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTablePartitionPrefix(TplSqlParser::TablePartitionPrefixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForce(TplSqlParser::ForceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterStatement(TplSqlParser::AlterStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterTableStatementSuffix(TplSqlParser::AlterTableStatementSuffixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterStatementSuffixRename(TplSqlParser::AlterStatementSuffixRenameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterStatementSuffixDropPartitions(TplSqlParser::AlterStatementSuffixDropPartitionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPartitionSelectorSpec(TplSqlParser::PartitionSelectorSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPartitionSelectorVal(TplSqlParser::PartitionSelectorValContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPartitionSelectorOperator(TplSqlParser::PartitionSelectorOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterStatementSuffixAddPartitions(TplSqlParser::AlterStatementSuffixAddPartitionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterStatementSuffixAddPartitionsElement(TplSqlParser::AlterStatementSuffixAddPartitionsElementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPartitionLocation(TplSqlParser::PartitionLocationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterStatementSuffixTouch(TplSqlParser::AlterStatementSuffixTouchContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterStatementSuffixArchive(TplSqlParser::AlterStatementSuffixArchiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterStatementSuffixUnArchive(TplSqlParser::AlterStatementSuffixUnArchiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterStatementSuffixProperties(TplSqlParser::AlterStatementSuffixPropertiesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterStatementSuffixSkewedby(TplSqlParser::AlterStatementSuffixSkewedbyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterStatementSuffixExchangePartition(TplSqlParser::AlterStatementSuffixExchangePartitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterStatementPartitionKeyType(TplSqlParser::AlterStatementPartitionKeyTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumnNameType(TplSqlParser::ColumnNameTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterStatementSuffixDropConstraint(TplSqlParser::AlterStatementSuffixDropConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterStatementSuffixAddConstraint(TplSqlParser::AlterStatementSuffixAddConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterForeignKeyWithName(TplSqlParser::AlterForeignKeyWithNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstraintOptsAlter(TplSqlParser::ConstraintOptsAlterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterConstraintWithName(TplSqlParser::AlterConstraintWithNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterTblPartitionStatementSuffix(TplSqlParser::AlterTblPartitionStatementSuffixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterStatementSuffixFileFormat(TplSqlParser::AlterStatementSuffixFileFormatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFileFormat(TplSqlParser::FileFormatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterStatementSuffixLocation(TplSqlParser::AlterStatementSuffixLocationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterStatementSuffixMergeFiles(TplSqlParser::AlterStatementSuffixMergeFilesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterStatementSuffixSerdeProperties(TplSqlParser::AlterStatementSuffixSerdePropertiesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterStatementSuffixRenamePart(TplSqlParser::AlterStatementSuffixRenamePartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterStatementSuffixBucketNum(TplSqlParser::AlterStatementSuffixBucketNumContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterTblPartitionStatementSuffixSkewedLocation(TplSqlParser::AlterTblPartitionStatementSuffixSkewedLocationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSkewedLocations(TplSqlParser::SkewedLocationsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSkewedLocationsList(TplSqlParser::SkewedLocationsListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSkewedLocationMap(TplSqlParser::SkewedLocationMapContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSkewedValueLocationElement(TplSqlParser::SkewedValueLocationElementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterStatementSuffixClusterbySortby(TplSqlParser::AlterStatementSuffixClusterbySortbyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterStatementSuffixCompact(TplSqlParser::AlterStatementSuffixCompactContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableImplBuckets(TplSqlParser::TableImplBucketsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlocking(TplSqlParser::BlockingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompactPool(TplSqlParser::CompactPoolContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterStatementSuffixUpdateStatsCol(TplSqlParser::AlterStatementSuffixUpdateStatsColContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterStatementSuffixUpdateStats(TplSqlParser::AlterStatementSuffixUpdateStatsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterStatementSuffixRenameCol(TplSqlParser::AlterStatementSuffixRenameColContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterColumnConstraint(TplSqlParser::AlterColumnConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterForeignKeyConstraint(TplSqlParser::AlterForeignKeyConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterColConstraint(TplSqlParser::AlterColConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterStatementChangeColPosition(TplSqlParser::AlterStatementChangeColPositionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterStatementSuffixAddCol(TplSqlParser::AlterStatementSuffixAddColContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumnNameTypeList(TplSqlParser::ColumnNameTypeListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterStatementSuffixUpdateColumns(TplSqlParser::AlterStatementSuffixUpdateColumnsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterStatementSuffixSetOwner(TplSqlParser::AlterStatementSuffixSetOwnerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrincipalName(TplSqlParser::PrincipalNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrincipalIdentifier(TplSqlParser::PrincipalIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterStatementSuffixSetPartSpec(TplSqlParser::AlterStatementSuffixSetPartSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterStatementSuffixExecute(TplSqlParser::AlterStatementSuffixExecuteContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterViewStatementSuffix(TplSqlParser::AlterViewStatementSuffixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterViewSuffixProperties(TplSqlParser::AlterViewSuffixPropertiesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterMaterializedViewStatementSuffix(TplSqlParser::AlterMaterializedViewStatementSuffixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterMaterializedViewSuffixRewrite(TplSqlParser::AlterMaterializedViewSuffixRewriteContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRewriteEnabled(TplSqlParser::RewriteEnabledContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRewriteDisabled(TplSqlParser::RewriteDisabledContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterMaterializedViewSuffixRebuild(TplSqlParser::AlterMaterializedViewSuffixRebuildContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterDatabaseStatementSuffix(TplSqlParser::AlterDatabaseStatementSuffixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterDatabaseSuffixProperties(TplSqlParser::AlterDatabaseSuffixPropertiesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterDatabaseSuffixSetOwner(TplSqlParser::AlterDatabaseSuffixSetOwnerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterDatabaseSuffixSetLocation(TplSqlParser::AlterDatabaseSuffixSetLocationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterDataConnectorStatementSuffix(TplSqlParser::AlterDataConnectorStatementSuffixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterDataConnectorSuffixProperties(TplSqlParser::AlterDataConnectorSuffixPropertiesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDcProperties(TplSqlParser::DcPropertiesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterDataConnectorSuffixSetOwner(TplSqlParser::AlterDataConnectorSuffixSetOwnerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterDataConnectorSuffixSetUrl(TplSqlParser::AlterDataConnectorSuffixSetUrlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDescStatement(TplSqlParser::DescStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDescFuncNames(TplSqlParser::DescFuncNamesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSysFuncNames(TplSqlParser::SysFuncNamesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTabPartColTypeExpr(TplSqlParser::TabPartColTypeExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExtColumnName(TplSqlParser::ExtColumnNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitShowStatement(TplSqlParser::ShowStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitShowStmtIdentifier(TplSqlParser::ShowStmtIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFrom_in(TplSqlParser::From_inContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitShowTablesFilterExpr(TplSqlParser::ShowTablesFilterExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitShowFunctionIdentifier(TplSqlParser::ShowFunctionIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPartTypeExpr(TplSqlParser::PartTypeExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTabTypeExpr(TplSqlParser::TabTypeExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompactionId(TplSqlParser::CompactionIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompactionPool(TplSqlParser::CompactionPoolContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompactionType(TplSqlParser::CompactionTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompactionStatus(TplSqlParser::CompactionStatusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMetastoreCheck(TplSqlParser::MetastoreCheckContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreateViewStatement(TplSqlParser::CreateViewStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOrReplace(TplSqlParser::OrReplaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumnNameCommentList(TplSqlParser::ColumnNameCommentListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumnNameComment(TplSqlParser::ColumnNameCommentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitViewPartition(TplSqlParser::ViewPartitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreateMaterializedViewStatement(TplSqlParser::CreateMaterializedViewStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitViewOrganization(TplSqlParser::ViewOrganizationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitViewClusterSpec(TplSqlParser::ViewClusterSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitViewComplexSpec(TplSqlParser::ViewComplexSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitViewDistSpec(TplSqlParser::ViewDistSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitViewSortSpec(TplSqlParser::ViewSortSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreateScheduledQueryStatement(TplSqlParser::CreateScheduledQueryStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitScheduleSpec(TplSqlParser::ScheduleSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExecutedAsSpec(TplSqlParser::ExecutedAsSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefinedAsSpec(TplSqlParser::DefinedAsSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterScheduledQueryStatement(TplSqlParser::AlterScheduledQueryStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterScheduledQueryChange(TplSqlParser::AlterScheduledQueryChangeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDropScheduledQueryStatement(TplSqlParser::DropScheduledQueryStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDropViewStatement(TplSqlParser::DropViewStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitViewName(TplSqlParser::ViewNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDropMaterializedViewStatement(TplSqlParser::DropMaterializedViewStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreateFunctionStatement(TplSqlParser::CreateFunctionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitResourceList(TplSqlParser::ResourceListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitResource(TplSqlParser::ResourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitResourceType(TplSqlParser::ResourceTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreateMacroStatement(TplSqlParser::CreateMacroStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDropFunctionStatement(TplSqlParser::DropFunctionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReloadFunctionsStatement(TplSqlParser::ReloadFunctionsStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDropMacroStatement(TplSqlParser::DropMacroStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAnalyzeStatement(TplSqlParser::AnalyzeStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLockStatement(TplSqlParser::LockStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLockMode(TplSqlParser::LockModeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnlockStatement(TplSqlParser::UnlockStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLockDatabase(TplSqlParser::LockDatabaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnlockDatabase(TplSqlParser::UnlockDatabaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreateRoleStatement(TplSqlParser::CreateRoleStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDropRoleStatement(TplSqlParser::DropRoleStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGrantPrivileges(TplSqlParser::GrantPrivilegesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrivilegeList(TplSqlParser::PrivilegeListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrivlegeDef(TplSqlParser::PrivlegeDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrivilegeType(TplSqlParser::PrivilegeTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrivilegeObject(TplSqlParser::PrivilegeObjectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrivObject(TplSqlParser::PrivObjectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrincipalSpecification(TplSqlParser::PrincipalSpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWithGrantOption(TplSqlParser::WithGrantOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRevokePrivileges(TplSqlParser::RevokePrivilegesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGrantOptionFor(TplSqlParser::GrantOptionForContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitShowGrants(TplSqlParser::ShowGrantsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrivilegeIncludeColObject(TplSqlParser::PrivilegeIncludeColObjectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrivObjectCols(TplSqlParser::PrivObjectColsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitShowRoleGrants(TplSqlParser::ShowRoleGrantsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitShowRolePrincipals(TplSqlParser::ShowRolePrincipalsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitShowRoles(TplSqlParser::ShowRolesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGrantRole(TplSqlParser::GrantRoleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWithAdminOption(TplSqlParser::WithAdminOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRevokeRole(TplSqlParser::RevokeRoleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdminOptionFor(TplSqlParser::AdminOptionForContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSetRole(TplSqlParser::SetRoleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitShowCurrentRole(TplSqlParser::ShowCurrentRoleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAbortTransactionStatement(TplSqlParser::AbortTransactionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAbortCompactionStatement(TplSqlParser::AbortCompactionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitKillQueryStatement(TplSqlParser::KillQueryStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitResourcePlanDdlStatements(TplSqlParser::ResourcePlanDdlStatementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreateResourcePlanStatement(TplSqlParser::CreateResourcePlanStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRpAssignList(TplSqlParser::RpAssignListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRpAssign(TplSqlParser::RpAssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPoolPath(TplSqlParser::PoolPathContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterResourcePlanStatement(TplSqlParser::AlterResourcePlanStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRpUnassignList(TplSqlParser::RpUnassignListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRpUnassign(TplSqlParser::RpUnassignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitActivate(TplSqlParser::ActivateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWithReplace(TplSqlParser::WithReplaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnable(TplSqlParser::EnableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDropResourcePlanStatement(TplSqlParser::DropResourcePlanStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGlobalWmStatement(TplSqlParser::GlobalWmStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterWmStatement(TplSqlParser::AlterWmStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReplaceResourcePlanStatement(TplSqlParser::ReplaceResourcePlanStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreateTriggerStatement(TplSqlParser::CreateTriggerStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTriggerExpression(TplSqlParser::TriggerExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTriggerAtomExpression(TplSqlParser::TriggerAtomExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComparisionOperator(TplSqlParser::ComparisionOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTriggerLiteral(TplSqlParser::TriggerLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTriggerActionExpression(TplSqlParser::TriggerActionExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterTriggerStatement(TplSqlParser::AlterTriggerStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDropTriggerStatement(TplSqlParser::DropTriggerStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreatePoolStatement(TplSqlParser::CreatePoolStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPoolAssignList(TplSqlParser::PoolAssignListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPoolAssign(TplSqlParser::PoolAssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterPoolStatement(TplSqlParser::AlterPoolStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDropPoolStatement(TplSqlParser::DropPoolStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreateMappingStatement(TplSqlParser::CreateMappingStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnmanaged(TplSqlParser::UnmanagedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlterMappingStatement(TplSqlParser::AlterMappingStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDropMappingStatement(TplSqlParser::DropMappingStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreateDataConnectorStatement(TplSqlParser::CreateDataConnectorStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDataConnectorType(TplSqlParser::DataConnectorTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDataConnectorUrl(TplSqlParser::DataConnectorUrlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDataConnectorComment(TplSqlParser::DataConnectorCommentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDropDataConnectorStatement(TplSqlParser::DropDataConnectorStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeleteStatement(TplSqlParser::DeleteStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUpdateStatement(TplSqlParser::UpdateStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSetColumnsClause(TplSqlParser::SetColumnsClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumnAssignmentClause(TplSqlParser::ColumnAssignmentClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedencePlusExpressionOrDefault(TplSqlParser::PrecedencePlusExpressionOrDefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSqlTransactionStatement(TplSqlParser::SqlTransactionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStartTransactionStatement(TplSqlParser::StartTransactionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTransactionMode(TplSqlParser::TransactionModeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIsolationLevel(TplSqlParser::IsolationLevelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLevelOfIsolation(TplSqlParser::LevelOfIsolationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTransactionAccessMode(TplSqlParser::TransactionAccessModeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCommitStatement(TplSqlParser::CommitStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRollbackStatement(TplSqlParser::RollbackStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSetAutoCommitStatement(TplSqlParser::SetAutoCommitStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBooleanValueTok(TplSqlParser::BooleanValueTokContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMergeStatement(TplSqlParser::MergeStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhenClauses(TplSqlParser::WhenClausesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhenMatchedAndClause(TplSqlParser::WhenMatchedAndClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUpdateOrDelete(TplSqlParser::UpdateOrDeleteContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhenMatchedThenClause(TplSqlParser::WhenMatchedThenClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhenNotMatchedClause(TplSqlParser::WhenNotMatchedClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValueRowConstructor(TplSqlParser::ValueRowConstructorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrepareStatement(TplSqlParser::PrepareStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExecuteStatement(TplSqlParser::ExecuteStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExecuteParamList(TplSqlParser::ExecuteParamListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNonReserved(TplSqlParser::NonReservedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTplsqlPrimitiveType(TplSqlParser::TplsqlPrimitiveTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTplsqlNumericType(TplSqlParser::TplsqlNumericTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdql(TplSqlParser::AdqlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQueryStatementExpression(TplSqlParser::QueryStatementExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWithClause(TplSqlParser::WithClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitId_(TplSqlParser::Id_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAll_distinct(TplSqlParser::All_distinctContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSet_limit(TplSqlParser::Set_limitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelectList(TplSqlParser::SelectListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableAllColumns(TplSqlParser::TableAllColumnsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(TplSqlParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceOrExpression(TplSqlParser::PrecedenceOrExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceAndExpression(TplSqlParser::PrecedenceAndExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceNotExpression(TplSqlParser::PrecedenceNotExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceNotOperator(TplSqlParser::PrecedenceNotOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceUnarySuffixExpression(TplSqlParser::PrecedenceUnarySuffixExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceEqualExpression(TplSqlParser::PrecedenceEqualExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceSimilarExpression(TplSqlParser::PrecedenceSimilarExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceSimilarExpressionMain(TplSqlParser::PrecedenceSimilarExpressionMainContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceBitwiseOrExpression(TplSqlParser::PrecedenceBitwiseOrExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceAmpersandExpression(TplSqlParser::PrecedenceAmpersandExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceConcatenateExpression(TplSqlParser::PrecedenceConcatenateExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedencePlusExpression(TplSqlParser::PrecedencePlusExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceStarExpression(TplSqlParser::PrecedenceStarExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceBitwiseXorExpression(TplSqlParser::PrecedenceBitwiseXorExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceUnaryPrefixExpression(TplSqlParser::PrecedenceUnaryPrefixExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceUnaryOperator(TplSqlParser::PrecedenceUnaryOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceFieldExpression(TplSqlParser::PrecedenceFieldExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtomExpression(TplSqlParser::AtomExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstant(TplSqlParser::ConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntervalLiteral(TplSqlParser::IntervalLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntervalValue(TplSqlParser::IntervalValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntervalQualifiers(TplSqlParser::IntervalQualifiersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDateLiteral(TplSqlParser::DateLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTimestampLiteral(TplSqlParser::TimestampLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTimestampLocalTZLiteral(TplSqlParser::TimestampLocalTZLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStringLiteralSequence(TplSqlParser::StringLiteralSequenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCharSetStringLiteral(TplSqlParser::CharSetStringLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBooleanValue(TplSqlParser::BooleanValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrepareStmtParam(TplSqlParser::PrepareStmtParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterIdx(TplSqlParser::ParameterIdxContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntervalExpression(TplSqlParser::IntervalExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCastExpression(TplSqlParser::CastExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExtractExpression(TplSqlParser::ExtractExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTimeQualifiers(TplSqlParser::TimeQualifiersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFloorExpression(TplSqlParser::FloorExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFloorDateQualifiers(TplSqlParser::FloorDateQualifiersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCaseExpression(TplSqlParser::CaseExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhenExpression(TplSqlParser::WhenExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubQueryExpression(TplSqlParser::SubQueryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction_(TplSqlParser::Function_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTrimFunction(TplSqlParser::TrimFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionName(TplSqlParser::FunctionNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionIdentifier(TplSqlParser::FunctionIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSql11ReservedKeywordsUsedAsFunctionName(TplSqlParser::Sql11ReservedKeywordsUsedAsFunctionNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelectExpression(TplSqlParser::SelectExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOrderByClause(TplSqlParser::OrderByClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumnRefOrder(TplSqlParser::ColumnRefOrderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOrderSpecificationRewrite(TplSqlParser::OrderSpecificationRewriteContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNullOrdering(TplSqlParser::NullOrderingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNull_treatment(TplSqlParser::Null_treatmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWindow_specification(TplSqlParser::Window_specificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPartitioningSpec(TplSqlParser::PartitioningSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPartitionByClause(TplSqlParser::PartitionByClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressions(TplSqlParser::ExpressionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressionsInParenthesis(TplSqlParser::ExpressionsInParenthesisContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressionsNotInParenthesis(TplSqlParser::ExpressionsNotInParenthesisContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressionOrDefault(TplSqlParser::ExpressionOrDefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefaultValue(TplSqlParser::DefaultValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressionPart(TplSqlParser::ExpressionPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDistributeByClause(TplSqlParser::DistributeByClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSortByClause(TplSqlParser::SortByClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumnRefOrderInParenthesis(TplSqlParser::ColumnRefOrderInParenthesisContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumnRefOrderNotInParenthesis(TplSqlParser::ColumnRefOrderNotInParenthesisContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClusterByClause(TplSqlParser::ClusterByClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWindow_frame(TplSqlParser::Window_frameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWindow_range_expression(TplSqlParser::Window_range_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWindow_frame_start_boundary(TplSqlParser::Window_frame_start_boundaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWindow_frame_boundary(TplSqlParser::Window_frame_boundaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWindow_value_expression(TplSqlParser::Window_value_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableOrColumn(TplSqlParser::TableOrColumnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceBitwiseXorOperator(TplSqlParser::PrecedenceBitwiseXorOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceStarOperator(TplSqlParser::PrecedenceStarOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedencePlusOperator(TplSqlParser::PrecedencePlusOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceConcatenateOperator(TplSqlParser::PrecedenceConcatenateOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceAmpersandOperator(TplSqlParser::PrecedenceAmpersandOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceBitwiseOrOperator(TplSqlParser::PrecedenceBitwiseOrOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceSimilarExpressionPart(TplSqlParser::PrecedenceSimilarExpressionPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceSimilarOperator(TplSqlParser::PrecedenceSimilarOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceRegexpOperator(TplSqlParser::PrecedenceRegexpOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceSimilarExpressionAtom(TplSqlParser::PrecedenceSimilarExpressionAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceSimilarExpressionQuantifierPredicate(TplSqlParser::PrecedenceSimilarExpressionQuantifierPredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubQuerySelectorOperator(TplSqlParser::SubQuerySelectorOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQuantifierType(TplSqlParser::QuantifierTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceSimilarExpressionPartNot(TplSqlParser::PrecedenceSimilarExpressionPartNotContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceSimilarExpressionIn(TplSqlParser::PrecedenceSimilarExpressionInContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceEqualOperator(TplSqlParser::PrecedenceEqualOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceDistinctOperator(TplSqlParser::PrecedenceDistinctOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIsCondition(TplSqlParser::IsConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceAndOperator(TplSqlParser::PrecedenceAndOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceOrOperator(TplSqlParser::PrecedenceOrOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFromClause(TplSqlParser::FromClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJoinSource(TplSqlParser::JoinSourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubQuerySource(TplSqlParser::SubQuerySourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJoinToken(TplSqlParser::JoinTokenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumnParenthesesList(TplSqlParser::ColumnParenthesesListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumnNameList(TplSqlParser::ColumnNameListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumnName(TplSqlParser::ColumnNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhereClause(TplSqlParser::WhereClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSearchCondition(TplSqlParser::SearchConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGroupByClause(TplSqlParser::GroupByClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGroupByEmpty(TplSqlParser::GroupByEmptyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHavingClause(TplSqlParser::HavingClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHavingCondition(TplSqlParser::HavingConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWindow_clause(TplSqlParser::Window_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWindow_defn(TplSqlParser::Window_defnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSetOpSelectStatement(TplSqlParser::SetOpSelectStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSetOperator(TplSqlParser::SetOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLimitClause(TplSqlParser::LimitClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdqlPrimitiveType(TplSqlParser::AdqlPrimitiveTypeContext *ctx) override {
    return visitChildren(ctx);
  }


};

