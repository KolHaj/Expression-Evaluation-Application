/*
* File: parse.cpp
* Author: Kolger Hajati
* Date: May 7, 2019
* Purpose: Parse variable names from input.
*/

#include <cctype>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

#include "parse.h"

string parseName(stringstream& ss)
{
    char alnum;
    string name = "";

    ss >> ws;
    while (isalnum(ss.peek()))
    {
    	ss >> alnum;
        name += alnum;
    }
    return name;
}


