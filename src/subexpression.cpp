/*
* File: subexpression.cpp
* Author: Kolger Hajati
* Date: May 7, 2019
* Purpose: Defines the nodes and uses if else statements for evaluation.
*/

#include <iostream>
#include <sstream>
using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "operand.h"
#include "plus.h"
#include "minus.h"
#include "times.h"
#include "divide.h"
#include "greateroperator.h"
#include "lessoperator.h"
#include "equaloperator.h"
#include "andoperator.h"
#include "oroperator.h"
#include "ifelseoperator.h"
#include "notoperator.h"

SubExpression::SubExpression(Expression* left, Expression* right)
{
    this->left = left;
    this->right = right;
}

SubExpression::SubExpression(Expression* left)
{
    this->left = left;
}

SubExpression::SubExpression(Expression* left, Expression* right, Expression* condition)
{
    this->left = left;
    this->right = right;
    this->condition = condition;
}

Expression* SubExpression::parse(stringstream& ss)
{
    Expression* left;
    Expression* right;
    Expression* condition;
    char operation, paren, conditional;

    left = Operand::parse(ss);
    ss >> operation;

    if (operation == '!'){
    	ss >> paren;
        return new NotOperator(left);
    }
    else if (operation == ':'){
        right = Operand::parse(ss);
        ss >> conditional;
        condition = Operand::parse(ss);
        ss >> paren;
        return new IfElseOperator(left, right, condition);
    }
    else{
        right = Operand::parse(ss);
        ss >> paren;
    }

    if(operation == '+'){
    	return new Plus(left, right);
    }
    else if(operation == '-'){
    	return new Minus(left, right);
    }
    else if(operation == '*'){
        return new Times(left, right);
    }
    else if(operation == '/'){
        return new Divide(left, right);
    }
    else if(operation == '|'){
            return new OrOperator(left, right);
    }
    else if(operation == '&'){
        return new AndOperator(left, right);
    }
    else if(operation == '>'){
        return new GreaterOperator(left, right);
    }
    else if(operation == '<'){
        return new LessOperator(left, right);
    }
    else if(operation == '='){
        return new EqualOperator(left, right);
    }
    return 0;
}
