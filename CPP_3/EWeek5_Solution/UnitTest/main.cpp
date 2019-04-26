#include "TestHarness.h"
#include <iostream>

int main()
{
    TestResult tr;
    TestRegistry::runAllTests(tr);

    // force console screen to hold
    char ch;
    std::cin >> ch;

    return 0;
}
