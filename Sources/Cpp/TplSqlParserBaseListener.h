
// Generated from ./TplSqlParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "TplSqlParserListener.h"


/**
 * This class provides an empty implementation of TplSqlParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  TplSqlParserBaseListener : public TplSqlParserListener {
public:

  virtual void enterTplsql(TplSqlParser::TplsqlContext * /*ctx*/) override { }
  virtual void exitTplsql(TplSqlParser::TplsqlContext * /*ctx*/) override { }

  virtual void enterStatement(TplSqlParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(TplSqlParser::StatementContext * /*ctx*/) override { }

  virtual void enterExplainStatement(TplSqlParser::ExplainStatementContext * /*ctx*/) override { }
  virtual void exitExplainStatement(TplSqlParser::ExplainStatementContext * /*ctx*/) override { }

  virtual void enterExplainOption(TplSqlParser::ExplainOptionContext * /*ctx*/) override { }
  virtual void exitExplainOption(TplSqlParser::ExplainOptionContext * /*ctx*/) override { }

  virtual void enterVectorizationOnly(TplSqlParser::VectorizationOnlyContext * /*ctx*/) override { }
  virtual void exitVectorizationOnly(TplSqlParser::VectorizationOnlyContext * /*ctx*/) override { }

  virtual void enterVectorizatonDetail(TplSqlParser::VectorizatonDetailContext * /*ctx*/) override { }
  virtual void exitVectorizatonDetail(TplSqlParser::VectorizatonDetailContext * /*ctx*/) override { }

  virtual void enterExecStatement(TplSqlParser::ExecStatementContext * /*ctx*/) override { }
  virtual void exitExecStatement(TplSqlParser::ExecStatementContext * /*ctx*/) override { }

  virtual void enterCteStatement(TplSqlParser::CteStatementContext * /*ctx*/) override { }
  virtual void exitCteStatement(TplSqlParser::CteStatementContext * /*ctx*/) override { }

  virtual void enterQueryStatementExpressionBody(TplSqlParser::QueryStatementExpressionBodyContext * /*ctx*/) override { }
  virtual void exitQueryStatementExpressionBody(TplSqlParser::QueryStatementExpressionBodyContext * /*ctx*/) override { }

  virtual void enterFromStatement(TplSqlParser::FromStatementContext * /*ctx*/) override { }
  virtual void exitFromStatement(TplSqlParser::FromStatementContext * /*ctx*/) override { }

  virtual void enterSingleFromStatement(TplSqlParser::SingleFromStatementContext * /*ctx*/) override { }
  virtual void exitSingleFromStatement(TplSqlParser::SingleFromStatementContext * /*ctx*/) override { }

  virtual void enterFromSource(TplSqlParser::FromSourceContext * /*ctx*/) override { }
  virtual void exitFromSource(TplSqlParser::FromSourceContext * /*ctx*/) override { }

  virtual void enterUniqueJoinToken(TplSqlParser::UniqueJoinTokenContext * /*ctx*/) override { }
  virtual void exitUniqueJoinToken(TplSqlParser::UniqueJoinTokenContext * /*ctx*/) override { }

  virtual void enterUniqueJoinSource(TplSqlParser::UniqueJoinSourceContext * /*ctx*/) override { }
  virtual void exitUniqueJoinSource(TplSqlParser::UniqueJoinSourceContext * /*ctx*/) override { }

  virtual void enterUniqueJoinTableSource(TplSqlParser::UniqueJoinTableSourceContext * /*ctx*/) override { }
  virtual void exitUniqueJoinTableSource(TplSqlParser::UniqueJoinTableSourceContext * /*ctx*/) override { }

  virtual void enterUniqueJoinExpr(TplSqlParser::UniqueJoinExprContext * /*ctx*/) override { }
  virtual void exitUniqueJoinExpr(TplSqlParser::UniqueJoinExprContext * /*ctx*/) override { }

  virtual void enterExpressionList(TplSqlParser::ExpressionListContext * /*ctx*/) override { }
  virtual void exitExpressionList(TplSqlParser::ExpressionListContext * /*ctx*/) override { }

  virtual void enterBody(TplSqlParser::BodyContext * /*ctx*/) override { }
  virtual void exitBody(TplSqlParser::BodyContext * /*ctx*/) override { }

  virtual void enterInsertClause(TplSqlParser::InsertClauseContext * /*ctx*/) override { }
  virtual void exitInsertClause(TplSqlParser::InsertClauseContext * /*ctx*/) override { }

  virtual void enterDestination(TplSqlParser::DestinationContext * /*ctx*/) override { }
  virtual void exitDestination(TplSqlParser::DestinationContext * /*ctx*/) override { }

  virtual void enterLateralView(TplSqlParser::LateralViewContext * /*ctx*/) override { }
  virtual void exitLateralView(TplSqlParser::LateralViewContext * /*ctx*/) override { }

  virtual void enterTableAlias(TplSqlParser::TableAliasContext * /*ctx*/) override { }
  virtual void exitTableAlias(TplSqlParser::TableAliasContext * /*ctx*/) override { }

  virtual void enterValuesClause(TplSqlParser::ValuesClauseContext * /*ctx*/) override { }
  virtual void exitValuesClause(TplSqlParser::ValuesClauseContext * /*ctx*/) override { }

  virtual void enterValuesTableConstructor(TplSqlParser::ValuesTableConstructorContext * /*ctx*/) override { }
  virtual void exitValuesTableConstructor(TplSqlParser::ValuesTableConstructorContext * /*ctx*/) override { }

  virtual void enterFirstValueRowConstructor(TplSqlParser::FirstValueRowConstructorContext * /*ctx*/) override { }
  virtual void exitFirstValueRowConstructor(TplSqlParser::FirstValueRowConstructorContext * /*ctx*/) override { }

  virtual void enterFirstExpressionsWithAlias(TplSqlParser::FirstExpressionsWithAliasContext * /*ctx*/) override { }
  virtual void exitFirstExpressionsWithAlias(TplSqlParser::FirstExpressionsWithAliasContext * /*ctx*/) override { }

  virtual void enterExpressionWithAlias(TplSqlParser::ExpressionWithAliasContext * /*ctx*/) override { }
  virtual void exitExpressionWithAlias(TplSqlParser::ExpressionWithAliasContext * /*ctx*/) override { }

  virtual void enterQualifyClause(TplSqlParser::QualifyClauseContext * /*ctx*/) override { }
  virtual void exitQualifyClause(TplSqlParser::QualifyClauseContext * /*ctx*/) override { }

  virtual void enterRegularBody(TplSqlParser::RegularBodyContext * /*ctx*/) override { }
  virtual void exitRegularBody(TplSqlParser::RegularBodyContext * /*ctx*/) override { }

  virtual void enterSelectStatement(TplSqlParser::SelectStatementContext * /*ctx*/) override { }
  virtual void exitSelectStatement(TplSqlParser::SelectStatementContext * /*ctx*/) override { }

  virtual void enterAtomSelectStatement(TplSqlParser::AtomSelectStatementContext * /*ctx*/) override { }
  virtual void exitAtomSelectStatement(TplSqlParser::AtomSelectStatementContext * /*ctx*/) override { }

  virtual void enterValuesSource(TplSqlParser::ValuesSourceContext * /*ctx*/) override { }
  virtual void exitValuesSource(TplSqlParser::ValuesSourceContext * /*ctx*/) override { }

  virtual void enterSelectClause(TplSqlParser::SelectClauseContext * /*ctx*/) override { }
  virtual void exitSelectClause(TplSqlParser::SelectClauseContext * /*ctx*/) override { }

  virtual void enterSelectTrfmClause(TplSqlParser::SelectTrfmClauseContext * /*ctx*/) override { }
  virtual void exitSelectTrfmClause(TplSqlParser::SelectTrfmClauseContext * /*ctx*/) override { }

  virtual void enterSelectExpressionList(TplSqlParser::SelectExpressionListContext * /*ctx*/) override { }
  virtual void exitSelectExpressionList(TplSqlParser::SelectExpressionListContext * /*ctx*/) override { }

  virtual void enterRowFormat(TplSqlParser::RowFormatContext * /*ctx*/) override { }
  virtual void exitRowFormat(TplSqlParser::RowFormatContext * /*ctx*/) override { }

  virtual void enterRecordWriter(TplSqlParser::RecordWriterContext * /*ctx*/) override { }
  virtual void exitRecordWriter(TplSqlParser::RecordWriterContext * /*ctx*/) override { }

  virtual void enterAliasList(TplSqlParser::AliasListContext * /*ctx*/) override { }
  virtual void exitAliasList(TplSqlParser::AliasListContext * /*ctx*/) override { }

  virtual void enterRecordReader(TplSqlParser::RecordReaderContext * /*ctx*/) override { }
  virtual void exitRecordReader(TplSqlParser::RecordReaderContext * /*ctx*/) override { }

  virtual void enterTrfmClause(TplSqlParser::TrfmClauseContext * /*ctx*/) override { }
  virtual void exitTrfmClause(TplSqlParser::TrfmClauseContext * /*ctx*/) override { }

  virtual void enterSelectItem(TplSqlParser::SelectItemContext * /*ctx*/) override { }
  virtual void exitSelectItem(TplSqlParser::SelectItemContext * /*ctx*/) override { }

  virtual void enterTableName(TplSqlParser::TableNameContext * /*ctx*/) override { }
  virtual void exitTableName(TplSqlParser::TableNameContext * /*ctx*/) override { }

  virtual void enterAtomjoinSource(TplSqlParser::AtomjoinSourceContext * /*ctx*/) override { }
  virtual void exitAtomjoinSource(TplSqlParser::AtomjoinSourceContext * /*ctx*/) override { }

  virtual void enterTableSource(TplSqlParser::TableSourceContext * /*ctx*/) override { }
  virtual void exitTableSource(TplSqlParser::TableSourceContext * /*ctx*/) override { }

  virtual void enterTableSample(TplSqlParser::TableSampleContext * /*ctx*/) override { }
  virtual void exitTableSample(TplSqlParser::TableSampleContext * /*ctx*/) override { }

  virtual void enterTableBucketSample(TplSqlParser::TableBucketSampleContext * /*ctx*/) override { }
  virtual void exitTableBucketSample(TplSqlParser::TableBucketSampleContext * /*ctx*/) override { }

  virtual void enterSplitSample(TplSqlParser::SplitSampleContext * /*ctx*/) override { }
  virtual void exitSplitSample(TplSqlParser::SplitSampleContext * /*ctx*/) override { }

  virtual void enterAsOfClause(TplSqlParser::AsOfClauseContext * /*ctx*/) override { }
  virtual void exitAsOfClause(TplSqlParser::AsOfClauseContext * /*ctx*/) override { }

  virtual void enterVirtualTableSource(TplSqlParser::VirtualTableSourceContext * /*ctx*/) override { }
  virtual void exitVirtualTableSource(TplSqlParser::VirtualTableSourceContext * /*ctx*/) override { }

  virtual void enterPartitionedTableFunction(TplSqlParser::PartitionedTableFunctionContext * /*ctx*/) override { }
  virtual void exitPartitionedTableFunction(TplSqlParser::PartitionedTableFunctionContext * /*ctx*/) override { }

  virtual void enterPartitionTableFunctionSource(TplSqlParser::PartitionTableFunctionSourceContext * /*ctx*/) override { }
  virtual void exitPartitionTableFunctionSource(TplSqlParser::PartitionTableFunctionSourceContext * /*ctx*/) override { }

  virtual void enterJoinSourcePart(TplSqlParser::JoinSourcePartContext * /*ctx*/) override { }
  virtual void exitJoinSourcePart(TplSqlParser::JoinSourcePartContext * /*ctx*/) override { }

  virtual void enterGroupby_expression(TplSqlParser::Groupby_expressionContext * /*ctx*/) override { }
  virtual void exitGroupby_expression(TplSqlParser::Groupby_expressionContext * /*ctx*/) override { }

  virtual void enterRollupStandard(TplSqlParser::RollupStandardContext * /*ctx*/) override { }
  virtual void exitRollupStandard(TplSqlParser::RollupStandardContext * /*ctx*/) override { }

  virtual void enterRollupOldSyntax(TplSqlParser::RollupOldSyntaxContext * /*ctx*/) override { }
  virtual void exitRollupOldSyntax(TplSqlParser::RollupOldSyntaxContext * /*ctx*/) override { }

  virtual void enterGroupingSetExpression(TplSqlParser::GroupingSetExpressionContext * /*ctx*/) override { }
  virtual void exitGroupingSetExpression(TplSqlParser::GroupingSetExpressionContext * /*ctx*/) override { }

  virtual void enterGroupingSetExpressionMultiple(TplSqlParser::GroupingSetExpressionMultipleContext * /*ctx*/) override { }
  virtual void exitGroupingSetExpressionMultiple(TplSqlParser::GroupingSetExpressionMultipleContext * /*ctx*/) override { }

  virtual void enterGroupingExpressionSingle(TplSqlParser::GroupingExpressionSingleContext * /*ctx*/) override { }
  virtual void exitGroupingExpressionSingle(TplSqlParser::GroupingExpressionSingleContext * /*ctx*/) override { }

  virtual void enterLoadStatement(TplSqlParser::LoadStatementContext * /*ctx*/) override { }
  virtual void exitLoadStatement(TplSqlParser::LoadStatementContext * /*ctx*/) override { }

  virtual void enterTableOrPartition(TplSqlParser::TableOrPartitionContext * /*ctx*/) override { }
  virtual void exitTableOrPartition(TplSqlParser::TableOrPartitionContext * /*ctx*/) override { }

  virtual void enterPartitionSpec(TplSqlParser::PartitionSpecContext * /*ctx*/) override { }
  virtual void exitPartitionSpec(TplSqlParser::PartitionSpecContext * /*ctx*/) override { }

  virtual void enterPartitionVal(TplSqlParser::PartitionValContext * /*ctx*/) override { }
  virtual void exitPartitionVal(TplSqlParser::PartitionValContext * /*ctx*/) override { }

  virtual void enterInputFileFormat(TplSqlParser::InputFileFormatContext * /*ctx*/) override { }
  virtual void exitInputFileFormat(TplSqlParser::InputFileFormatContext * /*ctx*/) override { }

  virtual void enterExportStatement(TplSqlParser::ExportStatementContext * /*ctx*/) override { }
  virtual void exitExportStatement(TplSqlParser::ExportStatementContext * /*ctx*/) override { }

  virtual void enterReplicationClause(TplSqlParser::ReplicationClauseContext * /*ctx*/) override { }
  virtual void exitReplicationClause(TplSqlParser::ReplicationClauseContext * /*ctx*/) override { }

  virtual void enterImportStatement(TplSqlParser::ImportStatementContext * /*ctx*/) override { }
  virtual void exitImportStatement(TplSqlParser::ImportStatementContext * /*ctx*/) override { }

  virtual void enterTableLocation(TplSqlParser::TableLocationContext * /*ctx*/) override { }
  virtual void exitTableLocation(TplSqlParser::TableLocationContext * /*ctx*/) override { }

  virtual void enterDdlStatement(TplSqlParser::DdlStatementContext * /*ctx*/) override { }
  virtual void exitDdlStatement(TplSqlParser::DdlStatementContext * /*ctx*/) override { }

  virtual void enterCreateDatabaseStatement(TplSqlParser::CreateDatabaseStatementContext * /*ctx*/) override { }
  virtual void exitCreateDatabaseStatement(TplSqlParser::CreateDatabaseStatementContext * /*ctx*/) override { }

  virtual void enterDb_schema(TplSqlParser::Db_schemaContext * /*ctx*/) override { }
  virtual void exitDb_schema(TplSqlParser::Db_schemaContext * /*ctx*/) override { }

  virtual void enterIfNotExists(TplSqlParser::IfNotExistsContext * /*ctx*/) override { }
  virtual void exitIfNotExists(TplSqlParser::IfNotExistsContext * /*ctx*/) override { }

  virtual void enterDatabaseComment(TplSqlParser::DatabaseCommentContext * /*ctx*/) override { }
  virtual void exitDatabaseComment(TplSqlParser::DatabaseCommentContext * /*ctx*/) override { }

  virtual void enterDbLocation(TplSqlParser::DbLocationContext * /*ctx*/) override { }
  virtual void exitDbLocation(TplSqlParser::DbLocationContext * /*ctx*/) override { }

  virtual void enterDbManagedLocation(TplSqlParser::DbManagedLocationContext * /*ctx*/) override { }
  virtual void exitDbManagedLocation(TplSqlParser::DbManagedLocationContext * /*ctx*/) override { }

  virtual void enterDbProperties(TplSqlParser::DbPropertiesContext * /*ctx*/) override { }
  virtual void exitDbProperties(TplSqlParser::DbPropertiesContext * /*ctx*/) override { }

  virtual void enterDbPropertiesList(TplSqlParser::DbPropertiesListContext * /*ctx*/) override { }
  virtual void exitDbPropertiesList(TplSqlParser::DbPropertiesListContext * /*ctx*/) override { }

  virtual void enterKeyValueProperty(TplSqlParser::KeyValuePropertyContext * /*ctx*/) override { }
  virtual void exitKeyValueProperty(TplSqlParser::KeyValuePropertyContext * /*ctx*/) override { }

  virtual void enterDbConnectorName(TplSqlParser::DbConnectorNameContext * /*ctx*/) override { }
  virtual void exitDbConnectorName(TplSqlParser::DbConnectorNameContext * /*ctx*/) override { }

  virtual void enterSwitchDatabaseStatement(TplSqlParser::SwitchDatabaseStatementContext * /*ctx*/) override { }
  virtual void exitSwitchDatabaseStatement(TplSqlParser::SwitchDatabaseStatementContext * /*ctx*/) override { }

  virtual void enterDropDatabaseStatement(TplSqlParser::DropDatabaseStatementContext * /*ctx*/) override { }
  virtual void exitDropDatabaseStatement(TplSqlParser::DropDatabaseStatementContext * /*ctx*/) override { }

  virtual void enterIfExists(TplSqlParser::IfExistsContext * /*ctx*/) override { }
  virtual void exitIfExists(TplSqlParser::IfExistsContext * /*ctx*/) override { }

  virtual void enterRestrictOrCascade(TplSqlParser::RestrictOrCascadeContext * /*ctx*/) override { }
  virtual void exitRestrictOrCascade(TplSqlParser::RestrictOrCascadeContext * /*ctx*/) override { }

  virtual void enterCreateTableStatement(TplSqlParser::CreateTableStatementContext * /*ctx*/) override { }
  virtual void exitCreateTableStatement(TplSqlParser::CreateTableStatementContext * /*ctx*/) override { }

  virtual void enterLikeTableOrFile(TplSqlParser::LikeTableOrFileContext * /*ctx*/) override { }
  virtual void exitLikeTableOrFile(TplSqlParser::LikeTableOrFileContext * /*ctx*/) override { }

  virtual void enterCreateTablePartitionSpec(TplSqlParser::CreateTablePartitionSpecContext * /*ctx*/) override { }
  virtual void exitCreateTablePartitionSpec(TplSqlParser::CreateTablePartitionSpecContext * /*ctx*/) override { }

  virtual void enterCreateTablePartitionColumnTypeSpec(TplSqlParser::CreateTablePartitionColumnTypeSpecContext * /*ctx*/) override { }
  virtual void exitCreateTablePartitionColumnTypeSpec(TplSqlParser::CreateTablePartitionColumnTypeSpecContext * /*ctx*/) override { }

  virtual void enterColumnNameTypeConstraint(TplSqlParser::ColumnNameTypeConstraintContext * /*ctx*/) override { }
  virtual void exitColumnNameTypeConstraint(TplSqlParser::ColumnNameTypeConstraintContext * /*ctx*/) override { }

  virtual void enterColType(TplSqlParser::ColTypeContext * /*ctx*/) override { }
  virtual void exitColType(TplSqlParser::ColTypeContext * /*ctx*/) override { }

  virtual void enterType(TplSqlParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(TplSqlParser::TypeContext * /*ctx*/) override { }

  virtual void enterListType(TplSqlParser::ListTypeContext * /*ctx*/) override { }
  virtual void exitListType(TplSqlParser::ListTypeContext * /*ctx*/) override { }

  virtual void enterStructType(TplSqlParser::StructTypeContext * /*ctx*/) override { }
  virtual void exitStructType(TplSqlParser::StructTypeContext * /*ctx*/) override { }

  virtual void enterColumnNameColonTypeList(TplSqlParser::ColumnNameColonTypeListContext * /*ctx*/) override { }
  virtual void exitColumnNameColonTypeList(TplSqlParser::ColumnNameColonTypeListContext * /*ctx*/) override { }

  virtual void enterColumnNameColonType(TplSqlParser::ColumnNameColonTypeContext * /*ctx*/) override { }
  virtual void exitColumnNameColonType(TplSqlParser::ColumnNameColonTypeContext * /*ctx*/) override { }

  virtual void enterMapType(TplSqlParser::MapTypeContext * /*ctx*/) override { }
  virtual void exitMapType(TplSqlParser::MapTypeContext * /*ctx*/) override { }

  virtual void enterUnionType(TplSqlParser::UnionTypeContext * /*ctx*/) override { }
  virtual void exitUnionType(TplSqlParser::UnionTypeContext * /*ctx*/) override { }

  virtual void enterColTypeList(TplSqlParser::ColTypeListContext * /*ctx*/) override { }
  virtual void exitColTypeList(TplSqlParser::ColTypeListContext * /*ctx*/) override { }

  virtual void enterColumnConstraint(TplSqlParser::ColumnConstraintContext * /*ctx*/) override { }
  virtual void exitColumnConstraint(TplSqlParser::ColumnConstraintContext * /*ctx*/) override { }

  virtual void enterForeignKeyConstraint(TplSqlParser::ForeignKeyConstraintContext * /*ctx*/) override { }
  virtual void exitForeignKeyConstraint(TplSqlParser::ForeignKeyConstraintContext * /*ctx*/) override { }

  virtual void enterConstraintOptsCreate(TplSqlParser::ConstraintOptsCreateContext * /*ctx*/) override { }
  virtual void exitConstraintOptsCreate(TplSqlParser::ConstraintOptsCreateContext * /*ctx*/) override { }

  virtual void enterEnableValidateSpecification(TplSqlParser::EnableValidateSpecificationContext * /*ctx*/) override { }
  virtual void exitEnableValidateSpecification(TplSqlParser::EnableValidateSpecificationContext * /*ctx*/) override { }

  virtual void enterEnableSpecification(TplSqlParser::EnableSpecificationContext * /*ctx*/) override { }
  virtual void exitEnableSpecification(TplSqlParser::EnableSpecificationContext * /*ctx*/) override { }

  virtual void enterValidateSpecification(TplSqlParser::ValidateSpecificationContext * /*ctx*/) override { }
  virtual void exitValidateSpecification(TplSqlParser::ValidateSpecificationContext * /*ctx*/) override { }

  virtual void enterEnforcedSpecification(TplSqlParser::EnforcedSpecificationContext * /*ctx*/) override { }
  virtual void exitEnforcedSpecification(TplSqlParser::EnforcedSpecificationContext * /*ctx*/) override { }

  virtual void enterRelySpecification(TplSqlParser::RelySpecificationContext * /*ctx*/) override { }
  virtual void exitRelySpecification(TplSqlParser::RelySpecificationContext * /*ctx*/) override { }

  virtual void enterColConstraint(TplSqlParser::ColConstraintContext * /*ctx*/) override { }
  virtual void exitColConstraint(TplSqlParser::ColConstraintContext * /*ctx*/) override { }

  virtual void enterColumnConstraintType(TplSqlParser::ColumnConstraintTypeContext * /*ctx*/) override { }
  virtual void exitColumnConstraintType(TplSqlParser::ColumnConstraintTypeContext * /*ctx*/) override { }

  virtual void enterDefaultVal(TplSqlParser::DefaultValContext * /*ctx*/) override { }
  virtual void exitDefaultVal(TplSqlParser::DefaultValContext * /*ctx*/) override { }

  virtual void enterCheckConstraint(TplSqlParser::CheckConstraintContext * /*ctx*/) override { }
  virtual void exitCheckConstraint(TplSqlParser::CheckConstraintContext * /*ctx*/) override { }

  virtual void enterTableConstraintType(TplSqlParser::TableConstraintTypeContext * /*ctx*/) override { }
  virtual void exitTableConstraintType(TplSqlParser::TableConstraintTypeContext * /*ctx*/) override { }

  virtual void enterCreateTablePartitionColumnSpec(TplSqlParser::CreateTablePartitionColumnSpecContext * /*ctx*/) override { }
  virtual void exitCreateTablePartitionColumnSpec(TplSqlParser::CreateTablePartitionColumnSpecContext * /*ctx*/) override { }

  virtual void enterPartitionTransformSpec(TplSqlParser::PartitionTransformSpecContext * /*ctx*/) override { }
  virtual void exitPartitionTransformSpec(TplSqlParser::PartitionTransformSpecContext * /*ctx*/) override { }

  virtual void enterColumnNameTransformConstraint(TplSqlParser::ColumnNameTransformConstraintContext * /*ctx*/) override { }
  virtual void exitColumnNameTransformConstraint(TplSqlParser::ColumnNameTransformConstraintContext * /*ctx*/) override { }

  virtual void enterPartitionTransformType(TplSqlParser::PartitionTransformTypeContext * /*ctx*/) override { }
  virtual void exitPartitionTransformType(TplSqlParser::PartitionTransformTypeContext * /*ctx*/) override { }

  virtual void enterTableRowFormat(TplSqlParser::TableRowFormatContext * /*ctx*/) override { }
  virtual void exitTableRowFormat(TplSqlParser::TableRowFormatContext * /*ctx*/) override { }

  virtual void enterRowFormatDelimited(TplSqlParser::RowFormatDelimitedContext * /*ctx*/) override { }
  virtual void exitRowFormatDelimited(TplSqlParser::RowFormatDelimitedContext * /*ctx*/) override { }

  virtual void enterTableRowFormatFieldIdentifier(TplSqlParser::TableRowFormatFieldIdentifierContext * /*ctx*/) override { }
  virtual void exitTableRowFormatFieldIdentifier(TplSqlParser::TableRowFormatFieldIdentifierContext * /*ctx*/) override { }

  virtual void enterTableRowFormatCollItemsIdentifier(TplSqlParser::TableRowFormatCollItemsIdentifierContext * /*ctx*/) override { }
  virtual void exitTableRowFormatCollItemsIdentifier(TplSqlParser::TableRowFormatCollItemsIdentifierContext * /*ctx*/) override { }

  virtual void enterTableRowFormatMapKeysIdentifier(TplSqlParser::TableRowFormatMapKeysIdentifierContext * /*ctx*/) override { }
  virtual void exitTableRowFormatMapKeysIdentifier(TplSqlParser::TableRowFormatMapKeysIdentifierContext * /*ctx*/) override { }

  virtual void enterTableRowFormatLinesIdentifier(TplSqlParser::TableRowFormatLinesIdentifierContext * /*ctx*/) override { }
  virtual void exitTableRowFormatLinesIdentifier(TplSqlParser::TableRowFormatLinesIdentifierContext * /*ctx*/) override { }

  virtual void enterTableRowNullFormat(TplSqlParser::TableRowNullFormatContext * /*ctx*/) override { }
  virtual void exitTableRowNullFormat(TplSqlParser::TableRowNullFormatContext * /*ctx*/) override { }

  virtual void enterRowFormatSerde(TplSqlParser::RowFormatSerdeContext * /*ctx*/) override { }
  virtual void exitRowFormatSerde(TplSqlParser::RowFormatSerdeContext * /*ctx*/) override { }

  virtual void enterTableProperties(TplSqlParser::TablePropertiesContext * /*ctx*/) override { }
  virtual void exitTableProperties(TplSqlParser::TablePropertiesContext * /*ctx*/) override { }

  virtual void enterTablePropertiesList(TplSqlParser::TablePropertiesListContext * /*ctx*/) override { }
  virtual void exitTablePropertiesList(TplSqlParser::TablePropertiesListContext * /*ctx*/) override { }

  virtual void enterKeyProperty(TplSqlParser::KeyPropertyContext * /*ctx*/) override { }
  virtual void exitKeyProperty(TplSqlParser::KeyPropertyContext * /*ctx*/) override { }

  virtual void enterTableFileFormat(TplSqlParser::TableFileFormatContext * /*ctx*/) override { }
  virtual void exitTableFileFormat(TplSqlParser::TableFileFormatContext * /*ctx*/) override { }

  virtual void enterTablePropertiesPrefixed(TplSqlParser::TablePropertiesPrefixedContext * /*ctx*/) override { }
  virtual void exitTablePropertiesPrefixed(TplSqlParser::TablePropertiesPrefixedContext * /*ctx*/) override { }

  virtual void enterColumnNameTypeOrConstraintList(TplSqlParser::ColumnNameTypeOrConstraintListContext * /*ctx*/) override { }
  virtual void exitColumnNameTypeOrConstraintList(TplSqlParser::ColumnNameTypeOrConstraintListContext * /*ctx*/) override { }

  virtual void enterColumnNameTypeOrConstraint(TplSqlParser::ColumnNameTypeOrConstraintContext * /*ctx*/) override { }
  virtual void exitColumnNameTypeOrConstraint(TplSqlParser::ColumnNameTypeOrConstraintContext * /*ctx*/) override { }

  virtual void enterTableConstraint(TplSqlParser::TableConstraintContext * /*ctx*/) override { }
  virtual void exitTableConstraint(TplSqlParser::TableConstraintContext * /*ctx*/) override { }

  virtual void enterCreateForeignKey(TplSqlParser::CreateForeignKeyContext * /*ctx*/) override { }
  virtual void exitCreateForeignKey(TplSqlParser::CreateForeignKeyContext * /*ctx*/) override { }

  virtual void enterCreateConstraint(TplSqlParser::CreateConstraintContext * /*ctx*/) override { }
  virtual void exitCreateConstraint(TplSqlParser::CreateConstraintContext * /*ctx*/) override { }

  virtual void enterTableLevelConstraint(TplSqlParser::TableLevelConstraintContext * /*ctx*/) override { }
  virtual void exitTableLevelConstraint(TplSqlParser::TableLevelConstraintContext * /*ctx*/) override { }

  virtual void enterPkUkConstraint(TplSqlParser::PkUkConstraintContext * /*ctx*/) override { }
  virtual void exitPkUkConstraint(TplSqlParser::PkUkConstraintContext * /*ctx*/) override { }

  virtual void enterTableComment(TplSqlParser::TableCommentContext * /*ctx*/) override { }
  virtual void exitTableComment(TplSqlParser::TableCommentContext * /*ctx*/) override { }

  virtual void enterTableBuckets(TplSqlParser::TableBucketsContext * /*ctx*/) override { }
  virtual void exitTableBuckets(TplSqlParser::TableBucketsContext * /*ctx*/) override { }

  virtual void enterColumnNameOrderList(TplSqlParser::ColumnNameOrderListContext * /*ctx*/) override { }
  virtual void exitColumnNameOrderList(TplSqlParser::ColumnNameOrderListContext * /*ctx*/) override { }

  virtual void enterColumnNameOrder(TplSqlParser::ColumnNameOrderContext * /*ctx*/) override { }
  virtual void exitColumnNameOrder(TplSqlParser::ColumnNameOrderContext * /*ctx*/) override { }

  virtual void enterOrderSpecification(TplSqlParser::OrderSpecificationContext * /*ctx*/) override { }
  virtual void exitOrderSpecification(TplSqlParser::OrderSpecificationContext * /*ctx*/) override { }

  virtual void enterTableSkewed(TplSqlParser::TableSkewedContext * /*ctx*/) override { }
  virtual void exitTableSkewed(TplSqlParser::TableSkewedContext * /*ctx*/) override { }

  virtual void enterSkewedValueElement(TplSqlParser::SkewedValueElementContext * /*ctx*/) override { }
  virtual void exitSkewedValueElement(TplSqlParser::SkewedValueElementContext * /*ctx*/) override { }

  virtual void enterSkewedColumnValues(TplSqlParser::SkewedColumnValuesContext * /*ctx*/) override { }
  virtual void exitSkewedColumnValues(TplSqlParser::SkewedColumnValuesContext * /*ctx*/) override { }

  virtual void enterSkewedColumnValue(TplSqlParser::SkewedColumnValueContext * /*ctx*/) override { }
  virtual void exitSkewedColumnValue(TplSqlParser::SkewedColumnValueContext * /*ctx*/) override { }

  virtual void enterSkewedColumnValuePairList(TplSqlParser::SkewedColumnValuePairListContext * /*ctx*/) override { }
  virtual void exitSkewedColumnValuePairList(TplSqlParser::SkewedColumnValuePairListContext * /*ctx*/) override { }

  virtual void enterSkewedColumnValuePair(TplSqlParser::SkewedColumnValuePairContext * /*ctx*/) override { }
  virtual void exitSkewedColumnValuePair(TplSqlParser::SkewedColumnValuePairContext * /*ctx*/) override { }

  virtual void enterStoredAsDirs(TplSqlParser::StoredAsDirsContext * /*ctx*/) override { }
  virtual void exitStoredAsDirs(TplSqlParser::StoredAsDirsContext * /*ctx*/) override { }

  virtual void enterSelectStatementWithCTE(TplSqlParser::SelectStatementWithCTEContext * /*ctx*/) override { }
  virtual void exitSelectStatementWithCTE(TplSqlParser::SelectStatementWithCTEContext * /*ctx*/) override { }

  virtual void enterDropTableStatement(TplSqlParser::DropTableStatementContext * /*ctx*/) override { }
  virtual void exitDropTableStatement(TplSqlParser::DropTableStatementContext * /*ctx*/) override { }

  virtual void enterTruncateTableStatement(TplSqlParser::TruncateTableStatementContext * /*ctx*/) override { }
  virtual void exitTruncateTableStatement(TplSqlParser::TruncateTableStatementContext * /*ctx*/) override { }

  virtual void enterTablePartitionPrefix(TplSqlParser::TablePartitionPrefixContext * /*ctx*/) override { }
  virtual void exitTablePartitionPrefix(TplSqlParser::TablePartitionPrefixContext * /*ctx*/) override { }

  virtual void enterForce(TplSqlParser::ForceContext * /*ctx*/) override { }
  virtual void exitForce(TplSqlParser::ForceContext * /*ctx*/) override { }

  virtual void enterAlterStatement(TplSqlParser::AlterStatementContext * /*ctx*/) override { }
  virtual void exitAlterStatement(TplSqlParser::AlterStatementContext * /*ctx*/) override { }

  virtual void enterAlterTableStatementSuffix(TplSqlParser::AlterTableStatementSuffixContext * /*ctx*/) override { }
  virtual void exitAlterTableStatementSuffix(TplSqlParser::AlterTableStatementSuffixContext * /*ctx*/) override { }

  virtual void enterAlterStatementSuffixRename(TplSqlParser::AlterStatementSuffixRenameContext * /*ctx*/) override { }
  virtual void exitAlterStatementSuffixRename(TplSqlParser::AlterStatementSuffixRenameContext * /*ctx*/) override { }

  virtual void enterAlterStatementSuffixDropPartitions(TplSqlParser::AlterStatementSuffixDropPartitionsContext * /*ctx*/) override { }
  virtual void exitAlterStatementSuffixDropPartitions(TplSqlParser::AlterStatementSuffixDropPartitionsContext * /*ctx*/) override { }

  virtual void enterPartitionSelectorSpec(TplSqlParser::PartitionSelectorSpecContext * /*ctx*/) override { }
  virtual void exitPartitionSelectorSpec(TplSqlParser::PartitionSelectorSpecContext * /*ctx*/) override { }

  virtual void enterPartitionSelectorVal(TplSqlParser::PartitionSelectorValContext * /*ctx*/) override { }
  virtual void exitPartitionSelectorVal(TplSqlParser::PartitionSelectorValContext * /*ctx*/) override { }

  virtual void enterPartitionSelectorOperator(TplSqlParser::PartitionSelectorOperatorContext * /*ctx*/) override { }
  virtual void exitPartitionSelectorOperator(TplSqlParser::PartitionSelectorOperatorContext * /*ctx*/) override { }

  virtual void enterAlterStatementSuffixAddPartitions(TplSqlParser::AlterStatementSuffixAddPartitionsContext * /*ctx*/) override { }
  virtual void exitAlterStatementSuffixAddPartitions(TplSqlParser::AlterStatementSuffixAddPartitionsContext * /*ctx*/) override { }

  virtual void enterAlterStatementSuffixAddPartitionsElement(TplSqlParser::AlterStatementSuffixAddPartitionsElementContext * /*ctx*/) override { }
  virtual void exitAlterStatementSuffixAddPartitionsElement(TplSqlParser::AlterStatementSuffixAddPartitionsElementContext * /*ctx*/) override { }

  virtual void enterPartitionLocation(TplSqlParser::PartitionLocationContext * /*ctx*/) override { }
  virtual void exitPartitionLocation(TplSqlParser::PartitionLocationContext * /*ctx*/) override { }

  virtual void enterAlterStatementSuffixTouch(TplSqlParser::AlterStatementSuffixTouchContext * /*ctx*/) override { }
  virtual void exitAlterStatementSuffixTouch(TplSqlParser::AlterStatementSuffixTouchContext * /*ctx*/) override { }

  virtual void enterAlterStatementSuffixArchive(TplSqlParser::AlterStatementSuffixArchiveContext * /*ctx*/) override { }
  virtual void exitAlterStatementSuffixArchive(TplSqlParser::AlterStatementSuffixArchiveContext * /*ctx*/) override { }

  virtual void enterAlterStatementSuffixUnArchive(TplSqlParser::AlterStatementSuffixUnArchiveContext * /*ctx*/) override { }
  virtual void exitAlterStatementSuffixUnArchive(TplSqlParser::AlterStatementSuffixUnArchiveContext * /*ctx*/) override { }

  virtual void enterAlterStatementSuffixProperties(TplSqlParser::AlterStatementSuffixPropertiesContext * /*ctx*/) override { }
  virtual void exitAlterStatementSuffixProperties(TplSqlParser::AlterStatementSuffixPropertiesContext * /*ctx*/) override { }

  virtual void enterAlterStatementSuffixSkewedby(TplSqlParser::AlterStatementSuffixSkewedbyContext * /*ctx*/) override { }
  virtual void exitAlterStatementSuffixSkewedby(TplSqlParser::AlterStatementSuffixSkewedbyContext * /*ctx*/) override { }

  virtual void enterAlterStatementSuffixExchangePartition(TplSqlParser::AlterStatementSuffixExchangePartitionContext * /*ctx*/) override { }
  virtual void exitAlterStatementSuffixExchangePartition(TplSqlParser::AlterStatementSuffixExchangePartitionContext * /*ctx*/) override { }

  virtual void enterAlterStatementPartitionKeyType(TplSqlParser::AlterStatementPartitionKeyTypeContext * /*ctx*/) override { }
  virtual void exitAlterStatementPartitionKeyType(TplSqlParser::AlterStatementPartitionKeyTypeContext * /*ctx*/) override { }

  virtual void enterColumnNameType(TplSqlParser::ColumnNameTypeContext * /*ctx*/) override { }
  virtual void exitColumnNameType(TplSqlParser::ColumnNameTypeContext * /*ctx*/) override { }

  virtual void enterAlterStatementSuffixDropConstraint(TplSqlParser::AlterStatementSuffixDropConstraintContext * /*ctx*/) override { }
  virtual void exitAlterStatementSuffixDropConstraint(TplSqlParser::AlterStatementSuffixDropConstraintContext * /*ctx*/) override { }

  virtual void enterAlterStatementSuffixAddConstraint(TplSqlParser::AlterStatementSuffixAddConstraintContext * /*ctx*/) override { }
  virtual void exitAlterStatementSuffixAddConstraint(TplSqlParser::AlterStatementSuffixAddConstraintContext * /*ctx*/) override { }

  virtual void enterAlterForeignKeyWithName(TplSqlParser::AlterForeignKeyWithNameContext * /*ctx*/) override { }
  virtual void exitAlterForeignKeyWithName(TplSqlParser::AlterForeignKeyWithNameContext * /*ctx*/) override { }

  virtual void enterConstraintOptsAlter(TplSqlParser::ConstraintOptsAlterContext * /*ctx*/) override { }
  virtual void exitConstraintOptsAlter(TplSqlParser::ConstraintOptsAlterContext * /*ctx*/) override { }

  virtual void enterAlterConstraintWithName(TplSqlParser::AlterConstraintWithNameContext * /*ctx*/) override { }
  virtual void exitAlterConstraintWithName(TplSqlParser::AlterConstraintWithNameContext * /*ctx*/) override { }

  virtual void enterAlterTblPartitionStatementSuffix(TplSqlParser::AlterTblPartitionStatementSuffixContext * /*ctx*/) override { }
  virtual void exitAlterTblPartitionStatementSuffix(TplSqlParser::AlterTblPartitionStatementSuffixContext * /*ctx*/) override { }

  virtual void enterAlterStatementSuffixFileFormat(TplSqlParser::AlterStatementSuffixFileFormatContext * /*ctx*/) override { }
  virtual void exitAlterStatementSuffixFileFormat(TplSqlParser::AlterStatementSuffixFileFormatContext * /*ctx*/) override { }

  virtual void enterFileFormat(TplSqlParser::FileFormatContext * /*ctx*/) override { }
  virtual void exitFileFormat(TplSqlParser::FileFormatContext * /*ctx*/) override { }

  virtual void enterAlterStatementSuffixLocation(TplSqlParser::AlterStatementSuffixLocationContext * /*ctx*/) override { }
  virtual void exitAlterStatementSuffixLocation(TplSqlParser::AlterStatementSuffixLocationContext * /*ctx*/) override { }

  virtual void enterAlterStatementSuffixMergeFiles(TplSqlParser::AlterStatementSuffixMergeFilesContext * /*ctx*/) override { }
  virtual void exitAlterStatementSuffixMergeFiles(TplSqlParser::AlterStatementSuffixMergeFilesContext * /*ctx*/) override { }

  virtual void enterAlterStatementSuffixSerdeProperties(TplSqlParser::AlterStatementSuffixSerdePropertiesContext * /*ctx*/) override { }
  virtual void exitAlterStatementSuffixSerdeProperties(TplSqlParser::AlterStatementSuffixSerdePropertiesContext * /*ctx*/) override { }

  virtual void enterAlterStatementSuffixRenamePart(TplSqlParser::AlterStatementSuffixRenamePartContext * /*ctx*/) override { }
  virtual void exitAlterStatementSuffixRenamePart(TplSqlParser::AlterStatementSuffixRenamePartContext * /*ctx*/) override { }

  virtual void enterAlterStatementSuffixBucketNum(TplSqlParser::AlterStatementSuffixBucketNumContext * /*ctx*/) override { }
  virtual void exitAlterStatementSuffixBucketNum(TplSqlParser::AlterStatementSuffixBucketNumContext * /*ctx*/) override { }

  virtual void enterAlterTblPartitionStatementSuffixSkewedLocation(TplSqlParser::AlterTblPartitionStatementSuffixSkewedLocationContext * /*ctx*/) override { }
  virtual void exitAlterTblPartitionStatementSuffixSkewedLocation(TplSqlParser::AlterTblPartitionStatementSuffixSkewedLocationContext * /*ctx*/) override { }

  virtual void enterSkewedLocations(TplSqlParser::SkewedLocationsContext * /*ctx*/) override { }
  virtual void exitSkewedLocations(TplSqlParser::SkewedLocationsContext * /*ctx*/) override { }

  virtual void enterSkewedLocationsList(TplSqlParser::SkewedLocationsListContext * /*ctx*/) override { }
  virtual void exitSkewedLocationsList(TplSqlParser::SkewedLocationsListContext * /*ctx*/) override { }

  virtual void enterSkewedLocationMap(TplSqlParser::SkewedLocationMapContext * /*ctx*/) override { }
  virtual void exitSkewedLocationMap(TplSqlParser::SkewedLocationMapContext * /*ctx*/) override { }

  virtual void enterSkewedValueLocationElement(TplSqlParser::SkewedValueLocationElementContext * /*ctx*/) override { }
  virtual void exitSkewedValueLocationElement(TplSqlParser::SkewedValueLocationElementContext * /*ctx*/) override { }

  virtual void enterAlterStatementSuffixClusterbySortby(TplSqlParser::AlterStatementSuffixClusterbySortbyContext * /*ctx*/) override { }
  virtual void exitAlterStatementSuffixClusterbySortby(TplSqlParser::AlterStatementSuffixClusterbySortbyContext * /*ctx*/) override { }

  virtual void enterAlterStatementSuffixCompact(TplSqlParser::AlterStatementSuffixCompactContext * /*ctx*/) override { }
  virtual void exitAlterStatementSuffixCompact(TplSqlParser::AlterStatementSuffixCompactContext * /*ctx*/) override { }

  virtual void enterTableImplBuckets(TplSqlParser::TableImplBucketsContext * /*ctx*/) override { }
  virtual void exitTableImplBuckets(TplSqlParser::TableImplBucketsContext * /*ctx*/) override { }

  virtual void enterBlocking(TplSqlParser::BlockingContext * /*ctx*/) override { }
  virtual void exitBlocking(TplSqlParser::BlockingContext * /*ctx*/) override { }

  virtual void enterCompactPool(TplSqlParser::CompactPoolContext * /*ctx*/) override { }
  virtual void exitCompactPool(TplSqlParser::CompactPoolContext * /*ctx*/) override { }

  virtual void enterAlterStatementSuffixUpdateStatsCol(TplSqlParser::AlterStatementSuffixUpdateStatsColContext * /*ctx*/) override { }
  virtual void exitAlterStatementSuffixUpdateStatsCol(TplSqlParser::AlterStatementSuffixUpdateStatsColContext * /*ctx*/) override { }

  virtual void enterAlterStatementSuffixUpdateStats(TplSqlParser::AlterStatementSuffixUpdateStatsContext * /*ctx*/) override { }
  virtual void exitAlterStatementSuffixUpdateStats(TplSqlParser::AlterStatementSuffixUpdateStatsContext * /*ctx*/) override { }

  virtual void enterAlterStatementSuffixRenameCol(TplSqlParser::AlterStatementSuffixRenameColContext * /*ctx*/) override { }
  virtual void exitAlterStatementSuffixRenameCol(TplSqlParser::AlterStatementSuffixRenameColContext * /*ctx*/) override { }

  virtual void enterAlterColumnConstraint(TplSqlParser::AlterColumnConstraintContext * /*ctx*/) override { }
  virtual void exitAlterColumnConstraint(TplSqlParser::AlterColumnConstraintContext * /*ctx*/) override { }

  virtual void enterAlterForeignKeyConstraint(TplSqlParser::AlterForeignKeyConstraintContext * /*ctx*/) override { }
  virtual void exitAlterForeignKeyConstraint(TplSqlParser::AlterForeignKeyConstraintContext * /*ctx*/) override { }

  virtual void enterAlterColConstraint(TplSqlParser::AlterColConstraintContext * /*ctx*/) override { }
  virtual void exitAlterColConstraint(TplSqlParser::AlterColConstraintContext * /*ctx*/) override { }

  virtual void enterAlterStatementChangeColPosition(TplSqlParser::AlterStatementChangeColPositionContext * /*ctx*/) override { }
  virtual void exitAlterStatementChangeColPosition(TplSqlParser::AlterStatementChangeColPositionContext * /*ctx*/) override { }

  virtual void enterAlterStatementSuffixAddCol(TplSqlParser::AlterStatementSuffixAddColContext * /*ctx*/) override { }
  virtual void exitAlterStatementSuffixAddCol(TplSqlParser::AlterStatementSuffixAddColContext * /*ctx*/) override { }

  virtual void enterColumnNameTypeList(TplSqlParser::ColumnNameTypeListContext * /*ctx*/) override { }
  virtual void exitColumnNameTypeList(TplSqlParser::ColumnNameTypeListContext * /*ctx*/) override { }

  virtual void enterAlterStatementSuffixUpdateColumns(TplSqlParser::AlterStatementSuffixUpdateColumnsContext * /*ctx*/) override { }
  virtual void exitAlterStatementSuffixUpdateColumns(TplSqlParser::AlterStatementSuffixUpdateColumnsContext * /*ctx*/) override { }

  virtual void enterAlterStatementSuffixSetOwner(TplSqlParser::AlterStatementSuffixSetOwnerContext * /*ctx*/) override { }
  virtual void exitAlterStatementSuffixSetOwner(TplSqlParser::AlterStatementSuffixSetOwnerContext * /*ctx*/) override { }

  virtual void enterPrincipalName(TplSqlParser::PrincipalNameContext * /*ctx*/) override { }
  virtual void exitPrincipalName(TplSqlParser::PrincipalNameContext * /*ctx*/) override { }

  virtual void enterPrincipalIdentifier(TplSqlParser::PrincipalIdentifierContext * /*ctx*/) override { }
  virtual void exitPrincipalIdentifier(TplSqlParser::PrincipalIdentifierContext * /*ctx*/) override { }

  virtual void enterAlterStatementSuffixSetPartSpec(TplSqlParser::AlterStatementSuffixSetPartSpecContext * /*ctx*/) override { }
  virtual void exitAlterStatementSuffixSetPartSpec(TplSqlParser::AlterStatementSuffixSetPartSpecContext * /*ctx*/) override { }

  virtual void enterAlterStatementSuffixExecute(TplSqlParser::AlterStatementSuffixExecuteContext * /*ctx*/) override { }
  virtual void exitAlterStatementSuffixExecute(TplSqlParser::AlterStatementSuffixExecuteContext * /*ctx*/) override { }

  virtual void enterAlterViewStatementSuffix(TplSqlParser::AlterViewStatementSuffixContext * /*ctx*/) override { }
  virtual void exitAlterViewStatementSuffix(TplSqlParser::AlterViewStatementSuffixContext * /*ctx*/) override { }

  virtual void enterAlterViewSuffixProperties(TplSqlParser::AlterViewSuffixPropertiesContext * /*ctx*/) override { }
  virtual void exitAlterViewSuffixProperties(TplSqlParser::AlterViewSuffixPropertiesContext * /*ctx*/) override { }

  virtual void enterAlterMaterializedViewStatementSuffix(TplSqlParser::AlterMaterializedViewStatementSuffixContext * /*ctx*/) override { }
  virtual void exitAlterMaterializedViewStatementSuffix(TplSqlParser::AlterMaterializedViewStatementSuffixContext * /*ctx*/) override { }

  virtual void enterAlterMaterializedViewSuffixRewrite(TplSqlParser::AlterMaterializedViewSuffixRewriteContext * /*ctx*/) override { }
  virtual void exitAlterMaterializedViewSuffixRewrite(TplSqlParser::AlterMaterializedViewSuffixRewriteContext * /*ctx*/) override { }

  virtual void enterRewriteEnabled(TplSqlParser::RewriteEnabledContext * /*ctx*/) override { }
  virtual void exitRewriteEnabled(TplSqlParser::RewriteEnabledContext * /*ctx*/) override { }

  virtual void enterRewriteDisabled(TplSqlParser::RewriteDisabledContext * /*ctx*/) override { }
  virtual void exitRewriteDisabled(TplSqlParser::RewriteDisabledContext * /*ctx*/) override { }

  virtual void enterAlterMaterializedViewSuffixRebuild(TplSqlParser::AlterMaterializedViewSuffixRebuildContext * /*ctx*/) override { }
  virtual void exitAlterMaterializedViewSuffixRebuild(TplSqlParser::AlterMaterializedViewSuffixRebuildContext * /*ctx*/) override { }

  virtual void enterAlterDatabaseStatementSuffix(TplSqlParser::AlterDatabaseStatementSuffixContext * /*ctx*/) override { }
  virtual void exitAlterDatabaseStatementSuffix(TplSqlParser::AlterDatabaseStatementSuffixContext * /*ctx*/) override { }

  virtual void enterAlterDatabaseSuffixProperties(TplSqlParser::AlterDatabaseSuffixPropertiesContext * /*ctx*/) override { }
  virtual void exitAlterDatabaseSuffixProperties(TplSqlParser::AlterDatabaseSuffixPropertiesContext * /*ctx*/) override { }

  virtual void enterAlterDatabaseSuffixSetOwner(TplSqlParser::AlterDatabaseSuffixSetOwnerContext * /*ctx*/) override { }
  virtual void exitAlterDatabaseSuffixSetOwner(TplSqlParser::AlterDatabaseSuffixSetOwnerContext * /*ctx*/) override { }

  virtual void enterAlterDatabaseSuffixSetLocation(TplSqlParser::AlterDatabaseSuffixSetLocationContext * /*ctx*/) override { }
  virtual void exitAlterDatabaseSuffixSetLocation(TplSqlParser::AlterDatabaseSuffixSetLocationContext * /*ctx*/) override { }

  virtual void enterAlterDataConnectorStatementSuffix(TplSqlParser::AlterDataConnectorStatementSuffixContext * /*ctx*/) override { }
  virtual void exitAlterDataConnectorStatementSuffix(TplSqlParser::AlterDataConnectorStatementSuffixContext * /*ctx*/) override { }

  virtual void enterAlterDataConnectorSuffixProperties(TplSqlParser::AlterDataConnectorSuffixPropertiesContext * /*ctx*/) override { }
  virtual void exitAlterDataConnectorSuffixProperties(TplSqlParser::AlterDataConnectorSuffixPropertiesContext * /*ctx*/) override { }

  virtual void enterDcProperties(TplSqlParser::DcPropertiesContext * /*ctx*/) override { }
  virtual void exitDcProperties(TplSqlParser::DcPropertiesContext * /*ctx*/) override { }

  virtual void enterAlterDataConnectorSuffixSetOwner(TplSqlParser::AlterDataConnectorSuffixSetOwnerContext * /*ctx*/) override { }
  virtual void exitAlterDataConnectorSuffixSetOwner(TplSqlParser::AlterDataConnectorSuffixSetOwnerContext * /*ctx*/) override { }

  virtual void enterAlterDataConnectorSuffixSetUrl(TplSqlParser::AlterDataConnectorSuffixSetUrlContext * /*ctx*/) override { }
  virtual void exitAlterDataConnectorSuffixSetUrl(TplSqlParser::AlterDataConnectorSuffixSetUrlContext * /*ctx*/) override { }

  virtual void enterDescStatement(TplSqlParser::DescStatementContext * /*ctx*/) override { }
  virtual void exitDescStatement(TplSqlParser::DescStatementContext * /*ctx*/) override { }

  virtual void enterDescFuncNames(TplSqlParser::DescFuncNamesContext * /*ctx*/) override { }
  virtual void exitDescFuncNames(TplSqlParser::DescFuncNamesContext * /*ctx*/) override { }

  virtual void enterSysFuncNames(TplSqlParser::SysFuncNamesContext * /*ctx*/) override { }
  virtual void exitSysFuncNames(TplSqlParser::SysFuncNamesContext * /*ctx*/) override { }

  virtual void enterTabPartColTypeExpr(TplSqlParser::TabPartColTypeExprContext * /*ctx*/) override { }
  virtual void exitTabPartColTypeExpr(TplSqlParser::TabPartColTypeExprContext * /*ctx*/) override { }

  virtual void enterExtColumnName(TplSqlParser::ExtColumnNameContext * /*ctx*/) override { }
  virtual void exitExtColumnName(TplSqlParser::ExtColumnNameContext * /*ctx*/) override { }

  virtual void enterShowStatement(TplSqlParser::ShowStatementContext * /*ctx*/) override { }
  virtual void exitShowStatement(TplSqlParser::ShowStatementContext * /*ctx*/) override { }

  virtual void enterShowStmtIdentifier(TplSqlParser::ShowStmtIdentifierContext * /*ctx*/) override { }
  virtual void exitShowStmtIdentifier(TplSqlParser::ShowStmtIdentifierContext * /*ctx*/) override { }

  virtual void enterFrom_in(TplSqlParser::From_inContext * /*ctx*/) override { }
  virtual void exitFrom_in(TplSqlParser::From_inContext * /*ctx*/) override { }

  virtual void enterShowTablesFilterExpr(TplSqlParser::ShowTablesFilterExprContext * /*ctx*/) override { }
  virtual void exitShowTablesFilterExpr(TplSqlParser::ShowTablesFilterExprContext * /*ctx*/) override { }

  virtual void enterShowFunctionIdentifier(TplSqlParser::ShowFunctionIdentifierContext * /*ctx*/) override { }
  virtual void exitShowFunctionIdentifier(TplSqlParser::ShowFunctionIdentifierContext * /*ctx*/) override { }

  virtual void enterPartTypeExpr(TplSqlParser::PartTypeExprContext * /*ctx*/) override { }
  virtual void exitPartTypeExpr(TplSqlParser::PartTypeExprContext * /*ctx*/) override { }

  virtual void enterTabTypeExpr(TplSqlParser::TabTypeExprContext * /*ctx*/) override { }
  virtual void exitTabTypeExpr(TplSqlParser::TabTypeExprContext * /*ctx*/) override { }

  virtual void enterCompactionId(TplSqlParser::CompactionIdContext * /*ctx*/) override { }
  virtual void exitCompactionId(TplSqlParser::CompactionIdContext * /*ctx*/) override { }

  virtual void enterCompactionPool(TplSqlParser::CompactionPoolContext * /*ctx*/) override { }
  virtual void exitCompactionPool(TplSqlParser::CompactionPoolContext * /*ctx*/) override { }

  virtual void enterCompactionType(TplSqlParser::CompactionTypeContext * /*ctx*/) override { }
  virtual void exitCompactionType(TplSqlParser::CompactionTypeContext * /*ctx*/) override { }

  virtual void enterCompactionStatus(TplSqlParser::CompactionStatusContext * /*ctx*/) override { }
  virtual void exitCompactionStatus(TplSqlParser::CompactionStatusContext * /*ctx*/) override { }

  virtual void enterMetastoreCheck(TplSqlParser::MetastoreCheckContext * /*ctx*/) override { }
  virtual void exitMetastoreCheck(TplSqlParser::MetastoreCheckContext * /*ctx*/) override { }

  virtual void enterCreateViewStatement(TplSqlParser::CreateViewStatementContext * /*ctx*/) override { }
  virtual void exitCreateViewStatement(TplSqlParser::CreateViewStatementContext * /*ctx*/) override { }

  virtual void enterOrReplace(TplSqlParser::OrReplaceContext * /*ctx*/) override { }
  virtual void exitOrReplace(TplSqlParser::OrReplaceContext * /*ctx*/) override { }

  virtual void enterColumnNameCommentList(TplSqlParser::ColumnNameCommentListContext * /*ctx*/) override { }
  virtual void exitColumnNameCommentList(TplSqlParser::ColumnNameCommentListContext * /*ctx*/) override { }

  virtual void enterColumnNameComment(TplSqlParser::ColumnNameCommentContext * /*ctx*/) override { }
  virtual void exitColumnNameComment(TplSqlParser::ColumnNameCommentContext * /*ctx*/) override { }

  virtual void enterViewPartition(TplSqlParser::ViewPartitionContext * /*ctx*/) override { }
  virtual void exitViewPartition(TplSqlParser::ViewPartitionContext * /*ctx*/) override { }

  virtual void enterCreateMaterializedViewStatement(TplSqlParser::CreateMaterializedViewStatementContext * /*ctx*/) override { }
  virtual void exitCreateMaterializedViewStatement(TplSqlParser::CreateMaterializedViewStatementContext * /*ctx*/) override { }

  virtual void enterViewOrganization(TplSqlParser::ViewOrganizationContext * /*ctx*/) override { }
  virtual void exitViewOrganization(TplSqlParser::ViewOrganizationContext * /*ctx*/) override { }

  virtual void enterViewClusterSpec(TplSqlParser::ViewClusterSpecContext * /*ctx*/) override { }
  virtual void exitViewClusterSpec(TplSqlParser::ViewClusterSpecContext * /*ctx*/) override { }

  virtual void enterViewComplexSpec(TplSqlParser::ViewComplexSpecContext * /*ctx*/) override { }
  virtual void exitViewComplexSpec(TplSqlParser::ViewComplexSpecContext * /*ctx*/) override { }

  virtual void enterViewDistSpec(TplSqlParser::ViewDistSpecContext * /*ctx*/) override { }
  virtual void exitViewDistSpec(TplSqlParser::ViewDistSpecContext * /*ctx*/) override { }

  virtual void enterViewSortSpec(TplSqlParser::ViewSortSpecContext * /*ctx*/) override { }
  virtual void exitViewSortSpec(TplSqlParser::ViewSortSpecContext * /*ctx*/) override { }

  virtual void enterCreateScheduledQueryStatement(TplSqlParser::CreateScheduledQueryStatementContext * /*ctx*/) override { }
  virtual void exitCreateScheduledQueryStatement(TplSqlParser::CreateScheduledQueryStatementContext * /*ctx*/) override { }

  virtual void enterScheduleSpec(TplSqlParser::ScheduleSpecContext * /*ctx*/) override { }
  virtual void exitScheduleSpec(TplSqlParser::ScheduleSpecContext * /*ctx*/) override { }

  virtual void enterExecutedAsSpec(TplSqlParser::ExecutedAsSpecContext * /*ctx*/) override { }
  virtual void exitExecutedAsSpec(TplSqlParser::ExecutedAsSpecContext * /*ctx*/) override { }

  virtual void enterDefinedAsSpec(TplSqlParser::DefinedAsSpecContext * /*ctx*/) override { }
  virtual void exitDefinedAsSpec(TplSqlParser::DefinedAsSpecContext * /*ctx*/) override { }

  virtual void enterAlterScheduledQueryStatement(TplSqlParser::AlterScheduledQueryStatementContext * /*ctx*/) override { }
  virtual void exitAlterScheduledQueryStatement(TplSqlParser::AlterScheduledQueryStatementContext * /*ctx*/) override { }

  virtual void enterAlterScheduledQueryChange(TplSqlParser::AlterScheduledQueryChangeContext * /*ctx*/) override { }
  virtual void exitAlterScheduledQueryChange(TplSqlParser::AlterScheduledQueryChangeContext * /*ctx*/) override { }

  virtual void enterDropScheduledQueryStatement(TplSqlParser::DropScheduledQueryStatementContext * /*ctx*/) override { }
  virtual void exitDropScheduledQueryStatement(TplSqlParser::DropScheduledQueryStatementContext * /*ctx*/) override { }

  virtual void enterDropViewStatement(TplSqlParser::DropViewStatementContext * /*ctx*/) override { }
  virtual void exitDropViewStatement(TplSqlParser::DropViewStatementContext * /*ctx*/) override { }

  virtual void enterViewName(TplSqlParser::ViewNameContext * /*ctx*/) override { }
  virtual void exitViewName(TplSqlParser::ViewNameContext * /*ctx*/) override { }

  virtual void enterDropMaterializedViewStatement(TplSqlParser::DropMaterializedViewStatementContext * /*ctx*/) override { }
  virtual void exitDropMaterializedViewStatement(TplSqlParser::DropMaterializedViewStatementContext * /*ctx*/) override { }

  virtual void enterCreateFunctionStatement(TplSqlParser::CreateFunctionStatementContext * /*ctx*/) override { }
  virtual void exitCreateFunctionStatement(TplSqlParser::CreateFunctionStatementContext * /*ctx*/) override { }

  virtual void enterResourceList(TplSqlParser::ResourceListContext * /*ctx*/) override { }
  virtual void exitResourceList(TplSqlParser::ResourceListContext * /*ctx*/) override { }

  virtual void enterResource(TplSqlParser::ResourceContext * /*ctx*/) override { }
  virtual void exitResource(TplSqlParser::ResourceContext * /*ctx*/) override { }

  virtual void enterResourceType(TplSqlParser::ResourceTypeContext * /*ctx*/) override { }
  virtual void exitResourceType(TplSqlParser::ResourceTypeContext * /*ctx*/) override { }

  virtual void enterCreateMacroStatement(TplSqlParser::CreateMacroStatementContext * /*ctx*/) override { }
  virtual void exitCreateMacroStatement(TplSqlParser::CreateMacroStatementContext * /*ctx*/) override { }

  virtual void enterDropFunctionStatement(TplSqlParser::DropFunctionStatementContext * /*ctx*/) override { }
  virtual void exitDropFunctionStatement(TplSqlParser::DropFunctionStatementContext * /*ctx*/) override { }

  virtual void enterReloadFunctionsStatement(TplSqlParser::ReloadFunctionsStatementContext * /*ctx*/) override { }
  virtual void exitReloadFunctionsStatement(TplSqlParser::ReloadFunctionsStatementContext * /*ctx*/) override { }

  virtual void enterDropMacroStatement(TplSqlParser::DropMacroStatementContext * /*ctx*/) override { }
  virtual void exitDropMacroStatement(TplSqlParser::DropMacroStatementContext * /*ctx*/) override { }

  virtual void enterAnalyzeStatement(TplSqlParser::AnalyzeStatementContext * /*ctx*/) override { }
  virtual void exitAnalyzeStatement(TplSqlParser::AnalyzeStatementContext * /*ctx*/) override { }

  virtual void enterLockStatement(TplSqlParser::LockStatementContext * /*ctx*/) override { }
  virtual void exitLockStatement(TplSqlParser::LockStatementContext * /*ctx*/) override { }

  virtual void enterLockMode(TplSqlParser::LockModeContext * /*ctx*/) override { }
  virtual void exitLockMode(TplSqlParser::LockModeContext * /*ctx*/) override { }

  virtual void enterUnlockStatement(TplSqlParser::UnlockStatementContext * /*ctx*/) override { }
  virtual void exitUnlockStatement(TplSqlParser::UnlockStatementContext * /*ctx*/) override { }

  virtual void enterLockDatabase(TplSqlParser::LockDatabaseContext * /*ctx*/) override { }
  virtual void exitLockDatabase(TplSqlParser::LockDatabaseContext * /*ctx*/) override { }

  virtual void enterUnlockDatabase(TplSqlParser::UnlockDatabaseContext * /*ctx*/) override { }
  virtual void exitUnlockDatabase(TplSqlParser::UnlockDatabaseContext * /*ctx*/) override { }

  virtual void enterCreateRoleStatement(TplSqlParser::CreateRoleStatementContext * /*ctx*/) override { }
  virtual void exitCreateRoleStatement(TplSqlParser::CreateRoleStatementContext * /*ctx*/) override { }

  virtual void enterDropRoleStatement(TplSqlParser::DropRoleStatementContext * /*ctx*/) override { }
  virtual void exitDropRoleStatement(TplSqlParser::DropRoleStatementContext * /*ctx*/) override { }

  virtual void enterGrantPrivileges(TplSqlParser::GrantPrivilegesContext * /*ctx*/) override { }
  virtual void exitGrantPrivileges(TplSqlParser::GrantPrivilegesContext * /*ctx*/) override { }

  virtual void enterPrivilegeList(TplSqlParser::PrivilegeListContext * /*ctx*/) override { }
  virtual void exitPrivilegeList(TplSqlParser::PrivilegeListContext * /*ctx*/) override { }

  virtual void enterPrivlegeDef(TplSqlParser::PrivlegeDefContext * /*ctx*/) override { }
  virtual void exitPrivlegeDef(TplSqlParser::PrivlegeDefContext * /*ctx*/) override { }

  virtual void enterPrivilegeType(TplSqlParser::PrivilegeTypeContext * /*ctx*/) override { }
  virtual void exitPrivilegeType(TplSqlParser::PrivilegeTypeContext * /*ctx*/) override { }

  virtual void enterPrivilegeObject(TplSqlParser::PrivilegeObjectContext * /*ctx*/) override { }
  virtual void exitPrivilegeObject(TplSqlParser::PrivilegeObjectContext * /*ctx*/) override { }

  virtual void enterPrivObject(TplSqlParser::PrivObjectContext * /*ctx*/) override { }
  virtual void exitPrivObject(TplSqlParser::PrivObjectContext * /*ctx*/) override { }

  virtual void enterPrincipalSpecification(TplSqlParser::PrincipalSpecificationContext * /*ctx*/) override { }
  virtual void exitPrincipalSpecification(TplSqlParser::PrincipalSpecificationContext * /*ctx*/) override { }

  virtual void enterWithGrantOption(TplSqlParser::WithGrantOptionContext * /*ctx*/) override { }
  virtual void exitWithGrantOption(TplSqlParser::WithGrantOptionContext * /*ctx*/) override { }

  virtual void enterRevokePrivileges(TplSqlParser::RevokePrivilegesContext * /*ctx*/) override { }
  virtual void exitRevokePrivileges(TplSqlParser::RevokePrivilegesContext * /*ctx*/) override { }

  virtual void enterGrantOptionFor(TplSqlParser::GrantOptionForContext * /*ctx*/) override { }
  virtual void exitGrantOptionFor(TplSqlParser::GrantOptionForContext * /*ctx*/) override { }

  virtual void enterShowGrants(TplSqlParser::ShowGrantsContext * /*ctx*/) override { }
  virtual void exitShowGrants(TplSqlParser::ShowGrantsContext * /*ctx*/) override { }

  virtual void enterPrivilegeIncludeColObject(TplSqlParser::PrivilegeIncludeColObjectContext * /*ctx*/) override { }
  virtual void exitPrivilegeIncludeColObject(TplSqlParser::PrivilegeIncludeColObjectContext * /*ctx*/) override { }

  virtual void enterPrivObjectCols(TplSqlParser::PrivObjectColsContext * /*ctx*/) override { }
  virtual void exitPrivObjectCols(TplSqlParser::PrivObjectColsContext * /*ctx*/) override { }

  virtual void enterShowRoleGrants(TplSqlParser::ShowRoleGrantsContext * /*ctx*/) override { }
  virtual void exitShowRoleGrants(TplSqlParser::ShowRoleGrantsContext * /*ctx*/) override { }

  virtual void enterShowRolePrincipals(TplSqlParser::ShowRolePrincipalsContext * /*ctx*/) override { }
  virtual void exitShowRolePrincipals(TplSqlParser::ShowRolePrincipalsContext * /*ctx*/) override { }

  virtual void enterShowRoles(TplSqlParser::ShowRolesContext * /*ctx*/) override { }
  virtual void exitShowRoles(TplSqlParser::ShowRolesContext * /*ctx*/) override { }

  virtual void enterGrantRole(TplSqlParser::GrantRoleContext * /*ctx*/) override { }
  virtual void exitGrantRole(TplSqlParser::GrantRoleContext * /*ctx*/) override { }

  virtual void enterWithAdminOption(TplSqlParser::WithAdminOptionContext * /*ctx*/) override { }
  virtual void exitWithAdminOption(TplSqlParser::WithAdminOptionContext * /*ctx*/) override { }

  virtual void enterRevokeRole(TplSqlParser::RevokeRoleContext * /*ctx*/) override { }
  virtual void exitRevokeRole(TplSqlParser::RevokeRoleContext * /*ctx*/) override { }

  virtual void enterAdminOptionFor(TplSqlParser::AdminOptionForContext * /*ctx*/) override { }
  virtual void exitAdminOptionFor(TplSqlParser::AdminOptionForContext * /*ctx*/) override { }

  virtual void enterSetRole(TplSqlParser::SetRoleContext * /*ctx*/) override { }
  virtual void exitSetRole(TplSqlParser::SetRoleContext * /*ctx*/) override { }

  virtual void enterShowCurrentRole(TplSqlParser::ShowCurrentRoleContext * /*ctx*/) override { }
  virtual void exitShowCurrentRole(TplSqlParser::ShowCurrentRoleContext * /*ctx*/) override { }

  virtual void enterAbortTransactionStatement(TplSqlParser::AbortTransactionStatementContext * /*ctx*/) override { }
  virtual void exitAbortTransactionStatement(TplSqlParser::AbortTransactionStatementContext * /*ctx*/) override { }

  virtual void enterAbortCompactionStatement(TplSqlParser::AbortCompactionStatementContext * /*ctx*/) override { }
  virtual void exitAbortCompactionStatement(TplSqlParser::AbortCompactionStatementContext * /*ctx*/) override { }

  virtual void enterKillQueryStatement(TplSqlParser::KillQueryStatementContext * /*ctx*/) override { }
  virtual void exitKillQueryStatement(TplSqlParser::KillQueryStatementContext * /*ctx*/) override { }

  virtual void enterResourcePlanDdlStatements(TplSqlParser::ResourcePlanDdlStatementsContext * /*ctx*/) override { }
  virtual void exitResourcePlanDdlStatements(TplSqlParser::ResourcePlanDdlStatementsContext * /*ctx*/) override { }

  virtual void enterCreateResourcePlanStatement(TplSqlParser::CreateResourcePlanStatementContext * /*ctx*/) override { }
  virtual void exitCreateResourcePlanStatement(TplSqlParser::CreateResourcePlanStatementContext * /*ctx*/) override { }

  virtual void enterRpAssignList(TplSqlParser::RpAssignListContext * /*ctx*/) override { }
  virtual void exitRpAssignList(TplSqlParser::RpAssignListContext * /*ctx*/) override { }

  virtual void enterRpAssign(TplSqlParser::RpAssignContext * /*ctx*/) override { }
  virtual void exitRpAssign(TplSqlParser::RpAssignContext * /*ctx*/) override { }

  virtual void enterPoolPath(TplSqlParser::PoolPathContext * /*ctx*/) override { }
  virtual void exitPoolPath(TplSqlParser::PoolPathContext * /*ctx*/) override { }

  virtual void enterAlterResourcePlanStatement(TplSqlParser::AlterResourcePlanStatementContext * /*ctx*/) override { }
  virtual void exitAlterResourcePlanStatement(TplSqlParser::AlterResourcePlanStatementContext * /*ctx*/) override { }

  virtual void enterRpUnassignList(TplSqlParser::RpUnassignListContext * /*ctx*/) override { }
  virtual void exitRpUnassignList(TplSqlParser::RpUnassignListContext * /*ctx*/) override { }

  virtual void enterRpUnassign(TplSqlParser::RpUnassignContext * /*ctx*/) override { }
  virtual void exitRpUnassign(TplSqlParser::RpUnassignContext * /*ctx*/) override { }

  virtual void enterActivate(TplSqlParser::ActivateContext * /*ctx*/) override { }
  virtual void exitActivate(TplSqlParser::ActivateContext * /*ctx*/) override { }

  virtual void enterWithReplace(TplSqlParser::WithReplaceContext * /*ctx*/) override { }
  virtual void exitWithReplace(TplSqlParser::WithReplaceContext * /*ctx*/) override { }

  virtual void enterEnable(TplSqlParser::EnableContext * /*ctx*/) override { }
  virtual void exitEnable(TplSqlParser::EnableContext * /*ctx*/) override { }

  virtual void enterDropResourcePlanStatement(TplSqlParser::DropResourcePlanStatementContext * /*ctx*/) override { }
  virtual void exitDropResourcePlanStatement(TplSqlParser::DropResourcePlanStatementContext * /*ctx*/) override { }

  virtual void enterGlobalWmStatement(TplSqlParser::GlobalWmStatementContext * /*ctx*/) override { }
  virtual void exitGlobalWmStatement(TplSqlParser::GlobalWmStatementContext * /*ctx*/) override { }

  virtual void enterAlterWmStatement(TplSqlParser::AlterWmStatementContext * /*ctx*/) override { }
  virtual void exitAlterWmStatement(TplSqlParser::AlterWmStatementContext * /*ctx*/) override { }

  virtual void enterReplaceResourcePlanStatement(TplSqlParser::ReplaceResourcePlanStatementContext * /*ctx*/) override { }
  virtual void exitReplaceResourcePlanStatement(TplSqlParser::ReplaceResourcePlanStatementContext * /*ctx*/) override { }

  virtual void enterCreateTriggerStatement(TplSqlParser::CreateTriggerStatementContext * /*ctx*/) override { }
  virtual void exitCreateTriggerStatement(TplSqlParser::CreateTriggerStatementContext * /*ctx*/) override { }

  virtual void enterTriggerExpression(TplSqlParser::TriggerExpressionContext * /*ctx*/) override { }
  virtual void exitTriggerExpression(TplSqlParser::TriggerExpressionContext * /*ctx*/) override { }

  virtual void enterTriggerAtomExpression(TplSqlParser::TriggerAtomExpressionContext * /*ctx*/) override { }
  virtual void exitTriggerAtomExpression(TplSqlParser::TriggerAtomExpressionContext * /*ctx*/) override { }

  virtual void enterComparisionOperator(TplSqlParser::ComparisionOperatorContext * /*ctx*/) override { }
  virtual void exitComparisionOperator(TplSqlParser::ComparisionOperatorContext * /*ctx*/) override { }

  virtual void enterTriggerLiteral(TplSqlParser::TriggerLiteralContext * /*ctx*/) override { }
  virtual void exitTriggerLiteral(TplSqlParser::TriggerLiteralContext * /*ctx*/) override { }

  virtual void enterTriggerActionExpression(TplSqlParser::TriggerActionExpressionContext * /*ctx*/) override { }
  virtual void exitTriggerActionExpression(TplSqlParser::TriggerActionExpressionContext * /*ctx*/) override { }

  virtual void enterAlterTriggerStatement(TplSqlParser::AlterTriggerStatementContext * /*ctx*/) override { }
  virtual void exitAlterTriggerStatement(TplSqlParser::AlterTriggerStatementContext * /*ctx*/) override { }

  virtual void enterDropTriggerStatement(TplSqlParser::DropTriggerStatementContext * /*ctx*/) override { }
  virtual void exitDropTriggerStatement(TplSqlParser::DropTriggerStatementContext * /*ctx*/) override { }

  virtual void enterCreatePoolStatement(TplSqlParser::CreatePoolStatementContext * /*ctx*/) override { }
  virtual void exitCreatePoolStatement(TplSqlParser::CreatePoolStatementContext * /*ctx*/) override { }

  virtual void enterPoolAssignList(TplSqlParser::PoolAssignListContext * /*ctx*/) override { }
  virtual void exitPoolAssignList(TplSqlParser::PoolAssignListContext * /*ctx*/) override { }

  virtual void enterPoolAssign(TplSqlParser::PoolAssignContext * /*ctx*/) override { }
  virtual void exitPoolAssign(TplSqlParser::PoolAssignContext * /*ctx*/) override { }

  virtual void enterAlterPoolStatement(TplSqlParser::AlterPoolStatementContext * /*ctx*/) override { }
  virtual void exitAlterPoolStatement(TplSqlParser::AlterPoolStatementContext * /*ctx*/) override { }

  virtual void enterDropPoolStatement(TplSqlParser::DropPoolStatementContext * /*ctx*/) override { }
  virtual void exitDropPoolStatement(TplSqlParser::DropPoolStatementContext * /*ctx*/) override { }

  virtual void enterCreateMappingStatement(TplSqlParser::CreateMappingStatementContext * /*ctx*/) override { }
  virtual void exitCreateMappingStatement(TplSqlParser::CreateMappingStatementContext * /*ctx*/) override { }

  virtual void enterUnmanaged(TplSqlParser::UnmanagedContext * /*ctx*/) override { }
  virtual void exitUnmanaged(TplSqlParser::UnmanagedContext * /*ctx*/) override { }

  virtual void enterAlterMappingStatement(TplSqlParser::AlterMappingStatementContext * /*ctx*/) override { }
  virtual void exitAlterMappingStatement(TplSqlParser::AlterMappingStatementContext * /*ctx*/) override { }

  virtual void enterDropMappingStatement(TplSqlParser::DropMappingStatementContext * /*ctx*/) override { }
  virtual void exitDropMappingStatement(TplSqlParser::DropMappingStatementContext * /*ctx*/) override { }

  virtual void enterCreateDataConnectorStatement(TplSqlParser::CreateDataConnectorStatementContext * /*ctx*/) override { }
  virtual void exitCreateDataConnectorStatement(TplSqlParser::CreateDataConnectorStatementContext * /*ctx*/) override { }

  virtual void enterDataConnectorType(TplSqlParser::DataConnectorTypeContext * /*ctx*/) override { }
  virtual void exitDataConnectorType(TplSqlParser::DataConnectorTypeContext * /*ctx*/) override { }

  virtual void enterDataConnectorUrl(TplSqlParser::DataConnectorUrlContext * /*ctx*/) override { }
  virtual void exitDataConnectorUrl(TplSqlParser::DataConnectorUrlContext * /*ctx*/) override { }

  virtual void enterDataConnectorComment(TplSqlParser::DataConnectorCommentContext * /*ctx*/) override { }
  virtual void exitDataConnectorComment(TplSqlParser::DataConnectorCommentContext * /*ctx*/) override { }

  virtual void enterDropDataConnectorStatement(TplSqlParser::DropDataConnectorStatementContext * /*ctx*/) override { }
  virtual void exitDropDataConnectorStatement(TplSqlParser::DropDataConnectorStatementContext * /*ctx*/) override { }

  virtual void enterDeleteStatement(TplSqlParser::DeleteStatementContext * /*ctx*/) override { }
  virtual void exitDeleteStatement(TplSqlParser::DeleteStatementContext * /*ctx*/) override { }

  virtual void enterUpdateStatement(TplSqlParser::UpdateStatementContext * /*ctx*/) override { }
  virtual void exitUpdateStatement(TplSqlParser::UpdateStatementContext * /*ctx*/) override { }

  virtual void enterSetColumnsClause(TplSqlParser::SetColumnsClauseContext * /*ctx*/) override { }
  virtual void exitSetColumnsClause(TplSqlParser::SetColumnsClauseContext * /*ctx*/) override { }

  virtual void enterColumnAssignmentClause(TplSqlParser::ColumnAssignmentClauseContext * /*ctx*/) override { }
  virtual void exitColumnAssignmentClause(TplSqlParser::ColumnAssignmentClauseContext * /*ctx*/) override { }

  virtual void enterPrecedencePlusExpressionOrDefault(TplSqlParser::PrecedencePlusExpressionOrDefaultContext * /*ctx*/) override { }
  virtual void exitPrecedencePlusExpressionOrDefault(TplSqlParser::PrecedencePlusExpressionOrDefaultContext * /*ctx*/) override { }

  virtual void enterSqlTransactionStatement(TplSqlParser::SqlTransactionStatementContext * /*ctx*/) override { }
  virtual void exitSqlTransactionStatement(TplSqlParser::SqlTransactionStatementContext * /*ctx*/) override { }

  virtual void enterStartTransactionStatement(TplSqlParser::StartTransactionStatementContext * /*ctx*/) override { }
  virtual void exitStartTransactionStatement(TplSqlParser::StartTransactionStatementContext * /*ctx*/) override { }

  virtual void enterTransactionMode(TplSqlParser::TransactionModeContext * /*ctx*/) override { }
  virtual void exitTransactionMode(TplSqlParser::TransactionModeContext * /*ctx*/) override { }

  virtual void enterIsolationLevel(TplSqlParser::IsolationLevelContext * /*ctx*/) override { }
  virtual void exitIsolationLevel(TplSqlParser::IsolationLevelContext * /*ctx*/) override { }

  virtual void enterLevelOfIsolation(TplSqlParser::LevelOfIsolationContext * /*ctx*/) override { }
  virtual void exitLevelOfIsolation(TplSqlParser::LevelOfIsolationContext * /*ctx*/) override { }

  virtual void enterTransactionAccessMode(TplSqlParser::TransactionAccessModeContext * /*ctx*/) override { }
  virtual void exitTransactionAccessMode(TplSqlParser::TransactionAccessModeContext * /*ctx*/) override { }

  virtual void enterCommitStatement(TplSqlParser::CommitStatementContext * /*ctx*/) override { }
  virtual void exitCommitStatement(TplSqlParser::CommitStatementContext * /*ctx*/) override { }

  virtual void enterRollbackStatement(TplSqlParser::RollbackStatementContext * /*ctx*/) override { }
  virtual void exitRollbackStatement(TplSqlParser::RollbackStatementContext * /*ctx*/) override { }

  virtual void enterSetAutoCommitStatement(TplSqlParser::SetAutoCommitStatementContext * /*ctx*/) override { }
  virtual void exitSetAutoCommitStatement(TplSqlParser::SetAutoCommitStatementContext * /*ctx*/) override { }

  virtual void enterBooleanValueTok(TplSqlParser::BooleanValueTokContext * /*ctx*/) override { }
  virtual void exitBooleanValueTok(TplSqlParser::BooleanValueTokContext * /*ctx*/) override { }

  virtual void enterMergeStatement(TplSqlParser::MergeStatementContext * /*ctx*/) override { }
  virtual void exitMergeStatement(TplSqlParser::MergeStatementContext * /*ctx*/) override { }

  virtual void enterWhenClauses(TplSqlParser::WhenClausesContext * /*ctx*/) override { }
  virtual void exitWhenClauses(TplSqlParser::WhenClausesContext * /*ctx*/) override { }

  virtual void enterWhenMatchedAndClause(TplSqlParser::WhenMatchedAndClauseContext * /*ctx*/) override { }
  virtual void exitWhenMatchedAndClause(TplSqlParser::WhenMatchedAndClauseContext * /*ctx*/) override { }

  virtual void enterUpdateOrDelete(TplSqlParser::UpdateOrDeleteContext * /*ctx*/) override { }
  virtual void exitUpdateOrDelete(TplSqlParser::UpdateOrDeleteContext * /*ctx*/) override { }

  virtual void enterWhenMatchedThenClause(TplSqlParser::WhenMatchedThenClauseContext * /*ctx*/) override { }
  virtual void exitWhenMatchedThenClause(TplSqlParser::WhenMatchedThenClauseContext * /*ctx*/) override { }

  virtual void enterWhenNotMatchedClause(TplSqlParser::WhenNotMatchedClauseContext * /*ctx*/) override { }
  virtual void exitWhenNotMatchedClause(TplSqlParser::WhenNotMatchedClauseContext * /*ctx*/) override { }

  virtual void enterValueRowConstructor(TplSqlParser::ValueRowConstructorContext * /*ctx*/) override { }
  virtual void exitValueRowConstructor(TplSqlParser::ValueRowConstructorContext * /*ctx*/) override { }

  virtual void enterPrepareStatement(TplSqlParser::PrepareStatementContext * /*ctx*/) override { }
  virtual void exitPrepareStatement(TplSqlParser::PrepareStatementContext * /*ctx*/) override { }

  virtual void enterExecuteStatement(TplSqlParser::ExecuteStatementContext * /*ctx*/) override { }
  virtual void exitExecuteStatement(TplSqlParser::ExecuteStatementContext * /*ctx*/) override { }

  virtual void enterExecuteParamList(TplSqlParser::ExecuteParamListContext * /*ctx*/) override { }
  virtual void exitExecuteParamList(TplSqlParser::ExecuteParamListContext * /*ctx*/) override { }

  virtual void enterNonReserved(TplSqlParser::NonReservedContext * /*ctx*/) override { }
  virtual void exitNonReserved(TplSqlParser::NonReservedContext * /*ctx*/) override { }

  virtual void enterTplsqlPrimitiveType(TplSqlParser::TplsqlPrimitiveTypeContext * /*ctx*/) override { }
  virtual void exitTplsqlPrimitiveType(TplSqlParser::TplsqlPrimitiveTypeContext * /*ctx*/) override { }

  virtual void enterAdql(TplSqlParser::AdqlContext * /*ctx*/) override { }
  virtual void exitAdql(TplSqlParser::AdqlContext * /*ctx*/) override { }

  virtual void enterQueryStatementExpression(TplSqlParser::QueryStatementExpressionContext * /*ctx*/) override { }
  virtual void exitQueryStatementExpression(TplSqlParser::QueryStatementExpressionContext * /*ctx*/) override { }

  virtual void enterWithClause(TplSqlParser::WithClauseContext * /*ctx*/) override { }
  virtual void exitWithClause(TplSqlParser::WithClauseContext * /*ctx*/) override { }

  virtual void enterId_(TplSqlParser::Id_Context * /*ctx*/) override { }
  virtual void exitId_(TplSqlParser::Id_Context * /*ctx*/) override { }

  virtual void enterAll_distinct(TplSqlParser::All_distinctContext * /*ctx*/) override { }
  virtual void exitAll_distinct(TplSqlParser::All_distinctContext * /*ctx*/) override { }

  virtual void enterSet_limit(TplSqlParser::Set_limitContext * /*ctx*/) override { }
  virtual void exitSet_limit(TplSqlParser::Set_limitContext * /*ctx*/) override { }

  virtual void enterSelectList(TplSqlParser::SelectListContext * /*ctx*/) override { }
  virtual void exitSelectList(TplSqlParser::SelectListContext * /*ctx*/) override { }

  virtual void enterTableAllColumns(TplSqlParser::TableAllColumnsContext * /*ctx*/) override { }
  virtual void exitTableAllColumns(TplSqlParser::TableAllColumnsContext * /*ctx*/) override { }

  virtual void enterExpression(TplSqlParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(TplSqlParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterPrecedenceOrExpression(TplSqlParser::PrecedenceOrExpressionContext * /*ctx*/) override { }
  virtual void exitPrecedenceOrExpression(TplSqlParser::PrecedenceOrExpressionContext * /*ctx*/) override { }

  virtual void enterPrecedenceAndExpression(TplSqlParser::PrecedenceAndExpressionContext * /*ctx*/) override { }
  virtual void exitPrecedenceAndExpression(TplSqlParser::PrecedenceAndExpressionContext * /*ctx*/) override { }

  virtual void enterPrecedenceNotExpression(TplSqlParser::PrecedenceNotExpressionContext * /*ctx*/) override { }
  virtual void exitPrecedenceNotExpression(TplSqlParser::PrecedenceNotExpressionContext * /*ctx*/) override { }

  virtual void enterPrecedenceNotOperator(TplSqlParser::PrecedenceNotOperatorContext * /*ctx*/) override { }
  virtual void exitPrecedenceNotOperator(TplSqlParser::PrecedenceNotOperatorContext * /*ctx*/) override { }

  virtual void enterPrecedenceUnarySuffixExpression(TplSqlParser::PrecedenceUnarySuffixExpressionContext * /*ctx*/) override { }
  virtual void exitPrecedenceUnarySuffixExpression(TplSqlParser::PrecedenceUnarySuffixExpressionContext * /*ctx*/) override { }

  virtual void enterPrecedenceEqualExpression(TplSqlParser::PrecedenceEqualExpressionContext * /*ctx*/) override { }
  virtual void exitPrecedenceEqualExpression(TplSqlParser::PrecedenceEqualExpressionContext * /*ctx*/) override { }

  virtual void enterPrecedenceSimilarExpression(TplSqlParser::PrecedenceSimilarExpressionContext * /*ctx*/) override { }
  virtual void exitPrecedenceSimilarExpression(TplSqlParser::PrecedenceSimilarExpressionContext * /*ctx*/) override { }

  virtual void enterPrecedenceSimilarExpressionMain(TplSqlParser::PrecedenceSimilarExpressionMainContext * /*ctx*/) override { }
  virtual void exitPrecedenceSimilarExpressionMain(TplSqlParser::PrecedenceSimilarExpressionMainContext * /*ctx*/) override { }

  virtual void enterPrecedenceBitwiseOrExpression(TplSqlParser::PrecedenceBitwiseOrExpressionContext * /*ctx*/) override { }
  virtual void exitPrecedenceBitwiseOrExpression(TplSqlParser::PrecedenceBitwiseOrExpressionContext * /*ctx*/) override { }

  virtual void enterPrecedenceAmpersandExpression(TplSqlParser::PrecedenceAmpersandExpressionContext * /*ctx*/) override { }
  virtual void exitPrecedenceAmpersandExpression(TplSqlParser::PrecedenceAmpersandExpressionContext * /*ctx*/) override { }

  virtual void enterPrecedenceConcatenateExpression(TplSqlParser::PrecedenceConcatenateExpressionContext * /*ctx*/) override { }
  virtual void exitPrecedenceConcatenateExpression(TplSqlParser::PrecedenceConcatenateExpressionContext * /*ctx*/) override { }

  virtual void enterPrecedencePlusExpression(TplSqlParser::PrecedencePlusExpressionContext * /*ctx*/) override { }
  virtual void exitPrecedencePlusExpression(TplSqlParser::PrecedencePlusExpressionContext * /*ctx*/) override { }

  virtual void enterPrecedenceStarExpression(TplSqlParser::PrecedenceStarExpressionContext * /*ctx*/) override { }
  virtual void exitPrecedenceStarExpression(TplSqlParser::PrecedenceStarExpressionContext * /*ctx*/) override { }

  virtual void enterPrecedenceBitwiseXorExpression(TplSqlParser::PrecedenceBitwiseXorExpressionContext * /*ctx*/) override { }
  virtual void exitPrecedenceBitwiseXorExpression(TplSqlParser::PrecedenceBitwiseXorExpressionContext * /*ctx*/) override { }

  virtual void enterPrecedenceUnaryPrefixExpression(TplSqlParser::PrecedenceUnaryPrefixExpressionContext * /*ctx*/) override { }
  virtual void exitPrecedenceUnaryPrefixExpression(TplSqlParser::PrecedenceUnaryPrefixExpressionContext * /*ctx*/) override { }

  virtual void enterPrecedenceUnaryOperator(TplSqlParser::PrecedenceUnaryOperatorContext * /*ctx*/) override { }
  virtual void exitPrecedenceUnaryOperator(TplSqlParser::PrecedenceUnaryOperatorContext * /*ctx*/) override { }

  virtual void enterPrecedenceFieldExpression(TplSqlParser::PrecedenceFieldExpressionContext * /*ctx*/) override { }
  virtual void exitPrecedenceFieldExpression(TplSqlParser::PrecedenceFieldExpressionContext * /*ctx*/) override { }

  virtual void enterAtomExpression(TplSqlParser::AtomExpressionContext * /*ctx*/) override { }
  virtual void exitAtomExpression(TplSqlParser::AtomExpressionContext * /*ctx*/) override { }

  virtual void enterConstant(TplSqlParser::ConstantContext * /*ctx*/) override { }
  virtual void exitConstant(TplSqlParser::ConstantContext * /*ctx*/) override { }

  virtual void enterIntervalLiteral(TplSqlParser::IntervalLiteralContext * /*ctx*/) override { }
  virtual void exitIntervalLiteral(TplSqlParser::IntervalLiteralContext * /*ctx*/) override { }

  virtual void enterIntervalValue(TplSqlParser::IntervalValueContext * /*ctx*/) override { }
  virtual void exitIntervalValue(TplSqlParser::IntervalValueContext * /*ctx*/) override { }

  virtual void enterIntervalQualifiers(TplSqlParser::IntervalQualifiersContext * /*ctx*/) override { }
  virtual void exitIntervalQualifiers(TplSqlParser::IntervalQualifiersContext * /*ctx*/) override { }

  virtual void enterDateLiteral(TplSqlParser::DateLiteralContext * /*ctx*/) override { }
  virtual void exitDateLiteral(TplSqlParser::DateLiteralContext * /*ctx*/) override { }

  virtual void enterTimestampLiteral(TplSqlParser::TimestampLiteralContext * /*ctx*/) override { }
  virtual void exitTimestampLiteral(TplSqlParser::TimestampLiteralContext * /*ctx*/) override { }

  virtual void enterTimestampLocalTZLiteral(TplSqlParser::TimestampLocalTZLiteralContext * /*ctx*/) override { }
  virtual void exitTimestampLocalTZLiteral(TplSqlParser::TimestampLocalTZLiteralContext * /*ctx*/) override { }

  virtual void enterStringLiteralSequence(TplSqlParser::StringLiteralSequenceContext * /*ctx*/) override { }
  virtual void exitStringLiteralSequence(TplSqlParser::StringLiteralSequenceContext * /*ctx*/) override { }

  virtual void enterCharSetStringLiteral(TplSqlParser::CharSetStringLiteralContext * /*ctx*/) override { }
  virtual void exitCharSetStringLiteral(TplSqlParser::CharSetStringLiteralContext * /*ctx*/) override { }

  virtual void enterBooleanValue(TplSqlParser::BooleanValueContext * /*ctx*/) override { }
  virtual void exitBooleanValue(TplSqlParser::BooleanValueContext * /*ctx*/) override { }

  virtual void enterPrepareStmtParam(TplSqlParser::PrepareStmtParamContext * /*ctx*/) override { }
  virtual void exitPrepareStmtParam(TplSqlParser::PrepareStmtParamContext * /*ctx*/) override { }

  virtual void enterParameterIdx(TplSqlParser::ParameterIdxContext * /*ctx*/) override { }
  virtual void exitParameterIdx(TplSqlParser::ParameterIdxContext * /*ctx*/) override { }

  virtual void enterIntervalExpression(TplSqlParser::IntervalExpressionContext * /*ctx*/) override { }
  virtual void exitIntervalExpression(TplSqlParser::IntervalExpressionContext * /*ctx*/) override { }

  virtual void enterCastExpression(TplSqlParser::CastExpressionContext * /*ctx*/) override { }
  virtual void exitCastExpression(TplSqlParser::CastExpressionContext * /*ctx*/) override { }

  virtual void enterExtractExpression(TplSqlParser::ExtractExpressionContext * /*ctx*/) override { }
  virtual void exitExtractExpression(TplSqlParser::ExtractExpressionContext * /*ctx*/) override { }

  virtual void enterTimeQualifiers(TplSqlParser::TimeQualifiersContext * /*ctx*/) override { }
  virtual void exitTimeQualifiers(TplSqlParser::TimeQualifiersContext * /*ctx*/) override { }

  virtual void enterFloorExpression(TplSqlParser::FloorExpressionContext * /*ctx*/) override { }
  virtual void exitFloorExpression(TplSqlParser::FloorExpressionContext * /*ctx*/) override { }

  virtual void enterFloorDateQualifiers(TplSqlParser::FloorDateQualifiersContext * /*ctx*/) override { }
  virtual void exitFloorDateQualifiers(TplSqlParser::FloorDateQualifiersContext * /*ctx*/) override { }

  virtual void enterCaseExpression(TplSqlParser::CaseExpressionContext * /*ctx*/) override { }
  virtual void exitCaseExpression(TplSqlParser::CaseExpressionContext * /*ctx*/) override { }

  virtual void enterWhenExpression(TplSqlParser::WhenExpressionContext * /*ctx*/) override { }
  virtual void exitWhenExpression(TplSqlParser::WhenExpressionContext * /*ctx*/) override { }

  virtual void enterSubQueryExpression(TplSqlParser::SubQueryExpressionContext * /*ctx*/) override { }
  virtual void exitSubQueryExpression(TplSqlParser::SubQueryExpressionContext * /*ctx*/) override { }

  virtual void enterFunction_(TplSqlParser::Function_Context * /*ctx*/) override { }
  virtual void exitFunction_(TplSqlParser::Function_Context * /*ctx*/) override { }

  virtual void enterTrimFunction(TplSqlParser::TrimFunctionContext * /*ctx*/) override { }
  virtual void exitTrimFunction(TplSqlParser::TrimFunctionContext * /*ctx*/) override { }

  virtual void enterFunctionName(TplSqlParser::FunctionNameContext * /*ctx*/) override { }
  virtual void exitFunctionName(TplSqlParser::FunctionNameContext * /*ctx*/) override { }

  virtual void enterFunctionIdentifier(TplSqlParser::FunctionIdentifierContext * /*ctx*/) override { }
  virtual void exitFunctionIdentifier(TplSqlParser::FunctionIdentifierContext * /*ctx*/) override { }

  virtual void enterSql11ReservedKeywordsUsedAsFunctionName(TplSqlParser::Sql11ReservedKeywordsUsedAsFunctionNameContext * /*ctx*/) override { }
  virtual void exitSql11ReservedKeywordsUsedAsFunctionName(TplSqlParser::Sql11ReservedKeywordsUsedAsFunctionNameContext * /*ctx*/) override { }

  virtual void enterSelectExpression(TplSqlParser::SelectExpressionContext * /*ctx*/) override { }
  virtual void exitSelectExpression(TplSqlParser::SelectExpressionContext * /*ctx*/) override { }

  virtual void enterOrderByClause(TplSqlParser::OrderByClauseContext * /*ctx*/) override { }
  virtual void exitOrderByClause(TplSqlParser::OrderByClauseContext * /*ctx*/) override { }

  virtual void enterColumnRefOrder(TplSqlParser::ColumnRefOrderContext * /*ctx*/) override { }
  virtual void exitColumnRefOrder(TplSqlParser::ColumnRefOrderContext * /*ctx*/) override { }

  virtual void enterOrderSpecificationRewrite(TplSqlParser::OrderSpecificationRewriteContext * /*ctx*/) override { }
  virtual void exitOrderSpecificationRewrite(TplSqlParser::OrderSpecificationRewriteContext * /*ctx*/) override { }

  virtual void enterNullOrdering(TplSqlParser::NullOrderingContext * /*ctx*/) override { }
  virtual void exitNullOrdering(TplSqlParser::NullOrderingContext * /*ctx*/) override { }

  virtual void enterNull_treatment(TplSqlParser::Null_treatmentContext * /*ctx*/) override { }
  virtual void exitNull_treatment(TplSqlParser::Null_treatmentContext * /*ctx*/) override { }

  virtual void enterWindow_specification(TplSqlParser::Window_specificationContext * /*ctx*/) override { }
  virtual void exitWindow_specification(TplSqlParser::Window_specificationContext * /*ctx*/) override { }

  virtual void enterPartitioningSpec(TplSqlParser::PartitioningSpecContext * /*ctx*/) override { }
  virtual void exitPartitioningSpec(TplSqlParser::PartitioningSpecContext * /*ctx*/) override { }

  virtual void enterPartitionByClause(TplSqlParser::PartitionByClauseContext * /*ctx*/) override { }
  virtual void exitPartitionByClause(TplSqlParser::PartitionByClauseContext * /*ctx*/) override { }

  virtual void enterExpressions(TplSqlParser::ExpressionsContext * /*ctx*/) override { }
  virtual void exitExpressions(TplSqlParser::ExpressionsContext * /*ctx*/) override { }

  virtual void enterExpressionsInParenthesis(TplSqlParser::ExpressionsInParenthesisContext * /*ctx*/) override { }
  virtual void exitExpressionsInParenthesis(TplSqlParser::ExpressionsInParenthesisContext * /*ctx*/) override { }

  virtual void enterExpressionsNotInParenthesis(TplSqlParser::ExpressionsNotInParenthesisContext * /*ctx*/) override { }
  virtual void exitExpressionsNotInParenthesis(TplSqlParser::ExpressionsNotInParenthesisContext * /*ctx*/) override { }

  virtual void enterExpressionOrDefault(TplSqlParser::ExpressionOrDefaultContext * /*ctx*/) override { }
  virtual void exitExpressionOrDefault(TplSqlParser::ExpressionOrDefaultContext * /*ctx*/) override { }

  virtual void enterDefaultValue(TplSqlParser::DefaultValueContext * /*ctx*/) override { }
  virtual void exitDefaultValue(TplSqlParser::DefaultValueContext * /*ctx*/) override { }

  virtual void enterExpressionPart(TplSqlParser::ExpressionPartContext * /*ctx*/) override { }
  virtual void exitExpressionPart(TplSqlParser::ExpressionPartContext * /*ctx*/) override { }

  virtual void enterDistributeByClause(TplSqlParser::DistributeByClauseContext * /*ctx*/) override { }
  virtual void exitDistributeByClause(TplSqlParser::DistributeByClauseContext * /*ctx*/) override { }

  virtual void enterSortByClause(TplSqlParser::SortByClauseContext * /*ctx*/) override { }
  virtual void exitSortByClause(TplSqlParser::SortByClauseContext * /*ctx*/) override { }

  virtual void enterColumnRefOrderInParenthesis(TplSqlParser::ColumnRefOrderInParenthesisContext * /*ctx*/) override { }
  virtual void exitColumnRefOrderInParenthesis(TplSqlParser::ColumnRefOrderInParenthesisContext * /*ctx*/) override { }

  virtual void enterColumnRefOrderNotInParenthesis(TplSqlParser::ColumnRefOrderNotInParenthesisContext * /*ctx*/) override { }
  virtual void exitColumnRefOrderNotInParenthesis(TplSqlParser::ColumnRefOrderNotInParenthesisContext * /*ctx*/) override { }

  virtual void enterClusterByClause(TplSqlParser::ClusterByClauseContext * /*ctx*/) override { }
  virtual void exitClusterByClause(TplSqlParser::ClusterByClauseContext * /*ctx*/) override { }

  virtual void enterWindow_frame(TplSqlParser::Window_frameContext * /*ctx*/) override { }
  virtual void exitWindow_frame(TplSqlParser::Window_frameContext * /*ctx*/) override { }

  virtual void enterWindow_range_expression(TplSqlParser::Window_range_expressionContext * /*ctx*/) override { }
  virtual void exitWindow_range_expression(TplSqlParser::Window_range_expressionContext * /*ctx*/) override { }

  virtual void enterWindow_frame_start_boundary(TplSqlParser::Window_frame_start_boundaryContext * /*ctx*/) override { }
  virtual void exitWindow_frame_start_boundary(TplSqlParser::Window_frame_start_boundaryContext * /*ctx*/) override { }

  virtual void enterWindow_frame_boundary(TplSqlParser::Window_frame_boundaryContext * /*ctx*/) override { }
  virtual void exitWindow_frame_boundary(TplSqlParser::Window_frame_boundaryContext * /*ctx*/) override { }

  virtual void enterWindow_value_expression(TplSqlParser::Window_value_expressionContext * /*ctx*/) override { }
  virtual void exitWindow_value_expression(TplSqlParser::Window_value_expressionContext * /*ctx*/) override { }

  virtual void enterTableOrColumn(TplSqlParser::TableOrColumnContext * /*ctx*/) override { }
  virtual void exitTableOrColumn(TplSqlParser::TableOrColumnContext * /*ctx*/) override { }

  virtual void enterPrecedenceBitwiseXorOperator(TplSqlParser::PrecedenceBitwiseXorOperatorContext * /*ctx*/) override { }
  virtual void exitPrecedenceBitwiseXorOperator(TplSqlParser::PrecedenceBitwiseXorOperatorContext * /*ctx*/) override { }

  virtual void enterPrecedenceStarOperator(TplSqlParser::PrecedenceStarOperatorContext * /*ctx*/) override { }
  virtual void exitPrecedenceStarOperator(TplSqlParser::PrecedenceStarOperatorContext * /*ctx*/) override { }

  virtual void enterPrecedencePlusOperator(TplSqlParser::PrecedencePlusOperatorContext * /*ctx*/) override { }
  virtual void exitPrecedencePlusOperator(TplSqlParser::PrecedencePlusOperatorContext * /*ctx*/) override { }

  virtual void enterPrecedenceConcatenateOperator(TplSqlParser::PrecedenceConcatenateOperatorContext * /*ctx*/) override { }
  virtual void exitPrecedenceConcatenateOperator(TplSqlParser::PrecedenceConcatenateOperatorContext * /*ctx*/) override { }

  virtual void enterPrecedenceAmpersandOperator(TplSqlParser::PrecedenceAmpersandOperatorContext * /*ctx*/) override { }
  virtual void exitPrecedenceAmpersandOperator(TplSqlParser::PrecedenceAmpersandOperatorContext * /*ctx*/) override { }

  virtual void enterPrecedenceBitwiseOrOperator(TplSqlParser::PrecedenceBitwiseOrOperatorContext * /*ctx*/) override { }
  virtual void exitPrecedenceBitwiseOrOperator(TplSqlParser::PrecedenceBitwiseOrOperatorContext * /*ctx*/) override { }

  virtual void enterPrecedenceSimilarExpressionPart(TplSqlParser::PrecedenceSimilarExpressionPartContext * /*ctx*/) override { }
  virtual void exitPrecedenceSimilarExpressionPart(TplSqlParser::PrecedenceSimilarExpressionPartContext * /*ctx*/) override { }

  virtual void enterPrecedenceSimilarOperator(TplSqlParser::PrecedenceSimilarOperatorContext * /*ctx*/) override { }
  virtual void exitPrecedenceSimilarOperator(TplSqlParser::PrecedenceSimilarOperatorContext * /*ctx*/) override { }

  virtual void enterPrecedenceRegexpOperator(TplSqlParser::PrecedenceRegexpOperatorContext * /*ctx*/) override { }
  virtual void exitPrecedenceRegexpOperator(TplSqlParser::PrecedenceRegexpOperatorContext * /*ctx*/) override { }

  virtual void enterPrecedenceSimilarExpressionAtom(TplSqlParser::PrecedenceSimilarExpressionAtomContext * /*ctx*/) override { }
  virtual void exitPrecedenceSimilarExpressionAtom(TplSqlParser::PrecedenceSimilarExpressionAtomContext * /*ctx*/) override { }

  virtual void enterPrecedenceSimilarExpressionQuantifierPredicate(TplSqlParser::PrecedenceSimilarExpressionQuantifierPredicateContext * /*ctx*/) override { }
  virtual void exitPrecedenceSimilarExpressionQuantifierPredicate(TplSqlParser::PrecedenceSimilarExpressionQuantifierPredicateContext * /*ctx*/) override { }

  virtual void enterSubQuerySelectorOperator(TplSqlParser::SubQuerySelectorOperatorContext * /*ctx*/) override { }
  virtual void exitSubQuerySelectorOperator(TplSqlParser::SubQuerySelectorOperatorContext * /*ctx*/) override { }

  virtual void enterQuantifierType(TplSqlParser::QuantifierTypeContext * /*ctx*/) override { }
  virtual void exitQuantifierType(TplSqlParser::QuantifierTypeContext * /*ctx*/) override { }

  virtual void enterPrecedenceSimilarExpressionPartNot(TplSqlParser::PrecedenceSimilarExpressionPartNotContext * /*ctx*/) override { }
  virtual void exitPrecedenceSimilarExpressionPartNot(TplSqlParser::PrecedenceSimilarExpressionPartNotContext * /*ctx*/) override { }

  virtual void enterPrecedenceSimilarExpressionIn(TplSqlParser::PrecedenceSimilarExpressionInContext * /*ctx*/) override { }
  virtual void exitPrecedenceSimilarExpressionIn(TplSqlParser::PrecedenceSimilarExpressionInContext * /*ctx*/) override { }

  virtual void enterPrecedenceEqualOperator(TplSqlParser::PrecedenceEqualOperatorContext * /*ctx*/) override { }
  virtual void exitPrecedenceEqualOperator(TplSqlParser::PrecedenceEqualOperatorContext * /*ctx*/) override { }

  virtual void enterPrecedenceDistinctOperator(TplSqlParser::PrecedenceDistinctOperatorContext * /*ctx*/) override { }
  virtual void exitPrecedenceDistinctOperator(TplSqlParser::PrecedenceDistinctOperatorContext * /*ctx*/) override { }

  virtual void enterIsCondition(TplSqlParser::IsConditionContext * /*ctx*/) override { }
  virtual void exitIsCondition(TplSqlParser::IsConditionContext * /*ctx*/) override { }

  virtual void enterPrecedenceAndOperator(TplSqlParser::PrecedenceAndOperatorContext * /*ctx*/) override { }
  virtual void exitPrecedenceAndOperator(TplSqlParser::PrecedenceAndOperatorContext * /*ctx*/) override { }

  virtual void enterPrecedenceOrOperator(TplSqlParser::PrecedenceOrOperatorContext * /*ctx*/) override { }
  virtual void exitPrecedenceOrOperator(TplSqlParser::PrecedenceOrOperatorContext * /*ctx*/) override { }

  virtual void enterFromClause(TplSqlParser::FromClauseContext * /*ctx*/) override { }
  virtual void exitFromClause(TplSqlParser::FromClauseContext * /*ctx*/) override { }

  virtual void enterJoinSource(TplSqlParser::JoinSourceContext * /*ctx*/) override { }
  virtual void exitJoinSource(TplSqlParser::JoinSourceContext * /*ctx*/) override { }

  virtual void enterSubQuerySource(TplSqlParser::SubQuerySourceContext * /*ctx*/) override { }
  virtual void exitSubQuerySource(TplSqlParser::SubQuerySourceContext * /*ctx*/) override { }

  virtual void enterJoinToken(TplSqlParser::JoinTokenContext * /*ctx*/) override { }
  virtual void exitJoinToken(TplSqlParser::JoinTokenContext * /*ctx*/) override { }

  virtual void enterColumnParenthesesList(TplSqlParser::ColumnParenthesesListContext * /*ctx*/) override { }
  virtual void exitColumnParenthesesList(TplSqlParser::ColumnParenthesesListContext * /*ctx*/) override { }

  virtual void enterColumnNameList(TplSqlParser::ColumnNameListContext * /*ctx*/) override { }
  virtual void exitColumnNameList(TplSqlParser::ColumnNameListContext * /*ctx*/) override { }

  virtual void enterColumnName(TplSqlParser::ColumnNameContext * /*ctx*/) override { }
  virtual void exitColumnName(TplSqlParser::ColumnNameContext * /*ctx*/) override { }

  virtual void enterWhereClause(TplSqlParser::WhereClauseContext * /*ctx*/) override { }
  virtual void exitWhereClause(TplSqlParser::WhereClauseContext * /*ctx*/) override { }

  virtual void enterSearchCondition(TplSqlParser::SearchConditionContext * /*ctx*/) override { }
  virtual void exitSearchCondition(TplSqlParser::SearchConditionContext * /*ctx*/) override { }

  virtual void enterGroupByClause(TplSqlParser::GroupByClauseContext * /*ctx*/) override { }
  virtual void exitGroupByClause(TplSqlParser::GroupByClauseContext * /*ctx*/) override { }

  virtual void enterGroupByEmpty(TplSqlParser::GroupByEmptyContext * /*ctx*/) override { }
  virtual void exitGroupByEmpty(TplSqlParser::GroupByEmptyContext * /*ctx*/) override { }

  virtual void enterHavingClause(TplSqlParser::HavingClauseContext * /*ctx*/) override { }
  virtual void exitHavingClause(TplSqlParser::HavingClauseContext * /*ctx*/) override { }

  virtual void enterHavingCondition(TplSqlParser::HavingConditionContext * /*ctx*/) override { }
  virtual void exitHavingCondition(TplSqlParser::HavingConditionContext * /*ctx*/) override { }

  virtual void enterWindow_clause(TplSqlParser::Window_clauseContext * /*ctx*/) override { }
  virtual void exitWindow_clause(TplSqlParser::Window_clauseContext * /*ctx*/) override { }

  virtual void enterWindow_defn(TplSqlParser::Window_defnContext * /*ctx*/) override { }
  virtual void exitWindow_defn(TplSqlParser::Window_defnContext * /*ctx*/) override { }

  virtual void enterSetOpSelectStatement(TplSqlParser::SetOpSelectStatementContext * /*ctx*/) override { }
  virtual void exitSetOpSelectStatement(TplSqlParser::SetOpSelectStatementContext * /*ctx*/) override { }

  virtual void enterSetOperator(TplSqlParser::SetOperatorContext * /*ctx*/) override { }
  virtual void exitSetOperator(TplSqlParser::SetOperatorContext * /*ctx*/) override { }

  virtual void enterLimitClause(TplSqlParser::LimitClauseContext * /*ctx*/) override { }
  virtual void exitLimitClause(TplSqlParser::LimitClauseContext * /*ctx*/) override { }

  virtual void enterAdqlPrimitiveType(TplSqlParser::AdqlPrimitiveTypeContext * /*ctx*/) override { }
  virtual void exitAdqlPrimitiveType(TplSqlParser::AdqlPrimitiveTypeContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

