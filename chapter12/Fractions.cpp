#include "Fractions.h"
#include <iostream>
#include <string>
using namespace std;

Fraction::Fraction(){
    numerator = 0;
    denominator = 1;
}

Fraction::Fraction(int numerator, int denominator){
    this -> numerator = numerator;
    this -> denominator = denominator;
}

Fraction::Fraction(string s){
    for(int i = 0; i < s.length(); i++) {
       if(s[i] == '/') {
           this -> numerator = stoi(s.substr(0,i));
           this -> denominator = stoi(s.substr(i+1,s.length()-1));
       } 
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
