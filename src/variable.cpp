/*
* File: variable.cpp
* Author: Kolger Hajati
* Date: May 7, 2019
* Purpose: The file stores variables of node tree.
*/

#include <strstream>
#include <vector>
using namespace std;

#include "expression.h"
#include "operand.h"
#include "variable.h"
#include "symboltable.h"

extern SymbolTable symbolTable;

int Variable::evaluate()
{
    return symbolTable.lookUp(name); // @suppress("Invalid arguments")
}


