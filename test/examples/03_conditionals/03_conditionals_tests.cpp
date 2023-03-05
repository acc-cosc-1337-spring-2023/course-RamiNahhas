#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if_else_if.h"
#include "if.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test order of ops", "!, &&, ||")
{
	//REQUIRE(get_bool_order_of_ops(true, false, true) == true);
	//REQUIRE(get_bool_order_of_ops(false, true, false) == true);
	//REQUIRE(get_bool_order_of_ops(false, false, false) == false);

}

TEST_CASE("Test  get generation function ", "working if else if branch")
{
	REQUIRE(get_generation(2000) == "Centenial");
	REQUIRE(get_generation(1990) == "Millenial");
	REQUIRE(get_generation(1970) == "Generation X");
	REQUIRE(get_generation(1950) == "Baby Boomer");
	REQUIRE(get_generation(1930) == "Silent Generation");
	REQUIRE(get_generation(1900) == "Invalid Year");


}