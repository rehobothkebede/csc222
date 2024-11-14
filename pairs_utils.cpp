#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

vector<string> make_list(stringstream& ss, char listnum) {
    vector<string> students;
    string student;
    ss >> student;
    while (student != "===") {
        if (listnum == 1) students.push_back(student);
        ss >> student;
    }
    return students;
}
vector<string> make_pairs(vector<string> students) {
    vector<string> pairs;
    return pairs;
}
