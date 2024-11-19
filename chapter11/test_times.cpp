#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include "Time.h"
using namespace std;

TEST_CASE("Test can create and render Times") {
    Time t1;
    CHECK(t1.to_string() == "0:00:00");
    Time t2(7);
    CHECK(t2.to_string() == "0:00:07");
    Time t3(72);
    CHECK(t3.to_string() == "0:01:12");
    Time t4(7 * 3600 + 11 * 60 + 19);
    CHECK(t4.to_string() == "7:11:19");
}
