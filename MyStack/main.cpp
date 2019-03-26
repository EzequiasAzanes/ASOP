
#include <iostream>
#include "MyStack.h"

using namespace std;

int main()
{
    MyStack s;
    s.push('A');
    s.push('B');
    //s.print();

    //char c = s.peek();
    //cout << c;


    //int x[] = {5, 6, 10};
    /*char *y;
    y = new char[5];
    y[0] = 'A';
    *(y+1) = 'B';
    *(y+2) = 'C';
    *(y+3) = 'D';
    *(y+4) = 'E';
    *(y+5) = 'E';
    *(y+6) = 'D';
    char *z = y;
    y+=3;
    z++;
    cout << z << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << *(z + i) << " ";
    }
    //int *p = x;
    //int *q = x;
    //q--;
    //int y;
    //y = *(p+1);
    //cout << *p << endl << *q;
    //if (q < p)
    //    cout << "wew";*/

    return 0;
}
