#include <string>
using namespace std;

class BigInt
{
    bool negative;
    string digits;

    public:
    // constructors
    BigInt();
    BigInt(int);
    BigInt(string);

    // member functions
    string to_string() const;
    
    // comparison operators
    bool operator == (const BigInt& other) const;
    bool operator != (const BigInt& other) const;
    bool operator < (const BigInt& other) const;
    bool operator <= (const BigInt& other) const;
    bool operator > (const BigInt& other) const;
    bool operator >= (const BigInt& other) const;

    // arithmetic operators
    BigInt operator + (const BigInt& other) const;
    BigInt operator - (const BigInt& other) const;
    BigInt operator * (const BigInt& other) const;
    
    BigInt simpleMultiply(const BigInt&, const BigInt&) const;
    BigInt shiftLeft(int) const;

    // Unary Negation
    BigInt operator - () const;
};
