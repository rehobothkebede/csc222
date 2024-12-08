#include "Date.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<vector<int>> MyObject::specdays = {{},{},{},{},{},{},{},{},{},{},{},{2,25}};
vector<vector<string>> MyObject::specnames = {{},{},{},{},{},{},{},{},{},{},{},{"wrong","Christmas"}};


MyObject::MyObject(){
    if (!day || !month || !year) {
        std::cerr << "Error: Invalid value in constructor." << std::endl;
    }
}

MyObject::MyObject(int dayin){
    if (!day || !month || !year) {
        std::cerr << "Error: Invalid value in constructor." << std::endl;
    }
}


MyObject::MyObject(int dayin, int  monthin){
    if (!day || !month || !year) {
        std::cerr << "Error: Invalid value in constructor." << std::endl;
    }
}

bool isALeapYear(int year){
    return (year % 4 == 0 && year % 100 !=0) || (year % 400 == 0);

}

MyObject::MyObject(int dayin, int  monthin, int yearin){
    if (!dayin || !monthin || !yearin) {
        std::cerr << "Error: Invalid value in constructor." << std::endl;
    }
    else if (monthin < 1 || monthin > 12){
        std::cerr << "Error: Month out of range." << std::endl;
    }
    else if((monthin == 2 && (dayin > 29)) || (dayin == 29 && !isALeapYear(yearin))){
        std::cerr << "Error: Invalid day for February" << std::endl;
    }
    day = dayin;
    month = monthin;
    year = yearin;
}
MyObject::MyObject(int dayin, int monthin, int yearin, string newevent){

    day = dayin;
    month = monthin;
    year = yearin;

    specnames[month-1].push_back("New Years");
    specdays[month-1].push_back(1);

}
MyObject::MyObject(int dayin, int monthin, int yearin, string newevent, int rem){
    vector<int> specmonth = specdays[month-1];
    int holder;
    string ss;

    day = dayin;
    month = monthin;
    year = yearin;
    for (int i = 0; i < specmonth.size(); i++) {
        if (specmonth[i] == day){
            holder = i;
	        specdays[month-1].erase(std::remove(specdays[month-1].begin(), specdays[month-1].end(), day), specdays[month-1].end());
            break;
        }
    ss = specnames[month-1][holder];
    specnames[month-1].erase(std::remove(specnames[month-1].begin(), specnames[month-1].end(), ss));
}

}


string MyObject::to_string(){

    return ::to_string(month) + "/" + ::to_string(day) + "/" + ::to_string(year);
}

string MyObject::special_day(){
   
    vector<int> specmonth = specdays[month-1];    
    int holder;
    string str;

    for (int i = 0; i < specmonth.size(); i++) {
	    if (specmonth[i] == day){
	        holder = i;
            break;
        }
    }
    
    if(holder != -1){
        str = specnames[month-1][holder]; 
    }
    else{
        std::cerr << "Error: No matching special day found for"
            << month <<  "/" << day << "/" << year << "." << std::endl;
        str = "Error:: No matching special day found.";
    }

    return str;

}
