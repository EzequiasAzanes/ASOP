
#include <iostream>
#include "DigitalRoot.h"
using namespace std;

DigitalRoot::DigitalRoot(int N)
{
    this->N = N;
}

DigitalRoot::DigitalRoot(){ }

int DigitalRoot::getRootValue()
{
    return (1 + (N - 1) % 9);
}

void DigitalRoot::header()
{
    cout << "--------------------------" << endl;
    cout << " DIGITAL ROOT OF A NUMBER " << endl;
    cout << "--------------------------" << endl;
}

void DigitalRoot::footer()
{
    cout << " Thank you for using this application." << endl;
    cout << " J.R.V.S." << endl;
}

bool DigitalRoot::tryAgain()
{
    cout << " Do you want to continue? [Y/N]: ";
    char choice;
    cin >> choice;
    cout << "\n";
    return (choice == 'Y' || choice == 'y');
}

bool DigitalRoot::isValid(int input)
{
    if (input > 999 || input < 1)
    {
        cout << endl << " Invalid Input" << endl << endl;
        cout << "--------------------------" << endl << endl;
        return false;
    }
    return true;
}

int DigitalRoot::askInput(string prompt)
{
    cout << endl << prompt;
    int input;
    cin >> input;
    return input;
}

void DigitalRoot::print()
{
    cout << endl << " Digital Root = " << getRootValue() << endl << endl;
    cout << "--------------------------" << endl << endl;
}
