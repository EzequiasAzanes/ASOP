
#include <iostream>
#include "MyStack.h"
#define SIZE 10

using namespace std;

MyStack::MyStack()
{
    stack = new char[SIZE];
    top = -1;
}

MyStack::MyStack(int N)
{
    stack = new char[N];
    top = -1;
}

MyStack::~MyStack()
{
    delete[] stack;
}

void MyStack::push(char c)
{
    if ( isFull() )
    {
        top++;
        *(stack + top) = c;
    }
    else
        cout << "Stack Overflow" << endl;
}

char MyStack::pop()
{
    if ( isEmpty() )
    {
        char popped = *(stack + top);
        top--;
        return popped;
    }
    else
        cout << "Stack Underflow" << endl;
}

char MyStack::peek()
{
    return *(stack + top);
}

bool MyStack::isFull()
{
    if( top == SIZE - 1 )
    {
        return false;
    }
    return true;
}

bool MyStack::isEmpty()
{
    if(top < 0)
    {
        return false;
    }
    return true;
}

void MyStack::print()
{
    char *currStack = stack;
    for (int i = 0; i <= top; i++)
    {
        cout << *(currStack + i) << " ";
    }
    cout << endl;
}
