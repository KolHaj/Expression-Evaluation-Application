/*
* File: oroperator.h
* Author: Kolger Hajati
* Date: May 7, 2019
* Purpose: The file checks "or" logic of two expressions.
*/

class OrOperator: public SubExpression
{
public:
    OrOperator(Expression* left, Expression* right): SubExpression(left, right)
    {
    }
    int evaluate()
    {
        return left->evaluate() || right->evaluate();
    }
};
