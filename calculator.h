#ifndef CALCULATOR_H
#define CALCULATOR_H
#include<vector>
#include<parsetreebuilder.h>

class Calculator
{
public:
    Calculator(ParseTreeBuilder*);
    double calculate(string text,std::ostream&);
    void setParseType(ParseTreeBuilder*);
};

#endif // CALCULATOR_H
