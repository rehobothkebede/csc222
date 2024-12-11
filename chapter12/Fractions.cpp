#include "Fractions.h"
#include <iostream>
#include <string>

Fraction::Fractions(){
    this-> numerator = 0;
    this-> denominator = 1;
}

Fraction::Fractions(int numerator, int denominator){
    this -> numerator = numerator;
    this -> denominator = denominator;
}

