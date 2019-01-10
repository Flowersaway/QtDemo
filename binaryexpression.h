#ifndef BINARYEXPRESSION_H
#define BINARYEXPRESSION_H
#include<operatorexpression.h>
#include<vector>
using namespace std;

class BinaryExpression:OperatorExpression
{
public:
    string oper;  //operator
protected:
    std::vector<MathExpression*> _operands1;
    std::vector<MathExpression*> _operands2;
public:
    BinaryExpression(string oper, MathExpression operands1, MathExpression operands2);
    double calculate();
    void displayOn(std::ostream &out);

};

#endif // BINARYEXPRESSION_H
