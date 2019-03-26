using namespace std;

class CustomDate
{
    private:
        int dayNumber;
        void toDayNumber(int, int, int);
        bool isLeapYear(int);
        bool isValid(int, int, int);
        bool isOutOfRange(int);
        void print();

    public:
        CustomDate();
        CustomDate(int, int, int);
        CustomDate(string);
        friend ostream &operator<<(ostream&, const CustomDate&);
        int dayOfWeek();
        string dayOfWeekToString();
};
