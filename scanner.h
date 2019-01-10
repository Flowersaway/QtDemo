#ifndef SCANNER_H
#define SCANNER_H
#include "token.h"
#include<vector>
using namespace std;
using namespace calc;

typedef std::shared_ptr<Token> TokenPtr;

class Scanner{
public:
    std::vector<std::shared_ptr<Token>> scan(const std::string &text);
private:
    stringstream text;
    Token *scanNext();

};

#endif // SCANNER_H
