#include "IterDefs.h"
#include <sstream>
#include <iostream>
#include <iterator>
using namespace std;

void PopulateMap( TMapABC & mapAB, const int kNumElements )
{
	for (int ii = 0; ii < kNumElements; ++ ii )
	{
		std::ostringstream ostr;
		ostr << ii;
		ABC  abc( string("Name_") + ostr.str(), ii );
		mapAB.insert( std::make_pair( abc.GetName(), abc ) );
	}
}

void MapIterators()
{
	const int kNumElements = 5;
	TMapABC		mapABC;

	PopulateMap( mapABC, kNumElements );

	TMapABC_Iter mIter = mapABC.begin();

	cout << "First map element: key " << mIter->first << endl ;		// mIter->first is the key, in this case, it is the name of object. 
	cout << "Value: " << mIter->second << "\n" << std::flush;		// new line does NOT flush the out buffer.

	advance( mIter, 1 );
	cout << "Second map element: key " << mIter->first << "\n";
	cout.flush();
	
	TMapABC::difference_type dist = distance( mIter, mapABC.end() );
	advance( mIter, dist );
	bool atEnd = mIter == mapABC.end();

	advance( mIter, -distance( mapABC.begin(), mIter ) );
	bool atBegin = mIter == mapABC.begin();

}