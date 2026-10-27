
// Generated from ./ADQLParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "ADQLParserListener.h"


/**
 * This class provides an empty implementation of ADQLParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  ADQLParserBaseListener : public ADQLParserListener {
public:

  virtual void enterAdql(ADQLParser::AdqlContext * /*ctx*/) override { }
  virtual void exitAdql(ADQLParser::AdqlContext * /*ctx*/) override { }

  virtual void enterQueryStatementExpression(ADQLParser::QueryStatementExpressionContext * /*ctx*/) override { }
  virtual void exitQueryStatementExpression(ADQLParser::QueryStatementExpressionContext * /*ctx*/) override { }

  virtual void enterWithClause(ADQLParser::WithClauseContext * /*ctx*/) override { }
  virtual void exitWithClause(ADQLParser::WithClauseContext * /*ctx*/) override { }

  virtual void enterCteStatement(ADQLParser::CteStatementContext * /*ctx*/) override { }
  virtual void exitCteStatement(ADQLParser::CteStatementContext * /*ctx*/) override { }

  virtual void enterId_(ADQLParser::Id_Context * /*ctx*/) override { }
  virtual void exitId_(ADQLParser::Id_Context * /*ctx*/) override { }

  virtual void enterQueryStatementExpressionBody(ADQLParser::QueryStatementExpressionBodyContext * /*ctx*/) override { }
  virtual void exitQueryStatementExpressionBody(ADQLParser::QueryStatementExpressionBodyContext * /*ctx*/) override { }

  virtual void enterRegularBody(ADQLParser::RegularBodyContext * /*ctx*/) override { }
  virtual void exitRegularBody(ADQLParser::RegularBodyContext * /*ctx*/) override { }

  virtual void enterSelectStatement(ADQLParser::SelectStatementContext * /*ctx*/) override { }
  virtual void exitSelectStatement(ADQLParser::SelectStatementContext * /*ctx*/) override { }

  virtual void enterAtomSelectStatement(ADQLParser::AtomSelectStatementContext * /*ctx*/) override { }
  virtual void exitAtomSelectStatement(ADQLParser::AtomSelectStatementContext * /*ctx*/) override { }

  virtual void enterSelectClause(ADQLParser::SelectClauseContext * /*ctx*/) override { }
  virtual void exitSelectClause(ADQLParser::SelectClauseContext * /*ctx*/) override { }

  virtual void enterAll_distinct(ADQLParser::All_distinctContext * /*ctx*/) override { }
  virtual void exitAll_distinct(ADQLParser::All_distinctContext * /*ctx*/) override { }

  virtual void enterSet_limit(ADQLParser::Set_limitContext * /*ctx*/) override { }
  virtual void exitSet_limit(ADQLParser::Set_limitContext * /*ctx*/) override { }

  virtual void enterSelectList(ADQLParser::SelectListContext * /*ctx*/) override { }
  virtual void exitSelectList(ADQLParser::SelectListContext * /*ctx*/) override { }

  virtual void enterSelectItem(ADQLParser::SelectItemContext * /*ctx*/) override { }
  virtual void exitSelectItem(ADQLParser::SelectItemContext * /*ctx*/) override { }

  virtual void enterTableAllColumns(ADQLParser::TableAllColumnsContext * /*ctx*/) override { }
  virtual void exitTableAllColumns(ADQLParser::TableAllColumnsContext * /*ctx*/) override { }

  virtual void enterTableName(ADQLParser::TableNameContext * /*ctx*/) override { }
  virtual void exitTableName(ADQLParser::TableNameContext * /*ctx*/) override { }

  virtual void enterExpression(ADQLParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(ADQLParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterPrecedenceOrExpression(ADQLParser::PrecedenceOrExpressionContext * /*ctx*/) override { }
  virtual void exitPrecedenceOrExpression(ADQLParser::PrecedenceOrExpressionContext * /*ctx*/) override { }

  virtual void enterPrecedenceAndExpression(ADQLParser::PrecedenceAndExpressionContext * /*ctx*/) override { }
  virtual void exitPrecedenceAndExpression(ADQLParser::PrecedenceAndExpressionContext * /*ctx*/) override { }

  virtual void enterPrecedenceNotExpression(ADQLParser::PrecedenceNotExpressionContext * /*ctx*/) override { }
  virtual void exitPrecedenceNotExpression(ADQLParser::PrecedenceNotExpressionContext * /*ctx*/) override { }

  virtual void enterPrecedenceNotOperator(ADQLParser::PrecedenceNotOperatorContext * /*ctx*/) override { }
  virtual void exitPrecedenceNotOperator(ADQLParser::PrecedenceNotOperatorContext * /*ctx*/) override { }

  virtual void enterPrecedenceUnarySuffixExpression(ADQLParser::PrecedenceUnarySuffixExpressionContext * /*ctx*/) override { }
  virtual void exitPrecedenceUnarySuffixExpression(ADQLParser::PrecedenceUnarySuffixExpressionContext * /*ctx*/) override { }

  virtual void enterPrecedenceEqualExpression(ADQLParser::PrecedenceEqualExpressionContext * /*ctx*/) override { }
  virtual void exitPrecedenceEqualExpression(ADQLParser::PrecedenceEqualExpressionContext * /*ctx*/) override { }

  virtual void enterPrecedenceSimilarExpression(ADQLParser::PrecedenceSimilarExpressionContext * /*ctx*/) override { }
  virtual void exitPrecedenceSimilarExpression(ADQLParser::PrecedenceSimilarExpressionContext * /*ctx*/) override { }

  virtual void enterPrecedenceSimilarExpressionMain(ADQLParser::PrecedenceSimilarExpressionMainContext * /*ctx*/) override { }
  virtual void exitPrecedenceSimilarExpressionMain(ADQLParser::PrecedenceSimilarExpressionMainContext * /*ctx*/) override { }

  virtual void enterPrecedenceBitwiseOrExpression(ADQLParser::PrecedenceBitwiseOrExpressionContext * /*ctx*/) override { }
  virtual void exitPrecedenceBitwiseOrExpression(ADQLParser::PrecedenceBitwiseOrExpressionContext * /*ctx*/) override { }

  virtual void enterPrecedenceAmpersandExpression(ADQLParser::PrecedenceAmpersandExpressionContext * /*ctx*/) override { }
  virtual void exitPrecedenceAmpersandExpression(ADQLParser::PrecedenceAmpersandExpressionContext * /*ctx*/) override { }

  virtual void enterPrecedenceConcatenateExpression(ADQLParser::PrecedenceConcatenateExpressionContext * /*ctx*/) override { }
  virtual void exitPrecedenceConcatenateExpression(ADQLParser::PrecedenceConcatenateExpressionContext * /*ctx*/) override { }

  virtual void enterPrecedencePlusExpression(ADQLParser::PrecedencePlusExpressionContext * /*ctx*/) override { }
  virtual void exitPrecedencePlusExpression(ADQLParser::PrecedencePlusExpressionContext * /*ctx*/) override { }

  virtual void enterPrecedenceStarExpression(ADQLParser::PrecedenceStarExpressionContext * /*ctx*/) override { }
  virtual void exitPrecedenceStarExpression(ADQLParser::PrecedenceStarExpressionContext * /*ctx*/) override { }

  virtual void enterPrecedenceBitwiseXorExpression(ADQLParser::PrecedenceBitwiseXorExpressionContext * /*ctx*/) override { }
  virtual void exitPrecedenceBitwiseXorExpression(ADQLParser::PrecedenceBitwiseXorExpressionContext * /*ctx*/) override { }

  virtual void enterPrecedenceUnaryPrefixExpression(ADQLParser::PrecedenceUnaryPrefixExpressionContext * /*ctx*/) override { }
  virtual void exitPrecedenceUnaryPrefixExpression(ADQLParser::PrecedenceUnaryPrefixExpressionContext * /*ctx*/) override { }

  virtual void enterPrecedenceUnaryOperator(ADQLParser::PrecedenceUnaryOperatorContext * /*ctx*/) override { }
  virtual void exitPrecedenceUnaryOperator(ADQLParser::PrecedenceUnaryOperatorContext * /*ctx*/) override { }

  virtual void enterPrecedenceFieldExpression(ADQLParser::PrecedenceFieldExpressionContext * /*ctx*/) override { }
  virtual void exitPrecedenceFieldExpression(ADQLParser::PrecedenceFieldExpressionContext * /*ctx*/) override { }

  virtual void enterAtomExpression(ADQLParser::AtomExpressionContext * /*ctx*/) override { }
  virtual void exitAtomExpression(ADQLParser::AtomExpressionContext * /*ctx*/) override { }

  virtual void enterConstant(ADQLParser::ConstantContext * /*ctx*/) override { }
  virtual void exitConstant(ADQLParser::ConstantContext * /*ctx*/) override { }

  virtual void enterIntervalLiteral(ADQLParser::IntervalLiteralContext * /*ctx*/) override { }
  virtual void exitIntervalLiteral(ADQLParser::IntervalLiteralContext * /*ctx*/) override { }

  virtual void enterIntervalValue(ADQLParser::IntervalValueContext * /*ctx*/) override { }
  virtual void exitIntervalValue(ADQLParser::IntervalValueContext * /*ctx*/) override { }

  virtual void enterIntervalQualifiers(ADQLParser::IntervalQualifiersContext * /*ctx*/) override { }
  virtual void exitIntervalQualifiers(ADQLParser::IntervalQualifiersContext * /*ctx*/) override { }

  virtual void enterDateLiteral(ADQLParser::DateLiteralContext * /*ctx*/) override { }
  virtual void exitDateLiteral(ADQLParser::DateLiteralContext * /*ctx*/) override { }

  virtual void enterTimestampLiteral(ADQLParser::TimestampLiteralContext * /*ctx*/) override { }
  virtual void exitTimestampLiteral(ADQLParser::TimestampLiteralContext * /*ctx*/) override { }

  virtual void enterTimestampLocalTZLiteral(ADQLParser::TimestampLocalTZLiteralContext * /*ctx*/) override { }
  virtual void exitTimestampLocalTZLiteral(ADQLParser::TimestampLocalTZLiteralContext * /*ctx*/) override { }

  virtual void enterStringLiteralSequence(ADQLParser::StringLiteralSequenceContext * /*ctx*/) override { }
  virtual void exitStringLiteralSequence(ADQLParser::StringLiteralSequenceContext * /*ctx*/) override { }

  virtual void enterCharSetStringLiteral(ADQLParser::CharSetStringLiteralContext * /*ctx*/) override { }
  virtual void exitCharSetStringLiteral(ADQLParser::CharSetStringLiteralContext * /*ctx*/) override { }

  virtual void enterBooleanValue(ADQLParser::BooleanValueContext * /*ctx*/) override { }
  virtual void exitBooleanValue(ADQLParser::BooleanValueContext * /*ctx*/) override { }

  virtual void enterPrepareStmtParam(ADQLParser::PrepareStmtParamContext * /*ctx*/) override { }
  virtual void exitPrepareStmtParam(ADQLParser::PrepareStmtParamContext * /*ctx*/) override { }

  virtual void enterParameterIdx(ADQLParser::ParameterIdxContext * /*ctx*/) override { }
  virtual void exitParameterIdx(ADQLParser::ParameterIdxContext * /*ctx*/) override { }

  virtual void enterIntervalExpression(ADQLParser::IntervalExpressionContext * /*ctx*/) override { }
  virtual void exitIntervalExpression(ADQLParser::IntervalExpressionContext * /*ctx*/) override { }

  virtual void enterCastExpression(ADQLParser::CastExpressionContext * /*ctx*/) override { }
  virtual void exitCastExpression(ADQLParser::CastExpressionContext * /*ctx*/) override { }

  virtual void enterPrimitiveType(ADQLParser::PrimitiveTypeContext * /*ctx*/) override { }
  virtual void exitPrimitiveType(ADQLParser::PrimitiveTypeContext * /*ctx*/) override { }

  virtual void enterExtractExpression(ADQLParser::ExtractExpressionContext * /*ctx*/) override { }
  virtual void exitExtractExpression(ADQLParser::ExtractExpressionContext * /*ctx*/) override { }

  virtual void enterTimeQualifiers(ADQLParser::TimeQualifiersContext * /*ctx*/) override { }
  virtual void exitTimeQualifiers(ADQLParser::TimeQualifiersContext * /*ctx*/) override { }

  virtual void enterFloorExpression(ADQLParser::FloorExpressionContext * /*ctx*/) override { }
  virtual void exitFloorExpression(ADQLParser::FloorExpressionContext * /*ctx*/) override { }

  virtual void enterFloorDateQualifiers(ADQLParser::FloorDateQualifiersContext * /*ctx*/) override { }
  virtual void exitFloorDateQualifiers(ADQLParser::FloorDateQualifiersContext * /*ctx*/) override { }

  virtual void enterCaseExpression(ADQLParser::CaseExpressionContext * /*ctx*/) override { }
  virtual void exitCaseExpression(ADQLParser::CaseExpressionContext * /*ctx*/) override { }

  virtual void enterWhenExpression(ADQLParser::WhenExpressionContext * /*ctx*/) override { }
  virtual void exitWhenExpression(ADQLParser::WhenExpressionContext * /*ctx*/) override { }

  virtual void enterSubQueryExpression(ADQLParser::SubQueryExpressionContext * /*ctx*/) override { }
  virtual void exitSubQueryExpression(ADQLParser::SubQueryExpressionContext * /*ctx*/) override { }

  virtual void enterFunction_(ADQLParser::Function_Context * /*ctx*/) override { }
  virtual void exitFunction_(ADQLParser::Function_Context * /*ctx*/) override { }

  virtual void enterTrimFunction(ADQLParser::TrimFunctionContext * /*ctx*/) override { }
  virtual void exitTrimFunction(ADQLParser::TrimFunctionContext * /*ctx*/) override { }

  virtual void enterFunctionName(ADQLParser::FunctionNameContext * /*ctx*/) override { }
  virtual void exitFunctionName(ADQLParser::FunctionNameContext * /*ctx*/) override { }

  virtual void enterFunctionIdentifier(ADQLParser::FunctionIdentifierContext * /*ctx*/) override { }
  virtual void exitFunctionIdentifier(ADQLParser::FunctionIdentifierContext * /*ctx*/) override { }

  virtual void enterSql11ReservedKeywordsUsedAsFunctionName(ADQLParser::Sql11ReservedKeywordsUsedAsFunctionNameContext * /*ctx*/) override { }
  virtual void exitSql11ReservedKeywordsUsedAsFunctionName(ADQLParser::Sql11ReservedKeywordsUsedAsFunctionNameContext * /*ctx*/) override { }

  virtual void enterSelectExpression(ADQLParser::SelectExpressionContext * /*ctx*/) override { }
  virtual void exitSelectExpression(ADQLParser::SelectExpressionContext * /*ctx*/) override { }

  virtual void enterOrderByClause(ADQLParser::OrderByClauseContext * /*ctx*/) override { }
  virtual void exitOrderByClause(ADQLParser::OrderByClauseContext * /*ctx*/) override { }

  virtual void enterColumnRefOrder(ADQLParser::ColumnRefOrderContext * /*ctx*/) override { }
  virtual void exitColumnRefOrder(ADQLParser::ColumnRefOrderContext * /*ctx*/) override { }

  virtual void enterOrderSpecificationRewrite(ADQLParser::OrderSpecificationRewriteContext * /*ctx*/) override { }
  virtual void exitOrderSpecificationRewrite(ADQLParser::OrderSpecificationRewriteContext * /*ctx*/) override { }

  virtual void enterNullOrdering(ADQLParser::NullOrderingContext * /*ctx*/) override { }
  virtual void exitNullOrdering(ADQLParser::NullOrderingContext * /*ctx*/) override { }

  virtual void enterNull_treatment(ADQLParser::Null_treatmentContext * /*ctx*/) override { }
  virtual void exitNull_treatment(ADQLParser::Null_treatmentContext * /*ctx*/) override { }

  virtual void enterWindow_specification(ADQLParser::Window_specificationContext * /*ctx*/) override { }
  virtual void exitWindow_specification(ADQLParser::Window_specificationContext * /*ctx*/) override { }

  virtual void enterPartitioningSpec(ADQLParser::PartitioningSpecContext * /*ctx*/) override { }
  virtual void exitPartitioningSpec(ADQLParser::PartitioningSpecContext * /*ctx*/) override { }

  virtual void enterPartitionByClause(ADQLParser::PartitionByClauseContext * /*ctx*/) override { }
  virtual void exitPartitionByClause(ADQLParser::PartitionByClauseContext * /*ctx*/) override { }

  virtual void enterExpressions(ADQLParser::ExpressionsContext * /*ctx*/) override { }
  virtual void exitExpressions(ADQLParser::ExpressionsContext * /*ctx*/) override { }

  virtual void enterExpressionsInParenthesis(ADQLParser::ExpressionsInParenthesisContext * /*ctx*/) override { }
  virtual void exitExpressionsInParenthesis(ADQLParser::ExpressionsInParenthesisContext * /*ctx*/) override { }

  virtual void enterExpressionsNotInParenthesis(ADQLParser::ExpressionsNotInParenthesisContext * /*ctx*/) override { }
  virtual void exitExpressionsNotInParenthesis(ADQLParser::ExpressionsNotInParenthesisContext * /*ctx*/) override { }

  virtual void enterExpressionOrDefault(ADQLParser::ExpressionOrDefaultContext * /*ctx*/) override { }
  virtual void exitExpressionOrDefault(ADQLParser::ExpressionOrDefaultContext * /*ctx*/) override { }

  virtual void enterDefaultValue(ADQLParser::DefaultValueContext * /*ctx*/) override { }
  virtual void exitDefaultValue(ADQLParser::DefaultValueContext * /*ctx*/) override { }

  virtual void enterExpressionPart(ADQLParser::ExpressionPartContext * /*ctx*/) override { }
  virtual void exitExpressionPart(ADQLParser::ExpressionPartContext * /*ctx*/) override { }

  virtual void enterDistributeByClause(ADQLParser::DistributeByClauseContext * /*ctx*/) override { }
  virtual void exitDistributeByClause(ADQLParser::DistributeByClauseContext * /*ctx*/) override { }

  virtual void enterSortByClause(ADQLParser::SortByClauseContext * /*ctx*/) override { }
  virtual void exitSortByClause(ADQLParser::SortByClauseContext * /*ctx*/) override { }

  virtual void enterColumnRefOrderInParenthesis(ADQLParser::ColumnRefOrderInParenthesisContext * /*ctx*/) override { }
  virtual void exitColumnRefOrderInParenthesis(ADQLParser::ColumnRefOrderInParenthesisContext * /*ctx*/) override { }

  virtual void enterColumnRefOrderNotInParenthesis(ADQLParser::ColumnRefOrderNotInParenthesisContext * /*ctx*/) override { }
  virtual void exitColumnRefOrderNotInParenthesis(ADQLParser::ColumnRefOrderNotInParenthesisContext * /*ctx*/) override { }

  virtual void enterClusterByClause(ADQLParser::ClusterByClauseContext * /*ctx*/) override { }
  virtual void exitClusterByClause(ADQLParser::ClusterByClauseContext * /*ctx*/) override { }

  virtual void enterWindow_frame(ADQLParser::Window_frameContext * /*ctx*/) override { }
  virtual void exitWindow_frame(ADQLParser::Window_frameContext * /*ctx*/) override { }

  virtual void enterWindow_range_expression(ADQLParser::Window_range_expressionContext * /*ctx*/) override { }
  virtual void exitWindow_range_expression(ADQLParser::Window_range_expressionContext * /*ctx*/) override { }

  virtual void enterWindow_frame_start_boundary(ADQLParser::Window_frame_start_boundaryContext * /*ctx*/) override { }
  virtual void exitWindow_frame_start_boundary(ADQLParser::Window_frame_start_boundaryContext * /*ctx*/) override { }

  virtual void enterWindow_frame_boundary(ADQLParser::Window_frame_boundaryContext * /*ctx*/) override { }
  virtual void exitWindow_frame_boundary(ADQLParser::Window_frame_boundaryContext * /*ctx*/) override { }

  virtual void enterWindow_value_expression(ADQLParser::Window_value_expressionContext * /*ctx*/) override { }
  virtual void exitWindow_value_expression(ADQLParser::Window_value_expressionContext * /*ctx*/) override { }

  virtual void enterTableOrColumn(ADQLParser::TableOrColumnContext * /*ctx*/) override { }
  virtual void exitTableOrColumn(ADQLParser::TableOrColumnContext * /*ctx*/) override { }

  virtual void enterPrecedenceBitwiseXorOperator(ADQLParser::PrecedenceBitwiseXorOperatorContext * /*ctx*/) override { }
  virtual void exitPrecedenceBitwiseXorOperator(ADQLParser::PrecedenceBitwiseXorOperatorContext * /*ctx*/) override { }

  virtual void enterPrecedenceStarOperator(ADQLParser::PrecedenceStarOperatorContext * /*ctx*/) override { }
  virtual void exitPrecedenceStarOperator(ADQLParser::PrecedenceStarOperatorContext * /*ctx*/) override { }

  virtual void enterPrecedencePlusOperator(ADQLParser::PrecedencePlusOperatorContext * /*ctx*/) override { }
  virtual void exitPrecedencePlusOperator(ADQLParser::PrecedencePlusOperatorContext * /*ctx*/) override { }

  virtual void enterPrecedenceConcatenateOperator(ADQLParser::PrecedenceConcatenateOperatorContext * /*ctx*/) override { }
  virtual void exitPrecedenceConcatenateOperator(ADQLParser::PrecedenceConcatenateOperatorContext * /*ctx*/) override { }

  virtual void enterPrecedenceAmpersandOperator(ADQLParser::PrecedenceAmpersandOperatorContext * /*ctx*/) override { }
  virtual void exitPrecedenceAmpersandOperator(ADQLParser::PrecedenceAmpersandOperatorContext * /*ctx*/) override { }

  virtual void enterPrecedenceBitwiseOrOperator(ADQLParser::PrecedenceBitwiseOrOperatorContext * /*ctx*/) override { }
  virtual void exitPrecedenceBitwiseOrOperator(ADQLParser::PrecedenceBitwiseOrOperatorContext * /*ctx*/) override { }

  virtual void enterPrecedenceSimilarExpressionPart(ADQLParser::PrecedenceSimilarExpressionPartContext * /*ctx*/) override { }
  virtual void exitPrecedenceSimilarExpressionPart(ADQLParser::PrecedenceSimilarExpressionPartContext * /*ctx*/) override { }

  virtual void enterPrecedenceSimilarOperator(ADQLParser::PrecedenceSimilarOperatorContext * /*ctx*/) override { }
  virtual void exitPrecedenceSimilarOperator(ADQLParser::PrecedenceSimilarOperatorContext * /*ctx*/) override { }

  virtual void enterPrecedenceRegexpOperator(ADQLParser::PrecedenceRegexpOperatorContext * /*ctx*/) override { }
  virtual void exitPrecedenceRegexpOperator(ADQLParser::PrecedenceRegexpOperatorContext * /*ctx*/) override { }

  virtual void enterPrecedenceSimilarExpressionAtom(ADQLParser::PrecedenceSimilarExpressionAtomContext * /*ctx*/) override { }
  virtual void exitPrecedenceSimilarExpressionAtom(ADQLParser::PrecedenceSimilarExpressionAtomContext * /*ctx*/) override { }

  virtual void enterPrecedenceSimilarExpressionQuantifierPredicate(ADQLParser::PrecedenceSimilarExpressionQuantifierPredicateContext * /*ctx*/) override { }
  virtual void exitPrecedenceSimilarExpressionQuantifierPredicate(ADQLParser::PrecedenceSimilarExpressionQuantifierPredicateContext * /*ctx*/) override { }

  virtual void enterSubQuerySelectorOperator(ADQLParser::SubQuerySelectorOperatorContext * /*ctx*/) override { }
  virtual void exitSubQuerySelectorOperator(ADQLParser::SubQuerySelectorOperatorContext * /*ctx*/) override { }

  virtual void enterQuantifierType(ADQLParser::QuantifierTypeContext * /*ctx*/) override { }
  virtual void exitQuantifierType(ADQLParser::QuantifierTypeContext * /*ctx*/) override { }

  virtual void enterPrecedenceSimilarExpressionPartNot(ADQLParser::PrecedenceSimilarExpressionPartNotContext * /*ctx*/) override { }
  virtual void exitPrecedenceSimilarExpressionPartNot(ADQLParser::PrecedenceSimilarExpressionPartNotContext * /*ctx*/) override { }

  virtual void enterPrecedenceSimilarExpressionIn(ADQLParser::PrecedenceSimilarExpressionInContext * /*ctx*/) override { }
  virtual void exitPrecedenceSimilarExpressionIn(ADQLParser::PrecedenceSimilarExpressionInContext * /*ctx*/) override { }

  virtual void enterPrecedenceEqualOperator(ADQLParser::PrecedenceEqualOperatorContext * /*ctx*/) override { }
  virtual void exitPrecedenceEqualOperator(ADQLParser::PrecedenceEqualOperatorContext * /*ctx*/) override { }

  virtual void enterPrecedenceDistinctOperator(ADQLParser::PrecedenceDistinctOperatorContext * /*ctx*/) override { }
  virtual void exitPrecedenceDistinctOperator(ADQLParser::PrecedenceDistinctOperatorContext * /*ctx*/) override { }

  virtual void enterIsCondition(ADQLParser::IsConditionContext * /*ctx*/) override { }
  virtual void exitIsCondition(ADQLParser::IsConditionContext * /*ctx*/) override { }

  virtual void enterPrecedenceAndOperator(ADQLParser::PrecedenceAndOperatorContext * /*ctx*/) override { }
  virtual void exitPrecedenceAndOperator(ADQLParser::PrecedenceAndOperatorContext * /*ctx*/) override { }

  virtual void enterPrecedenceOrOperator(ADQLParser::PrecedenceOrOperatorContext * /*ctx*/) override { }
  virtual void exitPrecedenceOrOperator(ADQLParser::PrecedenceOrOperatorContext * /*ctx*/) override { }

  virtual void enterFromClause(ADQLParser::FromClauseContext * /*ctx*/) override { }
  virtual void exitFromClause(ADQLParser::FromClauseContext * /*ctx*/) override { }

  virtual void enterFromSource(ADQLParser::FromSourceContext * /*ctx*/) override { }
  virtual void exitFromSource(ADQLParser::FromSourceContext * /*ctx*/) override { }

  virtual void enterJoinSource(ADQLParser::JoinSourceContext * /*ctx*/) override { }
  virtual void exitJoinSource(ADQLParser::JoinSourceContext * /*ctx*/) override { }

  virtual void enterAtomjoinSource(ADQLParser::AtomjoinSourceContext * /*ctx*/) override { }
  virtual void exitAtomjoinSource(ADQLParser::AtomjoinSourceContext * /*ctx*/) override { }

  virtual void enterTableSource(ADQLParser::TableSourceContext * /*ctx*/) override { }
  virtual void exitTableSource(ADQLParser::TableSourceContext * /*ctx*/) override { }

  virtual void enterSubQuerySource(ADQLParser::SubQuerySourceContext * /*ctx*/) override { }
  virtual void exitSubQuerySource(ADQLParser::SubQuerySourceContext * /*ctx*/) override { }

  virtual void enterJoinToken(ADQLParser::JoinTokenContext * /*ctx*/) override { }
  virtual void exitJoinToken(ADQLParser::JoinTokenContext * /*ctx*/) override { }

  virtual void enterJoinSourcePart(ADQLParser::JoinSourcePartContext * /*ctx*/) override { }
  virtual void exitJoinSourcePart(ADQLParser::JoinSourcePartContext * /*ctx*/) override { }

  virtual void enterColumnParenthesesList(ADQLParser::ColumnParenthesesListContext * /*ctx*/) override { }
  virtual void exitColumnParenthesesList(ADQLParser::ColumnParenthesesListContext * /*ctx*/) override { }

  virtual void enterColumnNameList(ADQLParser::ColumnNameListContext * /*ctx*/) override { }
  virtual void exitColumnNameList(ADQLParser::ColumnNameListContext * /*ctx*/) override { }

  virtual void enterColumnName(ADQLParser::ColumnNameContext * /*ctx*/) override { }
  virtual void exitColumnName(ADQLParser::ColumnNameContext * /*ctx*/) override { }

  virtual void enterWhereClause(ADQLParser::WhereClauseContext * /*ctx*/) override { }
  virtual void exitWhereClause(ADQLParser::WhereClauseContext * /*ctx*/) override { }

  virtual void enterSearchCondition(ADQLParser::SearchConditionContext * /*ctx*/) override { }
  virtual void exitSearchCondition(ADQLParser::SearchConditionContext * /*ctx*/) override { }

  virtual void enterGroupByClause(ADQLParser::GroupByClauseContext * /*ctx*/) override { }
  virtual void exitGroupByClause(ADQLParser::GroupByClauseContext * /*ctx*/) override { }

  virtual void enterGroupby_expression(ADQLParser::Groupby_expressionContext * /*ctx*/) override { }
  virtual void exitGroupby_expression(ADQLParser::Groupby_expressionContext * /*ctx*/) override { }

  virtual void enterRollupOldSyntax(ADQLParser::RollupOldSyntaxContext * /*ctx*/) override { }
  virtual void exitRollupOldSyntax(ADQLParser::RollupOldSyntaxContext * /*ctx*/) override { }

  virtual void enterGroupByEmpty(ADQLParser::GroupByEmptyContext * /*ctx*/) override { }
  virtual void exitGroupByEmpty(ADQLParser::GroupByEmptyContext * /*ctx*/) override { }

  virtual void enterHavingClause(ADQLParser::HavingClauseContext * /*ctx*/) override { }
  virtual void exitHavingClause(ADQLParser::HavingClauseContext * /*ctx*/) override { }

  virtual void enterHavingCondition(ADQLParser::HavingConditionContext * /*ctx*/) override { }
  virtual void exitHavingCondition(ADQLParser::HavingConditionContext * /*ctx*/) override { }

  virtual void enterWindow_clause(ADQLParser::Window_clauseContext * /*ctx*/) override { }
  virtual void exitWindow_clause(ADQLParser::Window_clauseContext * /*ctx*/) override { }

  virtual void enterWindow_defn(ADQLParser::Window_defnContext * /*ctx*/) override { }
  virtual void exitWindow_defn(ADQLParser::Window_defnContext * /*ctx*/) override { }

  virtual void enterSetOpSelectStatement(ADQLParser::SetOpSelectStatementContext * /*ctx*/) override { }
  virtual void exitSetOpSelectStatement(ADQLParser::SetOpSelectStatementContext * /*ctx*/) override { }

  virtual void enterSetOperator(ADQLParser::SetOperatorContext * /*ctx*/) override { }
  virtual void exitSetOperator(ADQLParser::SetOperatorContext * /*ctx*/) override { }

  virtual void enterLimitClause(ADQLParser::LimitClauseContext * /*ctx*/) override { }
  virtual void exitLimitClause(ADQLParser::LimitClauseContext * /*ctx*/) override { }

  virtual void enterNonReserved(ADQLParser::NonReservedContext * /*ctx*/) override { }
  virtual void exitNonReserved(ADQLParser::NonReservedContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

