/*
* File: operand.cpp
* Author: Kolger Hajati
* Date: May 7, 2019
* Purpose: Defines leaf nodes.
*/

#include <cctype>
#include <iostream>
#include <list>
#include <string>
#include <sstream>

using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "operand.h"
#include "variable.h"
#include "literal.h"
#include "parse.h"

Expression* Operand::parse(stringstream& ss)
{
    char paren;
    double value;

    ss >> ws;
    if (isdigit(ss.peek()))
    {
    	ss >> value;
        Expression* literal = new Literal(value);
        return literal;
    }
    if (ss.peek() == '(')
    {
    	ss >> paren;
        return SubExpression::parse(ss);
    }
    else
        return new Variable(parseName(ss));
    return 0;
}

