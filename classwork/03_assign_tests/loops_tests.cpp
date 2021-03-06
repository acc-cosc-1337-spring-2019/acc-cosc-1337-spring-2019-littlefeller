#include "loops.cpp"
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/*
Write a test case for function factorial with values:
factorial of 3 returns   6
factorial of 4 returns  24
factorial if 5 returns 120
*/
TEST_CASE("test fac_func")
{
	REQUIRE(fac_func(3) == 6);
	REQUIRE(fac_func(4) == 24);
	REQUIRE(fac_func(5) == 120);

}
