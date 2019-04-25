#include "TestHarness.h"
#include "Cat.h"

using namespace std;

/***********************************************
char* cat(char*,char*);
*/

TEST(twoWords,CatC){
	char* a="a",*b="b";
	CHECK_EQUAL(a,"a");
	CHECK_EQUAL(b,"b");
	char* c=cat(a,b);
	CHECK_EQUAL(c,"ab");
	if (c)
		delete[] c;
}

TEST(oneWord,CatC){
	char* a="a";
	CHECK_EQUAL(a,"a");
	char* c=cat(a,a);
	CHECK_EQUAL(c,"aa");
	if (c)
		delete[] c;
}

TEST(null,CatC){
	char* a="a",*b=nullptr;
	CHECK(a=="a" && b==nullptr);
	char* c=cat(a,b);
	CHECK(c==nullptr);
	if (c)
		delete[] c;
}

TEST(twoEmpty,CatC){
	char* a="",*b="";
	CHECK(a=="" && b=="");
	char* c=cat(a,b);
	CHECK_EQUAL(c,"");
	if (c)
		delete[] c;
}

/*************************************************
std::string cat(const std::string&,const std::string&);
*/
TEST(twoWords,CatCpp){
	string a="a",b="b";
	CHECK(a=="a" && b=="b");
	string c=cat(a,b);
	CHECK(c=="ab");
}

TEST(oneWord,CatCpp){
	string a="a";
	CHECK(a=="a");
	string c=cat(a,a);
	CHECK(c=="aa");
}

TEST(oneEmpty,CatCpp){
	string a="a",b="";
	CHECK(a=="a" && b=="");
	string c=cat(a,b);
	CHECK(c=="a");
}

TEST(twoEmpty,CatCpp){
	string a="",b="";
	CHECK(a=="" && b=="");
	string c=cat(a,b);
	CHECK(c=="");
}
