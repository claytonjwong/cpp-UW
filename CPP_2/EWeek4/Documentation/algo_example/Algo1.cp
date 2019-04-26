#include <vector>
#include <list>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <iterator>
#include <string>

#include "Header.h"

using namespace std;

void TestFill();
void TestFind();
void TestIO();
void DoAlgo4();

struct MyEqual : public binary_function<int , int, bool>
{
	bool operator () (int  a, int b) const
	{
		return a == b;
	}
};

bool compareInt( int i, int j )
{
	return i == j;
}

int generateIntValues()
{
	static int value = 0;
	return value ++;
}

// A check for palindrome can be done using iterators and the equal algorithm
template<typename ContainerType>
bool CheckPalindrome(const ContainerType & container)
{
	if (container.size() == 0)
		return true;

	ContainerType::const_iterator halfIter = container.cbegin();
	advance( halfIter, container.size()/2 );

	return equal( container.begin(), halfIter, container.rbegin() );
	
	// Note that if u say :

	// return equal( container.begin(), container.end(), container.rbegin() );
	
	// It will do twice the number of comparisons really needed to detect a palindrome.
	// It will still be logically correct, but less efficient.
}

template<typename Container, typename Element>
void CreatePalindrome( Container & container, Element startingElem, int halfLength )	// Taking staringElem by value. Why ?
{
	for ( int ii = 0; ii < halfLength; ++ ii )
	{
 		container.push_back( startingElem ++ );		// post increment ++ should be defined on class Element
	}

	for ( int ii = 0; ii < halfLength; ++ ii )
	{
		container.push_back( -- startingElem );		// -- should be defined on class Element
	}
}

void TestEqual()
{
	vector<int> v1, v2;
	IntValueGenerator vg1;
	generate_n( back_inserter(v1), 10, vg1 );								// pass in a functor
	generate_n( back_inserter(v2), 10, generateIntValues );					// pass in a function pointer
	
	bool eq1 = equal( v1.begin(), v1.end(), v2.begin(), MyEqual() );		// pass in a binary function (binary predicate)
	cout << eq1 << endl;

	eq1 = equal( v1.begin(), v1.end(), v2.begin(), compareInt );			// pass in a function pointer
	cout << eq1 << endl;

	eq1 = equal( v1.begin(), v1.end(), v2.begin() );						// uses operator ==
	cout << eq1 << endl;

	// mismatch will return the first position where elements of v1 and v2 are different.
	// This is returned as a pair of iterators, first is an iterator into v1, second is an iterator into v2
	bool areEqual = mismatch( v1.begin(), v1.end(), v2.begin() ).first == v1.end();

	// Now use equal to determine if a sequence is a palindrome
	vector<int> v3;	// add 0, 1, 2, 1, 0 below
	CreatePalindrome( v3, 0, 4 );
	bool isPalin = CheckPalindrome( v3 );

	list<int> l1;
	CreatePalindrome( l1, 0, 4 );
	isPalin = CheckPalindrome( l1 );

	l1.push_back( 100 );	// make it not a palindrome
	isPalin = CheckPalindrome( l1 );

}

template< typename T >
bool MyLessThan( const T & t1, const T & t2 )
{
	return t1 < t2;
}

bool lessThanInt( int i, int j )
{
	return i < j;
}

void TestMinMax()
{
	// min
	int a = 0;
	int b = 1;
	int c = std::min( a, b );
	int d = std::min( a, b, lessThanInt );
	cout << "std::min(" << a << "," << b << ") returns " << c << endl;
	cout << "std::min(" << a << "," << b << ", lessThanInt) returns " << d << endl;

	int e = std::min( a, b, MyLessThan<int> );
	cout << "std::min(" << a << "," << b << ", MyLessThan<int>) returns " << d << endl << endl;

	/// Now use strings
	string s1("ABC");
	string s2("XYZ");

	const string & s3 = std::min( s1, s2 );		// uses operator < defined in std::string
	
	// instantiates MyLessThan for string, which can do any comparison that you define in it
	const string & s4 = std::min( s1, s2, MyLessThan<string> );		
	
	cout << "std::min(" << s1 << "," << s2 << ") returns " << s3 << endl;
	cout << "std::min(" << s1 << "," << s2 << ", MyLessThan<string>) returns " << s4 << endl;


	/////////////////////////////////////////////////////////////////////
	// min_element

	vector<int> vi1;
	vector<int> vi2(5);	// initial size of 5, all elements will be default created( so for an int, the value for all 5 will be 0).

	vector<int>::const_iterator citer1 = std::min_element( vi1.begin(), vi1.end() );
	bool isEnd1 = citer1 == vi1.end();			// should be true

	vector<int>::const_iterator citer2 = std::min_element( vi2.begin(), vi2.end() );
	bool isEnd2 = citer2 == vi2.end();			// should be false
	bool isFirst2 = citer2 == vi2.begin();		// should be true


	vector<int> vi3;
	IntValueGenerator vg3;
	generate_n( back_inserter(vi3), 10, vg3 );
	vector<int>::const_iterator citer3 = std::min_element( vi3.begin(), vi3.end() );	// uses operator <
	bool isEnd3 = citer3 == vi3.end();				// should be false
	bool isFirst3 = citer3 == vi3.begin();			// should be true


	vector<int> vi4;
	vi4.push_back( 100000 );	// put a large element first, now the min element will not be the first element
	generate_n( back_inserter(vi4), 10, vg3 );		// we can use vg3 here
	vector<int>::const_iterator citer4 = std::min_element( vi4.begin(), vi4.end(), MyLessThan<int> );   // use template function object

	bool isEnd4 = citer4 == vi4.end();				// should be false
	bool isFirst4 = citer4 == vi4.begin();			// should be false

	bool isFirstPlus1 = citer4 == vi4.begin() + 1;	// should be true

	// You can do this for a vector of string ... you should try that out now for string as well as some class of your own.
}

int main(int argc, char ** argv)
{
	TestEqual();
	TestFill();
	TestMinMax();
	TestFind();
	TestIO();

	DoAlgo4();

	return 0;
}

