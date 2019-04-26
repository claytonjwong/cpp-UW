#include <set>
#include <iostream>
#include <functional>

using namespace std;

typedef set<int>					TSetInt1;
typedef TSetInt1::const_iterator	TSetCIter1;
typedef TSetInt1::iterator			TSetIter1;
typedef TSetInt1::const_reverse_iterator	TSetCRIter1;


void SetExample1()
{
	TSetInt1	s1;
	s1.insert( 2 );
	s1.insert( 5 );
	s1.insert( 20 );
	TSetCIter1  citer1 = s1.lower_bound( 1 );
	TSetCIter1  citer2 = s1.upper_bound( 1 );

	TSetCIter1  citer3 = s1.lower_bound( 11 );
	TSetCIter1  citer4 = s1.upper_bound( 11 );

	TSetCIter1  citer5 = s1.lower_bound( 111 );
	TSetCIter1  citer6 = s1.upper_bound( 111 );

	// Iterate over set
	TSetCIter1  endIter = s1.end();
	for ( citer1 = s1.begin(); citer1 != endIter; ++ citer1 )		// remember, use pre increment, its slightly cheaper
	{
		cout << "  Iter element is " << *citer1 << endl;
	}

	cout << endl;

	// Iterate over set ( in reverse )
	TSetCRIter1 rEndIter = s1.rend();
	for ( TSetCRIter1 criter1 = s1.rbegin(); criter1 != rEndIter; ++ criter1 )
	{
		cout << "  Reverse iter element is " << *criter1 << endl;
	}

	TSetCIter1 foundIter = s1.find( 0 );
	cout << ( (foundIter != endIter) ? "found element" : "did not find element" ) << endl;

	foundIter = s1.find( 2 );
	cout << ( (foundIter != endIter) ? "found element" : "did not find element" ) << endl;

	// Now remove element 2
	int size1 = s1.size();
	if ( foundIter != endIter )
		s1.erase( foundIter );
	int size2 = s1.size();

	pair<TSetCIter1, TSetCIter1>  eqPair = s1.equal_range( 4 );

	// or use a typedef to make it easy on ur eyes
	typedef pair<TSetCIter1, TSetCIter1> TPairCSetIter;

	TPairCSetIter  eqPair2 = s1.equal_range( 21 );

	cout << endl;
}

void SetExample()
{
	SetExample1();
}