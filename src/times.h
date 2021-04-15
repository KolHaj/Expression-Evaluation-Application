/*
* File: times.h
* Author: Kolger Hajati
* Date: May 7, 2019
* Purpose: The file multiplies two values.
*/

class Times: public SubExpression
{
public:
    Times(Expression* left, Expression* right): SubExpression(left, right)
    {
    }
    int evaluate()
    {
        return left->evaluate() * right->evaluate();
    }
};
