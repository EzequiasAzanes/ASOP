
#include <cstdlib>
#include <iostream>
#include "DigitalRoot.h"

using namespace std;

int main()
{
    DigitalRoot input;
    do {
        input.header();
        int N = input.askInput(" Input a number [1-999]: ");
        if (input.isValid(N))
        {
            DigitalRoot obj(N);
            obj.print();
        }
    } while ( input.tryAgain() );
    input.footer();

    system("PAUSE");
    return EXIT_SUCCESS;
}
