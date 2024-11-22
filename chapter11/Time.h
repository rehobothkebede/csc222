#include <string>

using namespace std;

struct Time {
    int hr, min, sec;

    // Constructors
    Time();
    Time(int);
    Time(int, int);
    Time(int, int, int);

    friend Time operator+(const Time& other) const;

    string to_string() const;
};

