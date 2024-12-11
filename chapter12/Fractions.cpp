#include "Fractions.h"
#include <iostream>
#include <string>

Fraction::Fraction(){
    this-> numerator = 0;
    this-> denominator = 1;
}

Fraction::Fraction(int numerator, int denominator){
    this -> numerator = numerator;
    this -> denominator = denominator;
}

