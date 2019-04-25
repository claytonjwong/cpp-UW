#include <ostream>
#include "TestHarness.h"

void write(std::ostream& os,int i){
	os << i;
}

void write(std::ostream& os,float f){
	os << f;
}

void write(std::ostream& os,std::string s){
	os << s;
}
