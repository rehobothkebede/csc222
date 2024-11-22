#include <algorithm>
#include <string>
#include <vector>
using namespace std;

struct Time {
	int hr, min, sec;

	Time();	
	Time(int);
	Time(int,int);
	Time(int,int,int);
	string to_string() const;
};
