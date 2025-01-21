#include <iostream>
#include <string>
#include "BigInt.h"
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
    return !(this->operator == (other)) || !(this->operator > (other));
}

bool BigInt::operator <= (const BigInt& other) const{
    return !(this->operator > (other));
}



