#include <iostream>
#include <string>
#include <cstdlib>
#include "PostfixEvaluator.h"

using namespace std;

PostfixEvaluator::PostfixEvaluator(string s)
{
    input = (char *) s.c_str();
    index = 0;
    scanner();
}

char PostfixEvaluator::nextChar()
{
     char c = *(input + index);
     index++;
     return c;
}

bool PostfixEvaluator::isOperator(char c)
{
    char operators[] = { '+', '-', '*', '/', '\0' };
    for (int i = 0; i < 4; i++)
        if( c == operators[i] )
            return true;
    return false;
}

int PostfixEvaluator::solve(char c)
{
    char oprd1 = stack.pop();
    char oprd2 = stack.pop();
    int op1 = oprd1 - '0';
    int op2 = oprd2 - '0';
    int result;
    switch (c)
    {
        case '+':
            result = op1 + op2;
            break;
        case '-':
            result = op1 - op2;
            break;
        case '*':
            result = op1 * op2;
            break;
        case '/':
            if (op2 > op1)
                result = op2 / op1;
            else
                result = op1 / op2;
            break;
    }
    return result;
}

void PostfixEvaluator::scanner()
{
    char c;
    int result;
    while((c = nextChar()) != '\0')
    {
        if ( isOperator(c) )
        {
            result = solve(c);
            char toPush = '0' + result;
            stack.push(toPush);
        }
        else
            stack.push(c);
    }
    char total_result = stack.peek();
    cout << total_result << endl;
}
