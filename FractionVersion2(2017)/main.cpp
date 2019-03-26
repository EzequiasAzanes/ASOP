
#include <cstdlib>
#include <iostream>
#include "Fraction.h"

using namespace std;

int main()
{
    int choice;
    do {
        Fraction menu;
        menu.displayMenu();
        choice = menu.askInput("Enter your choice: ");
        menu.initializeChoice(choice);
        if (choice != 6)
            system("PAUSE");
    } while ( choice != 6 );

    Fraction note;
    note.footer();

    return EXIT_SUCCESS;
}
