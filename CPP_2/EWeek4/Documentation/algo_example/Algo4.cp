#include <numeric>
#include <numeric>
#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <functional>
#include <string>
using namespace std;

#include "Header.h"

int doMult( int a, int b )
{
	return a * b;
}

void DoAccumulate()
{
	vector<int> v1;
	IntValueGenerator vg1;

	generate_n( back_inserter(v1), 10, vg1 );

	int sum = accumulate( v1.begin(), v1.end(), 0 );		// adds them
	double avg = sum / v1.size();							// Assumption: v1 is not empty

	int mult1 = accumulate( v1.begin(),   v1.end(), 1, doMult );	// First element is 0, so product is 0

	int mult2 = accumulate( v1.begin()+1, v1.end(), 1, doMult );	// Skip first element to make product non zero
}

void DoInnerProduct()
{
	vector<int> v1, v2;
	IntValueGenerator vg1, vg2(10);

	generate_n( back_inserter(v1), 10, vg1 );
	generate_n( back_inserter(v2), 10, vg2 );

	int prod = inner_product( v1.begin(), v1.end(), v2.begin(), 0 );
}

bool IsEven( int a )
{
	return a % 2 == 0;
}

class DivisibleBy
{
public:
	DivisibleBy( int divisor )
		:mDivisor( divisor )		// Assumption: divisor is not 0
	{}

	bool operator()( int value )
	{
		return value % mDivisor == 0;		
	}

private:
	int		mDivisor;
};

void DoCount()
{
	vector<int> v1, v2;
	IntValueGenerator vg1, vg2(5);

	generate_n( back_inserter(v1), 10, vg1 );
	generate_n( back_inserter(v2), 10, vg2 );

	copy( v2.begin(), v2.end(), back_inserter( v1 ) );

	int numElems1 = v1.size();

	for ( int ii = 0; ii < numElems1; ++ ii )
	{
		cout << "Count of " << ii << " is " << count( v1.begin(), v1.end(), ii ) << endl;
	}

	cout << "Number of evens in v1 is " << count_if( v1.begin(), v1.end(), IsEven ) << endl;

	cout << "Number of evens in v1 is " << count_if( v1.begin(), v1.end(), DivisibleBy(2) ) << endl;

	cout << "Number of elements divisible by 5 is " << count_if( v1.begin(), v1.end(), DivisibleBy(5) ) << endl;
}

void DoSort()
{
	vector<int> v1;
	IntValueGenerator vg1;

	generate_n( back_inserter(v1), 10, vg1 );
	
	// vector is already sorted when we generated it, so lets mix it up a little
	random_shuffle( v1.begin(), v1.end() );

	// Now sort the vector
	sort( v1.begin(), v1.end() );
	cout << "After sort, vector is :";
	copy( v1.begin(), v1.end(), ostream_iterator<int>( cout, " " ) );
	cout << endl;

	// Lets say u want to find the sum of values between a range of values:
	// The container should be in a sorted state for this
	int sum1 = accumulate( lower_bound(v1.begin(), v1.end(), 5), upper_bound(v1.begin(), v1.end(), 9), 0 ); 

	int sum2 = accumulate( lower_bound(v1.begin(), v1.end(), 9), upper_bound(v1.begin(), v1.end(), 19), 0 ); 

	int sum3 = accumulate( lower_bound(v1.begin(), v1.end(), -10), upper_bound(v1.begin(), v1.end(), 19), 0 ); 
	


	// Now sort the vector in reverse order
	sort( v1.begin(), v1.end(), std::greater<int>() );
	cout << "After sort using greater<int>, vector is :";
	copy( v1.begin(), v1.end(), ostream_iterator<int>( cout, " " ) );
	cout << endl;

}

