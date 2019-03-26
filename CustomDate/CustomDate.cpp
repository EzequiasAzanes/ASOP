#include <iostream>
#include <string>
#include <sstream>
#include "CustomDate.h"

using namespace std;

CustomDate::CustomDate()
{
    int _month = 1;
    int _day = 1;
    int _year = 1950;

    toDayNumber(_month, _day, _year);
    print();
}

CustomDate::CustomDate(int m, int d, int y)
{
    int _month = m;
    int _day = d;
    int _year = y;

    if ( isValid(_month, _day, _year) && isOutOfRange(_year) )
    {
        toDayNumber(_month, _day, _year);
        print();
    }
    else
    {
        cout << "Invalid Input" << endl;
        _month = 1;
        _day = 1;
        _year = 1950;
    }
}

CustomDate::CustomDate(string date)
{
    string _date = date;
    int delim1 = _date.find("/");
    int delim2 = _date.rfind("/");
    string month = _date.substr(0, delim1);
    string day = _date.substr(delim1 + 1, delim2 - delim1 - 1);
    string year = _date.substr(delim2 + 1);
    stringstream ss1(month), ss2(day), ss3(year);
    int m = 0, d = 0, y = 0;
    ss1 >> m;
    ss2 >> d;
    ss3 >> y;

    if ( isValid(m, d, y) && isOutOfRange(y) )
    {
        toDayNumber(m, d, y);
        print();
    }
    else
    {
        cout << "Invalid Input" << endl;
        m = 1;
        d = 1;
        y = 1950;
    }
}

bool CustomDate::isValid(int m, int d, int y)
{
    if ( m <= 12 && m > 0 && d > 0 && d <= 31 )
    {
        if( (m == 4 || m == 6 || m == 9 || m == 11) && d > 30  )
        {
            return false;
        }
        else if ( !isLeapYear(y) && m == 2 && d >= 29 )
        {
            return false;
        }
        else if ( isLeapYear(y) && m == 2 && d <= 29 )
        {
            return true;
        }
        return true;
    }
    return false;
}

bool CustomDate::isOutOfRange(int y)
{
    if ( y >= 1950 && y <= 2025 )
    {
        return true;
    }
    return false;
}

bool CustomDate::isLeapYear(int y)
{
    if ( y % 4 == 0 && (y % 100 != 0 || y % 400 == 0))
    {
        return true;
    }
    return false;
}

void CustomDate::toDayNumber(int m, int d, int y)
{
    dayNumber = 0;
    int startYear = 1950;

    int yearNumber = y - startYear;

    dayNumber = yearNumber * 365;

    int daysPerYear[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    for( int i = 1; i < m; i++ )
    {
        dayNumber += daysPerYear[i];
    }

    int leapYearNo = 0;
    while ( startYear <= y )
    {
        if ( isLeapYear(startYear) )
        {
            leapYearNo++;
        }
        startYear++;
    }
    dayNumber += d + leapYearNo;

}

int CustomDate::dayOfWeek()
{
    if ( (dayNumber - 1) % 7 == 0 )
    {
        return 7;
    }
    else
    {
        return (dayNumber - 1) % 7;
    }
}

string CustomDate::dayOfWeekToString()
{
    string dow = "";
    switch (dayOfWeek())
    {
        case 1:
            dow = "Monday";
            break;
        case 2:
            dow = "Tuesday";
            break;
        case 3:
            dow = "Wednesday";
            break;
        case 4:
            dow = "Thursday";
            break;
        case 5:
            dow = "Friday";
            break;
        case 6:
            dow = "Saturday";
            break;
        case 7:
            dow = "Sunday";
            break;
    }
    return dow;
}

void CustomDate::print()
{
    cout << "Day#" << dayNumber << endl;
}

ostream &operator<<(ostream& os, const CustomDate& obj){
    os << obj.dayNumber;
    return os;
}

