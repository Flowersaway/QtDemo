#ifndef MATHEXPRESSION_H
#define MATHEXPRESSION_H
using namespace calc;

class MathExpression{
public:
    MathExpression()=default;
    virtual ~MathExpression()=default;
    virtual bool isLeaf() const;
    virtual void displayOn(std::ostream &out) const=0;
    virtual double calculate() const=0;
    MathExpression &operator=(const MathExpression &)=delete;
};

ostream& operator<<(ostream& out, ParseNode& node);



#endif // MATHEXPRESSION_H
