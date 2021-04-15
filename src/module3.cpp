/*
* File: module3.cpp
* Author: Kolger Hajati
* Date: May 7, 2019
* Purpose: The file contains main method, parses the input,
* creates binary tree, and displays results.
*/

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cmath>
#include <cerrno>
#include <cstring>
#include <clocale>

using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "symboltable.h"
#include "parse.h"

SymbolTable symbolTable;

void parseAssignments(stringstream& ss);

int main()
{
    Expression* expression;
    char paren, comma, list[200];

    FILE *fileReader;
    fileReader = fopen("Resource\\FileTwo.txt", "r");
    if( fileReader == NULL ) {
        fprintf(stderr, "Couldn't open %s: %s\n", "FileTwo.txt", strerror(errno));
        exit(1);
    }

    while (fgets(list, 80, fileReader) != NULL)
    {
        cout << " " << "\n";
        stringstream in(list, ios_base::in);
        in >> paren;
        cout << list << " ";
        expression = SubExpression::parse(in);
        in >> comma;
        parseAssignments(in);
        double result = expression->evaluate();
        cout << "Total= " << result << "\n";
    }
    fclose(fileReader);
    return 0;
}

void parseAssignments(stringstream& ss)
{
    char assignop, delimiter;
    string variable;
    double value;
    do
    {
        variable = parseName(ss);
        ss >> ws >> assignop >> value >> delimiter;
        symbolTable.insert(variable, value);
    }
    while (delimiter == ',');
}
