#include "pch.h"
#include "../Project2/prime-factors.cpp"

#include <vector>
using namespace std;

class PrimeFixure : public testing::Test {
public:
	PrimeFactor prime_factor;
	vector<int> expected;
};

TEST_F(PrimeFixure, Of1) {
	expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST_F(PrimeFixure, Of2) {
	expected = {2};
	EXPECT_EQ(expected, prime_factor.of(2));
}

TEST_F(PrimeFixure, Of3) {
	expected = {3 };
	EXPECT_EQ(expected, prime_factor.of(3));
}