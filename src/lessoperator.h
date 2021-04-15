/*
* File: lessoperator.h
* Author: Kolger Hajati
* Date: May 7, 2019
* Purpose: The file checks "less than" logic of two expressions.
*/

class LessOperator: public SubExpression
{
public:
    LessOperator(Expression* left, Expression* right): SubExpression(left, right)
    {
    }
    int evaluate()
    {
        return left->evaluate() < right->evaluate();
    }
};

