#include "parser.h"

//确保基础指针正确传给了数据成员
Parser::Parser()
{


}

std::unique_ptr<MathExpression> parse(const std::vector<TokenPtr> &tokens, std::ostream &out)
{
    /*
    for each token in tokens:
        determine the type of the token (string or numeric)
        if the token is numeric:
            execute _builder.buildNode for the NumericToken
        else:
            execute _builder.buildNode for the StringToken
        if the call to buildNode was unsuccessful:
            output the errorMessage to out
            return the nullptr
    execute _builder.buildRoot
    if the call to buildRoot was unsuccessful:
        output the errorMessage to out
        return the nullptr
    retrieve and return the parse tree from _builder
    */
}
