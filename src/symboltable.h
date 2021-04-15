/*
* File: symboltable.h
* Author: Kolger Hajati
* Date: May 7, 2019
* Purpose: The file that stores the variables.
*/

class SymbolTable
{
public:
    SymbolTable() {}
    void insert(string variable, double value);
    double lookUp(string variable) const;
private:
    struct Symbol
    {
        Symbol(string variable, double value)
        {
            this->variable = variable;
            this->value = value;
        }
        string variable;
        double value;
    };
    vector<Symbol> elements;
};

