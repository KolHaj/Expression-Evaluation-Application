/*
* File: andoperator.h
* Author: Kolger Hajati
* Date: May 7, 2019
* Purpose: The file checks "and" logic of two expressions.
*/

class AndOperator: public SubExpression
{
public:
    AndOperator(Expression* left, Expression* right): SubExpression(left, right)
    {
    }
    int evaluate()
    {
		return left->evaluate() && right->evaluate();
    }
};
