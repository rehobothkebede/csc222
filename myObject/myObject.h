// #ifndef MYOBJECT_H
#define MYOBJECT_H
#include <string>
using namespace std;

struct MyObject {
    int day, month, year;

    MyObject();
    string to_string();
    MyObject(int dayin, int  monthin, int yearin);
    string special_day();
};

// #endif
