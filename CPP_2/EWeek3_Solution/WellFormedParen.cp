// WellFormedParen.cpp : Defines the entry point for the console application.
//

#include "Stack.h"
#include "ParenthesisChecker.h"

#include <string>
#include <iostream>

using namespace std;

void TestNotWellFormed()
{
	bool chk = ParenthesisChecker::CheckAndPrint("(()) )", cout);
	chk = ParenthesisChecker::CheckAndPrint("(())[2][ ] [", cout);
	chk = ParenthesisChecker::CheckAndPrint("(())[[]] }", cout);
	chk = ParenthesisChecker::CheckAndPrint("(()) [[ {{ (()) }} ]] [][] () {} {{}} ())", cout);
	chk = ParenthesisChecker::CheckAndPrint("(()) Foo(2,3) Bar(arr[1][2], arr[2][2]) )(", cout);
	chk = ParenthesisChecker::CheckAndPrint(")(", cout);
}

void TestWellFormed()
{
	bool chk = ParenthesisChecker::CheckAndPrint("(())", cout);
	chk = ParenthesisChecker::CheckAndPrint("(())[2][ ]", cout);
	chk = ParenthesisChecker::CheckAndPrint("(())[[]]", cout);
	chk = ParenthesisChecker::CheckAndPrint("(()) [[ {{ (()) }} ]] [][] () {} {{}}", cout);
	chk = ParenthesisChecker::CheckAndPrint("(()) Foo(2,3) Bar(arr[1][2], arr[2][2])", cout);
}

int main(int argc, char ** argv)
{
	TestWellFormed();
	TestNotWellFormed();

	return 0;
}

