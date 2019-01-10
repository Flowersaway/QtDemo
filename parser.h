#ifndef PARSER_H
#define PARSER_H
#include<parsetreebuilder.h>
#include<mathexpression.h>
#include<vector>

class Parser
{
public:
    Parser(std::unique_ptr<ParseTreeBuilder> &builder);
private:
    std::unique_ptr<ParseTreeBuilder> _builder;
    std::unique_ptr<MathExpression> parse(const std::vector<TokenPtr> &tokens, std::ostream &out);
};

#endif // PARSER_H
