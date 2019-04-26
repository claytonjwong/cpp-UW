#include "IterDefs.h"
#include <iterator>
#include <iostream>
#include <sstream>
using namespace std;

void PopulateVec( TVecABC & vecAbc, const int kNumElements )
{
	for ( int ii = 0; ii < kNumElements; ++ ii )
	{
		std::ostringstream ostr;
		ostr << ii;
		ABC  abc( string("Name_") + ostr.str(), ii );

		vecAbc.push_back( abc );
	}
}

void VectorIterators()
{
	const int kNumElements = 5;
	
	TVecABC  vAbc;
	PopulateVec( vAbc, kNumElements );
	
	// output the vector
	cout << "Initial vector" << endl;
	copy( vAbc.begin(), vAbc.end(), ostream_iterator<ABC>( cout, "\n" ) );

	TVecABC_Iter	iter = vAbc.begin();
	iter += 2;

	// insert using inserter
	copy( vAbc.begin(), vAbc.begin()+1, inserter( vAbc, iter ) );
	cout << "After using inserter" << endl;
	copy( vAbc.begin(), vAbc.end(), ostream_iterator<ABC>( cout, "\n" ) );

	// insert using back_inserter (at end of vector)
	copy( vAbc.begin(), vAbc.begin()+1, back_inserter( vAbc ) );
	cout << "After using back_inserter" << endl;
	copy( vAbc.begin(), vAbc.end(), ostream_iterator<ABC>( cout, "\n" ) );
}

void DequeIterators()
{

}

void SetIterators()
{

}