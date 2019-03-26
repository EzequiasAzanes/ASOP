
#include <cstdlib>
#include <iostream>
#include "Fraction.h"

using namespace std;

int main()
{
    Fraction t, a(2, 5);
    t.title();
    cout << "Fraction a = ";
    a.show();
    double dec = a.toDecimal();
    cout << "Decimal of a = " << dec << endl << endl;

    Fraction b(7, 3);
    cout << "Fraction b = ";
    b.show();
    b.convert();
    cout << "Mixed Fraction of b = ";
    b.show();
    b.convert();
    cout << "Improper Fraction of b = ";
    b.show();

    cout << endl << "Sum of Fraction a and b = ";
    Fraction ab = a.plus(b);
    ab.show();

    Fraction c(5, 2);
    cout << endl << "Fraction c = ";
    c.show();
    Fraction d;
    d.setFraction(2, 1, 3);
    cout << "Fraction d = ";
    d.show();
    d = d.plus(c);
    cout << "Sum of Fraction c and d = ";
    d.show();

    Fraction e(2, 6);
    cout << endl << "Fraction e = ";
    e.show();
    e.reduce();
    cout << "Fraction e simplest form = ";
    e.show();

    system("PAUSE");
    return EXIT_SUCCESS;
}
