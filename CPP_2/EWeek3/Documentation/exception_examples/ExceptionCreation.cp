/* Example showing lifetime of exception object, catching them by value and by reference.
   Play with this in your IDE and modify statements to explore further
*/

#include "MyException.h"

using namespace std;

MyException gException(0);   // A pre created exception object

void Foo3( int exceptionValue, bool createNewException )
{
	if ( createNewException )
	{
		throw MyException( exceptionValue );
	}
	else
	{
		throw gException;   // throw the pre created exception object
	}
}

void Foo2( int exceptionValue, bool createNewException )
{
	Foo3( exceptionValue, createNewException );
}


void Foo0( int exceptionValue, bool createNewException )
{
	Foo2( exceptionValue, createNewException );
}

void Foo1( int exceptionValue, bool createNewException )
{
	Foo0( exceptionValue, createNewException );
}

void Example1( bool createNewException )
{
	cout << "------Catching by value ------------------ " << endl;
	try
	{
		Foo1( 1, createNewException );
	}
	catch ( MyException eByValue )
	{
		// Put a break point at line below and look at the output window
		cout << "Caught MyException at addr " <<  (void*) &eByValue << " with val " << eByValue.GetValue() << endl;
	}

	cout << "--------Catching by reference ---------------- " << endl;
	try
	{
		Foo1( 2, createNewException );
	}
	catch ( MyException &eByRef )
	{
		// Put a break point at line below and look at the output window
		cout << "Caught MyException at addr " <<  (void*) &eByRef << " with val " << eByRef.GetValue() << endl;
	}
	cout << "------------------------ " << endl;
}

int main (int argc, char ** argv )
{
	// Throw an exception object that is created at the place where we throw.
	bool createNewException = true; 
	cout << "Create new exception is " << createNewException << endl;
	Example1( createNewException );

	// Dont create a new exception object, use the one that is pre created
	createNewException = false;
	cout << "Create new exception is " << createNewException << endl;
	Example1( createNewException );
	
	return 0;        // program exits. The global exception object gException is deleted here.
					 // Put a break point in MyException destructor to see that.
}