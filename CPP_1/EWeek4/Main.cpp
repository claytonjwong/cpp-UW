#include "TestHarness.h"
#include "write.h"
#include <iostream>

using namespace std;

/*

4. [Note: This assignment does not require CppUnitLite tests] Define a simple class
with a default constructor, a copy constructor (i.e., a constructor
that takes the single parameter: const SimpleClass& src), and destructor.
Annotate each one so that it writes to cout each time it is invoked.

*/

class SimpleClass {
public:
	SimpleClass() {
		cout << "ctor (default)" << endl;
	}
	SimpleClass(const SimpleClass& rhs){
		cout << "ctor (copy)" << endl;
	}
	~SimpleClass(){
		cout << "dtor" << endl;
	}
};

/*

4a. Declare four functions, f1, f2, f3, and f4 with the following prototypes:

*/
void f1(SimpleClass aSimpleClass);
void f2(SimpleClass aSimpleClass);
void f3(SimpleClass& aSimpleClass);
void f4(SimpleClass* aSimpleClass);


void f1(SimpleClass aSimpleClass){
	/*
	
	4c. Declare an instance of SimpleClass in the function f1.
	Pass that instance by value,to function,f2.

	*/
	SimpleClass sc;
	f2(sc);
}

void f2(SimpleClass aSimpleClass){
	/*
	
	4d. Declare an instance of the SimpleClass in f2
	that uses the copy constructor. Pass that instance
	by reference to function f3.
	
	*/
	SimpleClass sc(aSimpleClass);
	f3(sc);
}

void f3(SimpleClass& aSimpleClass){
	/*
	
	4e. Declare a function f4 that takes a pointer to an instance of SimpleClass.
	Call f4 from within f3 using a pointer to the argument passed into f3.
	
	*/
	f4(&aSimpleClass);
}
void f4(SimpleClass* aSimpleClass){

	/*
	
	4f. How many instances of your class were constructed?
	How many instances of your class were destructed? Why?
	
	*/

	/*
	
	[Clayton]:
	
	* one instance is created in main(),

	* one instance is created when sc is copied into f1() as
	the parameter aSimpleClass

	* one instance is created inside f1() as sc

	* one instance is created when sc is copied when f2()
	is invoked from within f1()

	* one instance is created when sc is created using
	the copy constructor inside f2()

	* when f3() is invoked, the existing SimpleClass object
	is passed by reference
	
	* when f4() is invoked, a pointer to SimpleClass is passed by value,
	this pointer points towards the existing SimpleClass object's
	address

	Therefore, 5 instances of SimpleClass are created and destroyed.
	I ran this program and thought I might have mis-counted, since I
	only saw 4 dtors, however, the last instance to be cleaned up will
	only do so after it has gone out of scope.  The original scope was
	the main function, which ends after pressing a key, so I can only
	see this final dtor output for a split second.  So that is my
	reasoning behind the curly brackets surrounding the instance
	of SimpleClass and the invoking of f1 within main() below:

	{
		SimpleClass sc;
		f1(sc);
	}

	*/
}



int main()
{

	// random number generator used in some tests
	srand(::time_t(NULL));

    TestResult tr;
    TestRegistry::runAllTests(tr);

	int i=69;
	float f=69e0;
	string s("69");
	write(cout,i);
	write(cout,f);
	write(cout,s);
	cout << endl << endl;

	/*

	4b. Declare an instance of SimpleClass in the function main
		and call f1 with that instance as an argument.

	*/
	{
		SimpleClass sc;
		f1(sc);
	}
	
	// force console screen to hold
	char ch;
	std::cin >> ch;

    return 0;
}
