#ifndef PARSERTREEBUILDER_H
#define PARSERTREEBUILDER_H
#include<memeory>
#include<mathexpression.h>
#include<vector>

class ParseTreeBuilder
{
public:
    ParseTreeBuilder();
    std::unique_ptr<MathExpression> getParseTree();
    virtual bool buildRoot(std::string &errorMessage);
    virtual bool buildNode(const StringToken &token,std::string &errorMessage);
    virtual bool buildNode(const NumericToken &token,std::string &errorMessage);
    ~ParseTreeBuilder();
};

#endif // PARSERTREEBUILDER_H
