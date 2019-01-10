#include "parsetreebuilder.h"
#include<iostream>

//初始化数据成员
ParseTreeBuilder::ParseTreeBuilder()
{

}


std::unique_ptr<MathExpression> getParseTree()
{

}

bool ParseTreeBuilder::buildRoot(std::string&) {
    std::cout << "In ParseTreeBuilder::buildRoot(string&)." << std::endl;
    delete _root;
    _root = nullptr;
    return true;
}
