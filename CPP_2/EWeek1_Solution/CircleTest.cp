#include "Circle.h"
#include <cstring>
#include <iostream>

using namespace std;

const int kMaxNameSize = 128;

void CreateTwoCircles()
{
   char * name = new char [kMaxNameSize];
   const char * kName1 = "Circle1";
   const char * kName2 = "Circle2";

   strncpy_s( name, kMaxNameSize, kName1, _TRUNCATE ); 
   Circle c1( 2, 1,1, name );

   strncpy_s( name, kMaxNameSize, kName2, _TRUNCATE ); 
   Circle c2( 5, 1,1, name );

   cout << "c1 is " << c1 << endl;
   cout << "c2 is " << c2 << endl;

   delete [] name;
}

void DoCircleAssignment( )
{
	char * name = new char [kMaxNameSize];
	const char * kName1 = "Circle1";
	const char * kName2 = "Circle2";

	strncpy_s( name, kMaxNameSize, kName1, _TRUNCATE ); 
	Circle c1( 1, 0, 0, name );
	cout << "c1 is " << c1 << endl;

	strncpy_s( name, kMaxNameSize, kName2, _TRUNCATE ); 
	Circle c2 ( 2, 1, 1, name );

	cout << "Before assignment, c2 is " << c2 << endl;

	c2 = c1;
	++c2;
	c2++;

	cout << "After assignment, c2 is " << c2 << endl;

	delete [] name;
}

void CircleTest()
{
   CreateTwoCircles( );

   DoCircleAssignment( );
}

int main( int argc, char ** argv )
{
    CircleTest();

    return 0;
}