/*

2. Write CppUnitLite tests which verifies std::stringstream. These test will follow the pattern shown
in the lesson 1 discussion Use stringstream instead of atoi and sprintf. Write separate tests to:
read and write a double
read and write a float
read and write a string
Initialize a stringstream with the "Hello". Attempt to stream this value into an int variable.
Write a check that verifies this fails.
Be sure to use CHECK_DOUBLES_EQUAL for float types and CHECK_EQUAL for other types.

*/

#include "TestHarness.h"
#include <sstream>

using namespace std;

TEST(initialization,sstream){
	stringstream ss;
}

TEST(ioDouble,sstream){
	stringstream ss;
	double a=69.69,b=0.0;
	ss << a;
	ss >> b;
	if (!ss) CHECK_FAIL("conversion failed");
	CHECK_DOUBLES_EQUAL(a,b,0,0.01);
}

TEST(ioFloat,sstream){
	stringstream ss;
	float a=10.3f,b=0.0f;
	ss << a;
	ss >> b;
	if (!ss) CHECK_FAIL("conversion failed");
	CHECK_DOUBLES_EQUAL(a,b,0.01);
}

TEST(ioString,sstream){
	stringstream ss;
	string a("howdy"),b;
	ss << a;
	ss >> b;
	if (!ss) CHECK_FAIL("conversion failed");
	CHECK_EQUAL(a,b);
}

TEST(ioStringToIntInvalid,sstream){
	stringstream ss("Hello");
	int i;
	ss >> i;
	if (!ss) CHECK_FAIL("conversion failed [EXPECTED RESULT]");
}
