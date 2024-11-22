#include "Time.h"
using namespace std;


Time::Time() : hr(0), min(0), sec(0) {}

Time::Time(int sec) : hr(0), min(0), sec(sec) {
	if(this->sec>60){
		this -> min = sec/60;		
		this -> sec = sec%60;
	}
	if(this->min>=60){
		this -> hr = min/60;
		this -> min = min%60;
	}

}

Time::Time(int hr, int min) : hr(hr), min(min), sec(0) {
	if(this->min>=60){
                this -> hr = min/60;
                this -> min = min%60;
        }

}

Time::Time(int hr, int min, int sec) : hr(hr), min(min), sec(sec) {
	if(this->sec>60){
                this -> min = sec/60;
                this -> sec = sec%60;
        }
        if(this->min>=60){
                this -> hr = min/60;
                this -> min = min%60;
        }

}

string Time::to_string() const {
    return std::to_string(hr) + ":" + (min < 10 ? "0" : "") + std::to_string(min) + ":" + (sec < 10 ? "0" : "") + std::to_string(sec);
}


Time Time::operator+(const Time& other) const {
    int totalSec = this->sec + other.sec;
    int totalMin = this->min + other.min + totalSec / 60;
    int totalHr = this->hr + other.hr + totalMin / 60;

    totalSec %= 60;
    totalMin %= 60;
    
    return Time(totalHr, totalMin, totalSec);
}

