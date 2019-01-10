#include "operatorexpression.h"

OperatorExpression::OperatorExpression()
{

}

string getterOper()
{
    return this->oper;
}

//析构函数用来删除子表达式，回收分配给它们的内存
~OperatorExpression()
{

}
