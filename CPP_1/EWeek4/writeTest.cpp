#include "write.h"
#include "TestHarness.h"
#include <ostream>
#include <sstream>
#include <string>

using namespace std;

TEST(writeInt,write){
	stringstream ss;
	int i=69;
	write(ss,i);
	CHECK_EQUAL(ss.str(),to_string(i));
}

TEST(writeFloat,write){
	stringstream ss;
	float f=(float)69.0;
	write(ss,f);
	CHECK_EQUAL(to_string(stof(ss.str())),to_string(f));
}

TEST(writeString,write){
	stringstream ss;
	string str("howdy");
	write(ss,str);
	CHECK_EQUAL(ss.str(),str);
}