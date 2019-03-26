
#include <iostream>
using namespace std;

class Fraction
{
    private:
        int _wholeNo;
        int _num;
        int _denom;
        char _type;

    public:
        //ctors
        Fraction();
        Fraction(int, int);
        Fraction(int, int, int);

        //setters
        void setNum(int);
        void setDenom(int);
        void setWholeNo(int);
        void setFraction(int, int);
        void setFraction(int, int, int);

        //getters
        int getNum();
        int getDenom();
        int getWholeNo();

        //auxiliary
        double toDecimal();
        void convert();
        Fraction add(Fraction);
        Fraction subtract(Fraction);
        Fraction multiply(Fraction);
        Fraction divide(Fraction);
        void show();
        //void reduce();
        int askInput(string);
        void displayMenu();
        int selectedItem();
        void initializeChoice(int);
        void footer();
};
