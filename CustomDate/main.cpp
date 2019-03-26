#include <iostream>
#include "CustomDate.h"

using namespace std;

int main()
{
    CustomDate d;
    int dow = d.dayOfWeek();
    string dow2str = d.dayOfWeekToString();
    cout << dow << endl
         << dow2str << endl;
    CustomDate d1(3, 5, 1952);
    int dow1 = d1.dayOfWeek();
    string dow2str1 = d1.dayOfWeekToString();
    cout << dow1 << endl
         << dow2str1 << endl;
    CustomDate d2("9/30/1996");
    int dow2 = d1.dayOfWeek();
    string dow2str2 = d1.dayOfWeekToString();
    cout << dow2 << endl
         << dow2str2 << endl;

    return 0;
}
