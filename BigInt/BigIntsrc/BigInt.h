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
};
