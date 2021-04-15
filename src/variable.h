/*
* File: variable.h
* Author: Kolger Hajati
* Date: May 7, 2019
* Purpose: The file stores variables of node tree.
*/

class Variable: public Operand
{
public:
    Variable(string name)
    {
        this->name = name;
    }
    int evaluate();
private:
    string name;
};
