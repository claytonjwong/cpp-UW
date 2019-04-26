#include <vector>
#include <list>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <functional>
#include <iterator>
#include <string>

using namespace std;

void OutputInt( int i )
{
	cout << i;
}

class OutputIntClass
{
public:
	OutputIntClass( ostream & os )
		:mOs( os )
	{}

	void operator() ( int i )
	{
		mOs << i;
	}

private:
	ostream & mOs;		// its a reference, so it HAS to be initialized in the initialization list. Cannot be done inside 
						// constructor body.
};

template< typename T>
class OutputElementClassT
{
public:
	OutputElementClassT( ostream & os )
		:mOs( os )
	{}

	void operator() ( const T & t )
	{
		mOs << t;
	}

private:
	ostream & mOs;		// its a reference, so it HAS to be initialized in the initialization list. Cannot be done inside 
						// constructor body.
};


// OutputElementClassT specialized for double
template<>
class OutputElementClassT <double>
{
public:
	OutputElementClassT( ostream & os )
		:mOs( os )
	{}

	void operator() ( double d)
	{
		mOs << "double d is " << d << " ";		// just making it a little different than the one in the template
	}

private:
	ostream & mOs;		// its a reference, so it HAS to be initialized in the initialization list. Cannot be done inside 
						// constructor body.
};

void TestFill()
{
	/////// fill_n
	int numElements = 20;
	int initialValue = 1;
	vector<int> v3( numElements, initialValue );		// create vector with numElements values, each one has value == initialValue

	fill_n (v3.begin() + 1, 4, 2*initialValue );

	cout << "Output with function:\t\t\t\t";
	for_each( v3.begin(), v3.end(), OutputInt );
	cout << endl << endl;

	cout << "Output with functor:\t\t\t\t";
	for_each( v3.begin(), v3.end(), OutputIntClass( cout ) );
	cout << endl << endl;

	cout << "Output with template functor:\t\t\t";
	for_each( v3.begin(), v3.end(), OutputElementClassT<int>( cout ) );
	cout << endl << endl;


	vector<double> vd1(3, 7.7);

	cout << "Output with specialized template :\n";
	for_each( vd1.begin(), vd1.end(), OutputElementClassT<double>( cout ) );
	cout << endl << endl;

}

bool divisibleBy5( int value )
{
	return value % 5 == 0;
}

template<typename Container, typename Element>
void CreateSequence( Container & container, Element startingElem, int length, int step )	// Taking staringElem by value. Why ?
{
	for ( int ii = 0; ii < length; ++ ii )
	{
		container.push_back( startingElem );		// operator + (int ) should be defined on class Element
		startingElem = startingElem + step;
	}
}

template<typename Container>
void TestFind1( Container & container )
{	
	// add multiples of 5 to the vector vi
	CreateSequence( container, 0, 10, 5 );
	Container::const_iterator citer = find_if( container.begin(), container.end(), divisibleBy5 );

	if (citer == container.end())
		cout << "Did not find anything divisible by 5" << endl;
	else
		cout << "Found " << *citer << " which is divisible by 5" << endl;

	// Modify first element
	container[0] = 1;
	citer = find_if( container.begin(), container.end(), divisibleBy5 );

	if (citer == container.end())
		cout << "Did not find anything divisible by 5" << endl;
	else
		cout << "Found " << *citer << " which is divisible by 5" << endl;

}


// assumption: divisor is not 0. 
//             No checking is done for divisor to be != 0
struct DivisibilityChecker : public binary_function<int , int, bool>
{
	bool operator () (int  divisor, int value) const
	{
		return value % divisor == 0;
	}
};

template<typename Container>
void TestFind2()
{	
	Container c1;

	int length = 50;
	int step = 1;
	Container::value_type  startingElement = Container::value_type() + 1;	// default value + 1
	CreateSequence( c1, startingElement, length, step );

	for ( int ii = 2; ii < 25; ii += 3 )
	{
		// We will use bind1st which binds the first argument of functor DivisibilityChecker to ii.
		// i.e., think of it this way:  DivisibilityChecker's operator () will be called with the first argument as ii
		// because we said bind its first argument to ii.  Its 2nd argument will be the elements inside the
		//  HALF OPEN range ci.begin() and ci.end()
		typename Container::const_iterator citer = find_if( c1.begin(), c1.end(), bind1st(DivisibilityChecker(), ii) );

		if (citer == c1.end())
			cout << "Did not find anything divisible by " << ii << endl;
		else
			cout << "Found " << *citer << " which is divisible by " << ii << endl;
	}
}

void TestFind()
{
	vector<int> vi;
	TestFind1( vi );
	
	TestFind2 <vector<int>> ();
}