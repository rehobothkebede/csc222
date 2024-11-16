#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include <string>
#include <vector>
#include "num_vector_utils.h"
using namespace std;

TEST_CASE("Testing render_num_vector") {
    vector<int> nums = {1, 3, 7};
    string numstr = render_num_vector(nums);
    string expected = "1 3 7";
    CHECK(numstr == expected);
    vector<int> nums1 = {1, 3, 7, 6};
    string numstr1 = render_num_vector(nums1);
    string expected1 = "1 3 7 6";
    CHECK(numstr1 == expected1);
    vector<int> nums2;
    string numstr2 = render_num_vector(nums2);
    string expected2 = "";
    CHECK(numstr2 == expected2);
}
TEST_CASE("Testing num_vector_sum") {
    vector<int> nums = {1, 3, 7};
    CHECK(11 == num_vector_sum(nums));
}
TEST_CASE("Testing num_vector_product") {
    vector<int> nums = {2, 3, 7};
    CHECK(42 == num_vector_product(nums));
}
TEST_CASE("Testing only_evens") {
    vector<int> nums = {1, 2, 3, 4, 6, 7, 8, 11, 12, 14, 27, 22};
    vector<int> evens = only_evens(nums);
    string expected = "2 4 6 8 12 14 22";
    CHECK(render_num_vector(evens) == expected);
}
TEST_CASE("Testing only_odds") {
	vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 23, 27, 28, 3};
	vector<int> odds = only_odds(nums);
	string expected = "1 3 5 7 9 23 27 3";
	CHECK(render_num_vector(odds) == expected);
}
TEST_CASE("Testing nums_between function") {
    vector<int> nums = {11, 2, 13, 4, 10, 26, 7, 88, 19, 20, 14, 5, 32};
    vector<int> nums2 = nums_between(nums, 10, 20);
    string expected = "11 13 10 19 20 14";
    CHECK(render_num_vector(nums2) == expected);
}

