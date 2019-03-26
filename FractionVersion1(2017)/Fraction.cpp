
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

void Fraction::title()
{
    cout << "--------------------" << endl;
    cout << " FRACTION VERSION 1 " << endl;
    cout << "--------------------" << endl << endl;
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
    if (_type == 'M')
    {
        n = (getDenom() * getWholeNo()) + getNum();
        setNum(n);
        setWholeNo(0);
        _type = 'I';
    }
    else
    {
        w = getNum() / getDenom();
        n = getNum() % getDenom();
        setWholeNo(w);
        setNum(n);
        _type = 'M';
    }
}

Fraction Fraction::plus(Fraction fraction)
{
    int d, n;
    d = getDenom() * fraction.getDenom();
    n = (getNum() * fraction.getDenom()) + (fraction.getNum() * getDenom());
    Fraction frac(n, d);

    if (_type == 'M' || fraction._type == 'M')
    {
        int w = fraction.getWholeNo() + getWholeNo();
        Fraction mixFrac(w, n, d);
        return mixFrac;
    }
    else
    {
        return frac;
    }
}

void Fraction::show()
{
    if (_type == 'M')
    {
        cout << getWholeNo() << " " << getNum() << "/" << getDenom() << endl;
    }
    else
    {
        cout << getNum() << "/" << getDenom() << endl;
    }
}

void Fraction::reduce()
{
    int a = getNum(), b = getDenom(), c, r, temp, gcd;
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
