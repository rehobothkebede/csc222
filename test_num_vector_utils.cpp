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
