#ifndef UNARYEXPRESSION_H
#define UNARYEXPRESSION_H
#include<operatorexpression.h>
#include<vector>

class UnaryExpression
{
public:
    string oper;  //operator
protected:
    std::vector<MathExpression*> operands;
public:
    UnaryExpression(string oper, MathExpression operands);
    double calculate();
    void displayOn(std::ostream &out);

};

#endif // UNARYEXPRESSION_H
