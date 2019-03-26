#include <iostream>
#include <string>
#include "PostfixEvaluator.h"

using namespace std;

int main()
{
    cout << "Equation: 1 + 2 * 3" << endl
         << "Postfix Form: 123*+" << endl
         << "Answer: ";
    PostfixEvaluator postfix1("123*+");

    cout << "Equation: 4 + 4 / 2 - 6" << endl
         << "Postfix Form: 442/+6-" << endl
         << "Answer: ";
    PostfixEvaluator postfix2("442/+6-");

    cout << "Equation: 2 * (4 / 1) - 9" << endl
         << "Postfix Form: 241/*9-" << endl
         << "Answer: ";
    PostfixEvaluator postfix3("241/*9-");

    return 0;
}
