#include <list>
#include <iostream>

using namespace std;

void ListExample()
{
	std::list< double > ld;
	
	ld.push_back( 7.7 );

	std::list<double>::const_iterator citer2 = ld.begin();

	++citer2 ; // citer2 = citer2 + 1;  will give a compile error

}

