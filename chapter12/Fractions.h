#define DATE_H
#include <string>
using namespace std;

struct Fraction{
    int numerator, denominator;
    string s;


    Fraction();
    Fraction(int, int);
    Fraction(string);
    
    string to_string() const;
};

// #endif
