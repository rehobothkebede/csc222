#include <algorithm>
#include <string>
#include <vector>
#include "Time.cpp"
using namespace std;

struct Time {
	int sec, min, hr;
	Time(sec);
	
	void to_string() const;
}
