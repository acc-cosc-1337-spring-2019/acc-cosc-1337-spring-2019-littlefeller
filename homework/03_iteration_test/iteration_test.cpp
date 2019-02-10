#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.cpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/*
Test case function get_gc_content(string dna)

Value	Result
AGCTATAG	.375
CGCTATAG	.50
*/
TEST_CASE("test get_gc") {
	REQUIRE(get_gc("AGCTATAG")==0.375);
	REQUIRE(get_gc("CGCTATAG") == 0.500);
}


/*
Test case function get_reverse_string(string dna)

Value	Result
AGCTATAG	GATATCGA
CGCTATAG	GATATCGC
*/
TEST_CASE("test get_reverse_string") {
	REQUIRE(get_reverse_string("AGCTATAG") == "GATATCGA");
	REQUIRE(get_reverse_string("CGCTATAG") == "GATATCGC");
}


/*
Test case get dna complement

Value	Result
AAAACCCGGT	ACCGGGTTTT
CCCGGAAAAT	ATTTTCCGGG
*/
TEST_CASE("test get_dna_complement") {
	REQUIRE(get_dna_complement("AAAACCCGGT") == "ACCGGGTTTT");
	REQUIRE(get_dna_complement("CCCGGAAAAT") == "ATTTTCCGGG");
}