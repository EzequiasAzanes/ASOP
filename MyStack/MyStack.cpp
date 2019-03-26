
#include <iostream>
#include "MyStack.h"

using namespace std;

MyStack::MyStack()
{
    stack = new char[10];

}

MyStack::MyStack(int N)
{
    stack = new char[N];
}

MyStack::~MyStack()
{

}

void MyStack::push(char c)
{
    if ( isFull() )
    {
        *stack = c;
        cout << *stack;
        stack++;
    }
    else
        cout << "Stack Overflow" << endl;
}

void MyStack::pop()
{
    if ( isEmpty() )
    {
        stack--;
    }
    else
        cout << "Stack Underflow" << endl;
}

char MyStack::peek()
{
    return *(stack - 1);
}

bool MyStack::isFull()
{
    return true;
}

bool MyStack::isEmpty()
{
    return true;
}

void MyStack::print()
{
    char *currStack = stack;
    for (int i = 0; i < 10; i++)
    {
        cout << *(currStack + i) << " ";
    }
}
