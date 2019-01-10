#ifndef LITERALEXPRESSION_H
#define LITERALEXPRESSION_H
#include <mathexpression.h>

class LiteralExpression:MathExpression{
private:
    double value;
public:
    LiteralExpression(double value);
    bool isLeaf();
    void displayOn(std::ostream &out);
    double calculate();

};

#endif // LITERALEXPRESSION_H
