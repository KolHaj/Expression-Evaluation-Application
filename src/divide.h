/*
* File: divide.h
* Author: Kolger Hajati
* Date: May 7, 2019
* Purpose: The file divides two values.
*/

class Divide: public SubExpression
{
public:
    Divide(Expression* left, Expression* right): SubExpression(left, right)
    {
    }
    int evaluate()
    {
        return left->evaluate() / right->evaluate();
    }
};
