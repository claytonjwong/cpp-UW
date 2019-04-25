/*

[Note: This assignment does not require CppUnitLite tests] Define a simple class
with a default constructor, a copy constructor (i.e., a constructor that takes the single parameter:
const SimpleClass& src), and destructor. Annotate each one so that it writes to cout each time
it is invoked.
Declare four functions, f1, f2, f3, and f4 with the following prototypes:
void f1(SimpleClass aSimpleClass);
void f2(SimpleClass aSimpleClass);
void f3(SimpleClass& aSimpleClass);
void f4(SimpleClass* aSimpleClass)
Declare an instance of SimpleClass in the function main and call f1 with that instance as an argument.
Declare an instance of SimpleClass in the function f1. Pass that instance by value, to function, f2.
Declare an instance of the SimpleClass in f2 that uses the copy constructor. Pass that instance
by reference to function f3.
Declare a function f4 that takes a pointer to an instance of SimpleClass. Call f4 from within f3
using a pointer to the argument passed into f3.
How many instances of your class were constructed? How many instances of your class were destructed? Why?

*/

#pragma once

class SimpleClass{
public:
	SimpleClass(){
		std::cout << "ctor (default)" << std::endl;
	}
	SimpleClass(const SimpleClass& src){
		std::cout << "ctor (copy)" << std::endl;
	}
	~SimpleClass(){}
};

void f1(SimpleClass aSimpleClass);
void f2(SimpleClass aSimpleClass);
void f3(SimpleClass& aSimpleClass);
void f4(SimpleClass* aSimpleClass)