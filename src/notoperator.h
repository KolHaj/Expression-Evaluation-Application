/*
* File: notoperator.h
* Author: Kolger Hajati
* Date: May 7, 2019
* Purpose: The file checks "not" logic of two expressions.
*/

class NotOperator: public SubExpression
{
public:
    NotOperator(Expression* left): SubExpression(left)
    {
    }
    int evaluate()
    {
        return !left->evaluate();
    }
};
