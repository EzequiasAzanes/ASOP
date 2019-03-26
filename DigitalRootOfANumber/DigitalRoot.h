
#include <iostream>
using namespace std;

class DigitalRoot
{
    private:
        int N;

    public:
        //setters
        DigitalRoot(int);
        DigitalRoot();

        //getter
        int getRootValue();

        //auxiliary function
        void header();
        void footer();
        int askInput(string);
        bool isValid(int);
        bool tryAgain();
        void print();

};
