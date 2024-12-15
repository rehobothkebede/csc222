#include "Fractions.h"
#include <iostream>
#include <string>
#include <numeric>
#include <stdexcept>
using namespace std;

Fraction::Fraction(){
    numerator = 0;
    denominator = 1;
}

Fraction::Fraction(int numerator, int denominator){
    this -> numerator = numerator;
    this -> denominator = denominator;
    reduce();
}

Fraction::Fraction(string s){
    for(int i = 0; i < s.length(); i++) {
       if(s[i] == '/') {
           this -> numerator = stoi(s.substr(0,i));
           this -> denominator = stoi(s.substr(i+1));
       }
    }
    if(denominator == 0){
        throw invalid_argument("Denominator can not be zero");
    }
    reduce();
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return (a < 0) ? -a : a; 
}


void Fraction::reduce(){
    int devi = gcd(numerator,denominator);
    numerator /= devi;
    denominator /= devi;

    if(denominator < 0){
        numerator = -numerator;
        denominator = -denominator;
    }
}
string Fraction::to_string() const{
    if(denominator==1){
        return std::to_string(numerator);
    }
    else{
        return std::to_string(numerator) + "/" + std::to_string(denominator);
    }
} 
