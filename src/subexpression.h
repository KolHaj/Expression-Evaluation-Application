/*
* File: subexpression.h
* Author: Kolger Hajati
* Date: May 7, 2019
* Purpose: Defines the nodes and uses if else statements for evaluation.
*/

class SubExpression: public Expression
{
public:
    SubExpression(Expression* left, Expression* right);
    SubExpression(Expression* left, Expression* right, Expression* condition);
    SubExpression(Expression* left);
    static Expression* parse(stringstream& ss);
protected:
    Expression* left;
    Expression* right;
    Expression* condition;
};

