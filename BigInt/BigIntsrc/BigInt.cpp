#include <iostream>
#include <string>
#include "BigInt.h"
#include <cmath>
using namespace std;

BigInt::BigInt()
{
    negative = false;
    digits = "0";
}

BigInt::BigInt(int i)
{
    negative = (i >= 0) ? false : true;
    digits = (i >= 0) ? std::to_string(i) : std::to_string(-i);
}

BigInt::BigInt(string n)
{
    negative = (n.front() == '-') ? true: false;
    digits = (n.front() == '-') ? n.substr(1, n.size() - 1) : n;
}

string BigInt::to_string() const
{
    return (!negative) ? digits : "-" + digits;
}

BigInt BigInt::operator-() const {
    BigInt result = *this;
    if(result.digits == "0"){
        result.negative = false;
    }else{
        result.negative = !negative;
    }
    return result;
}

bool BigInt::operator==(const BigInt& other) const{
    return (negative == other.negative && digits == other.digits);
}

bool BigInt::operator!=(const BigInt& other) const{ 
    return !(this->operator==(other));
}

bool BigInt::operator > (const BigInt& other) const{
    if (negative && other.negative) return true;
    if (negative && !other.negative) return false;
    // They have the same sign
    if (digits.size() > other.digits.size()) {
        return negative ? false : true;
    }
    if (digits.size() < other.digits.size()) {
        return negative ? true : false;
    }
    // They have the same number of digits 
    for (int i = 0; i < digits.size(); i++) {
        if (digits[i] > other.digits[i]) {
            return negative ? false : true;
        }
    }
    // They are equal
    return false;
}

bool BigInt::operator >= (const BigInt& other) const{
    return (this->operator > (other)) || (this->operator == (other));
}

bool BigInt::operator < (const BigInt& other) const{
    if(negative != other.negative){
        return negative; 
    } 

    if(digits.size() != other.digits.size()){
        return (digits.size() < other.digits.size()) != negative;
    }

    for(size_t i = 0; i < digits.size(); i++){
        if(digits[i] != other.digits[i]) {
            return (digits[i] < other.digits[i]) != negative;
        }
    }
    return false;
}

bool BigInt::operator <= (const BigInt& other) const{
    return !(this->operator > (other));
}

BigInt BigInt::operator + (const BigInt& other) const{
    string result = "";
    int carry = 0;
    
    int i = digits.size()-1;
    int j = other.digits.size()-1;

    while(i >= 0 || j>=0 || carry){
        int digit1 = (i >= 0) ? digits[i] - '0' : 0;
        int digit2 = (j >= 0) ? other.digits[j] - '0' : 0;
        
        int sum = digit1 + digit2 + carry;
        result.insert(result.begin(), (sum % 10) + '0');
        carry = sum / 10;
        
        i--;
        j--;
    }

    return BigInt(result);
}

BigInt BigInt::operator - (const BigInt& other) const{
    if (negative && other.negative) {
        return (-other) - (-(*this));
    }else if(negative && !other.negative){
        BigInt result = (*this) + other;
        result.negative = true;
        return result;
    } else if (!negative && other.negative) {
        return (*this) + (-other);
    }
    
    bool resultNegative = *this < other;

    const BigInt& larger = resultNegative ? other : *this;
    const BigInt& smaller = resultNegative ? *this : other;

    string result = "";
    int borrow = 0;

    int i = larger.digits.size() - 1;
    int j = smaller.digits.size() - 1;

    while (i >= 0 || j >= 0) {
        int digit1 = (i >= 0) ? larger.digits[i] - '0' : 0;
        int digit2 = (j >= 0) ? smaller.digits[j] - '0' : 0;

        int diff = digit1 - digit2 - borrow;
        if (diff < 0) {
            diff += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }

        result.insert(result.begin(), diff + '0');
        i--;
        j--;
    }

    while (result.size() > 1 && result[0] == '0') {
        result.erase(result.begin());
    }

    BigInt finalResult(result);
    finalResult.negative = resultNegative;
    return finalResult;
}

BigInt BigInt::operator * (const BigInt &other) const{
    if(*this == BigInt("0") || other == BigInt("0")){
        return BigInt("0");
    } 
    
    if(digits.size() == 1 || other.digits.size() == 1){
        return simpleMultiply(*this, other);
    }
}


BigInt BigInt::simpleMultiply(const BigInt& other1, const BigInt other2) const{
    int num1 = other1.digits[0] - '0';
    int num2 = other2.digits[0] - '0';

    return BigInt(to_string(num1 * num2));
}
