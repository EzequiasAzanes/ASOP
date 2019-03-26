#include <iostream>
#include "Date.h"

using namespace std;

Date::Date()
{
    int _month = 1;
    int _day = 1;
    int _year = 1950;

    dayNumber = toDayNumber(_month, _day, _year);
    cout << dayNumber << endl;
    //print();
}

Date::Date(int month, int day, int year)
{
    int _month = month;
    int _day = day;
    int _year = year;

    if ( isValid() && isOutOfRange() )
    {

    }
    else
    {
        _month = 1;
        _day = 1;
        _year = 1950;
    }
}

Date::Date(string date)
{
    string _date = date;
}

bool Date::isValid()
{

}

bool Date::isOutOfRange()
{

}

int Date::toDayNumber(int m, int d, int y)
{
    m = (m + 9) % 12;
    y = y - m / 10;
    return 365 * y + y / 4 - y / 100 + y / 400 + (m * 306 + 5) / 10 + ( d - 1 );
}

void Date::print()
{
    cout << dayNumber << endl;
}
