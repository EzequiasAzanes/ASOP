#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

//.h
class PostfixEvaluator
{
    private:
    	char *input;		//"123*+\0"
    	int index;
    	//MyStack stack;

        char nextChar();
    public:
       PostfixEvaluator(string s);
       void scanner();
};
//.cpp
PostfixEvaluator::PostfixEvaluator(string s)
{
     //assign a string object into a pointer to char (char*)
     //c_str() ==> s (string) = (const char*)
    input = (char *) s.c_str();
    index = 0;
    //for debug
    //cout << input << endl;
}

char PostfixEvaluator::nextChar()
{
     char c = *(input + index);
     index++;
     return c;
}
void PostfixEvaluator::scanner()
{
    char c;
    while((c = nextChar()) != '\0')
    {
         // is c an operand or an operator
         //if c is an operand , push it onto the stack
         //if (isOperand(c))
         //   stack.push(c);
         //but if c is an operand, pop off two operands from the stack....
    }
}
//.cpp file
int main()
{
    PostfixEvaluator p("123*+");
    p.scanner();

    system("pause");
}
