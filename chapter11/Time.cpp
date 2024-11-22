#include <string>
#include <vector>
#include <algorithm>
#include "Time.h"
using namespace std;

struct Time {
	int hr, min, sec;

	Time();	
	Time(int);
	Time(int,int);
	Time(int,int,int);
	string to_string() const;

Time(){
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

};
