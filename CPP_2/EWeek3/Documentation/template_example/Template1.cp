#include <set>
#include <iostream>
#include <functional>

#include "MemTemp.h"

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



////////////////////////////////////////////////////////////////////////////////////////////////////


template< typename TSet >
void SetExampleTemplate( )
{
	typedef TSet::const_iterator			TTemplSetCIter;
	typedef TSet::const_reverse_iterator	TTemplSetCRIter;
	
	TSet	s1;
	s1.insert( 2 );
	s1.insert( 5 );
	s1.insert( 20 );
	TTemplSetCIter  citer1 = s1.lower_bound( 1 );
	TTemplSetCIter  citer2 = s1.upper_bound( 1 );

	 
	// Iterate over set
	TTemplSetCIter  endIter = s1.end();
	for ( citer1 = s1.begin(); citer1 != endIter; ++ citer1 )		// remember, use pre increment, its slightly cheaper
	{
		cout << "  Iter element is " << *citer1 << endl;
	}

	cout << endl;

	// Iterate over set ( in reverse )
	TTemplSetCRIter rEndIter = s1.rend();
	for ( TTemplSetCRIter criter1 = s1.rbegin(); criter1 != rEndIter; ++ criter1 )
	{
		cout << "  Reverse iter element is " << *criter1 << endl;
	}

	TTemplSetCIter foundIter = s1.find( 0 );
	cout << ( (foundIter != endIter) ? "found element" : "did not find element" ) << endl;

	foundIter = s1.find( 2 );
	cout << ( (foundIter != endIter) ? "found element" : "did not find element" ) << endl;

	// Now remove element 2
	int size1 = s1.size();
	if ( foundIter != endIter )
		s1.erase( foundIter );
	int size2 = s1.size();

	pair<TTemplSetCIter, TTemplSetCIter>  eqPair = s1.equal_range( 4 );

	// or use a typedef to make it easy on ur eyes
	typedef pair<TTemplSetCIter, TTemplSetCIter> TPairTemplCSetIter;

	TPairTemplCSetIter  eqPair2 = s1.equal_range( 21 );

	cout << endl;
}


typedef set<int, greater<int> >				TSetInt2;

int main(int argc, char ** argv)
{
	SetExample1();

	SetExampleTemplate<TSetInt2>();

	// the typedef is not required, u can call also it this way:
	SetExampleTemplate<set<int, greater<int> >>();

	/// member template example
	Stack<int>  si(5);
	si.Push( 9 );
	si.Push( 7 );

	Stack<double>  sd(3);
	sd.Push( 1.7 );
	sd.Push( 2.7 );

	sd = si;
	si = sd;

	// u can print si and sd if u define the output operator for Stack class
}

/*  
  Iter element is 2
  Iter element is 5
  Iter element is 20

  Reverse iter element is 20
  Reverse iter element is 5
  Reverse iter element is 2
did not find element
found element

  Iter element is 20
  Iter element is 5
  Iter element is 2

  Reverse iter element is 2
  Reverse iter element is 5
  Reverse iter element is 20
did not find element
found element
*/