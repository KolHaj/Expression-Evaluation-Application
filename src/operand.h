/*
* File: operand.h
* Author: Kolger Hajati
* Date: May 7, 2019
* Purpose: Defines leaf nodes.
*/

class Operand: public Expression
{
public:
    static Expression* parse(stringstream& ss);
};
