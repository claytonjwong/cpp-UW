#include "TestHarness.h"
#include <iostream>

using namespace std;

int main()
{

	// random number generator used in some tests
	srand(::time_t(NULL));

    TestResult tr;
    TestRegistry::runAllTests(tr);

	// force console screen to hold
	char ch;
	std::cin >> ch;

    return 0;
}

/*
 
 OUTPUT
 
 test1.txt:
 Student <Jim Black> did not have an ID
 T:           Tracy Brown  177
 T:             Tim White   88
 J:              John Doe 1234
 J:            James Bond    7
 J:            Jack Smith  172
 J:             Jim Black    0
 
 
 test2.txt:
 Student <Jessica Wong> did not have an ID
 J:          Jessica Wong    0
 B:            Boden Wong    4
 A:            Abner Wong    5
 C:          Clayton Wong   35
 C:            Cyrus Wong    2
 
 
 does_not_exist:
 
 
 5 tests, 0 failures, 0 errors
 
 */

