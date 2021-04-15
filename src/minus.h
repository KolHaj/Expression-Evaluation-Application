/*
* File: minus.h
* Author: Kolger Hajati
* Date: May 7, 2019
* Purpose: The file subtracts two values.
*/

class Minus: public SubExpression
{
public:
    Minus(Expression* left, Expression* right): SubExpression(left, right)
    {
    }
    int evaluate()
    {
       return left->evaluate() - right->evaluate();
    }
};
