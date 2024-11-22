#include <string>
#include <vector>
#include <algorithm>
#include "Time.h"
using namespace std;


class Time{
	int hr;
	int min;
	int sec;
Time::Time(){
	hr = 0;
	min = 0;
	sec = 0;
}

/*Time: :Time(int* sec){
	min = 0;
	hr = 0;
	this->sec = sec;
	
}

Time: :Time(int hr, int min){
	this -> hr = hr;
	this -> min = min;
	sec = 0;
	
}

Time: :Time(int hr, int min, int sec){
	this -> hr = hr;
	this -> min = min;
	this -> sec = sec;

}*/

	string to_string() const{
		return "";
	}

}
