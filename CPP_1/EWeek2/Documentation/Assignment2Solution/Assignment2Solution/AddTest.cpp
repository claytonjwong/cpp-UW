#include "TestHarness.h"

#include <vector>

int add(int n1, int n2)
{
    return n1 + n2;
}

TEST(Add, Adding)
{
    CHECK_EQUAL(5, add(4, 1));
}

TEST(AddMore, Adding)
{
    CHECK_EQUAL(7, add(6, 1));
}

TEST(charString, chars)
{
	std::string s1("Hello");
	const char* s = s1.c_str();
	CHECK_EQUAL("Hello", s);
}

TEST(wcharString, wchars)
{
	std::wstring s1(L"Hello");
	const wchar_t* s = s1.c_str();
//	CHECK_WEQUAL(L"LHello", s);
}