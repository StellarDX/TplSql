
// Generated from ./ADQLParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "ADQLParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by ADQLParser.
 */
class  ADQLParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterAdql(ADQLParser::AdqlContext *ctx) = 0;
  virtual void exitAdql(ADQLParser::AdqlContext *ctx) = 0;

  virtual void enterQueryStatementExpression(ADQLParser::QueryStatementExpressionContext *ctx) = 0;
  virtual void exitQueryStatementExpression(ADQLParser::QueryStatementExpressionContext *ctx) = 0;

  virtual void enterWithClause(ADQLParser::WithClauseContext *ctx) = 0;
  virtual void exitWithClause(ADQLParser::WithClauseContext *ctx) = 0;

  virtual void enterCteStatement(ADQLParser::CteStatementContext *ctx) = 0;
  virtual void exitCteStatement(ADQLParser::CteStatementContext *ctx) = 0;

  virtual void enterId_(ADQLParser::Id_Context *ctx) = 0;
  virtual void exitId_(ADQLParser::Id_Context *ctx) = 0;

  virtual void enterQueryStatementExpressionBody(ADQLParser::QueryStatementExpressionBodyContext *ctx) = 0;
  virtual void exitQueryStatementExpressionBody(ADQLParser::QueryStatementExpressionBodyContext *ctx) = 0;

  virtual void enterRegularBody(ADQLParser::RegularBodyContext *ctx) = 0;
  virtual void exitRegularBody(ADQLParser::RegularBodyContext *ctx) = 0;

  virtual void enterSelectStatement(ADQLParser::SelectStatementContext *ctx) = 0;
  virtual void exitSelectStatement(ADQLParser::SelectStatementContext *ctx) = 0;

  virtual void enterAtomSelectStatement(ADQLParser::AtomSelectStatementContext *ctx) = 0;
  virtual void exitAtomSelectStatement(ADQLParser::AtomSelectStatementContext *ctx) = 0;

  virtual void enterSelectClause(ADQLParser::SelectClauseContext *ctx) = 0;
  virtual void exitSelectClause(ADQLParser::SelectClauseContext *ctx) = 0;

  virtual void enterAll_distinct(ADQLParser::All_distinctContext *ctx) = 0;
  virtual void exitAll_distinct(ADQLParser::All_distinctContext *ctx) = 0;

  virtual void enterSet_limit(ADQLParser::Set_limitContext *ctx) = 0;
  virtual void exitSet_limit(ADQLParser::Set_limitContext *ctx) = 0;

  virtual void enterSelectList(ADQLParser::SelectListContext *ctx) = 0;
  virtual void exitSelectList(ADQLParser::SelectListContext *ctx) = 0;

  virtual void enterSelectItem(ADQLParser::SelectItemContext *ctx) = 0;
  virtual void exitSelectItem(ADQLParser::SelectItemContext *ctx) = 0;

  virtual void enterTableAllColumns(ADQLParser::TableAllColumnsContext *ctx) = 0;
  virtual void exitTableAllColumns(ADQLParser::TableAllColumnsContext *ctx) = 0;

  virtual void enterTableName(ADQLParser::TableNameContext *ctx) = 0;
  virtual void exitTableName(ADQLParser::TableNameContext *ctx) = 0;

  virtual void enterExpression(ADQLParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(ADQLParser::ExpressionContext *ctx) = 0;

  virtual void enterPrecedenceOrExpression(ADQLParser::PrecedenceOrExpressionContext *ctx) = 0;
  virtual void exitPrecedenceOrExpression(ADQLParser::PrecedenceOrExpressionContext *ctx) = 0;

  virtual void enterPrecedenceAndExpression(ADQLParser::PrecedenceAndExpressionContext *ctx) = 0;
  virtual void exitPrecedenceAndExpression(ADQLParser::PrecedenceAndExpressionContext *ctx) = 0;

  virtual void enterPrecedenceNotExpression(ADQLParser::PrecedenceNotExpressionContext *ctx) = 0;
  virtual void exitPrecedenceNotExpression(ADQLParser::PrecedenceNotExpressionContext *ctx) = 0;

  virtual void enterPrecedenceNotOperator(ADQLParser::PrecedenceNotOperatorContext *ctx) = 0;
  virtual void exitPrecedenceNotOperator(ADQLParser::PrecedenceNotOperatorContext *ctx) = 0;

  virtual void enterPrecedenceUnarySuffixExpression(ADQLParser::PrecedenceUnarySuffixExpressionContext *ctx) = 0;
  virtual void exitPrecedenceUnarySuffixExpression(ADQLParser::PrecedenceUnarySuffixExpressionContext *ctx) = 0;

  virtual void enterPrecedenceEqualExpression(ADQLParser::PrecedenceEqualExpressionContext *ctx) = 0;
  virtual void exitPrecedenceEqualExpression(ADQLParser::PrecedenceEqualExpressionContext *ctx) = 0;

  virtual void enterPrecedenceSimilarExpression(ADQLParser::PrecedenceSimilarExpressionContext *ctx) = 0;
  virtual void exitPrecedenceSimilarExpression(ADQLParser::PrecedenceSimilarExpressionContext *ctx) = 0;

  virtual void enterPrecedenceSimilarExpressionMain(ADQLParser::PrecedenceSimilarExpressionMainContext *ctx) = 0;
  virtual void exitPrecedenceSimilarExpressionMain(ADQLParser::PrecedenceSimilarExpressionMainContext *ctx) = 0;

  virtual void enterPrecedenceBitwiseOrExpression(ADQLParser::PrecedenceBitwiseOrExpressionContext *ctx) = 0;
  virtual void exitPrecedenceBitwiseOrExpression(ADQLParser::PrecedenceBitwiseOrExpressionContext *ctx) = 0;

  virtual void enterPrecedenceAmpersandExpression(ADQLParser::PrecedenceAmpersandExpressionContext *ctx) = 0;
  virtual void exitPrecedenceAmpersandExpression(ADQLParser::PrecedenceAmpersandExpressionContext *ctx) = 0;

  virtual void enterPrecedenceConcatenateExpression(ADQLParser::PrecedenceConcatenateExpressionContext *ctx) = 0;
  virtual void exitPrecedenceConcatenateExpression(ADQLParser::PrecedenceConcatenateExpressionContext *ctx) = 0;

  virtual void enterPrecedencePlusExpression(ADQLParser::PrecedencePlusExpressionContext *ctx) = 0;
  virtual void exitPrecedencePlusExpression(ADQLParser::PrecedencePlusExpressionContext *ctx) = 0;

  virtual void enterPrecedenceStarExpression(ADQLParser::PrecedenceStarExpressionContext *ctx) = 0;
  virtual void exitPrecedenceStarExpression(ADQLParser::PrecedenceStarExpressionContext *ctx) = 0;

  virtual void enterPrecedenceBitwiseXorExpression(ADQLParser::PrecedenceBitwiseXorExpressionContext *ctx) = 0;
  virtual void exitPrecedenceBitwiseXorExpression(ADQLParser::PrecedenceBitwiseXorExpressionContext *ctx) = 0;

  virtual void enterPrecedenceUnaryPrefixExpression(ADQLParser::PrecedenceUnaryPrefixExpressionContext *ctx) = 0;
  virtual void exitPrecedenceUnaryPrefixExpression(ADQLParser::PrecedenceUnaryPrefixExpressionContext *ctx) = 0;

  virtual void enterPrecedenceUnaryOperator(ADQLParser::PrecedenceUnaryOperatorContext *ctx) = 0;
  virtual void exitPrecedenceUnaryOperator(ADQLParser::PrecedenceUnaryOperatorContext *ctx) = 0;

  virtual void enterPrecedenceFieldExpression(ADQLParser::PrecedenceFieldExpressionContext *ctx) = 0;
  virtual void exitPrecedenceFieldExpression(ADQLParser::PrecedenceFieldExpressionContext *ctx) = 0;

  virtual void enterAtomExpression(ADQLParser::AtomExpressionContext *ctx) = 0;
  virtual void exitAtomExpression(ADQLParser::AtomExpressionContext *ctx) = 0;

  virtual void enterConstant(ADQLParser::ConstantContext *ctx) = 0;
  virtual void exitConstant(ADQLParser::ConstantContext *ctx) = 0;

  virtual void enterIntervalLiteral(ADQLParser::IntervalLiteralContext *ctx) = 0;
  virtual void exitIntervalLiteral(ADQLParser::IntervalLiteralContext *ctx) = 0;

  virtual void enterIntervalValue(ADQLParser::IntervalValueContext *ctx) = 0;
  virtual void exitIntervalValue(ADQLParser::IntervalValueContext *ctx) = 0;

  virtual void enterIntervalQualifiers(ADQLParser::IntervalQualifiersContext *ctx) = 0;
  virtual void exitIntervalQualifiers(ADQLParser::IntervalQualifiersContext *ctx) = 0;

  virtual void enterDateLiteral(ADQLParser::DateLiteralContext *ctx) = 0;
  virtual void exitDateLiteral(ADQLParser::DateLiteralContext *ctx) = 0;

  virtual void enterTimestampLiteral(ADQLParser::TimestampLiteralContext *ctx) = 0;
  virtual void exitTimestampLiteral(ADQLParser::TimestampLiteralContext *ctx) = 0;

  virtual void enterTimestampLocalTZLiteral(ADQLParser::TimestampLocalTZLiteralContext *ctx) = 0;
  virtual void exitTimestampLocalTZLiteral(ADQLParser::TimestampLocalTZLiteralContext *ctx) = 0;

  virtual void enterStringLiteralSequence(ADQLParser::StringLiteralSequenceContext *ctx) = 0;
  virtual void exitStringLiteralSequence(ADQLParser::StringLiteralSequenceContext *ctx) = 0;

  virtual void enterCharSetStringLiteral(ADQLParser::CharSetStringLiteralContext *ctx) = 0;
  virtual void exitCharSetStringLiteral(ADQLParser::CharSetStringLiteralContext *ctx) = 0;

  virtual void enterBooleanValue(ADQLParser::BooleanValueContext *ctx) = 0;
  virtual void exitBooleanValue(ADQLParser::BooleanValueContext *ctx) = 0;

  virtual void enterPrepareStmtParam(ADQLParser::PrepareStmtParamContext *ctx) = 0;
  virtual void exitPrepareStmtParam(ADQLParser::PrepareStmtParamContext *ctx) = 0;

  virtual void enterParameterIdx(ADQLParser::ParameterIdxContext *ctx) = 0;
  virtual void exitParameterIdx(ADQLParser::ParameterIdxContext *ctx) = 0;

  virtual void enterIntervalExpression(ADQLParser::IntervalExpressionContext *ctx) = 0;
  virtual void exitIntervalExpression(ADQLParser::IntervalExpressionContext *ctx) = 0;

  virtual void enterCastExpression(ADQLParser::CastExpressionContext *ctx) = 0;
  virtual void exitCastExpression(ADQLParser::CastExpressionContext *ctx) = 0;

  virtual void enterPrimitiveType(ADQLParser::PrimitiveTypeContext *ctx) = 0;
  virtual void exitPrimitiveType(ADQLParser::PrimitiveTypeContext *ctx) = 0;

  virtual void enterExtractExpression(ADQLParser::ExtractExpressionContext *ctx) = 0;
  virtual void exitExtractExpression(ADQLParser::ExtractExpressionContext *ctx) = 0;

  virtual void enterTimeQualifiers(ADQLParser::TimeQualifiersContext *ctx) = 0;
  virtual void exitTimeQualifiers(ADQLParser::TimeQualifiersContext *ctx) = 0;

  virtual void enterFloorExpression(ADQLParser::FloorExpressionContext *ctx) = 0;
  virtual void exitFloorExpression(ADQLParser::FloorExpressionContext *ctx) = 0;

  virtual void enterFloorDateQualifiers(ADQLParser::FloorDateQualifiersContext *ctx) = 0;
  virtual void exitFloorDateQualifiers(ADQLParser::FloorDateQualifiersContext *ctx) = 0;

  virtual void enterCaseExpression(ADQLParser::CaseExpressionContext *ctx) = 0;
  virtual void exitCaseExpression(ADQLParser::CaseExpressionContext *ctx) = 0;

  virtual void enterWhenExpression(ADQLParser::WhenExpressionContext *ctx) = 0;
  virtual void exitWhenExpression(ADQLParser::WhenExpressionContext *ctx) = 0;

  virtual void enterSubQueryExpression(ADQLParser::SubQueryExpressionContext *ctx) = 0;
  virtual void exitSubQueryExpression(ADQLParser::SubQueryExpressionContext *ctx) = 0;

  virtual void enterFunction_(ADQLParser::Function_Context *ctx) = 0;
  virtual void exitFunction_(ADQLParser::Function_Context *ctx) = 0;

  virtual void enterTrimFunction(ADQLParser::TrimFunctionContext *ctx) = 0;
  virtual void exitTrimFunction(ADQLParser::TrimFunctionContext *ctx) = 0;

  virtual void enterFunctionName(ADQLParser::FunctionNameContext *ctx) = 0;
  virtual void exitFunctionName(ADQLParser::FunctionNameContext *ctx) = 0;

  virtual void enterFunctionIdentifier(ADQLParser::FunctionIdentifierContext *ctx) = 0;
  virtual void exitFunctionIdentifier(ADQLParser::FunctionIdentifierContext *ctx) = 0;

  virtual void enterSql11ReservedKeywordsUsedAsFunctionName(ADQLParser::Sql11ReservedKeywordsUsedAsFunctionNameContext *ctx) = 0;
  virtual void exitSql11ReservedKeywordsUsedAsFunctionName(ADQLParser::Sql11ReservedKeywordsUsedAsFunctionNameContext *ctx) = 0;

  virtual void enterSelectExpression(ADQLParser::SelectExpressionContext *ctx) = 0;
  virtual void exitSelectExpression(ADQLParser::SelectExpressionContext *ctx) = 0;

  virtual void enterOrderByClause(ADQLParser::OrderByClauseContext *ctx) = 0;
  virtual void exitOrderByClause(ADQLParser::OrderByClauseContext *ctx) = 0;

  virtual void enterColumnRefOrder(ADQLParser::ColumnRefOrderContext *ctx) = 0;
  virtual void exitColumnRefOrder(ADQLParser::ColumnRefOrderContext *ctx) = 0;

  virtual void enterOrderSpecificationRewrite(ADQLParser::OrderSpecificationRewriteContext *ctx) = 0;
  virtual void exitOrderSpecificationRewrite(ADQLParser::OrderSpecificationRewriteContext *ctx) = 0;

  virtual void enterNullOrdering(ADQLParser::NullOrderingContext *ctx) = 0;
  virtual void exitNullOrdering(ADQLParser::NullOrderingContext *ctx) = 0;

  virtual void enterNull_treatment(ADQLParser::Null_treatmentContext *ctx) = 0;
  virtual void exitNull_treatment(ADQLParser::Null_treatmentContext *ctx) = 0;

  virtual void enterWindow_specification(ADQLParser::Window_specificationContext *ctx) = 0;
  virtual void exitWindow_specification(ADQLParser::Window_specificationContext *ctx) = 0;

  virtual void enterPartitioningSpec(ADQLParser::PartitioningSpecContext *ctx) = 0;
  virtual void exitPartitioningSpec(ADQLParser::PartitioningSpecContext *ctx) = 0;

  virtual void enterPartitionByClause(ADQLParser::PartitionByClauseContext *ctx) = 0;
  virtual void exitPartitionByClause(ADQLParser::PartitionByClauseContext *ctx) = 0;

  virtual void enterExpressions(ADQLParser::ExpressionsContext *ctx) = 0;
  virtual void exitExpressions(ADQLParser::ExpressionsContext *ctx) = 0;

  virtual void enterExpressionsInParenthesis(ADQLParser::ExpressionsInParenthesisContext *ctx) = 0;
  virtual void exitExpressionsInParenthesis(ADQLParser::ExpressionsInParenthesisContext *ctx) = 0;

  virtual void enterExpressionsNotInParenthesis(ADQLParser::ExpressionsNotInParenthesisContext *ctx) = 0;
  virtual void exitExpressionsNotInParenthesis(ADQLParser::ExpressionsNotInParenthesisContext *ctx) = 0;

  virtual void enterExpressionOrDefault(ADQLParser::ExpressionOrDefaultContext *ctx) = 0;
  virtual void exitExpressionOrDefault(ADQLParser::ExpressionOrDefaultContext *ctx) = 0;

  virtual void enterDefaultValue(ADQLParser::DefaultValueContext *ctx) = 0;
  virtual void exitDefaultValue(ADQLParser::DefaultValueContext *ctx) = 0;

  virtual void enterExpressionPart(ADQLParser::ExpressionPartContext *ctx) = 0;
  virtual void exitExpressionPart(ADQLParser::ExpressionPartContext *ctx) = 0;

  virtual void enterDistributeByClause(ADQLParser::DistributeByClauseContext *ctx) = 0;
  virtual void exitDistributeByClause(ADQLParser::DistributeByClauseContext *ctx) = 0;

  virtual void enterSortByClause(ADQLParser::SortByClauseContext *ctx) = 0;
  virtual void exitSortByClause(ADQLParser::SortByClauseContext *ctx) = 0;

  virtual void enterColumnRefOrderInParenthesis(ADQLParser::ColumnRefOrderInParenthesisContext *ctx) = 0;
  virtual void exitColumnRefOrderInParenthesis(ADQLParser::ColumnRefOrderInParenthesisContext *ctx) = 0;

  virtual void enterColumnRefOrderNotInParenthesis(ADQLParser::ColumnRefOrderNotInParenthesisContext *ctx) = 0;
  virtual void exitColumnRefOrderNotInParenthesis(ADQLParser::ColumnRefOrderNotInParenthesisContext *ctx) = 0;

  virtual void enterClusterByClause(ADQLParser::ClusterByClauseContext *ctx) = 0;
  virtual void exitClusterByClause(ADQLParser::ClusterByClauseContext *ctx) = 0;

  virtual void enterWindow_frame(ADQLParser::Window_frameContext *ctx) = 0;
  virtual void exitWindow_frame(ADQLParser::Window_frameContext *ctx) = 0;

  virtual void enterWindow_range_expression(ADQLParser::Window_range_expressionContext *ctx) = 0;
  virtual void exitWindow_range_expression(ADQLParser::Window_range_expressionContext *ctx) = 0;

  virtual void enterWindow_frame_start_boundary(ADQLParser::Window_frame_start_boundaryContext *ctx) = 0;
  virtual void exitWindow_frame_start_boundary(ADQLParser::Window_frame_start_boundaryContext *ctx) = 0;

  virtual void enterWindow_frame_boundary(ADQLParser::Window_frame_boundaryContext *ctx) = 0;
  virtual void exitWindow_frame_boundary(ADQLParser::Window_frame_boundaryContext *ctx) = 0;

  virtual void enterWindow_value_expression(ADQLParser::Window_value_expressionContext *ctx) = 0;
  virtual void exitWindow_value_expression(ADQLParser::Window_value_expressionContext *ctx) = 0;

  virtual void enterTableOrColumn(ADQLParser::TableOrColumnContext *ctx) = 0;
  virtual void exitTableOrColumn(ADQLParser::TableOrColumnContext *ctx) = 0;

  virtual void enterPrecedenceBitwiseXorOperator(ADQLParser::PrecedenceBitwiseXorOperatorContext *ctx) = 0;
  virtual void exitPrecedenceBitwiseXorOperator(ADQLParser::PrecedenceBitwiseXorOperatorContext *ctx) = 0;

  virtual void enterPrecedenceStarOperator(ADQLParser::PrecedenceStarOperatorContext *ctx) = 0;
  virtual void exitPrecedenceStarOperator(ADQLParser::PrecedenceStarOperatorContext *ctx) = 0;

  virtual void enterPrecedencePlusOperator(ADQLParser::PrecedencePlusOperatorContext *ctx) = 0;
  virtual void exitPrecedencePlusOperator(ADQLParser::PrecedencePlusOperatorContext *ctx) = 0;

  virtual void enterPrecedenceConcatenateOperator(ADQLParser::PrecedenceConcatenateOperatorContext *ctx) = 0;
  virtual void exitPrecedenceConcatenateOperator(ADQLParser::PrecedenceConcatenateOperatorContext *ctx) = 0;

  virtual void enterPrecedenceAmpersandOperator(ADQLParser::PrecedenceAmpersandOperatorContext *ctx) = 0;
  virtual void exitPrecedenceAmpersandOperator(ADQLParser::PrecedenceAmpersandOperatorContext *ctx) = 0;

  virtual void enterPrecedenceBitwiseOrOperator(ADQLParser::PrecedenceBitwiseOrOperatorContext *ctx) = 0;
  virtual void exitPrecedenceBitwiseOrOperator(ADQLParser::PrecedenceBitwiseOrOperatorContext *ctx) = 0;

  virtual void enterPrecedenceSimilarExpressionPart(ADQLParser::PrecedenceSimilarExpressionPartContext *ctx) = 0;
  virtual void exitPrecedenceSimilarExpressionPart(ADQLParser::PrecedenceSimilarExpressionPartContext *ctx) = 0;

  virtual void enterPrecedenceSimilarOperator(ADQLParser::PrecedenceSimilarOperatorContext *ctx) = 0;
  virtual void exitPrecedenceSimilarOperator(ADQLParser::PrecedenceSimilarOperatorContext *ctx) = 0;

  virtual void enterPrecedenceRegexpOperator(ADQLParser::PrecedenceRegexpOperatorContext *ctx) = 0;
  virtual void exitPrecedenceRegexpOperator(ADQLParser::PrecedenceRegexpOperatorContext *ctx) = 0;

  virtual void enterPrecedenceSimilarExpressionAtom(ADQLParser::PrecedenceSimilarExpressionAtomContext *ctx) = 0;
  virtual void exitPrecedenceSimilarExpressionAtom(ADQLParser::PrecedenceSimilarExpressionAtomContext *ctx) = 0;

  virtual void enterPrecedenceSimilarExpressionQuantifierPredicate(ADQLParser::PrecedenceSimilarExpressionQuantifierPredicateContext *ctx) = 0;
  virtual void exitPrecedenceSimilarExpressionQuantifierPredicate(ADQLParser::PrecedenceSimilarExpressionQuantifierPredicateContext *ctx) = 0;

  virtual void enterSubQuerySelectorOperator(ADQLParser::SubQuerySelectorOperatorContext *ctx) = 0;
  virtual void exitSubQuerySelectorOperator(ADQLParser::SubQuerySelectorOperatorContext *ctx) = 0;

  virtual void enterQuantifierType(ADQLParser::QuantifierTypeContext *ctx) = 0;
  virtual void exitQuantifierType(ADQLParser::QuantifierTypeContext *ctx) = 0;

  virtual void enterPrecedenceSimilarExpressionPartNot(ADQLParser::PrecedenceSimilarExpressionPartNotContext *ctx) = 0;
  virtual void exitPrecedenceSimilarExpressionPartNot(ADQLParser::PrecedenceSimilarExpressionPartNotContext *ctx) = 0;

  virtual void enterPrecedenceSimilarExpressionIn(ADQLParser::PrecedenceSimilarExpressionInContext *ctx) = 0;
  virtual void exitPrecedenceSimilarExpressionIn(ADQLParser::PrecedenceSimilarExpressionInContext *ctx) = 0;

  virtual void enterPrecedenceEqualOperator(ADQLParser::PrecedenceEqualOperatorContext *ctx) = 0;
  virtual void exitPrecedenceEqualOperator(ADQLParser::PrecedenceEqualOperatorContext *ctx) = 0;

  virtual void enterPrecedenceDistinctOperator(ADQLParser::PrecedenceDistinctOperatorContext *ctx) = 0;
  virtual void exitPrecedenceDistinctOperator(ADQLParser::PrecedenceDistinctOperatorContext *ctx) = 0;

  virtual void enterIsCondition(ADQLParser::IsConditionContext *ctx) = 0;
  virtual void exitIsCondition(ADQLParser::IsConditionContext *ctx) = 0;

  virtual void enterPrecedenceAndOperator(ADQLParser::PrecedenceAndOperatorContext *ctx) = 0;
  virtual void exitPrecedenceAndOperator(ADQLParser::PrecedenceAndOperatorContext *ctx) = 0;

  virtual void enterPrecedenceOrOperator(ADQLParser::PrecedenceOrOperatorContext *ctx) = 0;
  virtual void exitPrecedenceOrOperator(ADQLParser::PrecedenceOrOperatorContext *ctx) = 0;

  virtual void enterFromClause(ADQLParser::FromClauseContext *ctx) = 0;
  virtual void exitFromClause(ADQLParser::FromClauseContext *ctx) = 0;

  virtual void enterFromSource(ADQLParser::FromSourceContext *ctx) = 0;
  virtual void exitFromSource(ADQLParser::FromSourceContext *ctx) = 0;

  virtual void enterJoinSource(ADQLParser::JoinSourceContext *ctx) = 0;
  virtual void exitJoinSource(ADQLParser::JoinSourceContext *ctx) = 0;

  virtual void enterAtomjoinSource(ADQLParser::AtomjoinSourceContext *ctx) = 0;
  virtual void exitAtomjoinSource(ADQLParser::AtomjoinSourceContext *ctx) = 0;

  virtual void enterTableSource(ADQLParser::TableSourceContext *ctx) = 0;
  virtual void exitTableSource(ADQLParser::TableSourceContext *ctx) = 0;

  virtual void enterSubQuerySource(ADQLParser::SubQuerySourceContext *ctx) = 0;
  virtual void exitSubQuerySource(ADQLParser::SubQuerySourceContext *ctx) = 0;

  virtual void enterJoinToken(ADQLParser::JoinTokenContext *ctx) = 0;
  virtual void exitJoinToken(ADQLParser::JoinTokenContext *ctx) = 0;

  virtual void enterJoinSourcePart(ADQLParser::JoinSourcePartContext *ctx) = 0;
  virtual void exitJoinSourcePart(ADQLParser::JoinSourcePartContext *ctx) = 0;

  virtual void enterColumnParenthesesList(ADQLParser::ColumnParenthesesListContext *ctx) = 0;
  virtual void exitColumnParenthesesList(ADQLParser::ColumnParenthesesListContext *ctx) = 0;

  virtual void enterColumnNameList(ADQLParser::ColumnNameListContext *ctx) = 0;
  virtual void exitColumnNameList(ADQLParser::ColumnNameListContext *ctx) = 0;

  virtual void enterColumnName(ADQLParser::ColumnNameContext *ctx) = 0;
  virtual void exitColumnName(ADQLParser::ColumnNameContext *ctx) = 0;

  virtual void enterWhereClause(ADQLParser::WhereClauseContext *ctx) = 0;
  virtual void exitWhereClause(ADQLParser::WhereClauseContext *ctx) = 0;

  virtual void enterSearchCondition(ADQLParser::SearchConditionContext *ctx) = 0;
  virtual void exitSearchCondition(ADQLParser::SearchConditionContext *ctx) = 0;

  virtual void enterGroupByClause(ADQLParser::GroupByClauseContext *ctx) = 0;
  virtual void exitGroupByClause(ADQLParser::GroupByClauseContext *ctx) = 0;

  virtual void enterGroupby_expression(ADQLParser::Groupby_expressionContext *ctx) = 0;
  virtual void exitGroupby_expression(ADQLParser::Groupby_expressionContext *ctx) = 0;

  virtual void enterRollupOldSyntax(ADQLParser::RollupOldSyntaxContext *ctx) = 0;
  virtual void exitRollupOldSyntax(ADQLParser::RollupOldSyntaxContext *ctx) = 0;

  virtual void enterGroupByEmpty(ADQLParser::GroupByEmptyContext *ctx) = 0;
  virtual void exitGroupByEmpty(ADQLParser::GroupByEmptyContext *ctx) = 0;

  virtual void enterHavingClause(ADQLParser::HavingClauseContext *ctx) = 0;
  virtual void exitHavingClause(ADQLParser::HavingClauseContext *ctx) = 0;

  virtual void enterHavingCondition(ADQLParser::HavingConditionContext *ctx) = 0;
  virtual void exitHavingCondition(ADQLParser::HavingConditionContext *ctx) = 0;

  virtual void enterWindow_clause(ADQLParser::Window_clauseContext *ctx) = 0;
  virtual void exitWindow_clause(ADQLParser::Window_clauseContext *ctx) = 0;

  virtual void enterWindow_defn(ADQLParser::Window_defnContext *ctx) = 0;
  virtual void exitWindow_defn(ADQLParser::Window_defnContext *ctx) = 0;

  virtual void enterSetOpSelectStatement(ADQLParser::SetOpSelectStatementContext *ctx) = 0;
  virtual void exitSetOpSelectStatement(ADQLParser::SetOpSelectStatementContext *ctx) = 0;

  virtual void enterSetOperator(ADQLParser::SetOperatorContext *ctx) = 0;
  virtual void exitSetOperator(ADQLParser::SetOperatorContext *ctx) = 0;

  virtual void enterLimitClause(ADQLParser::LimitClauseContext *ctx) = 0;
  virtual void exitLimitClause(ADQLParser::LimitClauseContext *ctx) = 0;

  virtual void enterNonReserved(ADQLParser::NonReservedContext *ctx) = 0;
  virtual void exitNonReserved(ADQLParser::NonReservedContext *ctx) = 0;


};

