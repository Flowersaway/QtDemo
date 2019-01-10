#include "token.h"

Token::Token()
{

}

Token::~Token()
{

}


ostream& operator<<(ostream& out, const Token& token)
{
    out<<StringToken<<NumericToken;
    return out;
}

