#ifndef TIME_H
#define TIME_H
#include <string>
using namespace std;

struct Time {
    int hr, min, sec;

    Time();
    Time(int);
    Time(int, int);
    Time(int, int, int);

    Time operator+(const Time& other) const;

    string to_string() const;
};
#endif


