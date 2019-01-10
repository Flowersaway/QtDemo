#ifndef OPERATOREXPRESSION_H
#define OPERATOREXPRESSION_H
#include<mathexpression.h>
#include<vector>

class OperatorExpression:MathExpression
{
public:
    string oper;  //operator
protected:
    std::vector<MathExpression*> _operands;
public:
    OperatorExpression(string oper);
    void displayOn(std::ostream &out);
    //double calculate();
    string getOperator();   //访问器
    ~OperatorExpression();
};

#endif // OPERATOREXPRESSION_H
