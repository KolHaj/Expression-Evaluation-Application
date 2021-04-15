/*
* File: greateroperator.h
* Author: Kolger Hajati
* Date: May 7, 2019
* Purpose: The file checks "greater than" logic of two expressions.
*/

class GreaterOperator: public SubExpression
{
public:
	GreaterOperator(Expression* left, Expression* right): SubExpression(left, right)
    {
    }
    int evaluate()
    {
        return left->evaluate() > right->evaluate();
    }
};
