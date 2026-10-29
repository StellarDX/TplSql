
// Generated from ./TplSqlParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "TplSqlParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by TplSqlParser.
 */
class  TplSqlParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterTplsql(TplSqlParser::TplsqlContext *ctx) = 0;
  virtual void exitTplsql(TplSqlParser::TplsqlContext *ctx) = 0;

  virtual void enterStatement(TplSqlParser::StatementContext *ctx) = 0;
  virtual void exitStatement(TplSqlParser::StatementContext *ctx) = 0;

  virtual void enterExplainStatement(TplSqlParser::ExplainStatementContext *ctx) = 0;
  virtual void exitExplainStatement(TplSqlParser::ExplainStatementContext *ctx) = 0;

  virtual void enterExplainOption(TplSqlParser::ExplainOptionContext *ctx) = 0;
  virtual void exitExplainOption(TplSqlParser::ExplainOptionContext *ctx) = 0;

  virtual void enterVectorizationOnly(TplSqlParser::VectorizationOnlyContext *ctx) = 0;
  virtual void exitVectorizationOnly(TplSqlParser::VectorizationOnlyContext *ctx) = 0;

  virtual void enterVectorizatonDetail(TplSqlParser::VectorizatonDetailContext *ctx) = 0;
  virtual void exitVectorizatonDetail(TplSqlParser::VectorizatonDetailContext *ctx) = 0;

  virtual void enterExecStatement(TplSqlParser::ExecStatementContext *ctx) = 0;
  virtual void exitExecStatement(TplSqlParser::ExecStatementContext *ctx) = 0;

  virtual void enterCteStatement(TplSqlParser::CteStatementContext *ctx) = 0;
  virtual void exitCteStatement(TplSqlParser::CteStatementContext *ctx) = 0;

  virtual void enterQueryStatementExpressionBody(TplSqlParser::QueryStatementExpressionBodyContext *ctx) = 0;
  virtual void exitQueryStatementExpressionBody(TplSqlParser::QueryStatementExpressionBodyContext *ctx) = 0;

  virtual void enterFromStatement(TplSqlParser::FromStatementContext *ctx) = 0;
  virtual void exitFromStatement(TplSqlParser::FromStatementContext *ctx) = 0;

  virtual void enterSingleFromStatement(TplSqlParser::SingleFromStatementContext *ctx) = 0;
  virtual void exitSingleFromStatement(TplSqlParser::SingleFromStatementContext *ctx) = 0;

  virtual void enterFromSource(TplSqlParser::FromSourceContext *ctx) = 0;
  virtual void exitFromSource(TplSqlParser::FromSourceContext *ctx) = 0;

  virtual void enterUniqueJoinToken(TplSqlParser::UniqueJoinTokenContext *ctx) = 0;
  virtual void exitUniqueJoinToken(TplSqlParser::UniqueJoinTokenContext *ctx) = 0;

  virtual void enterUniqueJoinSource(TplSqlParser::UniqueJoinSourceContext *ctx) = 0;
  virtual void exitUniqueJoinSource(TplSqlParser::UniqueJoinSourceContext *ctx) = 0;

  virtual void enterUniqueJoinTableSource(TplSqlParser::UniqueJoinTableSourceContext *ctx) = 0;
  virtual void exitUniqueJoinTableSource(TplSqlParser::UniqueJoinTableSourceContext *ctx) = 0;

  virtual void enterUniqueJoinExpr(TplSqlParser::UniqueJoinExprContext *ctx) = 0;
  virtual void exitUniqueJoinExpr(TplSqlParser::UniqueJoinExprContext *ctx) = 0;

  virtual void enterExpressionList(TplSqlParser::ExpressionListContext *ctx) = 0;
  virtual void exitExpressionList(TplSqlParser::ExpressionListContext *ctx) = 0;

  virtual void enterBody(TplSqlParser::BodyContext *ctx) = 0;
  virtual void exitBody(TplSqlParser::BodyContext *ctx) = 0;

  virtual void enterInsertClause(TplSqlParser::InsertClauseContext *ctx) = 0;
  virtual void exitInsertClause(TplSqlParser::InsertClauseContext *ctx) = 0;

  virtual void enterDestination(TplSqlParser::DestinationContext *ctx) = 0;
  virtual void exitDestination(TplSqlParser::DestinationContext *ctx) = 0;

  virtual void enterLateralView(TplSqlParser::LateralViewContext *ctx) = 0;
  virtual void exitLateralView(TplSqlParser::LateralViewContext *ctx) = 0;

  virtual void enterTableAlias(TplSqlParser::TableAliasContext *ctx) = 0;
  virtual void exitTableAlias(TplSqlParser::TableAliasContext *ctx) = 0;

  virtual void enterValuesClause(TplSqlParser::ValuesClauseContext *ctx) = 0;
  virtual void exitValuesClause(TplSqlParser::ValuesClauseContext *ctx) = 0;

  virtual void enterValuesTableConstructor(TplSqlParser::ValuesTableConstructorContext *ctx) = 0;
  virtual void exitValuesTableConstructor(TplSqlParser::ValuesTableConstructorContext *ctx) = 0;

  virtual void enterFirstValueRowConstructor(TplSqlParser::FirstValueRowConstructorContext *ctx) = 0;
  virtual void exitFirstValueRowConstructor(TplSqlParser::FirstValueRowConstructorContext *ctx) = 0;

  virtual void enterFirstExpressionsWithAlias(TplSqlParser::FirstExpressionsWithAliasContext *ctx) = 0;
  virtual void exitFirstExpressionsWithAlias(TplSqlParser::FirstExpressionsWithAliasContext *ctx) = 0;

  virtual void enterExpressionWithAlias(TplSqlParser::ExpressionWithAliasContext *ctx) = 0;
  virtual void exitExpressionWithAlias(TplSqlParser::ExpressionWithAliasContext *ctx) = 0;

  virtual void enterQualifyClause(TplSqlParser::QualifyClauseContext *ctx) = 0;
  virtual void exitQualifyClause(TplSqlParser::QualifyClauseContext *ctx) = 0;

  virtual void enterRegularBody(TplSqlParser::RegularBodyContext *ctx) = 0;
  virtual void exitRegularBody(TplSqlParser::RegularBodyContext *ctx) = 0;

  virtual void enterSelectStatement(TplSqlParser::SelectStatementContext *ctx) = 0;
  virtual void exitSelectStatement(TplSqlParser::SelectStatementContext *ctx) = 0;

  virtual void enterAtomSelectStatement(TplSqlParser::AtomSelectStatementContext *ctx) = 0;
  virtual void exitAtomSelectStatement(TplSqlParser::AtomSelectStatementContext *ctx) = 0;

  virtual void enterValuesSource(TplSqlParser::ValuesSourceContext *ctx) = 0;
  virtual void exitValuesSource(TplSqlParser::ValuesSourceContext *ctx) = 0;

  virtual void enterSelectClause(TplSqlParser::SelectClauseContext *ctx) = 0;
  virtual void exitSelectClause(TplSqlParser::SelectClauseContext *ctx) = 0;

  virtual void enterSelectTrfmClause(TplSqlParser::SelectTrfmClauseContext *ctx) = 0;
  virtual void exitSelectTrfmClause(TplSqlParser::SelectTrfmClauseContext *ctx) = 0;

  virtual void enterSelectExpressionList(TplSqlParser::SelectExpressionListContext *ctx) = 0;
  virtual void exitSelectExpressionList(TplSqlParser::SelectExpressionListContext *ctx) = 0;

  virtual void enterRowFormat(TplSqlParser::RowFormatContext *ctx) = 0;
  virtual void exitRowFormat(TplSqlParser::RowFormatContext *ctx) = 0;

  virtual void enterRecordWriter(TplSqlParser::RecordWriterContext *ctx) = 0;
  virtual void exitRecordWriter(TplSqlParser::RecordWriterContext *ctx) = 0;

  virtual void enterAliasList(TplSqlParser::AliasListContext *ctx) = 0;
  virtual void exitAliasList(TplSqlParser::AliasListContext *ctx) = 0;

  virtual void enterRecordReader(TplSqlParser::RecordReaderContext *ctx) = 0;
  virtual void exitRecordReader(TplSqlParser::RecordReaderContext *ctx) = 0;

  virtual void enterTrfmClause(TplSqlParser::TrfmClauseContext *ctx) = 0;
  virtual void exitTrfmClause(TplSqlParser::TrfmClauseContext *ctx) = 0;

  virtual void enterSelectItem(TplSqlParser::SelectItemContext *ctx) = 0;
  virtual void exitSelectItem(TplSqlParser::SelectItemContext *ctx) = 0;

  virtual void enterTableName(TplSqlParser::TableNameContext *ctx) = 0;
  virtual void exitTableName(TplSqlParser::TableNameContext *ctx) = 0;

  virtual void enterAtomjoinSource(TplSqlParser::AtomjoinSourceContext *ctx) = 0;
  virtual void exitAtomjoinSource(TplSqlParser::AtomjoinSourceContext *ctx) = 0;

  virtual void enterTableSource(TplSqlParser::TableSourceContext *ctx) = 0;
  virtual void exitTableSource(TplSqlParser::TableSourceContext *ctx) = 0;

  virtual void enterTableSample(TplSqlParser::TableSampleContext *ctx) = 0;
  virtual void exitTableSample(TplSqlParser::TableSampleContext *ctx) = 0;

  virtual void enterTableBucketSample(TplSqlParser::TableBucketSampleContext *ctx) = 0;
  virtual void exitTableBucketSample(TplSqlParser::TableBucketSampleContext *ctx) = 0;

  virtual void enterSplitSample(TplSqlParser::SplitSampleContext *ctx) = 0;
  virtual void exitSplitSample(TplSqlParser::SplitSampleContext *ctx) = 0;

  virtual void enterAsOfClause(TplSqlParser::AsOfClauseContext *ctx) = 0;
  virtual void exitAsOfClause(TplSqlParser::AsOfClauseContext *ctx) = 0;

  virtual void enterVirtualTableSource(TplSqlParser::VirtualTableSourceContext *ctx) = 0;
  virtual void exitVirtualTableSource(TplSqlParser::VirtualTableSourceContext *ctx) = 0;

  virtual void enterPartitionedTableFunction(TplSqlParser::PartitionedTableFunctionContext *ctx) = 0;
  virtual void exitPartitionedTableFunction(TplSqlParser::PartitionedTableFunctionContext *ctx) = 0;

  virtual void enterPartitionTableFunctionSource(TplSqlParser::PartitionTableFunctionSourceContext *ctx) = 0;
  virtual void exitPartitionTableFunctionSource(TplSqlParser::PartitionTableFunctionSourceContext *ctx) = 0;

  virtual void enterJoinSourcePart(TplSqlParser::JoinSourcePartContext *ctx) = 0;
  virtual void exitJoinSourcePart(TplSqlParser::JoinSourcePartContext *ctx) = 0;

  virtual void enterGroupby_expression(TplSqlParser::Groupby_expressionContext *ctx) = 0;
  virtual void exitGroupby_expression(TplSqlParser::Groupby_expressionContext *ctx) = 0;

  virtual void enterRollupStandard(TplSqlParser::RollupStandardContext *ctx) = 0;
  virtual void exitRollupStandard(TplSqlParser::RollupStandardContext *ctx) = 0;

  virtual void enterRollupOldSyntax(TplSqlParser::RollupOldSyntaxContext *ctx) = 0;
  virtual void exitRollupOldSyntax(TplSqlParser::RollupOldSyntaxContext *ctx) = 0;

  virtual void enterGroupingSetExpression(TplSqlParser::GroupingSetExpressionContext *ctx) = 0;
  virtual void exitGroupingSetExpression(TplSqlParser::GroupingSetExpressionContext *ctx) = 0;

  virtual void enterGroupingSetExpressionMultiple(TplSqlParser::GroupingSetExpressionMultipleContext *ctx) = 0;
  virtual void exitGroupingSetExpressionMultiple(TplSqlParser::GroupingSetExpressionMultipleContext *ctx) = 0;

  virtual void enterGroupingExpressionSingle(TplSqlParser::GroupingExpressionSingleContext *ctx) = 0;
  virtual void exitGroupingExpressionSingle(TplSqlParser::GroupingExpressionSingleContext *ctx) = 0;

  virtual void enterLoadStatement(TplSqlParser::LoadStatementContext *ctx) = 0;
  virtual void exitLoadStatement(TplSqlParser::LoadStatementContext *ctx) = 0;

  virtual void enterTableOrPartition(TplSqlParser::TableOrPartitionContext *ctx) = 0;
  virtual void exitTableOrPartition(TplSqlParser::TableOrPartitionContext *ctx) = 0;

  virtual void enterPartitionSpec(TplSqlParser::PartitionSpecContext *ctx) = 0;
  virtual void exitPartitionSpec(TplSqlParser::PartitionSpecContext *ctx) = 0;

  virtual void enterPartitionVal(TplSqlParser::PartitionValContext *ctx) = 0;
  virtual void exitPartitionVal(TplSqlParser::PartitionValContext *ctx) = 0;

  virtual void enterInputFileFormat(TplSqlParser::InputFileFormatContext *ctx) = 0;
  virtual void exitInputFileFormat(TplSqlParser::InputFileFormatContext *ctx) = 0;

  virtual void enterExportStatement(TplSqlParser::ExportStatementContext *ctx) = 0;
  virtual void exitExportStatement(TplSqlParser::ExportStatementContext *ctx) = 0;

  virtual void enterReplicationClause(TplSqlParser::ReplicationClauseContext *ctx) = 0;
  virtual void exitReplicationClause(TplSqlParser::ReplicationClauseContext *ctx) = 0;

  virtual void enterImportStatement(TplSqlParser::ImportStatementContext *ctx) = 0;
  virtual void exitImportStatement(TplSqlParser::ImportStatementContext *ctx) = 0;

  virtual void enterTableLocation(TplSqlParser::TableLocationContext *ctx) = 0;
  virtual void exitTableLocation(TplSqlParser::TableLocationContext *ctx) = 0;

  virtual void enterDdlStatement(TplSqlParser::DdlStatementContext *ctx) = 0;
  virtual void exitDdlStatement(TplSqlParser::DdlStatementContext *ctx) = 0;

  virtual void enterCreateDatabaseStatement(TplSqlParser::CreateDatabaseStatementContext *ctx) = 0;
  virtual void exitCreateDatabaseStatement(TplSqlParser::CreateDatabaseStatementContext *ctx) = 0;

  virtual void enterDb_schema(TplSqlParser::Db_schemaContext *ctx) = 0;
  virtual void exitDb_schema(TplSqlParser::Db_schemaContext *ctx) = 0;

  virtual void enterIfNotExists(TplSqlParser::IfNotExistsContext *ctx) = 0;
  virtual void exitIfNotExists(TplSqlParser::IfNotExistsContext *ctx) = 0;

  virtual void enterDatabaseComment(TplSqlParser::DatabaseCommentContext *ctx) = 0;
  virtual void exitDatabaseComment(TplSqlParser::DatabaseCommentContext *ctx) = 0;

  virtual void enterDbLocation(TplSqlParser::DbLocationContext *ctx) = 0;
  virtual void exitDbLocation(TplSqlParser::DbLocationContext *ctx) = 0;

  virtual void enterDbManagedLocation(TplSqlParser::DbManagedLocationContext *ctx) = 0;
  virtual void exitDbManagedLocation(TplSqlParser::DbManagedLocationContext *ctx) = 0;

  virtual void enterDbProperties(TplSqlParser::DbPropertiesContext *ctx) = 0;
  virtual void exitDbProperties(TplSqlParser::DbPropertiesContext *ctx) = 0;

  virtual void enterDbPropertiesList(TplSqlParser::DbPropertiesListContext *ctx) = 0;
  virtual void exitDbPropertiesList(TplSqlParser::DbPropertiesListContext *ctx) = 0;

  virtual void enterKeyValueProperty(TplSqlParser::KeyValuePropertyContext *ctx) = 0;
  virtual void exitKeyValueProperty(TplSqlParser::KeyValuePropertyContext *ctx) = 0;

  virtual void enterDbConnectorName(TplSqlParser::DbConnectorNameContext *ctx) = 0;
  virtual void exitDbConnectorName(TplSqlParser::DbConnectorNameContext *ctx) = 0;

  virtual void enterSwitchDatabaseStatement(TplSqlParser::SwitchDatabaseStatementContext *ctx) = 0;
  virtual void exitSwitchDatabaseStatement(TplSqlParser::SwitchDatabaseStatementContext *ctx) = 0;

  virtual void enterDropDatabaseStatement(TplSqlParser::DropDatabaseStatementContext *ctx) = 0;
  virtual void exitDropDatabaseStatement(TplSqlParser::DropDatabaseStatementContext *ctx) = 0;

  virtual void enterIfExists(TplSqlParser::IfExistsContext *ctx) = 0;
  virtual void exitIfExists(TplSqlParser::IfExistsContext *ctx) = 0;

  virtual void enterRestrictOrCascade(TplSqlParser::RestrictOrCascadeContext *ctx) = 0;
  virtual void exitRestrictOrCascade(TplSqlParser::RestrictOrCascadeContext *ctx) = 0;

  virtual void enterCreateTableStatement(TplSqlParser::CreateTableStatementContext *ctx) = 0;
  virtual void exitCreateTableStatement(TplSqlParser::CreateTableStatementContext *ctx) = 0;

  virtual void enterLikeTableOrFile(TplSqlParser::LikeTableOrFileContext *ctx) = 0;
  virtual void exitLikeTableOrFile(TplSqlParser::LikeTableOrFileContext *ctx) = 0;

  virtual void enterCreateTablePartitionSpec(TplSqlParser::CreateTablePartitionSpecContext *ctx) = 0;
  virtual void exitCreateTablePartitionSpec(TplSqlParser::CreateTablePartitionSpecContext *ctx) = 0;

  virtual void enterCreateTablePartitionColumnTypeSpec(TplSqlParser::CreateTablePartitionColumnTypeSpecContext *ctx) = 0;
  virtual void exitCreateTablePartitionColumnTypeSpec(TplSqlParser::CreateTablePartitionColumnTypeSpecContext *ctx) = 0;

  virtual void enterColumnNameTypeConstraint(TplSqlParser::ColumnNameTypeConstraintContext *ctx) = 0;
  virtual void exitColumnNameTypeConstraint(TplSqlParser::ColumnNameTypeConstraintContext *ctx) = 0;

  virtual void enterColType(TplSqlParser::ColTypeContext *ctx) = 0;
  virtual void exitColType(TplSqlParser::ColTypeContext *ctx) = 0;

  virtual void enterType(TplSqlParser::TypeContext *ctx) = 0;
  virtual void exitType(TplSqlParser::TypeContext *ctx) = 0;

  virtual void enterListType(TplSqlParser::ListTypeContext *ctx) = 0;
  virtual void exitListType(TplSqlParser::ListTypeContext *ctx) = 0;

  virtual void enterStructType(TplSqlParser::StructTypeContext *ctx) = 0;
  virtual void exitStructType(TplSqlParser::StructTypeContext *ctx) = 0;

  virtual void enterColumnNameColonTypeList(TplSqlParser::ColumnNameColonTypeListContext *ctx) = 0;
  virtual void exitColumnNameColonTypeList(TplSqlParser::ColumnNameColonTypeListContext *ctx) = 0;

  virtual void enterColumnNameColonType(TplSqlParser::ColumnNameColonTypeContext *ctx) = 0;
  virtual void exitColumnNameColonType(TplSqlParser::ColumnNameColonTypeContext *ctx) = 0;

  virtual void enterMapType(TplSqlParser::MapTypeContext *ctx) = 0;
  virtual void exitMapType(TplSqlParser::MapTypeContext *ctx) = 0;

  virtual void enterUnionType(TplSqlParser::UnionTypeContext *ctx) = 0;
  virtual void exitUnionType(TplSqlParser::UnionTypeContext *ctx) = 0;

  virtual void enterColTypeList(TplSqlParser::ColTypeListContext *ctx) = 0;
  virtual void exitColTypeList(TplSqlParser::ColTypeListContext *ctx) = 0;

  virtual void enterColumnConstraint(TplSqlParser::ColumnConstraintContext *ctx) = 0;
  virtual void exitColumnConstraint(TplSqlParser::ColumnConstraintContext *ctx) = 0;

  virtual void enterForeignKeyConstraint(TplSqlParser::ForeignKeyConstraintContext *ctx) = 0;
  virtual void exitForeignKeyConstraint(TplSqlParser::ForeignKeyConstraintContext *ctx) = 0;

  virtual void enterConstraintOptsCreate(TplSqlParser::ConstraintOptsCreateContext *ctx) = 0;
  virtual void exitConstraintOptsCreate(TplSqlParser::ConstraintOptsCreateContext *ctx) = 0;

  virtual void enterEnableValidateSpecification(TplSqlParser::EnableValidateSpecificationContext *ctx) = 0;
  virtual void exitEnableValidateSpecification(TplSqlParser::EnableValidateSpecificationContext *ctx) = 0;

  virtual void enterEnableSpecification(TplSqlParser::EnableSpecificationContext *ctx) = 0;
  virtual void exitEnableSpecification(TplSqlParser::EnableSpecificationContext *ctx) = 0;

  virtual void enterValidateSpecification(TplSqlParser::ValidateSpecificationContext *ctx) = 0;
  virtual void exitValidateSpecification(TplSqlParser::ValidateSpecificationContext *ctx) = 0;

  virtual void enterEnforcedSpecification(TplSqlParser::EnforcedSpecificationContext *ctx) = 0;
  virtual void exitEnforcedSpecification(TplSqlParser::EnforcedSpecificationContext *ctx) = 0;

  virtual void enterRelySpecification(TplSqlParser::RelySpecificationContext *ctx) = 0;
  virtual void exitRelySpecification(TplSqlParser::RelySpecificationContext *ctx) = 0;

  virtual void enterColConstraint(TplSqlParser::ColConstraintContext *ctx) = 0;
  virtual void exitColConstraint(TplSqlParser::ColConstraintContext *ctx) = 0;

  virtual void enterColumnConstraintType(TplSqlParser::ColumnConstraintTypeContext *ctx) = 0;
  virtual void exitColumnConstraintType(TplSqlParser::ColumnConstraintTypeContext *ctx) = 0;

  virtual void enterDefaultVal(TplSqlParser::DefaultValContext *ctx) = 0;
  virtual void exitDefaultVal(TplSqlParser::DefaultValContext *ctx) = 0;

  virtual void enterCheckConstraint(TplSqlParser::CheckConstraintContext *ctx) = 0;
  virtual void exitCheckConstraint(TplSqlParser::CheckConstraintContext *ctx) = 0;

  virtual void enterTableConstraintType(TplSqlParser::TableConstraintTypeContext *ctx) = 0;
  virtual void exitTableConstraintType(TplSqlParser::TableConstraintTypeContext *ctx) = 0;

  virtual void enterCreateTablePartitionColumnSpec(TplSqlParser::CreateTablePartitionColumnSpecContext *ctx) = 0;
  virtual void exitCreateTablePartitionColumnSpec(TplSqlParser::CreateTablePartitionColumnSpecContext *ctx) = 0;

  virtual void enterPartitionTransformSpec(TplSqlParser::PartitionTransformSpecContext *ctx) = 0;
  virtual void exitPartitionTransformSpec(TplSqlParser::PartitionTransformSpecContext *ctx) = 0;

  virtual void enterColumnNameTransformConstraint(TplSqlParser::ColumnNameTransformConstraintContext *ctx) = 0;
  virtual void exitColumnNameTransformConstraint(TplSqlParser::ColumnNameTransformConstraintContext *ctx) = 0;

  virtual void enterPartitionTransformType(TplSqlParser::PartitionTransformTypeContext *ctx) = 0;
  virtual void exitPartitionTransformType(TplSqlParser::PartitionTransformTypeContext *ctx) = 0;

  virtual void enterTableRowFormat(TplSqlParser::TableRowFormatContext *ctx) = 0;
  virtual void exitTableRowFormat(TplSqlParser::TableRowFormatContext *ctx) = 0;

  virtual void enterRowFormatDelimited(TplSqlParser::RowFormatDelimitedContext *ctx) = 0;
  virtual void exitRowFormatDelimited(TplSqlParser::RowFormatDelimitedContext *ctx) = 0;

  virtual void enterTableRowFormatFieldIdentifier(TplSqlParser::TableRowFormatFieldIdentifierContext *ctx) = 0;
  virtual void exitTableRowFormatFieldIdentifier(TplSqlParser::TableRowFormatFieldIdentifierContext *ctx) = 0;

  virtual void enterTableRowFormatCollItemsIdentifier(TplSqlParser::TableRowFormatCollItemsIdentifierContext *ctx) = 0;
  virtual void exitTableRowFormatCollItemsIdentifier(TplSqlParser::TableRowFormatCollItemsIdentifierContext *ctx) = 0;

  virtual void enterTableRowFormatMapKeysIdentifier(TplSqlParser::TableRowFormatMapKeysIdentifierContext *ctx) = 0;
  virtual void exitTableRowFormatMapKeysIdentifier(TplSqlParser::TableRowFormatMapKeysIdentifierContext *ctx) = 0;

  virtual void enterTableRowFormatLinesIdentifier(TplSqlParser::TableRowFormatLinesIdentifierContext *ctx) = 0;
  virtual void exitTableRowFormatLinesIdentifier(TplSqlParser::TableRowFormatLinesIdentifierContext *ctx) = 0;

  virtual void enterTableRowNullFormat(TplSqlParser::TableRowNullFormatContext *ctx) = 0;
  virtual void exitTableRowNullFormat(TplSqlParser::TableRowNullFormatContext *ctx) = 0;

  virtual void enterRowFormatSerde(TplSqlParser::RowFormatSerdeContext *ctx) = 0;
  virtual void exitRowFormatSerde(TplSqlParser::RowFormatSerdeContext *ctx) = 0;

  virtual void enterTableProperties(TplSqlParser::TablePropertiesContext *ctx) = 0;
  virtual void exitTableProperties(TplSqlParser::TablePropertiesContext *ctx) = 0;

  virtual void enterTablePropertiesList(TplSqlParser::TablePropertiesListContext *ctx) = 0;
  virtual void exitTablePropertiesList(TplSqlParser::TablePropertiesListContext *ctx) = 0;

  virtual void enterKeyProperty(TplSqlParser::KeyPropertyContext *ctx) = 0;
  virtual void exitKeyProperty(TplSqlParser::KeyPropertyContext *ctx) = 0;

  virtual void enterTableFileFormat(TplSqlParser::TableFileFormatContext *ctx) = 0;
  virtual void exitTableFileFormat(TplSqlParser::TableFileFormatContext *ctx) = 0;

  virtual void enterTablePropertiesPrefixed(TplSqlParser::TablePropertiesPrefixedContext *ctx) = 0;
  virtual void exitTablePropertiesPrefixed(TplSqlParser::TablePropertiesPrefixedContext *ctx) = 0;

  virtual void enterColumnNameTypeOrConstraintList(TplSqlParser::ColumnNameTypeOrConstraintListContext *ctx) = 0;
  virtual void exitColumnNameTypeOrConstraintList(TplSqlParser::ColumnNameTypeOrConstraintListContext *ctx) = 0;

  virtual void enterColumnNameTypeOrConstraint(TplSqlParser::ColumnNameTypeOrConstraintContext *ctx) = 0;
  virtual void exitColumnNameTypeOrConstraint(TplSqlParser::ColumnNameTypeOrConstraintContext *ctx) = 0;

  virtual void enterTableConstraint(TplSqlParser::TableConstraintContext *ctx) = 0;
  virtual void exitTableConstraint(TplSqlParser::TableConstraintContext *ctx) = 0;

  virtual void enterCreateForeignKey(TplSqlParser::CreateForeignKeyContext *ctx) = 0;
  virtual void exitCreateForeignKey(TplSqlParser::CreateForeignKeyContext *ctx) = 0;

  virtual void enterCreateConstraint(TplSqlParser::CreateConstraintContext *ctx) = 0;
  virtual void exitCreateConstraint(TplSqlParser::CreateConstraintContext *ctx) = 0;

  virtual void enterTableLevelConstraint(TplSqlParser::TableLevelConstraintContext *ctx) = 0;
  virtual void exitTableLevelConstraint(TplSqlParser::TableLevelConstraintContext *ctx) = 0;

  virtual void enterPkUkConstraint(TplSqlParser::PkUkConstraintContext *ctx) = 0;
  virtual void exitPkUkConstraint(TplSqlParser::PkUkConstraintContext *ctx) = 0;

  virtual void enterTableComment(TplSqlParser::TableCommentContext *ctx) = 0;
  virtual void exitTableComment(TplSqlParser::TableCommentContext *ctx) = 0;

  virtual void enterTableBuckets(TplSqlParser::TableBucketsContext *ctx) = 0;
  virtual void exitTableBuckets(TplSqlParser::TableBucketsContext *ctx) = 0;

  virtual void enterColumnNameOrderList(TplSqlParser::ColumnNameOrderListContext *ctx) = 0;
  virtual void exitColumnNameOrderList(TplSqlParser::ColumnNameOrderListContext *ctx) = 0;

  virtual void enterColumnNameOrder(TplSqlParser::ColumnNameOrderContext *ctx) = 0;
  virtual void exitColumnNameOrder(TplSqlParser::ColumnNameOrderContext *ctx) = 0;

  virtual void enterOrderSpecification(TplSqlParser::OrderSpecificationContext *ctx) = 0;
  virtual void exitOrderSpecification(TplSqlParser::OrderSpecificationContext *ctx) = 0;

  virtual void enterTableSkewed(TplSqlParser::TableSkewedContext *ctx) = 0;
  virtual void exitTableSkewed(TplSqlParser::TableSkewedContext *ctx) = 0;

  virtual void enterSkewedValueElement(TplSqlParser::SkewedValueElementContext *ctx) = 0;
  virtual void exitSkewedValueElement(TplSqlParser::SkewedValueElementContext *ctx) = 0;

  virtual void enterSkewedColumnValues(TplSqlParser::SkewedColumnValuesContext *ctx) = 0;
  virtual void exitSkewedColumnValues(TplSqlParser::SkewedColumnValuesContext *ctx) = 0;

  virtual void enterSkewedColumnValue(TplSqlParser::SkewedColumnValueContext *ctx) = 0;
  virtual void exitSkewedColumnValue(TplSqlParser::SkewedColumnValueContext *ctx) = 0;

  virtual void enterSkewedColumnValuePairList(TplSqlParser::SkewedColumnValuePairListContext *ctx) = 0;
  virtual void exitSkewedColumnValuePairList(TplSqlParser::SkewedColumnValuePairListContext *ctx) = 0;

  virtual void enterSkewedColumnValuePair(TplSqlParser::SkewedColumnValuePairContext *ctx) = 0;
  virtual void exitSkewedColumnValuePair(TplSqlParser::SkewedColumnValuePairContext *ctx) = 0;

  virtual void enterStoredAsDirs(TplSqlParser::StoredAsDirsContext *ctx) = 0;
  virtual void exitStoredAsDirs(TplSqlParser::StoredAsDirsContext *ctx) = 0;

  virtual void enterSelectStatementWithCTE(TplSqlParser::SelectStatementWithCTEContext *ctx) = 0;
  virtual void exitSelectStatementWithCTE(TplSqlParser::SelectStatementWithCTEContext *ctx) = 0;

  virtual void enterDropTableStatement(TplSqlParser::DropTableStatementContext *ctx) = 0;
  virtual void exitDropTableStatement(TplSqlParser::DropTableStatementContext *ctx) = 0;

  virtual void enterTruncateTableStatement(TplSqlParser::TruncateTableStatementContext *ctx) = 0;
  virtual void exitTruncateTableStatement(TplSqlParser::TruncateTableStatementContext *ctx) = 0;

  virtual void enterTablePartitionPrefix(TplSqlParser::TablePartitionPrefixContext *ctx) = 0;
  virtual void exitTablePartitionPrefix(TplSqlParser::TablePartitionPrefixContext *ctx) = 0;

  virtual void enterForce(TplSqlParser::ForceContext *ctx) = 0;
  virtual void exitForce(TplSqlParser::ForceContext *ctx) = 0;

  virtual void enterAlterStatement(TplSqlParser::AlterStatementContext *ctx) = 0;
  virtual void exitAlterStatement(TplSqlParser::AlterStatementContext *ctx) = 0;

  virtual void enterAlterTableStatementSuffix(TplSqlParser::AlterTableStatementSuffixContext *ctx) = 0;
  virtual void exitAlterTableStatementSuffix(TplSqlParser::AlterTableStatementSuffixContext *ctx) = 0;

  virtual void enterAlterStatementSuffixRename(TplSqlParser::AlterStatementSuffixRenameContext *ctx) = 0;
  virtual void exitAlterStatementSuffixRename(TplSqlParser::AlterStatementSuffixRenameContext *ctx) = 0;

  virtual void enterAlterStatementSuffixDropPartitions(TplSqlParser::AlterStatementSuffixDropPartitionsContext *ctx) = 0;
  virtual void exitAlterStatementSuffixDropPartitions(TplSqlParser::AlterStatementSuffixDropPartitionsContext *ctx) = 0;

  virtual void enterPartitionSelectorSpec(TplSqlParser::PartitionSelectorSpecContext *ctx) = 0;
  virtual void exitPartitionSelectorSpec(TplSqlParser::PartitionSelectorSpecContext *ctx) = 0;

  virtual void enterPartitionSelectorVal(TplSqlParser::PartitionSelectorValContext *ctx) = 0;
  virtual void exitPartitionSelectorVal(TplSqlParser::PartitionSelectorValContext *ctx) = 0;

  virtual void enterPartitionSelectorOperator(TplSqlParser::PartitionSelectorOperatorContext *ctx) = 0;
  virtual void exitPartitionSelectorOperator(TplSqlParser::PartitionSelectorOperatorContext *ctx) = 0;

  virtual void enterAlterStatementSuffixAddPartitions(TplSqlParser::AlterStatementSuffixAddPartitionsContext *ctx) = 0;
  virtual void exitAlterStatementSuffixAddPartitions(TplSqlParser::AlterStatementSuffixAddPartitionsContext *ctx) = 0;

  virtual void enterAlterStatementSuffixAddPartitionsElement(TplSqlParser::AlterStatementSuffixAddPartitionsElementContext *ctx) = 0;
  virtual void exitAlterStatementSuffixAddPartitionsElement(TplSqlParser::AlterStatementSuffixAddPartitionsElementContext *ctx) = 0;

  virtual void enterPartitionLocation(TplSqlParser::PartitionLocationContext *ctx) = 0;
  virtual void exitPartitionLocation(TplSqlParser::PartitionLocationContext *ctx) = 0;

  virtual void enterAlterStatementSuffixTouch(TplSqlParser::AlterStatementSuffixTouchContext *ctx) = 0;
  virtual void exitAlterStatementSuffixTouch(TplSqlParser::AlterStatementSuffixTouchContext *ctx) = 0;

  virtual void enterAlterStatementSuffixArchive(TplSqlParser::AlterStatementSuffixArchiveContext *ctx) = 0;
  virtual void exitAlterStatementSuffixArchive(TplSqlParser::AlterStatementSuffixArchiveContext *ctx) = 0;

  virtual void enterAlterStatementSuffixUnArchive(TplSqlParser::AlterStatementSuffixUnArchiveContext *ctx) = 0;
  virtual void exitAlterStatementSuffixUnArchive(TplSqlParser::AlterStatementSuffixUnArchiveContext *ctx) = 0;

  virtual void enterAlterStatementSuffixProperties(TplSqlParser::AlterStatementSuffixPropertiesContext *ctx) = 0;
  virtual void exitAlterStatementSuffixProperties(TplSqlParser::AlterStatementSuffixPropertiesContext *ctx) = 0;

  virtual void enterAlterStatementSuffixSkewedby(TplSqlParser::AlterStatementSuffixSkewedbyContext *ctx) = 0;
  virtual void exitAlterStatementSuffixSkewedby(TplSqlParser::AlterStatementSuffixSkewedbyContext *ctx) = 0;

  virtual void enterAlterStatementSuffixExchangePartition(TplSqlParser::AlterStatementSuffixExchangePartitionContext *ctx) = 0;
  virtual void exitAlterStatementSuffixExchangePartition(TplSqlParser::AlterStatementSuffixExchangePartitionContext *ctx) = 0;

  virtual void enterAlterStatementPartitionKeyType(TplSqlParser::AlterStatementPartitionKeyTypeContext *ctx) = 0;
  virtual void exitAlterStatementPartitionKeyType(TplSqlParser::AlterStatementPartitionKeyTypeContext *ctx) = 0;

  virtual void enterColumnNameType(TplSqlParser::ColumnNameTypeContext *ctx) = 0;
  virtual void exitColumnNameType(TplSqlParser::ColumnNameTypeContext *ctx) = 0;

  virtual void enterAlterStatementSuffixDropConstraint(TplSqlParser::AlterStatementSuffixDropConstraintContext *ctx) = 0;
  virtual void exitAlterStatementSuffixDropConstraint(TplSqlParser::AlterStatementSuffixDropConstraintContext *ctx) = 0;

  virtual void enterAlterStatementSuffixAddConstraint(TplSqlParser::AlterStatementSuffixAddConstraintContext *ctx) = 0;
  virtual void exitAlterStatementSuffixAddConstraint(TplSqlParser::AlterStatementSuffixAddConstraintContext *ctx) = 0;

  virtual void enterAlterForeignKeyWithName(TplSqlParser::AlterForeignKeyWithNameContext *ctx) = 0;
  virtual void exitAlterForeignKeyWithName(TplSqlParser::AlterForeignKeyWithNameContext *ctx) = 0;

  virtual void enterConstraintOptsAlter(TplSqlParser::ConstraintOptsAlterContext *ctx) = 0;
  virtual void exitConstraintOptsAlter(TplSqlParser::ConstraintOptsAlterContext *ctx) = 0;

  virtual void enterAlterConstraintWithName(TplSqlParser::AlterConstraintWithNameContext *ctx) = 0;
  virtual void exitAlterConstraintWithName(TplSqlParser::AlterConstraintWithNameContext *ctx) = 0;

  virtual void enterAlterTblPartitionStatementSuffix(TplSqlParser::AlterTblPartitionStatementSuffixContext *ctx) = 0;
  virtual void exitAlterTblPartitionStatementSuffix(TplSqlParser::AlterTblPartitionStatementSuffixContext *ctx) = 0;

  virtual void enterAlterStatementSuffixFileFormat(TplSqlParser::AlterStatementSuffixFileFormatContext *ctx) = 0;
  virtual void exitAlterStatementSuffixFileFormat(TplSqlParser::AlterStatementSuffixFileFormatContext *ctx) = 0;

  virtual void enterFileFormat(TplSqlParser::FileFormatContext *ctx) = 0;
  virtual void exitFileFormat(TplSqlParser::FileFormatContext *ctx) = 0;

  virtual void enterAlterStatementSuffixLocation(TplSqlParser::AlterStatementSuffixLocationContext *ctx) = 0;
  virtual void exitAlterStatementSuffixLocation(TplSqlParser::AlterStatementSuffixLocationContext *ctx) = 0;

  virtual void enterAlterStatementSuffixMergeFiles(TplSqlParser::AlterStatementSuffixMergeFilesContext *ctx) = 0;
  virtual void exitAlterStatementSuffixMergeFiles(TplSqlParser::AlterStatementSuffixMergeFilesContext *ctx) = 0;

  virtual void enterAlterStatementSuffixSerdeProperties(TplSqlParser::AlterStatementSuffixSerdePropertiesContext *ctx) = 0;
  virtual void exitAlterStatementSuffixSerdeProperties(TplSqlParser::AlterStatementSuffixSerdePropertiesContext *ctx) = 0;

  virtual void enterAlterStatementSuffixRenamePart(TplSqlParser::AlterStatementSuffixRenamePartContext *ctx) = 0;
  virtual void exitAlterStatementSuffixRenamePart(TplSqlParser::AlterStatementSuffixRenamePartContext *ctx) = 0;

  virtual void enterAlterStatementSuffixBucketNum(TplSqlParser::AlterStatementSuffixBucketNumContext *ctx) = 0;
  virtual void exitAlterStatementSuffixBucketNum(TplSqlParser::AlterStatementSuffixBucketNumContext *ctx) = 0;

  virtual void enterAlterTblPartitionStatementSuffixSkewedLocation(TplSqlParser::AlterTblPartitionStatementSuffixSkewedLocationContext *ctx) = 0;
  virtual void exitAlterTblPartitionStatementSuffixSkewedLocation(TplSqlParser::AlterTblPartitionStatementSuffixSkewedLocationContext *ctx) = 0;

  virtual void enterSkewedLocations(TplSqlParser::SkewedLocationsContext *ctx) = 0;
  virtual void exitSkewedLocations(TplSqlParser::SkewedLocationsContext *ctx) = 0;

  virtual void enterSkewedLocationsList(TplSqlParser::SkewedLocationsListContext *ctx) = 0;
  virtual void exitSkewedLocationsList(TplSqlParser::SkewedLocationsListContext *ctx) = 0;

  virtual void enterSkewedLocationMap(TplSqlParser::SkewedLocationMapContext *ctx) = 0;
  virtual void exitSkewedLocationMap(TplSqlParser::SkewedLocationMapContext *ctx) = 0;

  virtual void enterSkewedValueLocationElement(TplSqlParser::SkewedValueLocationElementContext *ctx) = 0;
  virtual void exitSkewedValueLocationElement(TplSqlParser::SkewedValueLocationElementContext *ctx) = 0;

  virtual void enterAlterStatementSuffixClusterbySortby(TplSqlParser::AlterStatementSuffixClusterbySortbyContext *ctx) = 0;
  virtual void exitAlterStatementSuffixClusterbySortby(TplSqlParser::AlterStatementSuffixClusterbySortbyContext *ctx) = 0;

  virtual void enterAlterStatementSuffixCompact(TplSqlParser::AlterStatementSuffixCompactContext *ctx) = 0;
  virtual void exitAlterStatementSuffixCompact(TplSqlParser::AlterStatementSuffixCompactContext *ctx) = 0;

  virtual void enterTableImplBuckets(TplSqlParser::TableImplBucketsContext *ctx) = 0;
  virtual void exitTableImplBuckets(TplSqlParser::TableImplBucketsContext *ctx) = 0;

  virtual void enterBlocking(TplSqlParser::BlockingContext *ctx) = 0;
  virtual void exitBlocking(TplSqlParser::BlockingContext *ctx) = 0;

  virtual void enterCompactPool(TplSqlParser::CompactPoolContext *ctx) = 0;
  virtual void exitCompactPool(TplSqlParser::CompactPoolContext *ctx) = 0;

  virtual void enterAlterStatementSuffixUpdateStatsCol(TplSqlParser::AlterStatementSuffixUpdateStatsColContext *ctx) = 0;
  virtual void exitAlterStatementSuffixUpdateStatsCol(TplSqlParser::AlterStatementSuffixUpdateStatsColContext *ctx) = 0;

  virtual void enterAlterStatementSuffixUpdateStats(TplSqlParser::AlterStatementSuffixUpdateStatsContext *ctx) = 0;
  virtual void exitAlterStatementSuffixUpdateStats(TplSqlParser::AlterStatementSuffixUpdateStatsContext *ctx) = 0;

  virtual void enterAlterStatementSuffixRenameCol(TplSqlParser::AlterStatementSuffixRenameColContext *ctx) = 0;
  virtual void exitAlterStatementSuffixRenameCol(TplSqlParser::AlterStatementSuffixRenameColContext *ctx) = 0;

  virtual void enterAlterColumnConstraint(TplSqlParser::AlterColumnConstraintContext *ctx) = 0;
  virtual void exitAlterColumnConstraint(TplSqlParser::AlterColumnConstraintContext *ctx) = 0;

  virtual void enterAlterForeignKeyConstraint(TplSqlParser::AlterForeignKeyConstraintContext *ctx) = 0;
  virtual void exitAlterForeignKeyConstraint(TplSqlParser::AlterForeignKeyConstraintContext *ctx) = 0;

  virtual void enterAlterColConstraint(TplSqlParser::AlterColConstraintContext *ctx) = 0;
  virtual void exitAlterColConstraint(TplSqlParser::AlterColConstraintContext *ctx) = 0;

  virtual void enterAlterStatementChangeColPosition(TplSqlParser::AlterStatementChangeColPositionContext *ctx) = 0;
  virtual void exitAlterStatementChangeColPosition(TplSqlParser::AlterStatementChangeColPositionContext *ctx) = 0;

  virtual void enterAlterStatementSuffixAddCol(TplSqlParser::AlterStatementSuffixAddColContext *ctx) = 0;
  virtual void exitAlterStatementSuffixAddCol(TplSqlParser::AlterStatementSuffixAddColContext *ctx) = 0;

  virtual void enterColumnNameTypeList(TplSqlParser::ColumnNameTypeListContext *ctx) = 0;
  virtual void exitColumnNameTypeList(TplSqlParser::ColumnNameTypeListContext *ctx) = 0;

  virtual void enterAlterStatementSuffixUpdateColumns(TplSqlParser::AlterStatementSuffixUpdateColumnsContext *ctx) = 0;
  virtual void exitAlterStatementSuffixUpdateColumns(TplSqlParser::AlterStatementSuffixUpdateColumnsContext *ctx) = 0;

  virtual void enterAlterStatementSuffixSetOwner(TplSqlParser::AlterStatementSuffixSetOwnerContext *ctx) = 0;
  virtual void exitAlterStatementSuffixSetOwner(TplSqlParser::AlterStatementSuffixSetOwnerContext *ctx) = 0;

  virtual void enterPrincipalName(TplSqlParser::PrincipalNameContext *ctx) = 0;
  virtual void exitPrincipalName(TplSqlParser::PrincipalNameContext *ctx) = 0;

  virtual void enterPrincipalIdentifier(TplSqlParser::PrincipalIdentifierContext *ctx) = 0;
  virtual void exitPrincipalIdentifier(TplSqlParser::PrincipalIdentifierContext *ctx) = 0;

  virtual void enterAlterStatementSuffixSetPartSpec(TplSqlParser::AlterStatementSuffixSetPartSpecContext *ctx) = 0;
  virtual void exitAlterStatementSuffixSetPartSpec(TplSqlParser::AlterStatementSuffixSetPartSpecContext *ctx) = 0;

  virtual void enterAlterStatementSuffixExecute(TplSqlParser::AlterStatementSuffixExecuteContext *ctx) = 0;
  virtual void exitAlterStatementSuffixExecute(TplSqlParser::AlterStatementSuffixExecuteContext *ctx) = 0;

  virtual void enterAlterViewStatementSuffix(TplSqlParser::AlterViewStatementSuffixContext *ctx) = 0;
  virtual void exitAlterViewStatementSuffix(TplSqlParser::AlterViewStatementSuffixContext *ctx) = 0;

  virtual void enterAlterViewSuffixProperties(TplSqlParser::AlterViewSuffixPropertiesContext *ctx) = 0;
  virtual void exitAlterViewSuffixProperties(TplSqlParser::AlterViewSuffixPropertiesContext *ctx) = 0;

  virtual void enterAlterMaterializedViewStatementSuffix(TplSqlParser::AlterMaterializedViewStatementSuffixContext *ctx) = 0;
  virtual void exitAlterMaterializedViewStatementSuffix(TplSqlParser::AlterMaterializedViewStatementSuffixContext *ctx) = 0;

  virtual void enterAlterMaterializedViewSuffixRewrite(TplSqlParser::AlterMaterializedViewSuffixRewriteContext *ctx) = 0;
  virtual void exitAlterMaterializedViewSuffixRewrite(TplSqlParser::AlterMaterializedViewSuffixRewriteContext *ctx) = 0;

  virtual void enterRewriteEnabled(TplSqlParser::RewriteEnabledContext *ctx) = 0;
  virtual void exitRewriteEnabled(TplSqlParser::RewriteEnabledContext *ctx) = 0;

  virtual void enterRewriteDisabled(TplSqlParser::RewriteDisabledContext *ctx) = 0;
  virtual void exitRewriteDisabled(TplSqlParser::RewriteDisabledContext *ctx) = 0;

  virtual void enterAlterMaterializedViewSuffixRebuild(TplSqlParser::AlterMaterializedViewSuffixRebuildContext *ctx) = 0;
  virtual void exitAlterMaterializedViewSuffixRebuild(TplSqlParser::AlterMaterializedViewSuffixRebuildContext *ctx) = 0;

  virtual void enterAlterDatabaseStatementSuffix(TplSqlParser::AlterDatabaseStatementSuffixContext *ctx) = 0;
  virtual void exitAlterDatabaseStatementSuffix(TplSqlParser::AlterDatabaseStatementSuffixContext *ctx) = 0;

  virtual void enterAlterDatabaseSuffixProperties(TplSqlParser::AlterDatabaseSuffixPropertiesContext *ctx) = 0;
  virtual void exitAlterDatabaseSuffixProperties(TplSqlParser::AlterDatabaseSuffixPropertiesContext *ctx) = 0;

  virtual void enterAlterDatabaseSuffixSetOwner(TplSqlParser::AlterDatabaseSuffixSetOwnerContext *ctx) = 0;
  virtual void exitAlterDatabaseSuffixSetOwner(TplSqlParser::AlterDatabaseSuffixSetOwnerContext *ctx) = 0;

  virtual void enterAlterDatabaseSuffixSetLocation(TplSqlParser::AlterDatabaseSuffixSetLocationContext *ctx) = 0;
  virtual void exitAlterDatabaseSuffixSetLocation(TplSqlParser::AlterDatabaseSuffixSetLocationContext *ctx) = 0;

  virtual void enterAlterDataConnectorStatementSuffix(TplSqlParser::AlterDataConnectorStatementSuffixContext *ctx) = 0;
  virtual void exitAlterDataConnectorStatementSuffix(TplSqlParser::AlterDataConnectorStatementSuffixContext *ctx) = 0;

  virtual void enterAlterDataConnectorSuffixProperties(TplSqlParser::AlterDataConnectorSuffixPropertiesContext *ctx) = 0;
  virtual void exitAlterDataConnectorSuffixProperties(TplSqlParser::AlterDataConnectorSuffixPropertiesContext *ctx) = 0;

  virtual void enterDcProperties(TplSqlParser::DcPropertiesContext *ctx) = 0;
  virtual void exitDcProperties(TplSqlParser::DcPropertiesContext *ctx) = 0;

  virtual void enterAlterDataConnectorSuffixSetOwner(TplSqlParser::AlterDataConnectorSuffixSetOwnerContext *ctx) = 0;
  virtual void exitAlterDataConnectorSuffixSetOwner(TplSqlParser::AlterDataConnectorSuffixSetOwnerContext *ctx) = 0;

  virtual void enterAlterDataConnectorSuffixSetUrl(TplSqlParser::AlterDataConnectorSuffixSetUrlContext *ctx) = 0;
  virtual void exitAlterDataConnectorSuffixSetUrl(TplSqlParser::AlterDataConnectorSuffixSetUrlContext *ctx) = 0;

  virtual void enterDescStatement(TplSqlParser::DescStatementContext *ctx) = 0;
  virtual void exitDescStatement(TplSqlParser::DescStatementContext *ctx) = 0;

  virtual void enterDescFuncNames(TplSqlParser::DescFuncNamesContext *ctx) = 0;
  virtual void exitDescFuncNames(TplSqlParser::DescFuncNamesContext *ctx) = 0;

  virtual void enterSysFuncNames(TplSqlParser::SysFuncNamesContext *ctx) = 0;
  virtual void exitSysFuncNames(TplSqlParser::SysFuncNamesContext *ctx) = 0;

  virtual void enterTabPartColTypeExpr(TplSqlParser::TabPartColTypeExprContext *ctx) = 0;
  virtual void exitTabPartColTypeExpr(TplSqlParser::TabPartColTypeExprContext *ctx) = 0;

  virtual void enterExtColumnName(TplSqlParser::ExtColumnNameContext *ctx) = 0;
  virtual void exitExtColumnName(TplSqlParser::ExtColumnNameContext *ctx) = 0;

  virtual void enterShowStatement(TplSqlParser::ShowStatementContext *ctx) = 0;
  virtual void exitShowStatement(TplSqlParser::ShowStatementContext *ctx) = 0;

  virtual void enterShowStmtIdentifier(TplSqlParser::ShowStmtIdentifierContext *ctx) = 0;
  virtual void exitShowStmtIdentifier(TplSqlParser::ShowStmtIdentifierContext *ctx) = 0;

  virtual void enterFrom_in(TplSqlParser::From_inContext *ctx) = 0;
  virtual void exitFrom_in(TplSqlParser::From_inContext *ctx) = 0;

  virtual void enterShowTablesFilterExpr(TplSqlParser::ShowTablesFilterExprContext *ctx) = 0;
  virtual void exitShowTablesFilterExpr(TplSqlParser::ShowTablesFilterExprContext *ctx) = 0;

  virtual void enterShowFunctionIdentifier(TplSqlParser::ShowFunctionIdentifierContext *ctx) = 0;
  virtual void exitShowFunctionIdentifier(TplSqlParser::ShowFunctionIdentifierContext *ctx) = 0;

  virtual void enterPartTypeExpr(TplSqlParser::PartTypeExprContext *ctx) = 0;
  virtual void exitPartTypeExpr(TplSqlParser::PartTypeExprContext *ctx) = 0;

  virtual void enterTabTypeExpr(TplSqlParser::TabTypeExprContext *ctx) = 0;
  virtual void exitTabTypeExpr(TplSqlParser::TabTypeExprContext *ctx) = 0;

  virtual void enterCompactionId(TplSqlParser::CompactionIdContext *ctx) = 0;
  virtual void exitCompactionId(TplSqlParser::CompactionIdContext *ctx) = 0;

  virtual void enterCompactionPool(TplSqlParser::CompactionPoolContext *ctx) = 0;
  virtual void exitCompactionPool(TplSqlParser::CompactionPoolContext *ctx) = 0;

  virtual void enterCompactionType(TplSqlParser::CompactionTypeContext *ctx) = 0;
  virtual void exitCompactionType(TplSqlParser::CompactionTypeContext *ctx) = 0;

  virtual void enterCompactionStatus(TplSqlParser::CompactionStatusContext *ctx) = 0;
  virtual void exitCompactionStatus(TplSqlParser::CompactionStatusContext *ctx) = 0;

  virtual void enterMetastoreCheck(TplSqlParser::MetastoreCheckContext *ctx) = 0;
  virtual void exitMetastoreCheck(TplSqlParser::MetastoreCheckContext *ctx) = 0;

  virtual void enterCreateViewStatement(TplSqlParser::CreateViewStatementContext *ctx) = 0;
  virtual void exitCreateViewStatement(TplSqlParser::CreateViewStatementContext *ctx) = 0;

  virtual void enterOrReplace(TplSqlParser::OrReplaceContext *ctx) = 0;
  virtual void exitOrReplace(TplSqlParser::OrReplaceContext *ctx) = 0;

  virtual void enterColumnNameCommentList(TplSqlParser::ColumnNameCommentListContext *ctx) = 0;
  virtual void exitColumnNameCommentList(TplSqlParser::ColumnNameCommentListContext *ctx) = 0;

  virtual void enterColumnNameComment(TplSqlParser::ColumnNameCommentContext *ctx) = 0;
  virtual void exitColumnNameComment(TplSqlParser::ColumnNameCommentContext *ctx) = 0;

  virtual void enterViewPartition(TplSqlParser::ViewPartitionContext *ctx) = 0;
  virtual void exitViewPartition(TplSqlParser::ViewPartitionContext *ctx) = 0;

  virtual void enterCreateMaterializedViewStatement(TplSqlParser::CreateMaterializedViewStatementContext *ctx) = 0;
  virtual void exitCreateMaterializedViewStatement(TplSqlParser::CreateMaterializedViewStatementContext *ctx) = 0;

  virtual void enterViewOrganization(TplSqlParser::ViewOrganizationContext *ctx) = 0;
  virtual void exitViewOrganization(TplSqlParser::ViewOrganizationContext *ctx) = 0;

  virtual void enterViewClusterSpec(TplSqlParser::ViewClusterSpecContext *ctx) = 0;
  virtual void exitViewClusterSpec(TplSqlParser::ViewClusterSpecContext *ctx) = 0;

  virtual void enterViewComplexSpec(TplSqlParser::ViewComplexSpecContext *ctx) = 0;
  virtual void exitViewComplexSpec(TplSqlParser::ViewComplexSpecContext *ctx) = 0;

  virtual void enterViewDistSpec(TplSqlParser::ViewDistSpecContext *ctx) = 0;
  virtual void exitViewDistSpec(TplSqlParser::ViewDistSpecContext *ctx) = 0;

  virtual void enterViewSortSpec(TplSqlParser::ViewSortSpecContext *ctx) = 0;
  virtual void exitViewSortSpec(TplSqlParser::ViewSortSpecContext *ctx) = 0;

  virtual void enterCreateScheduledQueryStatement(TplSqlParser::CreateScheduledQueryStatementContext *ctx) = 0;
  virtual void exitCreateScheduledQueryStatement(TplSqlParser::CreateScheduledQueryStatementContext *ctx) = 0;

  virtual void enterScheduleSpec(TplSqlParser::ScheduleSpecContext *ctx) = 0;
  virtual void exitScheduleSpec(TplSqlParser::ScheduleSpecContext *ctx) = 0;

  virtual void enterExecutedAsSpec(TplSqlParser::ExecutedAsSpecContext *ctx) = 0;
  virtual void exitExecutedAsSpec(TplSqlParser::ExecutedAsSpecContext *ctx) = 0;

  virtual void enterDefinedAsSpec(TplSqlParser::DefinedAsSpecContext *ctx) = 0;
  virtual void exitDefinedAsSpec(TplSqlParser::DefinedAsSpecContext *ctx) = 0;

  virtual void enterAlterScheduledQueryStatement(TplSqlParser::AlterScheduledQueryStatementContext *ctx) = 0;
  virtual void exitAlterScheduledQueryStatement(TplSqlParser::AlterScheduledQueryStatementContext *ctx) = 0;

  virtual void enterAlterScheduledQueryChange(TplSqlParser::AlterScheduledQueryChangeContext *ctx) = 0;
  virtual void exitAlterScheduledQueryChange(TplSqlParser::AlterScheduledQueryChangeContext *ctx) = 0;

  virtual void enterDropScheduledQueryStatement(TplSqlParser::DropScheduledQueryStatementContext *ctx) = 0;
  virtual void exitDropScheduledQueryStatement(TplSqlParser::DropScheduledQueryStatementContext *ctx) = 0;

  virtual void enterDropViewStatement(TplSqlParser::DropViewStatementContext *ctx) = 0;
  virtual void exitDropViewStatement(TplSqlParser::DropViewStatementContext *ctx) = 0;

  virtual void enterViewName(TplSqlParser::ViewNameContext *ctx) = 0;
  virtual void exitViewName(TplSqlParser::ViewNameContext *ctx) = 0;

  virtual void enterDropMaterializedViewStatement(TplSqlParser::DropMaterializedViewStatementContext *ctx) = 0;
  virtual void exitDropMaterializedViewStatement(TplSqlParser::DropMaterializedViewStatementContext *ctx) = 0;

  virtual void enterCreateFunctionStatement(TplSqlParser::CreateFunctionStatementContext *ctx) = 0;
  virtual void exitCreateFunctionStatement(TplSqlParser::CreateFunctionStatementContext *ctx) = 0;

  virtual void enterResourceList(TplSqlParser::ResourceListContext *ctx) = 0;
  virtual void exitResourceList(TplSqlParser::ResourceListContext *ctx) = 0;

  virtual void enterResource(TplSqlParser::ResourceContext *ctx) = 0;
  virtual void exitResource(TplSqlParser::ResourceContext *ctx) = 0;

  virtual void enterResourceType(TplSqlParser::ResourceTypeContext *ctx) = 0;
  virtual void exitResourceType(TplSqlParser::ResourceTypeContext *ctx) = 0;

  virtual void enterCreateMacroStatement(TplSqlParser::CreateMacroStatementContext *ctx) = 0;
  virtual void exitCreateMacroStatement(TplSqlParser::CreateMacroStatementContext *ctx) = 0;

  virtual void enterDropFunctionStatement(TplSqlParser::DropFunctionStatementContext *ctx) = 0;
  virtual void exitDropFunctionStatement(TplSqlParser::DropFunctionStatementContext *ctx) = 0;

  virtual void enterReloadFunctionsStatement(TplSqlParser::ReloadFunctionsStatementContext *ctx) = 0;
  virtual void exitReloadFunctionsStatement(TplSqlParser::ReloadFunctionsStatementContext *ctx) = 0;

  virtual void enterDropMacroStatement(TplSqlParser::DropMacroStatementContext *ctx) = 0;
  virtual void exitDropMacroStatement(TplSqlParser::DropMacroStatementContext *ctx) = 0;

  virtual void enterAnalyzeStatement(TplSqlParser::AnalyzeStatementContext *ctx) = 0;
  virtual void exitAnalyzeStatement(TplSqlParser::AnalyzeStatementContext *ctx) = 0;

  virtual void enterLockStatement(TplSqlParser::LockStatementContext *ctx) = 0;
  virtual void exitLockStatement(TplSqlParser::LockStatementContext *ctx) = 0;

  virtual void enterLockMode(TplSqlParser::LockModeContext *ctx) = 0;
  virtual void exitLockMode(TplSqlParser::LockModeContext *ctx) = 0;

  virtual void enterUnlockStatement(TplSqlParser::UnlockStatementContext *ctx) = 0;
  virtual void exitUnlockStatement(TplSqlParser::UnlockStatementContext *ctx) = 0;

  virtual void enterLockDatabase(TplSqlParser::LockDatabaseContext *ctx) = 0;
  virtual void exitLockDatabase(TplSqlParser::LockDatabaseContext *ctx) = 0;

  virtual void enterUnlockDatabase(TplSqlParser::UnlockDatabaseContext *ctx) = 0;
  virtual void exitUnlockDatabase(TplSqlParser::UnlockDatabaseContext *ctx) = 0;

  virtual void enterCreateRoleStatement(TplSqlParser::CreateRoleStatementContext *ctx) = 0;
  virtual void exitCreateRoleStatement(TplSqlParser::CreateRoleStatementContext *ctx) = 0;

  virtual void enterDropRoleStatement(TplSqlParser::DropRoleStatementContext *ctx) = 0;
  virtual void exitDropRoleStatement(TplSqlParser::DropRoleStatementContext *ctx) = 0;

  virtual void enterGrantPrivileges(TplSqlParser::GrantPrivilegesContext *ctx) = 0;
  virtual void exitGrantPrivileges(TplSqlParser::GrantPrivilegesContext *ctx) = 0;

  virtual void enterPrivilegeList(TplSqlParser::PrivilegeListContext *ctx) = 0;
  virtual void exitPrivilegeList(TplSqlParser::PrivilegeListContext *ctx) = 0;

  virtual void enterPrivlegeDef(TplSqlParser::PrivlegeDefContext *ctx) = 0;
  virtual void exitPrivlegeDef(TplSqlParser::PrivlegeDefContext *ctx) = 0;

  virtual void enterPrivilegeType(TplSqlParser::PrivilegeTypeContext *ctx) = 0;
  virtual void exitPrivilegeType(TplSqlParser::PrivilegeTypeContext *ctx) = 0;

  virtual void enterPrivilegeObject(TplSqlParser::PrivilegeObjectContext *ctx) = 0;
  virtual void exitPrivilegeObject(TplSqlParser::PrivilegeObjectContext *ctx) = 0;

  virtual void enterPrivObject(TplSqlParser::PrivObjectContext *ctx) = 0;
  virtual void exitPrivObject(TplSqlParser::PrivObjectContext *ctx) = 0;

  virtual void enterPrincipalSpecification(TplSqlParser::PrincipalSpecificationContext *ctx) = 0;
  virtual void exitPrincipalSpecification(TplSqlParser::PrincipalSpecificationContext *ctx) = 0;

  virtual void enterWithGrantOption(TplSqlParser::WithGrantOptionContext *ctx) = 0;
  virtual void exitWithGrantOption(TplSqlParser::WithGrantOptionContext *ctx) = 0;

  virtual void enterRevokePrivileges(TplSqlParser::RevokePrivilegesContext *ctx) = 0;
  virtual void exitRevokePrivileges(TplSqlParser::RevokePrivilegesContext *ctx) = 0;

  virtual void enterGrantOptionFor(TplSqlParser::GrantOptionForContext *ctx) = 0;
  virtual void exitGrantOptionFor(TplSqlParser::GrantOptionForContext *ctx) = 0;

  virtual void enterShowGrants(TplSqlParser::ShowGrantsContext *ctx) = 0;
  virtual void exitShowGrants(TplSqlParser::ShowGrantsContext *ctx) = 0;

  virtual void enterPrivilegeIncludeColObject(TplSqlParser::PrivilegeIncludeColObjectContext *ctx) = 0;
  virtual void exitPrivilegeIncludeColObject(TplSqlParser::PrivilegeIncludeColObjectContext *ctx) = 0;

  virtual void enterPrivObjectCols(TplSqlParser::PrivObjectColsContext *ctx) = 0;
  virtual void exitPrivObjectCols(TplSqlParser::PrivObjectColsContext *ctx) = 0;

  virtual void enterShowRoleGrants(TplSqlParser::ShowRoleGrantsContext *ctx) = 0;
  virtual void exitShowRoleGrants(TplSqlParser::ShowRoleGrantsContext *ctx) = 0;

  virtual void enterShowRolePrincipals(TplSqlParser::ShowRolePrincipalsContext *ctx) = 0;
  virtual void exitShowRolePrincipals(TplSqlParser::ShowRolePrincipalsContext *ctx) = 0;

  virtual void enterShowRoles(TplSqlParser::ShowRolesContext *ctx) = 0;
  virtual void exitShowRoles(TplSqlParser::ShowRolesContext *ctx) = 0;

  virtual void enterGrantRole(TplSqlParser::GrantRoleContext *ctx) = 0;
  virtual void exitGrantRole(TplSqlParser::GrantRoleContext *ctx) = 0;

  virtual void enterWithAdminOption(TplSqlParser::WithAdminOptionContext *ctx) = 0;
  virtual void exitWithAdminOption(TplSqlParser::WithAdminOptionContext *ctx) = 0;

  virtual void enterRevokeRole(TplSqlParser::RevokeRoleContext *ctx) = 0;
  virtual void exitRevokeRole(TplSqlParser::RevokeRoleContext *ctx) = 0;

  virtual void enterAdminOptionFor(TplSqlParser::AdminOptionForContext *ctx) = 0;
  virtual void exitAdminOptionFor(TplSqlParser::AdminOptionForContext *ctx) = 0;

  virtual void enterSetRole(TplSqlParser::SetRoleContext *ctx) = 0;
  virtual void exitSetRole(TplSqlParser::SetRoleContext *ctx) = 0;

  virtual void enterShowCurrentRole(TplSqlParser::ShowCurrentRoleContext *ctx) = 0;
  virtual void exitShowCurrentRole(TplSqlParser::ShowCurrentRoleContext *ctx) = 0;

  virtual void enterAbortTransactionStatement(TplSqlParser::AbortTransactionStatementContext *ctx) = 0;
  virtual void exitAbortTransactionStatement(TplSqlParser::AbortTransactionStatementContext *ctx) = 0;

  virtual void enterAbortCompactionStatement(TplSqlParser::AbortCompactionStatementContext *ctx) = 0;
  virtual void exitAbortCompactionStatement(TplSqlParser::AbortCompactionStatementContext *ctx) = 0;

  virtual void enterKillQueryStatement(TplSqlParser::KillQueryStatementContext *ctx) = 0;
  virtual void exitKillQueryStatement(TplSqlParser::KillQueryStatementContext *ctx) = 0;

  virtual void enterResourcePlanDdlStatements(TplSqlParser::ResourcePlanDdlStatementsContext *ctx) = 0;
  virtual void exitResourcePlanDdlStatements(TplSqlParser::ResourcePlanDdlStatementsContext *ctx) = 0;

  virtual void enterCreateResourcePlanStatement(TplSqlParser::CreateResourcePlanStatementContext *ctx) = 0;
  virtual void exitCreateResourcePlanStatement(TplSqlParser::CreateResourcePlanStatementContext *ctx) = 0;

  virtual void enterRpAssignList(TplSqlParser::RpAssignListContext *ctx) = 0;
  virtual void exitRpAssignList(TplSqlParser::RpAssignListContext *ctx) = 0;

  virtual void enterRpAssign(TplSqlParser::RpAssignContext *ctx) = 0;
  virtual void exitRpAssign(TplSqlParser::RpAssignContext *ctx) = 0;

  virtual void enterPoolPath(TplSqlParser::PoolPathContext *ctx) = 0;
  virtual void exitPoolPath(TplSqlParser::PoolPathContext *ctx) = 0;

  virtual void enterAlterResourcePlanStatement(TplSqlParser::AlterResourcePlanStatementContext *ctx) = 0;
  virtual void exitAlterResourcePlanStatement(TplSqlParser::AlterResourcePlanStatementContext *ctx) = 0;

  virtual void enterRpUnassignList(TplSqlParser::RpUnassignListContext *ctx) = 0;
  virtual void exitRpUnassignList(TplSqlParser::RpUnassignListContext *ctx) = 0;

  virtual void enterRpUnassign(TplSqlParser::RpUnassignContext *ctx) = 0;
  virtual void exitRpUnassign(TplSqlParser::RpUnassignContext *ctx) = 0;

  virtual void enterActivate(TplSqlParser::ActivateContext *ctx) = 0;
  virtual void exitActivate(TplSqlParser::ActivateContext *ctx) = 0;

  virtual void enterWithReplace(TplSqlParser::WithReplaceContext *ctx) = 0;
  virtual void exitWithReplace(TplSqlParser::WithReplaceContext *ctx) = 0;

  virtual void enterEnable(TplSqlParser::EnableContext *ctx) = 0;
  virtual void exitEnable(TplSqlParser::EnableContext *ctx) = 0;

  virtual void enterDropResourcePlanStatement(TplSqlParser::DropResourcePlanStatementContext *ctx) = 0;
  virtual void exitDropResourcePlanStatement(TplSqlParser::DropResourcePlanStatementContext *ctx) = 0;

  virtual void enterGlobalWmStatement(TplSqlParser::GlobalWmStatementContext *ctx) = 0;
  virtual void exitGlobalWmStatement(TplSqlParser::GlobalWmStatementContext *ctx) = 0;

  virtual void enterAlterWmStatement(TplSqlParser::AlterWmStatementContext *ctx) = 0;
  virtual void exitAlterWmStatement(TplSqlParser::AlterWmStatementContext *ctx) = 0;

  virtual void enterReplaceResourcePlanStatement(TplSqlParser::ReplaceResourcePlanStatementContext *ctx) = 0;
  virtual void exitReplaceResourcePlanStatement(TplSqlParser::ReplaceResourcePlanStatementContext *ctx) = 0;

  virtual void enterCreateTriggerStatement(TplSqlParser::CreateTriggerStatementContext *ctx) = 0;
  virtual void exitCreateTriggerStatement(TplSqlParser::CreateTriggerStatementContext *ctx) = 0;

  virtual void enterTriggerExpression(TplSqlParser::TriggerExpressionContext *ctx) = 0;
  virtual void exitTriggerExpression(TplSqlParser::TriggerExpressionContext *ctx) = 0;

  virtual void enterTriggerAtomExpression(TplSqlParser::TriggerAtomExpressionContext *ctx) = 0;
  virtual void exitTriggerAtomExpression(TplSqlParser::TriggerAtomExpressionContext *ctx) = 0;

  virtual void enterComparisionOperator(TplSqlParser::ComparisionOperatorContext *ctx) = 0;
  virtual void exitComparisionOperator(TplSqlParser::ComparisionOperatorContext *ctx) = 0;

  virtual void enterTriggerLiteral(TplSqlParser::TriggerLiteralContext *ctx) = 0;
  virtual void exitTriggerLiteral(TplSqlParser::TriggerLiteralContext *ctx) = 0;

  virtual void enterTriggerActionExpression(TplSqlParser::TriggerActionExpressionContext *ctx) = 0;
  virtual void exitTriggerActionExpression(TplSqlParser::TriggerActionExpressionContext *ctx) = 0;

  virtual void enterAlterTriggerStatement(TplSqlParser::AlterTriggerStatementContext *ctx) = 0;
  virtual void exitAlterTriggerStatement(TplSqlParser::AlterTriggerStatementContext *ctx) = 0;

  virtual void enterDropTriggerStatement(TplSqlParser::DropTriggerStatementContext *ctx) = 0;
  virtual void exitDropTriggerStatement(TplSqlParser::DropTriggerStatementContext *ctx) = 0;

  virtual void enterCreatePoolStatement(TplSqlParser::CreatePoolStatementContext *ctx) = 0;
  virtual void exitCreatePoolStatement(TplSqlParser::CreatePoolStatementContext *ctx) = 0;

  virtual void enterPoolAssignList(TplSqlParser::PoolAssignListContext *ctx) = 0;
  virtual void exitPoolAssignList(TplSqlParser::PoolAssignListContext *ctx) = 0;

  virtual void enterPoolAssign(TplSqlParser::PoolAssignContext *ctx) = 0;
  virtual void exitPoolAssign(TplSqlParser::PoolAssignContext *ctx) = 0;

  virtual void enterAlterPoolStatement(TplSqlParser::AlterPoolStatementContext *ctx) = 0;
  virtual void exitAlterPoolStatement(TplSqlParser::AlterPoolStatementContext *ctx) = 0;

  virtual void enterDropPoolStatement(TplSqlParser::DropPoolStatementContext *ctx) = 0;
  virtual void exitDropPoolStatement(TplSqlParser::DropPoolStatementContext *ctx) = 0;

  virtual void enterCreateMappingStatement(TplSqlParser::CreateMappingStatementContext *ctx) = 0;
  virtual void exitCreateMappingStatement(TplSqlParser::CreateMappingStatementContext *ctx) = 0;

  virtual void enterUnmanaged(TplSqlParser::UnmanagedContext *ctx) = 0;
  virtual void exitUnmanaged(TplSqlParser::UnmanagedContext *ctx) = 0;

  virtual void enterAlterMappingStatement(TplSqlParser::AlterMappingStatementContext *ctx) = 0;
  virtual void exitAlterMappingStatement(TplSqlParser::AlterMappingStatementContext *ctx) = 0;

  virtual void enterDropMappingStatement(TplSqlParser::DropMappingStatementContext *ctx) = 0;
  virtual void exitDropMappingStatement(TplSqlParser::DropMappingStatementContext *ctx) = 0;

  virtual void enterCreateDataConnectorStatement(TplSqlParser::CreateDataConnectorStatementContext *ctx) = 0;
  virtual void exitCreateDataConnectorStatement(TplSqlParser::CreateDataConnectorStatementContext *ctx) = 0;

  virtual void enterDataConnectorType(TplSqlParser::DataConnectorTypeContext *ctx) = 0;
  virtual void exitDataConnectorType(TplSqlParser::DataConnectorTypeContext *ctx) = 0;

  virtual void enterDataConnectorUrl(TplSqlParser::DataConnectorUrlContext *ctx) = 0;
  virtual void exitDataConnectorUrl(TplSqlParser::DataConnectorUrlContext *ctx) = 0;

  virtual void enterDataConnectorComment(TplSqlParser::DataConnectorCommentContext *ctx) = 0;
  virtual void exitDataConnectorComment(TplSqlParser::DataConnectorCommentContext *ctx) = 0;

  virtual void enterDropDataConnectorStatement(TplSqlParser::DropDataConnectorStatementContext *ctx) = 0;
  virtual void exitDropDataConnectorStatement(TplSqlParser::DropDataConnectorStatementContext *ctx) = 0;

  virtual void enterDeleteStatement(TplSqlParser::DeleteStatementContext *ctx) = 0;
  virtual void exitDeleteStatement(TplSqlParser::DeleteStatementContext *ctx) = 0;

  virtual void enterUpdateStatement(TplSqlParser::UpdateStatementContext *ctx) = 0;
  virtual void exitUpdateStatement(TplSqlParser::UpdateStatementContext *ctx) = 0;

  virtual void enterSetColumnsClause(TplSqlParser::SetColumnsClauseContext *ctx) = 0;
  virtual void exitSetColumnsClause(TplSqlParser::SetColumnsClauseContext *ctx) = 0;

  virtual void enterColumnAssignmentClause(TplSqlParser::ColumnAssignmentClauseContext *ctx) = 0;
  virtual void exitColumnAssignmentClause(TplSqlParser::ColumnAssignmentClauseContext *ctx) = 0;

  virtual void enterPrecedencePlusExpressionOrDefault(TplSqlParser::PrecedencePlusExpressionOrDefaultContext *ctx) = 0;
  virtual void exitPrecedencePlusExpressionOrDefault(TplSqlParser::PrecedencePlusExpressionOrDefaultContext *ctx) = 0;

  virtual void enterSqlTransactionStatement(TplSqlParser::SqlTransactionStatementContext *ctx) = 0;
  virtual void exitSqlTransactionStatement(TplSqlParser::SqlTransactionStatementContext *ctx) = 0;

  virtual void enterStartTransactionStatement(TplSqlParser::StartTransactionStatementContext *ctx) = 0;
  virtual void exitStartTransactionStatement(TplSqlParser::StartTransactionStatementContext *ctx) = 0;

  virtual void enterTransactionMode(TplSqlParser::TransactionModeContext *ctx) = 0;
  virtual void exitTransactionMode(TplSqlParser::TransactionModeContext *ctx) = 0;

  virtual void enterIsolationLevel(TplSqlParser::IsolationLevelContext *ctx) = 0;
  virtual void exitIsolationLevel(TplSqlParser::IsolationLevelContext *ctx) = 0;

  virtual void enterLevelOfIsolation(TplSqlParser::LevelOfIsolationContext *ctx) = 0;
  virtual void exitLevelOfIsolation(TplSqlParser::LevelOfIsolationContext *ctx) = 0;

  virtual void enterTransactionAccessMode(TplSqlParser::TransactionAccessModeContext *ctx) = 0;
  virtual void exitTransactionAccessMode(TplSqlParser::TransactionAccessModeContext *ctx) = 0;

  virtual void enterCommitStatement(TplSqlParser::CommitStatementContext *ctx) = 0;
  virtual void exitCommitStatement(TplSqlParser::CommitStatementContext *ctx) = 0;

  virtual void enterRollbackStatement(TplSqlParser::RollbackStatementContext *ctx) = 0;
  virtual void exitRollbackStatement(TplSqlParser::RollbackStatementContext *ctx) = 0;

  virtual void enterSetAutoCommitStatement(TplSqlParser::SetAutoCommitStatementContext *ctx) = 0;
  virtual void exitSetAutoCommitStatement(TplSqlParser::SetAutoCommitStatementContext *ctx) = 0;

  virtual void enterBooleanValueTok(TplSqlParser::BooleanValueTokContext *ctx) = 0;
  virtual void exitBooleanValueTok(TplSqlParser::BooleanValueTokContext *ctx) = 0;

  virtual void enterMergeStatement(TplSqlParser::MergeStatementContext *ctx) = 0;
  virtual void exitMergeStatement(TplSqlParser::MergeStatementContext *ctx) = 0;

  virtual void enterWhenClauses(TplSqlParser::WhenClausesContext *ctx) = 0;
  virtual void exitWhenClauses(TplSqlParser::WhenClausesContext *ctx) = 0;

  virtual void enterWhenMatchedAndClause(TplSqlParser::WhenMatchedAndClauseContext *ctx) = 0;
  virtual void exitWhenMatchedAndClause(TplSqlParser::WhenMatchedAndClauseContext *ctx) = 0;

  virtual void enterUpdateOrDelete(TplSqlParser::UpdateOrDeleteContext *ctx) = 0;
  virtual void exitUpdateOrDelete(TplSqlParser::UpdateOrDeleteContext *ctx) = 0;

  virtual void enterWhenMatchedThenClause(TplSqlParser::WhenMatchedThenClauseContext *ctx) = 0;
  virtual void exitWhenMatchedThenClause(TplSqlParser::WhenMatchedThenClauseContext *ctx) = 0;

  virtual void enterWhenNotMatchedClause(TplSqlParser::WhenNotMatchedClauseContext *ctx) = 0;
  virtual void exitWhenNotMatchedClause(TplSqlParser::WhenNotMatchedClauseContext *ctx) = 0;

  virtual void enterValueRowConstructor(TplSqlParser::ValueRowConstructorContext *ctx) = 0;
  virtual void exitValueRowConstructor(TplSqlParser::ValueRowConstructorContext *ctx) = 0;

  virtual void enterPrepareStatement(TplSqlParser::PrepareStatementContext *ctx) = 0;
  virtual void exitPrepareStatement(TplSqlParser::PrepareStatementContext *ctx) = 0;

  virtual void enterExecuteStatement(TplSqlParser::ExecuteStatementContext *ctx) = 0;
  virtual void exitExecuteStatement(TplSqlParser::ExecuteStatementContext *ctx) = 0;

  virtual void enterExecuteParamList(TplSqlParser::ExecuteParamListContext *ctx) = 0;
  virtual void exitExecuteParamList(TplSqlParser::ExecuteParamListContext *ctx) = 0;

  virtual void enterNonReserved(TplSqlParser::NonReservedContext *ctx) = 0;
  virtual void exitNonReserved(TplSqlParser::NonReservedContext *ctx) = 0;

  virtual void enterTplsqlPrimitiveType(TplSqlParser::TplsqlPrimitiveTypeContext *ctx) = 0;
  virtual void exitTplsqlPrimitiveType(TplSqlParser::TplsqlPrimitiveTypeContext *ctx) = 0;

  virtual void enterAdql(TplSqlParser::AdqlContext *ctx) = 0;
  virtual void exitAdql(TplSqlParser::AdqlContext *ctx) = 0;

  virtual void enterQueryStatementExpression(TplSqlParser::QueryStatementExpressionContext *ctx) = 0;
  virtual void exitQueryStatementExpression(TplSqlParser::QueryStatementExpressionContext *ctx) = 0;

  virtual void enterWithClause(TplSqlParser::WithClauseContext *ctx) = 0;
  virtual void exitWithClause(TplSqlParser::WithClauseContext *ctx) = 0;

  virtual void enterId_(TplSqlParser::Id_Context *ctx) = 0;
  virtual void exitId_(TplSqlParser::Id_Context *ctx) = 0;

  virtual void enterAll_distinct(TplSqlParser::All_distinctContext *ctx) = 0;
  virtual void exitAll_distinct(TplSqlParser::All_distinctContext *ctx) = 0;

  virtual void enterSet_limit(TplSqlParser::Set_limitContext *ctx) = 0;
  virtual void exitSet_limit(TplSqlParser::Set_limitContext *ctx) = 0;

  virtual void enterSelectList(TplSqlParser::SelectListContext *ctx) = 0;
  virtual void exitSelectList(TplSqlParser::SelectListContext *ctx) = 0;

  virtual void enterTableAllColumns(TplSqlParser::TableAllColumnsContext *ctx) = 0;
  virtual void exitTableAllColumns(TplSqlParser::TableAllColumnsContext *ctx) = 0;

  virtual void enterExpression(TplSqlParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(TplSqlParser::ExpressionContext *ctx) = 0;

  virtual void enterPrecedenceOrExpression(TplSqlParser::PrecedenceOrExpressionContext *ctx) = 0;
  virtual void exitPrecedenceOrExpression(TplSqlParser::PrecedenceOrExpressionContext *ctx) = 0;

  virtual void enterPrecedenceAndExpression(TplSqlParser::PrecedenceAndExpressionContext *ctx) = 0;
  virtual void exitPrecedenceAndExpression(TplSqlParser::PrecedenceAndExpressionContext *ctx) = 0;

  virtual void enterPrecedenceNotExpression(TplSqlParser::PrecedenceNotExpressionContext *ctx) = 0;
  virtual void exitPrecedenceNotExpression(TplSqlParser::PrecedenceNotExpressionContext *ctx) = 0;

  virtual void enterPrecedenceNotOperator(TplSqlParser::PrecedenceNotOperatorContext *ctx) = 0;
  virtual void exitPrecedenceNotOperator(TplSqlParser::PrecedenceNotOperatorContext *ctx) = 0;

  virtual void enterPrecedenceUnarySuffixExpression(TplSqlParser::PrecedenceUnarySuffixExpressionContext *ctx) = 0;
  virtual void exitPrecedenceUnarySuffixExpression(TplSqlParser::PrecedenceUnarySuffixExpressionContext *ctx) = 0;

  virtual void enterPrecedenceEqualExpression(TplSqlParser::PrecedenceEqualExpressionContext *ctx) = 0;
  virtual void exitPrecedenceEqualExpression(TplSqlParser::PrecedenceEqualExpressionContext *ctx) = 0;

  virtual void enterPrecedenceSimilarExpression(TplSqlParser::PrecedenceSimilarExpressionContext *ctx) = 0;
  virtual void exitPrecedenceSimilarExpression(TplSqlParser::PrecedenceSimilarExpressionContext *ctx) = 0;

  virtual void enterPrecedenceSimilarExpressionMain(TplSqlParser::PrecedenceSimilarExpressionMainContext *ctx) = 0;
  virtual void exitPrecedenceSimilarExpressionMain(TplSqlParser::PrecedenceSimilarExpressionMainContext *ctx) = 0;

  virtual void enterPrecedenceBitwiseOrExpression(TplSqlParser::PrecedenceBitwiseOrExpressionContext *ctx) = 0;
  virtual void exitPrecedenceBitwiseOrExpression(TplSqlParser::PrecedenceBitwiseOrExpressionContext *ctx) = 0;

  virtual void enterPrecedenceAmpersandExpression(TplSqlParser::PrecedenceAmpersandExpressionContext *ctx) = 0;
  virtual void exitPrecedenceAmpersandExpression(TplSqlParser::PrecedenceAmpersandExpressionContext *ctx) = 0;

  virtual void enterPrecedenceConcatenateExpression(TplSqlParser::PrecedenceConcatenateExpressionContext *ctx) = 0;
  virtual void exitPrecedenceConcatenateExpression(TplSqlParser::PrecedenceConcatenateExpressionContext *ctx) = 0;

  virtual void enterPrecedencePlusExpression(TplSqlParser::PrecedencePlusExpressionContext *ctx) = 0;
  virtual void exitPrecedencePlusExpression(TplSqlParser::PrecedencePlusExpressionContext *ctx) = 0;

  virtual void enterPrecedenceStarExpression(TplSqlParser::PrecedenceStarExpressionContext *ctx) = 0;
  virtual void exitPrecedenceStarExpression(TplSqlParser::PrecedenceStarExpressionContext *ctx) = 0;

  virtual void enterPrecedenceBitwiseXorExpression(TplSqlParser::PrecedenceBitwiseXorExpressionContext *ctx) = 0;
  virtual void exitPrecedenceBitwiseXorExpression(TplSqlParser::PrecedenceBitwiseXorExpressionContext *ctx) = 0;

  virtual void enterPrecedenceUnaryPrefixExpression(TplSqlParser::PrecedenceUnaryPrefixExpressionContext *ctx) = 0;
  virtual void exitPrecedenceUnaryPrefixExpression(TplSqlParser::PrecedenceUnaryPrefixExpressionContext *ctx) = 0;

  virtual void enterPrecedenceUnaryOperator(TplSqlParser::PrecedenceUnaryOperatorContext *ctx) = 0;
  virtual void exitPrecedenceUnaryOperator(TplSqlParser::PrecedenceUnaryOperatorContext *ctx) = 0;

  virtual void enterPrecedenceFieldExpression(TplSqlParser::PrecedenceFieldExpressionContext *ctx) = 0;
  virtual void exitPrecedenceFieldExpression(TplSqlParser::PrecedenceFieldExpressionContext *ctx) = 0;

  virtual void enterAtomExpression(TplSqlParser::AtomExpressionContext *ctx) = 0;
  virtual void exitAtomExpression(TplSqlParser::AtomExpressionContext *ctx) = 0;

  virtual void enterConstant(TplSqlParser::ConstantContext *ctx) = 0;
  virtual void exitConstant(TplSqlParser::ConstantContext *ctx) = 0;

  virtual void enterIntervalLiteral(TplSqlParser::IntervalLiteralContext *ctx) = 0;
  virtual void exitIntervalLiteral(TplSqlParser::IntervalLiteralContext *ctx) = 0;

  virtual void enterIntervalValue(TplSqlParser::IntervalValueContext *ctx) = 0;
  virtual void exitIntervalValue(TplSqlParser::IntervalValueContext *ctx) = 0;

  virtual void enterIntervalQualifiers(TplSqlParser::IntervalQualifiersContext *ctx) = 0;
  virtual void exitIntervalQualifiers(TplSqlParser::IntervalQualifiersContext *ctx) = 0;

  virtual void enterDateLiteral(TplSqlParser::DateLiteralContext *ctx) = 0;
  virtual void exitDateLiteral(TplSqlParser::DateLiteralContext *ctx) = 0;

  virtual void enterTimestampLiteral(TplSqlParser::TimestampLiteralContext *ctx) = 0;
  virtual void exitTimestampLiteral(TplSqlParser::TimestampLiteralContext *ctx) = 0;

  virtual void enterTimestampLocalTZLiteral(TplSqlParser::TimestampLocalTZLiteralContext *ctx) = 0;
  virtual void exitTimestampLocalTZLiteral(TplSqlParser::TimestampLocalTZLiteralContext *ctx) = 0;

  virtual void enterStringLiteralSequence(TplSqlParser::StringLiteralSequenceContext *ctx) = 0;
  virtual void exitStringLiteralSequence(TplSqlParser::StringLiteralSequenceContext *ctx) = 0;

  virtual void enterCharSetStringLiteral(TplSqlParser::CharSetStringLiteralContext *ctx) = 0;
  virtual void exitCharSetStringLiteral(TplSqlParser::CharSetStringLiteralContext *ctx) = 0;

  virtual void enterBooleanValue(TplSqlParser::BooleanValueContext *ctx) = 0;
  virtual void exitBooleanValue(TplSqlParser::BooleanValueContext *ctx) = 0;

  virtual void enterPrepareStmtParam(TplSqlParser::PrepareStmtParamContext *ctx) = 0;
  virtual void exitPrepareStmtParam(TplSqlParser::PrepareStmtParamContext *ctx) = 0;

  virtual void enterParameterIdx(TplSqlParser::ParameterIdxContext *ctx) = 0;
  virtual void exitParameterIdx(TplSqlParser::ParameterIdxContext *ctx) = 0;

  virtual void enterIntervalExpression(TplSqlParser::IntervalExpressionContext *ctx) = 0;
  virtual void exitIntervalExpression(TplSqlParser::IntervalExpressionContext *ctx) = 0;

  virtual void enterCastExpression(TplSqlParser::CastExpressionContext *ctx) = 0;
  virtual void exitCastExpression(TplSqlParser::CastExpressionContext *ctx) = 0;

  virtual void enterExtractExpression(TplSqlParser::ExtractExpressionContext *ctx) = 0;
  virtual void exitExtractExpression(TplSqlParser::ExtractExpressionContext *ctx) = 0;

  virtual void enterTimeQualifiers(TplSqlParser::TimeQualifiersContext *ctx) = 0;
  virtual void exitTimeQualifiers(TplSqlParser::TimeQualifiersContext *ctx) = 0;

  virtual void enterFloorExpression(TplSqlParser::FloorExpressionContext *ctx) = 0;
  virtual void exitFloorExpression(TplSqlParser::FloorExpressionContext *ctx) = 0;

  virtual void enterFloorDateQualifiers(TplSqlParser::FloorDateQualifiersContext *ctx) = 0;
  virtual void exitFloorDateQualifiers(TplSqlParser::FloorDateQualifiersContext *ctx) = 0;

  virtual void enterCaseExpression(TplSqlParser::CaseExpressionContext *ctx) = 0;
  virtual void exitCaseExpression(TplSqlParser::CaseExpressionContext *ctx) = 0;

  virtual void enterWhenExpression(TplSqlParser::WhenExpressionContext *ctx) = 0;
  virtual void exitWhenExpression(TplSqlParser::WhenExpressionContext *ctx) = 0;

  virtual void enterSubQueryExpression(TplSqlParser::SubQueryExpressionContext *ctx) = 0;
  virtual void exitSubQueryExpression(TplSqlParser::SubQueryExpressionContext *ctx) = 0;

  virtual void enterFunction_(TplSqlParser::Function_Context *ctx) = 0;
  virtual void exitFunction_(TplSqlParser::Function_Context *ctx) = 0;

  virtual void enterTrimFunction(TplSqlParser::TrimFunctionContext *ctx) = 0;
  virtual void exitTrimFunction(TplSqlParser::TrimFunctionContext *ctx) = 0;

  virtual void enterFunctionName(TplSqlParser::FunctionNameContext *ctx) = 0;
  virtual void exitFunctionName(TplSqlParser::FunctionNameContext *ctx) = 0;

  virtual void enterFunctionIdentifier(TplSqlParser::FunctionIdentifierContext *ctx) = 0;
  virtual void exitFunctionIdentifier(TplSqlParser::FunctionIdentifierContext *ctx) = 0;

  virtual void enterSql11ReservedKeywordsUsedAsFunctionName(TplSqlParser::Sql11ReservedKeywordsUsedAsFunctionNameContext *ctx) = 0;
  virtual void exitSql11ReservedKeywordsUsedAsFunctionName(TplSqlParser::Sql11ReservedKeywordsUsedAsFunctionNameContext *ctx) = 0;

  virtual void enterSelectExpression(TplSqlParser::SelectExpressionContext *ctx) = 0;
  virtual void exitSelectExpression(TplSqlParser::SelectExpressionContext *ctx) = 0;

  virtual void enterOrderByClause(TplSqlParser::OrderByClauseContext *ctx) = 0;
  virtual void exitOrderByClause(TplSqlParser::OrderByClauseContext *ctx) = 0;

  virtual void enterColumnRefOrder(TplSqlParser::ColumnRefOrderContext *ctx) = 0;
  virtual void exitColumnRefOrder(TplSqlParser::ColumnRefOrderContext *ctx) = 0;

  virtual void enterOrderSpecificationRewrite(TplSqlParser::OrderSpecificationRewriteContext *ctx) = 0;
  virtual void exitOrderSpecificationRewrite(TplSqlParser::OrderSpecificationRewriteContext *ctx) = 0;

  virtual void enterNullOrdering(TplSqlParser::NullOrderingContext *ctx) = 0;
  virtual void exitNullOrdering(TplSqlParser::NullOrderingContext *ctx) = 0;

  virtual void enterNull_treatment(TplSqlParser::Null_treatmentContext *ctx) = 0;
  virtual void exitNull_treatment(TplSqlParser::Null_treatmentContext *ctx) = 0;

  virtual void enterWindow_specification(TplSqlParser::Window_specificationContext *ctx) = 0;
  virtual void exitWindow_specification(TplSqlParser::Window_specificationContext *ctx) = 0;

  virtual void enterPartitioningSpec(TplSqlParser::PartitioningSpecContext *ctx) = 0;
  virtual void exitPartitioningSpec(TplSqlParser::PartitioningSpecContext *ctx) = 0;

  virtual void enterPartitionByClause(TplSqlParser::PartitionByClauseContext *ctx) = 0;
  virtual void exitPartitionByClause(TplSqlParser::PartitionByClauseContext *ctx) = 0;

  virtual void enterExpressions(TplSqlParser::ExpressionsContext *ctx) = 0;
  virtual void exitExpressions(TplSqlParser::ExpressionsContext *ctx) = 0;

  virtual void enterExpressionsInParenthesis(TplSqlParser::ExpressionsInParenthesisContext *ctx) = 0;
  virtual void exitExpressionsInParenthesis(TplSqlParser::ExpressionsInParenthesisContext *ctx) = 0;

  virtual void enterExpressionsNotInParenthesis(TplSqlParser::ExpressionsNotInParenthesisContext *ctx) = 0;
  virtual void exitExpressionsNotInParenthesis(TplSqlParser::ExpressionsNotInParenthesisContext *ctx) = 0;

  virtual void enterExpressionOrDefault(TplSqlParser::ExpressionOrDefaultContext *ctx) = 0;
  virtual void exitExpressionOrDefault(TplSqlParser::ExpressionOrDefaultContext *ctx) = 0;

  virtual void enterDefaultValue(TplSqlParser::DefaultValueContext *ctx) = 0;
  virtual void exitDefaultValue(TplSqlParser::DefaultValueContext *ctx) = 0;

  virtual void enterExpressionPart(TplSqlParser::ExpressionPartContext *ctx) = 0;
  virtual void exitExpressionPart(TplSqlParser::ExpressionPartContext *ctx) = 0;

  virtual void enterDistributeByClause(TplSqlParser::DistributeByClauseContext *ctx) = 0;
  virtual void exitDistributeByClause(TplSqlParser::DistributeByClauseContext *ctx) = 0;

  virtual void enterSortByClause(TplSqlParser::SortByClauseContext *ctx) = 0;
  virtual void exitSortByClause(TplSqlParser::SortByClauseContext *ctx) = 0;

  virtual void enterColumnRefOrderInParenthesis(TplSqlParser::ColumnRefOrderInParenthesisContext *ctx) = 0;
  virtual void exitColumnRefOrderInParenthesis(TplSqlParser::ColumnRefOrderInParenthesisContext *ctx) = 0;

  virtual void enterColumnRefOrderNotInParenthesis(TplSqlParser::ColumnRefOrderNotInParenthesisContext *ctx) = 0;
  virtual void exitColumnRefOrderNotInParenthesis(TplSqlParser::ColumnRefOrderNotInParenthesisContext *ctx) = 0;

  virtual void enterClusterByClause(TplSqlParser::ClusterByClauseContext *ctx) = 0;
  virtual void exitClusterByClause(TplSqlParser::ClusterByClauseContext *ctx) = 0;

  virtual void enterWindow_frame(TplSqlParser::Window_frameContext *ctx) = 0;
  virtual void exitWindow_frame(TplSqlParser::Window_frameContext *ctx) = 0;

  virtual void enterWindow_range_expression(TplSqlParser::Window_range_expressionContext *ctx) = 0;
  virtual void exitWindow_range_expression(TplSqlParser::Window_range_expressionContext *ctx) = 0;

  virtual void enterWindow_frame_start_boundary(TplSqlParser::Window_frame_start_boundaryContext *ctx) = 0;
  virtual void exitWindow_frame_start_boundary(TplSqlParser::Window_frame_start_boundaryContext *ctx) = 0;

  virtual void enterWindow_frame_boundary(TplSqlParser::Window_frame_boundaryContext *ctx) = 0;
  virtual void exitWindow_frame_boundary(TplSqlParser::Window_frame_boundaryContext *ctx) = 0;

  virtual void enterWindow_value_expression(TplSqlParser::Window_value_expressionContext *ctx) = 0;
  virtual void exitWindow_value_expression(TplSqlParser::Window_value_expressionContext *ctx) = 0;

  virtual void enterTableOrColumn(TplSqlParser::TableOrColumnContext *ctx) = 0;
  virtual void exitTableOrColumn(TplSqlParser::TableOrColumnContext *ctx) = 0;

  virtual void enterPrecedenceBitwiseXorOperator(TplSqlParser::PrecedenceBitwiseXorOperatorContext *ctx) = 0;
  virtual void exitPrecedenceBitwiseXorOperator(TplSqlParser::PrecedenceBitwiseXorOperatorContext *ctx) = 0;

  virtual void enterPrecedenceStarOperator(TplSqlParser::PrecedenceStarOperatorContext *ctx) = 0;
  virtual void exitPrecedenceStarOperator(TplSqlParser::PrecedenceStarOperatorContext *ctx) = 0;

  virtual void enterPrecedencePlusOperator(TplSqlParser::PrecedencePlusOperatorContext *ctx) = 0;
  virtual void exitPrecedencePlusOperator(TplSqlParser::PrecedencePlusOperatorContext *ctx) = 0;

  virtual void enterPrecedenceConcatenateOperator(TplSqlParser::PrecedenceConcatenateOperatorContext *ctx) = 0;
  virtual void exitPrecedenceConcatenateOperator(TplSqlParser::PrecedenceConcatenateOperatorContext *ctx) = 0;

  virtual void enterPrecedenceAmpersandOperator(TplSqlParser::PrecedenceAmpersandOperatorContext *ctx) = 0;
  virtual void exitPrecedenceAmpersandOperator(TplSqlParser::PrecedenceAmpersandOperatorContext *ctx) = 0;

  virtual void enterPrecedenceBitwiseOrOperator(TplSqlParser::PrecedenceBitwiseOrOperatorContext *ctx) = 0;
  virtual void exitPrecedenceBitwiseOrOperator(TplSqlParser::PrecedenceBitwiseOrOperatorContext *ctx) = 0;

  virtual void enterPrecedenceSimilarExpressionPart(TplSqlParser::PrecedenceSimilarExpressionPartContext *ctx) = 0;
  virtual void exitPrecedenceSimilarExpressionPart(TplSqlParser::PrecedenceSimilarExpressionPartContext *ctx) = 0;

  virtual void enterPrecedenceSimilarOperator(TplSqlParser::PrecedenceSimilarOperatorContext *ctx) = 0;
  virtual void exitPrecedenceSimilarOperator(TplSqlParser::PrecedenceSimilarOperatorContext *ctx) = 0;

  virtual void enterPrecedenceRegexpOperator(TplSqlParser::PrecedenceRegexpOperatorContext *ctx) = 0;
  virtual void exitPrecedenceRegexpOperator(TplSqlParser::PrecedenceRegexpOperatorContext *ctx) = 0;

  virtual void enterPrecedenceSimilarExpressionAtom(TplSqlParser::PrecedenceSimilarExpressionAtomContext *ctx) = 0;
  virtual void exitPrecedenceSimilarExpressionAtom(TplSqlParser::PrecedenceSimilarExpressionAtomContext *ctx) = 0;

  virtual void enterPrecedenceSimilarExpressionQuantifierPredicate(TplSqlParser::PrecedenceSimilarExpressionQuantifierPredicateContext *ctx) = 0;
  virtual void exitPrecedenceSimilarExpressionQuantifierPredicate(TplSqlParser::PrecedenceSimilarExpressionQuantifierPredicateContext *ctx) = 0;

  virtual void enterSubQuerySelectorOperator(TplSqlParser::SubQuerySelectorOperatorContext *ctx) = 0;
  virtual void exitSubQuerySelectorOperator(TplSqlParser::SubQuerySelectorOperatorContext *ctx) = 0;

  virtual void enterQuantifierType(TplSqlParser::QuantifierTypeContext *ctx) = 0;
  virtual void exitQuantifierType(TplSqlParser::QuantifierTypeContext *ctx) = 0;

  virtual void enterPrecedenceSimilarExpressionPartNot(TplSqlParser::PrecedenceSimilarExpressionPartNotContext *ctx) = 0;
  virtual void exitPrecedenceSimilarExpressionPartNot(TplSqlParser::PrecedenceSimilarExpressionPartNotContext *ctx) = 0;

  virtual void enterPrecedenceSimilarExpressionIn(TplSqlParser::PrecedenceSimilarExpressionInContext *ctx) = 0;
  virtual void exitPrecedenceSimilarExpressionIn(TplSqlParser::PrecedenceSimilarExpressionInContext *ctx) = 0;

  virtual void enterPrecedenceEqualOperator(TplSqlParser::PrecedenceEqualOperatorContext *ctx) = 0;
  virtual void exitPrecedenceEqualOperator(TplSqlParser::PrecedenceEqualOperatorContext *ctx) = 0;

  virtual void enterPrecedenceDistinctOperator(TplSqlParser::PrecedenceDistinctOperatorContext *ctx) = 0;
  virtual void exitPrecedenceDistinctOperator(TplSqlParser::PrecedenceDistinctOperatorContext *ctx) = 0;

  virtual void enterIsCondition(TplSqlParser::IsConditionContext *ctx) = 0;
  virtual void exitIsCondition(TplSqlParser::IsConditionContext *ctx) = 0;

  virtual void enterPrecedenceAndOperator(TplSqlParser::PrecedenceAndOperatorContext *ctx) = 0;
  virtual void exitPrecedenceAndOperator(TplSqlParser::PrecedenceAndOperatorContext *ctx) = 0;

  virtual void enterPrecedenceOrOperator(TplSqlParser::PrecedenceOrOperatorContext *ctx) = 0;
  virtual void exitPrecedenceOrOperator(TplSqlParser::PrecedenceOrOperatorContext *ctx) = 0;

  virtual void enterFromClause(TplSqlParser::FromClauseContext *ctx) = 0;
  virtual void exitFromClause(TplSqlParser::FromClauseContext *ctx) = 0;

  virtual void enterJoinSource(TplSqlParser::JoinSourceContext *ctx) = 0;
  virtual void exitJoinSource(TplSqlParser::JoinSourceContext *ctx) = 0;

  virtual void enterSubQuerySource(TplSqlParser::SubQuerySourceContext *ctx) = 0;
  virtual void exitSubQuerySource(TplSqlParser::SubQuerySourceContext *ctx) = 0;

  virtual void enterJoinToken(TplSqlParser::JoinTokenContext *ctx) = 0;
  virtual void exitJoinToken(TplSqlParser::JoinTokenContext *ctx) = 0;

  virtual void enterColumnParenthesesList(TplSqlParser::ColumnParenthesesListContext *ctx) = 0;
  virtual void exitColumnParenthesesList(TplSqlParser::ColumnParenthesesListContext *ctx) = 0;

  virtual void enterColumnNameList(TplSqlParser::ColumnNameListContext *ctx) = 0;
  virtual void exitColumnNameList(TplSqlParser::ColumnNameListContext *ctx) = 0;

  virtual void enterColumnName(TplSqlParser::ColumnNameContext *ctx) = 0;
  virtual void exitColumnName(TplSqlParser::ColumnNameContext *ctx) = 0;

  virtual void enterWhereClause(TplSqlParser::WhereClauseContext *ctx) = 0;
  virtual void exitWhereClause(TplSqlParser::WhereClauseContext *ctx) = 0;

  virtual void enterSearchCondition(TplSqlParser::SearchConditionContext *ctx) = 0;
  virtual void exitSearchCondition(TplSqlParser::SearchConditionContext *ctx) = 0;

  virtual void enterGroupByClause(TplSqlParser::GroupByClauseContext *ctx) = 0;
  virtual void exitGroupByClause(TplSqlParser::GroupByClauseContext *ctx) = 0;

  virtual void enterGroupByEmpty(TplSqlParser::GroupByEmptyContext *ctx) = 0;
  virtual void exitGroupByEmpty(TplSqlParser::GroupByEmptyContext *ctx) = 0;

  virtual void enterHavingClause(TplSqlParser::HavingClauseContext *ctx) = 0;
  virtual void exitHavingClause(TplSqlParser::HavingClauseContext *ctx) = 0;

  virtual void enterHavingCondition(TplSqlParser::HavingConditionContext *ctx) = 0;
  virtual void exitHavingCondition(TplSqlParser::HavingConditionContext *ctx) = 0;

  virtual void enterWindow_clause(TplSqlParser::Window_clauseContext *ctx) = 0;
  virtual void exitWindow_clause(TplSqlParser::Window_clauseContext *ctx) = 0;

  virtual void enterWindow_defn(TplSqlParser::Window_defnContext *ctx) = 0;
  virtual void exitWindow_defn(TplSqlParser::Window_defnContext *ctx) = 0;

  virtual void enterSetOpSelectStatement(TplSqlParser::SetOpSelectStatementContext *ctx) = 0;
  virtual void exitSetOpSelectStatement(TplSqlParser::SetOpSelectStatementContext *ctx) = 0;

  virtual void enterSetOperator(TplSqlParser::SetOperatorContext *ctx) = 0;
  virtual void exitSetOperator(TplSqlParser::SetOperatorContext *ctx) = 0;

  virtual void enterLimitClause(TplSqlParser::LimitClauseContext *ctx) = 0;
  virtual void exitLimitClause(TplSqlParser::LimitClauseContext *ctx) = 0;

  virtual void enterAdqlPrimitiveType(TplSqlParser::AdqlPrimitiveTypeContext *ctx) = 0;
  virtual void exitAdqlPrimitiveType(TplSqlParser::AdqlPrimitiveTypeContext *ctx) = 0;


};

