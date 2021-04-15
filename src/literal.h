/*
* File: literal.h
* Author: Kolger Hajati
* Date: May 7, 2019
* Purpose: The file that defines nodes.
*/

class Literal: public Operand
{
public:
    Literal(double value)
    {
        this->value = value;
    }
    int evaluate()
    {
        return value;
    }
private:
    double value;
};

