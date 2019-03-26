
using namespace std;

class Date
{
    private:
        int dayNumber;

        int toDayNumber(int, int, int);
        void isLeapYear();
        bool isValid();
        bool isOutOfRange();
        void print();

    public:
        Date();
        Date(int, int, int);
        Date(string);

        int getDayNumber();
        void setDayNumber(int);

        int dayOfWeek();
        string dayOfWeekToString();
};
