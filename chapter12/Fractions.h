#define DATE_H
#include <string>
#include <numeric>
using namespace std;

struct Fraction{
    int numerator, denominator;
    string s;

    Fraction();
    Fraction(int, int);
    Fraction(string);
    

    void reduce();
    string to_string() const;
};

// #endif
