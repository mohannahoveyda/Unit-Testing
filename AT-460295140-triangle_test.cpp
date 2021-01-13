#include "Triangle.hpp"
#include <stdexcept>
#include <cassert>
#include <cmath>

#include <string>

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
class TriangleUnderTest : public Triangle{
  public:
  	TriangleUnderTest(int side1,int side2, int side3):Triangle(side1,side2,side3){}
	
	bool is_sideone_the_greatest(){
		return side1>=side2 && side1>=side3;
	}


};




TEST_CASE("proper perimeter test") {
	Triangle triangle(3,4,5);
	REQUIRE(triangle.get_perimeter()==Approx(12));
}
TEST_CASE("proper area test") {
	Triangle triangle(3,4,5);
	REQUIRE(triangle.get_area()==Approx(6));
}

TEST_CASE("proper getkind test") {
	Triangle triangle(6,6,6);
	REQUIRE(triangle.get_kind()==Triangle::Kind::EQUILATERAL);
}

TEST_CASE("proper fields amount test") {
	TriangleUnderTest triangle_under_test(3,5,4);
	REQUIRE(triangle_under_test.is_sideone_the_greatest()==true);
}






