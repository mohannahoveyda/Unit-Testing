#include "get_avg_of_vector.hpp"
#include <stdexcept>
#include <cassert>
#include <cmath>
#include <string>

#define CATCH_CONFIG_MAIN
#include "catch.hpp"


TEST_CASE("proper output test","[vector]") {
std::vector<int> vect;  
     Approx target=Approx (7.3).epsilon(0.01);
    vect.push_back(7); 
    vect.push_back(7); 
    vect.push_back(8);
	REQUIRE(get_avg_of_vector(vect)==target);
}

TEST_CASE("proper length_error test","[vector]") {
std::vector<int> vect(0);  
     // vect.reserve(1);
	REQUIRE_THROWS_AS(get_avg_of_vector(vect), std::length_error);
}





