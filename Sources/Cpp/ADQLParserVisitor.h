
// Generated from ./ADQLParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "ADQLParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ADQLParser.
 */
class  ADQLParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ADQLParser.
   */
    virtual std::any visitAdql(ADQLParser::AdqlContext *context) = 0;

    virtual std::any visitQueryStatementExpression(ADQLParser::QueryStatementExpressionContext *context) = 0;

    virtual std::any visitWithClause(ADQLParser::WithClauseContext *context) = 0;

    virtual std::any visitCteStatement(ADQLParser::CteStatementContext *context) = 0;

    virtual std::any visitId_(ADQLParser::Id_Context *context) = 0;

    virtual std::any visitQueryStatementExpressionBody(ADQLParser::QueryStatementExpressionBodyContext *context) = 0;

    virtual std::any visitRegularBody(ADQLParser::RegularBodyContext *context) = 0;

    virtual std::any visitSelectStatement(ADQLParser::SelectStatementContext *context) = 0;

    virtual std::any visitAtomSelectStatement(ADQLParser::AtomSelectStatementContext *context) = 0;

    virtual std::any visitSelectClause(ADQLParser::SelectClauseContext *context) = 0;

    virtual std::any visitAll_distinct(ADQLParser::All_distinctContext *context) = 0;

    virtual std::any visitSet_limit(ADQLParser::Set_limitContext *context) = 0;

    virtual std::any visitSelectList(ADQLParser::SelectListContext *context) = 0;

    virtual std::any visitSelectItem(ADQLParser::SelectItemContext *context) = 0;

    virtual std::any visitTableAllColumns(ADQLParser::TableAllColumnsContext *context) = 0;

    virtual std::any visitTableName(ADQLParser::TableNameContext *context) = 0;

    virtual std::any visitExpression(ADQLParser::ExpressionContext *context) = 0;

    virtual std::any visitPrecedenceOrExpression(ADQLParser::PrecedenceOrExpressionContext *context) = 0;

    virtual std::any visitPrecedenceAndExpression(ADQLParser::PrecedenceAndExpressionContext *context) = 0;

    virtual std::any visitPrecedenceNotExpression(ADQLParser::PrecedenceNotExpressionContext *context) = 0;

    virtual std::any visitPrecedenceNotOperator(ADQLParser::PrecedenceNotOperatorContext *context) = 0;

    virtual std::any visitPrecedenceUnarySuffixExpression(ADQLParser::PrecedenceUnarySuffixExpressionContext *context) = 0;

    virtual std::any visitPrecedenceEqualExpression(ADQLParser::PrecedenceEqualExpressionContext *context) = 0;

    virtual std::any visitPrecedenceSimilarExpression(ADQLParser::PrecedenceSimilarExpressionContext *context) = 0;

    virtual std::any visitPrecedenceSimilarExpressionMain(ADQLParser::PrecedenceSimilarExpressionMainContext *context) = 0;

    virtual std::any visitPrecedenceBitwiseOrExpression(ADQLParser::PrecedenceBitwiseOrExpressionContext *context) = 0;

    virtual std::any visitPrecedenceAmpersandExpression(ADQLParser::PrecedenceAmpersandExpressionContext *context) = 0;

    virtual std::any visitPrecedenceConcatenateExpression(ADQLParser::PrecedenceConcatenateExpressionContext *context) = 0;

    virtual std::any visitPrecedencePlusExpression(ADQLParser::PrecedencePlusExpressionContext *context) = 0;

    virtual std::any visitPrecedenceStarExpression(ADQLParser::PrecedenceStarExpressionContext *context) = 0;

    virtual std::any visitPrecedenceBitwiseXorExpression(ADQLParser::PrecedenceBitwiseXorExpressionContext *context) = 0;

    virtual std::any visitPrecedenceUnaryPrefixExpression(ADQLParser::PrecedenceUnaryPrefixExpressionContext *context) = 0;

    virtual std::any visitPrecedenceUnaryOperator(ADQLParser::PrecedenceUnaryOperatorContext *context) = 0;

    virtual std::any visitPrecedenceFieldExpression(ADQLParser::PrecedenceFieldExpressionContext *context) = 0;

    virtual std::any visitAtomExpression(ADQLParser::AtomExpressionContext *context) = 0;

    virtual std::any visitConstant(ADQLParser::ConstantContext *context) = 0;

    virtual std::any visitIntervalLiteral(ADQLParser::IntervalLiteralContext *context) = 0;

    virtual std::any visitIntervalValue(ADQLParser::IntervalValueContext *context) = 0;

    virtual std::any visitIntervalQualifiers(ADQLParser::IntervalQualifiersContext *context) = 0;

    virtual std::any visitDateLiteral(ADQLParser::DateLiteralContext *context) = 0;

    virtual std::any visitTimestampLiteral(ADQLParser::TimestampLiteralContext *context) = 0;

    virtual std::any visitTimestampLocalTZLiteral(ADQLParser::TimestampLocalTZLiteralContext *context) = 0;

    virtual std::any visitStringLiteralSequence(ADQLParser::StringLiteralSequenceContext *context) = 0;

    virtual std::any visitCharSetStringLiteral(ADQLParser::CharSetStringLiteralContext *context) = 0;

    virtual std::any visitBooleanValue(ADQLParser::BooleanValueContext *context) = 0;

    virtual std::any visitPrepareStmtParam(ADQLParser::PrepareStmtParamContext *context) = 0;

    virtual std::any visitParameterIdx(ADQLParser::ParameterIdxContext *context) = 0;

    virtual std::any visitIntervalExpression(ADQLParser::IntervalExpressionContext *context) = 0;

    virtual std::any visitCastExpression(ADQLParser::CastExpressionContext *context) = 0;

    virtual std::any visitPrimitiveType(ADQLParser::PrimitiveTypeContext *context) = 0;

    virtual std::any visitExtractExpression(ADQLParser::ExtractExpressionContext *context) = 0;

    virtual std::any visitTimeQualifiers(ADQLParser::TimeQualifiersContext *context) = 0;

    virtual std::any visitFloorExpression(ADQLParser::FloorExpressionContext *context) = 0;

    virtual std::any visitFloorDateQualifiers(ADQLParser::FloorDateQualifiersContext *context) = 0;

    virtual std::any visitCaseExpression(ADQLParser::CaseExpressionContext *context) = 0;

    virtual std::any visitWhenExpression(ADQLParser::WhenExpressionContext *context) = 0;

    virtual std::any visitSubQueryExpression(ADQLParser::SubQueryExpressionContext *context) = 0;

    virtual std::any visitFunction_(ADQLParser::Function_Context *context) = 0;

    virtual std::any visitTrimFunction(ADQLParser::TrimFunctionContext *context) = 0;

    virtual std::any visitFunctionName(ADQLParser::FunctionNameContext *context) = 0;

    virtual std::any visitFunctionIdentifier(ADQLParser::FunctionIdentifierContext *context) = 0;

    virtual std::any visitSql11ReservedKeywordsUsedAsFunctionName(ADQLParser::Sql11ReservedKeywordsUsedAsFunctionNameContext *context) = 0;

    virtual std::any visitSelectExpression(ADQLParser::SelectExpressionContext *context) = 0;

    virtual std::any visitOrderByClause(ADQLParser::OrderByClauseContext *context) = 0;

    virtual std::any visitColumnRefOrder(ADQLParser::ColumnRefOrderContext *context) = 0;

    virtual std::any visitOrderSpecificationRewrite(ADQLParser::OrderSpecificationRewriteContext *context) = 0;

    virtual std::any visitNullOrdering(ADQLParser::NullOrderingContext *context) = 0;

    virtual std::any visitNull_treatment(ADQLParser::Null_treatmentContext *context) = 0;

    virtual std::any visitWindow_specification(ADQLParser::Window_specificationContext *context) = 0;

    virtual std::any visitPartitioningSpec(ADQLParser::PartitioningSpecContext *context) = 0;

    virtual std::any visitPartitionByClause(ADQLParser::PartitionByClauseContext *context) = 0;

    virtual std::any visitExpressions(ADQLParser::ExpressionsContext *context) = 0;

    virtual std::any visitExpressionsInParenthesis(ADQLParser::ExpressionsInParenthesisContext *context) = 0;

    virtual std::any visitExpressionsNotInParenthesis(ADQLParser::ExpressionsNotInParenthesisContext *context) = 0;

    virtual std::any visitExpressionOrDefault(ADQLParser::ExpressionOrDefaultContext *context) = 0;

    virtual std::any visitDefaultValue(ADQLParser::DefaultValueContext *context) = 0;

    virtual std::any visitExpressionPart(ADQLParser::ExpressionPartContext *context) = 0;

    virtual std::any visitDistributeByClause(ADQLParser::DistributeByClauseContext *context) = 0;

    virtual std::any visitSortByClause(ADQLParser::SortByClauseContext *context) = 0;

    virtual std::any visitColumnRefOrderInParenthesis(ADQLParser::ColumnRefOrderInParenthesisContext *context) = 0;

    virtual std::any visitColumnRefOrderNotInParenthesis(ADQLParser::ColumnRefOrderNotInParenthesisContext *context) = 0;

    virtual std::any visitClusterByClause(ADQLParser::ClusterByClauseContext *context) = 0;

    virtual std::any visitWindow_frame(ADQLParser::Window_frameContext *context) = 0;

    virtual std::any visitWindow_range_expression(ADQLParser::Window_range_expressionContext *context) = 0;

    virtual std::any visitWindow_frame_start_boundary(ADQLParser::Window_frame_start_boundaryContext *context) = 0;

    virtual std::any visitWindow_frame_boundary(ADQLParser::Window_frame_boundaryContext *context) = 0;

    virtual std::any visitWindow_value_expression(ADQLParser::Window_value_expressionContext *context) = 0;

    virtual std::any visitTableOrColumn(ADQLParser::TableOrColumnContext *context) = 0;

    virtual std::any visitPrecedenceBitwiseXorOperator(ADQLParser::PrecedenceBitwiseXorOperatorContext *context) = 0;

    virtual std::any visitPrecedenceStarOperator(ADQLParser::PrecedenceStarOperatorContext *context) = 0;

    virtual std::any visitPrecedencePlusOperator(ADQLParser::PrecedencePlusOperatorContext *context) = 0;

    virtual std::any visitPrecedenceConcatenateOperator(ADQLParser::PrecedenceConcatenateOperatorContext *context) = 0;

    virtual std::any visitPrecedenceAmpersandOperator(ADQLParser::PrecedenceAmpersandOperatorContext *context) = 0;

    virtual std::any visitPrecedenceBitwiseOrOperator(ADQLParser::PrecedenceBitwiseOrOperatorContext *context) = 0;

    virtual std::any visitPrecedenceSimilarExpressionPart(ADQLParser::PrecedenceSimilarExpressionPartContext *context) = 0;

    virtual std::any visitPrecedenceSimilarOperator(ADQLParser::PrecedenceSimilarOperatorContext *context) = 0;

    virtual std::any visitPrecedenceRegexpOperator(ADQLParser::PrecedenceRegexpOperatorContext *context) = 0;

    virtual std::any visitPrecedenceSimilarExpressionAtom(ADQLParser::PrecedenceSimilarExpressionAtomContext *context) = 0;

    virtual std::any visitPrecedenceSimilarExpressionQuantifierPredicate(ADQLParser::PrecedenceSimilarExpressionQuantifierPredicateContext *context) = 0;

    virtual std::any visitSubQuerySelectorOperator(ADQLParser::SubQuerySelectorOperatorContext *context) = 0;

    virtual std::any visitQuantifierType(ADQLParser::QuantifierTypeContext *context) = 0;

    virtual std::any visitPrecedenceSimilarExpressionPartNot(ADQLParser::PrecedenceSimilarExpressionPartNotContext *context) = 0;

    virtual std::any visitPrecedenceSimilarExpressionIn(ADQLParser::PrecedenceSimilarExpressionInContext *context) = 0;

    virtual std::any visitPrecedenceEqualOperator(ADQLParser::PrecedenceEqualOperatorContext *context) = 0;

    virtual std::any visitPrecedenceDistinctOperator(ADQLParser::PrecedenceDistinctOperatorContext *context) = 0;

    virtual std::any visitIsCondition(ADQLParser::IsConditionContext *context) = 0;

    virtual std::any visitPrecedenceAndOperator(ADQLParser::PrecedenceAndOperatorContext *context) = 0;

    virtual std::any visitPrecedenceOrOperator(ADQLParser::PrecedenceOrOperatorContext *context) = 0;

    virtual std::any visitFromClause(ADQLParser::FromClauseContext *context) = 0;

    virtual std::any visitFromSource(ADQLParser::FromSourceContext *context) = 0;

    virtual std::any visitJoinSource(ADQLParser::JoinSourceContext *context) = 0;

    virtual std::any visitAtomjoinSource(ADQLParser::AtomjoinSourceContext *context) = 0;

    virtual std::any visitTableSource(ADQLParser::TableSourceContext *context) = 0;

    virtual std::any visitSubQuerySource(ADQLParser::SubQuerySourceContext *context) = 0;

    virtual std::any visitJoinToken(ADQLParser::JoinTokenContext *context) = 0;

    virtual std::any visitJoinSourcePart(ADQLParser::JoinSourcePartContext *context) = 0;

    virtual std::any visitColumnParenthesesList(ADQLParser::ColumnParenthesesListContext *context) = 0;

    virtual std::any visitColumnNameList(ADQLParser::ColumnNameListContext *context) = 0;

    virtual std::any visitColumnName(ADQLParser::ColumnNameContext *context) = 0;

    virtual std::any visitWhereClause(ADQLParser::WhereClauseContext *context) = 0;

    virtual std::any visitSearchCondition(ADQLParser::SearchConditionContext *context) = 0;

    virtual std::any visitGroupByClause(ADQLParser::GroupByClauseContext *context) = 0;

    virtual std::any visitGroupby_expression(ADQLParser::Groupby_expressionContext *context) = 0;

    virtual std::any visitRollupOldSyntax(ADQLParser::RollupOldSyntaxContext *context) = 0;

    virtual std::any visitGroupByEmpty(ADQLParser::GroupByEmptyContext *context) = 0;

    virtual std::any visitHavingClause(ADQLParser::HavingClauseContext *context) = 0;

    virtual std::any visitHavingCondition(ADQLParser::HavingConditionContext *context) = 0;

    virtual std::any visitWindow_clause(ADQLParser::Window_clauseContext *context) = 0;

    virtual std::any visitWindow_defn(ADQLParser::Window_defnContext *context) = 0;

    virtual std::any visitSetOpSelectStatement(ADQLParser::SetOpSelectStatementContext *context) = 0;

    virtual std::any visitSetOperator(ADQLParser::SetOperatorContext *context) = 0;

    virtual std::any visitLimitClause(ADQLParser::LimitClauseContext *context) = 0;

    virtual std::any visitNonReserved(ADQLParser::NonReservedContext *context) = 0;


};

