#ifndef POSTFIX_H
#define POSTFIX_H

#include <iostream>
#include "stack.h"
using namespace std;

class Postfix
{
    private:
        string expression;
        

    public:
        Postfix();
        Postfix(string);
        void setExpression(string);
        void printExpression() const;
        int evaluation();
        int isOperator(char);
        int calcuate(int, int, char);
};

#endif