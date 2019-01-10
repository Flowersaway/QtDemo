#include "scanner.h"

//处理传入的字符串，检索所有tokens，将它们存储在一个向量中。最后返回该向量。
std::vector<std::shared_ptr<Token>> scan(const std::string&text)
{
    /*
    initialise _text with the provided string;
    create a vector to store the result;
    read a token;
    while the token is not nullptr:
        add the token the result vector; // remember the push_back() function
        read another token;
    return the result vector;  */

}

//从文本和stringstream的_text中检索单个token(StringToken/NumericToken)，将其作为共享指针返回
Token *scanNext()
{
    /*
    if nothing to scan:
        return nullptr; // shortcut the function
    skip over whitespace in _text; // you can use peek() and get() for this
    save the current position of the stream; // to be included in tokens for error // reporting later, see tellg()
    read a double from _text;
    if successfully read:
        create a NumericToken from the double;//remember to use std::make_shared
        return the created NumericToken
    else:
        clear the error state on _text;
        read a string from _text;
        if nothing was read:
            return nullptr;
        else:
            create a StringToken from the string;//remem to use std::make_shared
            return the created StringToken  */

}
