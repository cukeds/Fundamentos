
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "../utils/catch.hpp"
#include "ej1.h"


TEST_CASE( "1: Difference is correctly calculated", "[multi-file:2]" ) {
    REQUIRE( ej1() == 4);

}