void DoMoves()
{
	// Random shuffle
	vector<int> v1;
	IntValueGenerator vg1;

	generate_n( back_inserter(v1), 10, vg1 );
	random_shuffle( v1.begin(), v1.end() );
	
	// Now output the values
	cout << "After shuffle, vector is :";
	copy( v1.begin(), v1.end(), ostream_iterator<int>( cout, " " ) );
	cout << endl;

	// rotate
	vector<int> v2;
	generate_n( back_inserter(v2), 10, vg1 );
	cout << "Before rotate, vector is :";
	copy( v2.begin(), v2.end(), ostream_iterator<int>( cout, " " ) );
	cout << endl;

	rotate( v2.begin(), v2.begin()+1, v2.end() );
	// Now output the values
	cout << "After rotate around element index 1, vector is :";
	copy( v2.begin(), v2.end(), ostream_iterator<int>( cout, " " ) );
	cout << endl;

	// rotate around middle element
	rotate( v2.begin(), v2.begin() + v1.size()/2, v2.end() );
	cout << "After rotate around middle element, vector is :";
	copy( v2.begin(), v2.end(), ostream_iterator<int>( cout, " " ) );
	cout << endl;

}

void DoSearch()
{
	//find;
	vector<int> v1;
	IntValueGenerator vg1;

	generate_n( back_inserter(v1), 10, vg1 );
	random_shuffle( v1.begin(), v1.end() );
	
	vector<int>::iterator iter = find( v1.begin(), v1.end(), 7 );
	if ( iter != v1.end() )
	{
		cout << "Found value in vector\n" << endl;
	}

	// binary_search
	// To use this, the input has to be sorted
	sort( v1.begin(), v1.end() );
	for ( int ii = v1.size()-1; ii >= 0; -- ii )
	{
		bool contains = binary_search( v1.begin(), v1.end(), 7 );
		cout << (contains ? "Found " : "Not found ") << ii << endl;
	}

	// get an iter back to the element being searched by binary_search
	for ( int ii = v1.size(); ii >= -1; -- ii )			// Note: ii is init to size() intentionally so as not to find the value, and ending value is -1
	{
			vector<int>::iterator iter = lower_bound( v1.begin(), v1.end(), ii );
			bool found = ( (iter != v1.end()) && (*iter == ii) );

			cout << ( found ? "Found " : "Not found ") << ii << endl;
	}
}

struct AddValue
{
	AddValue( int value )
		:mValue( value )
	{}

	int operator()( int initNum )
	{
		return initNum + mValue;
	}

private:
	int		mValue;
};

void DoTransform()
{
	// with string
	string str ("ALL UPPERCASE");
	cout << "Before transform to lower, string is: " << str << endl;
	transform( str.begin(), str.end(), str.begin(), ::tolower );
	cout << "After transform to lower, string is: " << str << endl;

	transform( str.begin(), str.end(), str.begin(), ::toupper );
	cout << "After transform to upper, string is: " << str << endl;


	// with a vector
	vector<int> v1;
	IntValueGenerator vg1;

	generate_n( back_inserter(v1), 10, vg1 );

	transform( v1.begin(), v1.end(), v1.begin(), AddValue(2) );
	cout << "After transform, vector is :";
	copy( v1.begin(), v1.end(), ostream_iterator<int>( cout, " " ) );
	cout << endl;

	vector<int> v2;
	transform( v1.begin(), v1.end(), back_inserter(v2), AddValue(5) );
	cout << "After transform, vector v2 is :";
	copy( v2.begin(), v2.end(), ostream_iterator<int>( cout, " " ) );
	cout << endl;
	// Note that in stmt above, you cannot say destination is v2.begin(), ie,
	// you cannot have the statement as :       transform( v1.begin(), v1.end(), v2.begin(), AddValue(5) );
	// This is because v2 has no space allocated, and to be able to say v2.begin(), v2 has to have at least as much space available
	// from v2.begin() onwards as v1.end()-v1.begin()
	// OR
	// In general:
	//             transform( srcContainerIterFirst, srcContainerIterLast, destContainerIter, AddValue(5) );
	// destContainer has to have at least (srcContainerIterLast - srcContainerIterFirst) spaces available from destContainerIter onwards.
	// Otherwise you have to use a back_inserter

}

void DoAlgo4()
{
	DoAccumulate();
	DoInnerProduct();
	DoCount();
	DoMoves();
	DoSort();

	DoSearch();

	DoTransform();
}