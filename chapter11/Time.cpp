#include "Time.h"
using namespace std;


Time::Time() : hr(0), min(0), sec(0) {}

Time::Time(int sec) : hr(0), min(0), sec(sec) {}

Time::Time(int hr, int min) : hr(hr), min(min), sec(0) {}

Time::Time(int hr, int min, int sec) : hr(hr), min(min), sec(sec) {}

string Time::to_string() const {
    return std::to_string(hr) + ":" + (min < 10 ? "0" : "") + std::to_string(min) + ":" + (sec < 10 ? "0" : "") + std::to_string(sec);
}
