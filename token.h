#ifndef TOKEN_H
#define TOKEN_H


#include<cstddef>
#include<string>
#include<ostream>

namespace calc{
class Token
{
public:
    const size_t index;
    const size_t numChars;
    Token();
    virtual displayOn(std::ostream&);
    virtual ~Token();
};

template<class T>
class ValueToken: Token{
public:
    const T value;
    ValueToken();
    displayOn(ostream&);
};

typedef ValueToken<std::string> StringToken;
typedef ValueToken<double> NumericToken;

}

ostream& operator<<(ostream& out, const Token& token);

#endif // TOKEN_H
