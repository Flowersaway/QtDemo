#include "postfixparsetreebuilder.h"

PostFixParseTreeBuilder::PostFixParseTreeBuilder()
{

}

bool buildRoot(std::string &errorMessage)
{

}

bool buildNode(const StringToken &token,std::string &errorMessage)
{
    /*
    if token.value is a valid unary operator (‘sin’, ‘cos’, ‘tan’):
        if the stack is empty:
           determine the position of the error using token.index
           set errorMessage to “Unexpected unary operator at position <pos>. Expected literal.”
           // <pos> should be replaced with the position of the error
           return false
         otherwise:
           save the node at the top of the stack
           pop (remove) the top of the stack
           create a new UnaryExpression with token.value as the operator and the saved node
           push the new UnaryExpression onto the stack
           return true
      else if token.value is a valid binary operator (‘+’, ‘-’, ‘*’, ‘/’):
        if the stack is empty:
            determine the position of the error using token.index
            set errorMessage to “Unexpected binary operator at position <pos>. Expected literal.”
            return false
        else if the stack has only 1 element:
            determine the position of the error using token.index
            set errorMessage to “Unexpected binary operator at position <pos>. Expected second operand.”
            return false
        otherwise:
            save the node at the top of the stack (operand2)
            pop (remove) the top of the stack
            save the node at the top of the stack (operand1)
            pop (remove) the top of the stack
            create a new BinaryExpression with token.value as the operator and the two saved nodes as the operands
            push the new BinaryExpression onto the stack
            return true
        otherwise:
            set errorMessage to “Unknown operator <token.value> -- expected one of + - * / sin cos tan”
            return false  */

}

bool buildNode(const NumericToken &token,std::string &errorMessage)
{

}

PostFixParseTreeBuilder::~PostFixParseTreeBuilder()
{

}
