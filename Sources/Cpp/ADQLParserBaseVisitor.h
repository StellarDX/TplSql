
// Generated from ./ADQLParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "ADQLParserVisitor.h"


/**
 * This class provides an empty implementation of ADQLParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ADQLParserBaseVisitor : public ADQLParserVisitor {
public:

  virtual std::any visitAdql(ADQLParser::AdqlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQueryStatementExpression(ADQLParser::QueryStatementExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWithClause(ADQLParser::WithClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCteStatement(ADQLParser::CteStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitId_(ADQLParser::Id_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQueryStatementExpressionBody(ADQLParser::QueryStatementExpressionBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRegularBody(ADQLParser::RegularBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelectStatement(ADQLParser::SelectStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtomSelectStatement(ADQLParser::AtomSelectStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelectClause(ADQLParser::SelectClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAll_distinct(ADQLParser::All_distinctContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSet_limit(ADQLParser::Set_limitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelectList(ADQLParser::SelectListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelectItem(ADQLParser::SelectItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableAllColumns(ADQLParser::TableAllColumnsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableName(ADQLParser::TableNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(ADQLParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceOrExpression(ADQLParser::PrecedenceOrExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceAndExpression(ADQLParser::PrecedenceAndExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceNotExpression(ADQLParser::PrecedenceNotExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceNotOperator(ADQLParser::PrecedenceNotOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceUnarySuffixExpression(ADQLParser::PrecedenceUnarySuffixExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceEqualExpression(ADQLParser::PrecedenceEqualExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceSimilarExpression(ADQLParser::PrecedenceSimilarExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceSimilarExpressionMain(ADQLParser::PrecedenceSimilarExpressionMainContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceBitwiseOrExpression(ADQLParser::PrecedenceBitwiseOrExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceAmpersandExpression(ADQLParser::PrecedenceAmpersandExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceConcatenateExpression(ADQLParser::PrecedenceConcatenateExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedencePlusExpression(ADQLParser::PrecedencePlusExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceStarExpression(ADQLParser::PrecedenceStarExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceBitwiseXorExpression(ADQLParser::PrecedenceBitwiseXorExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceUnaryPrefixExpression(ADQLParser::PrecedenceUnaryPrefixExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceUnaryOperator(ADQLParser::PrecedenceUnaryOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceFieldExpression(ADQLParser::PrecedenceFieldExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtomExpression(ADQLParser::AtomExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstant(ADQLParser::ConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntervalLiteral(ADQLParser::IntervalLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntervalValue(ADQLParser::IntervalValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntervalQualifiers(ADQLParser::IntervalQualifiersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDateLiteral(ADQLParser::DateLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTimestampLiteral(ADQLParser::TimestampLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTimestampLocalTZLiteral(ADQLParser::TimestampLocalTZLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStringLiteralSequence(ADQLParser::StringLiteralSequenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCharSetStringLiteral(ADQLParser::CharSetStringLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBooleanValue(ADQLParser::BooleanValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrepareStmtParam(ADQLParser::PrepareStmtParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterIdx(ADQLParser::ParameterIdxContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntervalExpression(ADQLParser::IntervalExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCastExpression(ADQLParser::CastExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimitiveType(ADQLParser::PrimitiveTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExtractExpression(ADQLParser::ExtractExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTimeQualifiers(ADQLParser::TimeQualifiersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFloorExpression(ADQLParser::FloorExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFloorDateQualifiers(ADQLParser::FloorDateQualifiersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCaseExpression(ADQLParser::CaseExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhenExpression(ADQLParser::WhenExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubQueryExpression(ADQLParser::SubQueryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction_(ADQLParser::Function_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTrimFunction(ADQLParser::TrimFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionName(ADQLParser::FunctionNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionIdentifier(ADQLParser::FunctionIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSql11ReservedKeywordsUsedAsFunctionName(ADQLParser::Sql11ReservedKeywordsUsedAsFunctionNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelectExpression(ADQLParser::SelectExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOrderByClause(ADQLParser::OrderByClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumnRefOrder(ADQLParser::ColumnRefOrderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOrderSpecificationRewrite(ADQLParser::OrderSpecificationRewriteContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNullOrdering(ADQLParser::NullOrderingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNull_treatment(ADQLParser::Null_treatmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWindow_specification(ADQLParser::Window_specificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPartitioningSpec(ADQLParser::PartitioningSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPartitionByClause(ADQLParser::PartitionByClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressions(ADQLParser::ExpressionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressionsInParenthesis(ADQLParser::ExpressionsInParenthesisContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressionsNotInParenthesis(ADQLParser::ExpressionsNotInParenthesisContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressionOrDefault(ADQLParser::ExpressionOrDefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefaultValue(ADQLParser::DefaultValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressionPart(ADQLParser::ExpressionPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDistributeByClause(ADQLParser::DistributeByClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSortByClause(ADQLParser::SortByClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumnRefOrderInParenthesis(ADQLParser::ColumnRefOrderInParenthesisContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumnRefOrderNotInParenthesis(ADQLParser::ColumnRefOrderNotInParenthesisContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClusterByClause(ADQLParser::ClusterByClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWindow_frame(ADQLParser::Window_frameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWindow_range_expression(ADQLParser::Window_range_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWindow_frame_start_boundary(ADQLParser::Window_frame_start_boundaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWindow_frame_boundary(ADQLParser::Window_frame_boundaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWindow_value_expression(ADQLParser::Window_value_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableOrColumn(ADQLParser::TableOrColumnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceBitwiseXorOperator(ADQLParser::PrecedenceBitwiseXorOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceStarOperator(ADQLParser::PrecedenceStarOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedencePlusOperator(ADQLParser::PrecedencePlusOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceConcatenateOperator(ADQLParser::PrecedenceConcatenateOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceAmpersandOperator(ADQLParser::PrecedenceAmpersandOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceBitwiseOrOperator(ADQLParser::PrecedenceBitwiseOrOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceSimilarExpressionPart(ADQLParser::PrecedenceSimilarExpressionPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceSimilarOperator(ADQLParser::PrecedenceSimilarOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceRegexpOperator(ADQLParser::PrecedenceRegexpOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceSimilarExpressionAtom(ADQLParser::PrecedenceSimilarExpressionAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceSimilarExpressionQuantifierPredicate(ADQLParser::PrecedenceSimilarExpressionQuantifierPredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubQuerySelectorOperator(ADQLParser::SubQuerySelectorOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQuantifierType(ADQLParser::QuantifierTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceSimilarExpressionPartNot(ADQLParser::PrecedenceSimilarExpressionPartNotContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceSimilarExpressionIn(ADQLParser::PrecedenceSimilarExpressionInContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceEqualOperator(ADQLParser::PrecedenceEqualOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceDistinctOperator(ADQLParser::PrecedenceDistinctOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIsCondition(ADQLParser::IsConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceAndOperator(ADQLParser::PrecedenceAndOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecedenceOrOperator(ADQLParser::PrecedenceOrOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFromClause(ADQLParser::FromClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFromSource(ADQLParser::FromSourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJoinSource(ADQLParser::JoinSourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtomjoinSource(ADQLParser::AtomjoinSourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableSource(ADQLParser::TableSourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubQuerySource(ADQLParser::SubQuerySourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJoinToken(ADQLParser::JoinTokenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJoinSourcePart(ADQLParser::JoinSourcePartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumnParenthesesList(ADQLParser::ColumnParenthesesListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumnNameList(ADQLParser::ColumnNameListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumnName(ADQLParser::ColumnNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhereClause(ADQLParser::WhereClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSearchCondition(ADQLParser::SearchConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGroupByClause(ADQLParser::GroupByClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGroupby_expression(ADQLParser::Groupby_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRollupOldSyntax(ADQLParser::RollupOldSyntaxContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGroupByEmpty(ADQLParser::GroupByEmptyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHavingClause(ADQLParser::HavingClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHavingCondition(ADQLParser::HavingConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWindow_clause(ADQLParser::Window_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWindow_defn(ADQLParser::Window_defnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSetOpSelectStatement(ADQLParser::SetOpSelectStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSetOperator(ADQLParser::SetOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLimitClause(ADQLParser::LimitClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNonReserved(ADQLParser::NonReservedContext *ctx) override {
    return visitChildren(ctx);
  }


};

