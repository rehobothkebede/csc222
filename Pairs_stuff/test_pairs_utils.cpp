#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include <string>
#include <sstream>
#include <vector>
#include "pairs_utils.h"
using namespace std;

string input = "CPE1\nCPE2\nCPE3\nCPE4\n===\nNC1\nNC2\nNC3\n";
stringstream ss(input);

TEST_CASE("Test make_lists function") {
    vector<string> list = make_list(ss, 1);
    CHECK(list.size() == 4);
    CHECK(list[1] == "CPE2");
}
TEST_CASE("Test make_lists function can handle second list") {
    string input = "CPE1\nCPE2\nCPE3\nCPE4\n===\nNC1\nNC2\nNC3\n";
    stringstream ss(input);
    vector<string> list2 = make_list(ss, 2);
    CHECK(list2.size() == 3);
    CHECK(list2[1] == "NC2");
}
TEST_CASE("Test make_pairs function") {
    vector<string> students = {"CPE1", "CPE2", "CPE3", "CPE4"};
    vector<string> pairs = make_pairs(students);
    CHECK(pairs.size() == 2);
}
