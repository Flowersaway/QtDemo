#ifndef POSTFIXPARSETREEBUILDER_H
#define POSTFIXPARSETREEBUILDER_H
#include<parsetreebuilder.h>
#include<vector>

class PostFixParseTreeBuilder:ParseTreeBuilder
{
public:
    stack<MathExpression> nodeStack;
public:
    PostFixParseTreeBuilder();
    bool buildRoot(std::string &errorMessage);
    bool buildNode(const StringToken &token,std::string &errorMessage);
    bool buildNode(const NumericToken &token,std::string &errorMessage);
    ~PostFixParseTreeBuilder();
};

#endif // POSTFIXPARSETREEBUILDER_H
