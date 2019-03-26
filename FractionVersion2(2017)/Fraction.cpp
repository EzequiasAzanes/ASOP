
#include <cstdlib>
#include <iostream>
#include "Fraction.h"

using namespace std;

Fraction::Fraction()
{
    _wholeNo = 0;
    _num = 0;
    _denom = 0;
}

Fraction::Fraction(int n, int d)
{
    setFraction(n, d);
    _wholeNo = 0;
}

Fraction::Fraction(int w, int n, int d)
{
    setFraction(w, n, d);
    _type = 'M';
}

void Fraction::setNum(int n)
{
    _num = n;
}

void Fraction::setDenom(int d)
{
    _denom = d;
}

void Fraction::setWholeNo(int w)
{
    _wholeNo = w;
}

void Fraction::setFraction(int n, int d)
{
    setNum(n);
    setDenom(d);
}

void Fraction::setFraction(int w, int n, int d)
{
    setWholeNo(w);
    setNum(n);
    setDenom(d);
    _type = 'M';
}

int Fraction::getNum()
{
    return _num;
}

int Fraction::getDenom()
{
    return _denom;
}

int Fraction::getWholeNo()
{
    return _wholeNo;
}



double Fraction::toDecimal()
{
    if (_type == 'M')
    {
        return (getWholeNo() + ((double)getNum() / (double)getDenom()));
    }
    else
    {
        return ((double)getNum() / (double)getDenom());
    }
}

void Fraction::convert()
{
    int w, n;
    if (_type == 'M')   //convert from mixed to improper
    {
        n = (getDenom() * getWholeNo()) + getNum();
        setNum(n);
        setWholeNo(0);
        _type = 'I';
    }
    else                //convert from improper to mixed
    {
        w = getNum() / getDenom();
        n = getNum() % getDenom();
        setWholeNo(w);
        setNum(n);
        _type = 'M';
    }
}

Fraction Fraction::add(Fraction fraction)
{
    int d, n;

    if(getDenom() == fraction.getDenom())   //check if the same denominator
    {
        d = getDenom();
        n = getNum() + fraction.getNum();
    }
    else
    {
        d = getDenom() * fraction.getDenom();
        n = (getNum() * fraction.getDenom()) + (getDenom() * fraction.getNum());
    }

    if (_type == 'M' || fraction._type == 'M')  //check if mixed fraction
    {
        int w = fraction.getWholeNo() + getWholeNo();
        Fraction mixFrac(w, n, d);
        return mixFrac;
    }
    else
    {
        Fraction frac(n, d);
        return frac;
    }
}

Fraction Fraction::subtract(Fraction fraction)
{
    int d, n;

    if (_type == 'M')   //check fraction minuend if mixed, then convert
    {
        convert();
    }

    if (fraction._type == 'M')  //check fraction subtrahend if mixed, then convert
    {
        fraction.convert();
    }

    if(getDenom() == fraction.getDenom())   //check if the same denominator
    {
        d = getDenom();
        n = getNum() - fraction.getNum();
    }
    else
    {
        d = getDenom() * fraction.getDenom();
        n = (getNum() * fraction.getDenom()) - (getDenom() * fraction.getNum());
    }

    Fraction frac(n, d);
    return frac;
}

Fraction Fraction::multiply(Fraction fraction)
{
    int d, n;

    if (_type == 'M')
    {
        convert();
    }

    if (fraction._type == 'M')
    {
        fraction.convert();
    }

    d = getDenom() * fraction.getDenom();
    n = getNum() * fraction.getNum();
    Fraction frac(n, d);
    return frac;
}

Fraction Fraction::divide(Fraction fraction)
{
    int d, n;
    d = getDenom() * fraction.getNum();
    n = getNum() * fraction.getDenom();

    if (_type == 'M')
    {
        convert();
    }

    if (fraction._type == 'M')
    {
        fraction.convert();
    }

    Fraction frac(n, d);
    return frac;
}

void Fraction::show()
{
    if (getWholeNo() != 0)
    {
        cout << getWholeNo() << " " << getNum() << "/" << getDenom();
    }
    else
    {
        cout << getNum() << "/" << getDenom();
    }
}

