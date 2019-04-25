#include "TestHarness.h"
#include <iostream>
#include <cstdlib>
#include "Write.h"

int main()
{
	// random number generator used in some tests
	srand(::time_t(NULL));

    TestResult tr;
    TestRegistry::runAllTests(tr);

    // non unit test code to use write with cout
    write(std::cout, "Hello There");
    std::cout << std::endl;
    write(std::cout, 33);
    std::cout << std::endl;
    write(std::cout, 44.55f);
    std::cout << std::endl;

	// force console screen to hold
	char ch;
	std::cin >> ch;

    return 0;
}
