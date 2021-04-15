/*
* File: plus.h
* Author: Kolger Hajati
* Date: May 7, 2019
* Purpose: The file adds two values.
*/

class Plus: public SubExpression
{
public:
    Plus(Expression* left, Expression* right): SubExpression(left, right)
    {
    }
    int evaluate()
    {
       return left->evaluate() + right->evaluate();
    }
};
