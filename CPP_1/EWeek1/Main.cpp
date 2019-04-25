/*

	Questions:

	To use CppUnitLite, which is best:

	1) open existing solution and add code
	2) create a new solution and integrate CppUnitLite there ( unknown how to simply do this )

	



*/

#include "TestHarness.h"
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
	/*

	1. Write a program that prompts the user to enter an int, a double, and a string on the command line.
	Read the values into variables of the appropriate data type with std::cin.
	Write the 3 values to std::cout. This program does not require the use of CppUnitLite.

	*/
	int i=0;
	double d=0.0;
	string s;

	cout << "integer: ";
	cin >> i;

	cout << "double: ";
	cin >> d;

	cout << "string: ";
	cin >> s;

	cout << endl << i << endl << d << endl << s << endl;


	// random number generator used in some tests
	srand(::time_t(NULL));

    TestResult tr;
    TestRegistry::runAllTests(tr);

	// force console screen to hold
	char ch;
	std::cin >> ch;

    return 0;
}