/*void Fraction::reduce()
{
    int a = getNum(), b = getDenom(), c = 0, r = 0, temp = 0, gcd = 0;
    if(a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    while(r != 0)
    {
        c = a / b;
        r = a % b;
        if(r == 0)
        {
           gcd = b;
        }
        else
        {
            a = b;
            b = r;
        }
    }

    setNum(getNum() / gcd);
    setDenom(getDenom() / gcd);

}
*/
int Fraction::askInput(string prompt)
{
    cout << prompt;
    int input;
    cin >> input;
    return input;
}

void Fraction::displayMenu()
{
    cout << "-------------------------" << endl
         << "      FRACTION MENU      " << endl
         << "-------------------------" << endl
         << "[1] Fraction Addition" << endl
         << "[2] Fraction Subtraction" << endl
         << "[3] Fraction Multiplication" << endl
         << "[4] Fraction Division" << endl
         << "[5] Fraction Comparison" << endl
         << "[6] Exit" << endl << endl;
}

void Fraction::initializeChoice(int choice)
{
    int n1 = 0, d1 = 0, w1 = 0, n2 = 0, d2 = 0, w2 = 0;
    Fraction a (w1, n1, d1);
    Fraction b (w2, n2, d2);
    Fraction result;

    switch (choice)
    {
        case 1:
            n1 = askInput("Enter numerator of 1st fraction: ");
            d1 = askInput("Enter denominator of 1st fraction: ");
            w1 = askInput("Enter whole number of 1st fraction: ");
            cout << endl;
            n2 = askInput("Enter numerator of 2nd fraction: ");
            d2 = askInput("Enter denominator of 2nd fraction: ");
            w2 = askInput("Enter whole number of 2nd fraction: ");

            a.setFraction(w1, n1, d1);
            b.setFraction(w2, n2, d2);
            result = a.add(b);
            cout  << endl << "The sum of ";
            a.show();
            cout << " and ";
            b.show();
            cout << " is ";
            result.show();
            cout << endl;
            break;

        case 2:
            n1 = askInput("Enter numerator of 1st fraction: ");
            d1 = askInput("Enter denominator of 1st fraction: ");
            w1 = askInput("Enter whole number of 1st fraction: ");
            cout << endl;
            n2 = askInput("Enter numerator of 2nd fraction: ");
            d2 = askInput("Enter denominator of 2nd fraction: ");
            w2 = askInput("Enter whole number of 2nd fraction: ");

            a.setFraction(w1, n1, d1);
            b.setFraction(w2, n2, d2);
            result = a.subtract(b);
            cout  << endl << "The difference of ";
            a.show();
            cout << " and ";
            b.show();
            cout << " is ";
            result.show();
            cout << endl;
            break;

        case 3:
            n1 = askInput("Enter numerator of 1st fraction: ");
            d1 = askInput("Enter denominator of 1st fraction: ");
            w1 = askInput("Enter whole number of 1st fraction: ");
            cout << endl;
            n2 = askInput("Enter numerator of 2nd fraction: ");
            d2 = askInput("Enter denominator of 2nd fraction: ");
            w2 = askInput("Enter whole number of 2nd fraction: ");

            a.setFraction(w1, n1, d1);
            b.setFraction(w2, n2, d2);
            result = a.multiply(b);
            cout  << endl << "The product of ";
            a.show();
            cout << " and ";
            b.show();
            cout << " is ";
            result.show();
            cout << endl;
            break;

        case 4:
            n1 = askInput("Enter numerator of 1st fraction: ");
            d1 = askInput("Enter denominator of 1st fraction: ");
            w1 = askInput("Enter whole number of 1st fraction: ");
            cout << endl;
            n2 = askInput("Enter numerator of 2nd fraction: ");
            d2 = askInput("Enter denominator of 2nd fraction: ");
            w2 = askInput("Enter whole number of 2nd fraction: ");

            a.setFraction(w1, n1, d1);
            b.setFraction(w2, n2, d2);
            result = a.divide(b);
            cout  << endl << "The quotient of ";
            a.show();
            cout << " and ";
            b.show();
            cout << " is ";
            result.show();
            cout << endl;
            break;

        default:
            break;
    }
}

void Fraction::footer()
{
    cout << "\n J.R.V.S." << endl;
}
