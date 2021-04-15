/*
* File: equaloperator.h
* Author: Kolger Hajati
* Date: May 7, 2019
* Purpose: The file checks "equal to" logic of two expressions.
*/

class EqualOperator: public SubExpression
{
public:
	EqualOperator(Expression* left, Expression* right): SubExpression(left, right)
    {
    }
    int evaluate()
    {
        return left->evaluate() == right->evaluate();
    }
};
