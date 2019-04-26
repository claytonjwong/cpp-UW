#include "TestHarness.h"
#include "Circle.h"
#include <iostream>

using namespace std;

void CircleTest();


/*
 
 OUTPUT:
 
 4 tests, 0 failures, 0 errors
 
 
 c1 is (n="Cir1",r=2,x=1,y=1)
 c2 is (n="CircleNumber2",r=5,x=1,y=1)
 c1 is (n="Cir1",r=1,x=0,y=0)
 Before assignment, c2 is (n="CircleNumber2",r=2,x=1,y=1)
 After assignment, c2 is (n="Cir1",r=1,x=0,y=0)
 
*/

int main()
{

	// random number generator used in some tests
	srand(::time_t(NULL));

    TestResult tr;
    TestRegistry::runAllTests(tr);

    cout << endl << endl;
    
    CircleTest();
    
	// force console screen to hold
	char ch;
	std::cin >> ch;
    
    

    return 0;
}


#define _TRUNCATE 128
using namespace std;
const int kMaxNameSize = 128;
void CreateTwoCircles()
{
    char * name = new char [kMaxNameSize];
    const char * kName1 = "Cir1";
    const char * kName2 = "CircleNumber2";
    strlcpy( name, kName1, _TRUNCATE );
    Circle c1( 2, 1,1, name );
    strlcpy( name, kName2, _TRUNCATE );
    Circle c2( 5, 1,1, name );
    delete [] name;// delete first before printing the circle below
    // Print the two below one after another
    cout << "c1 is " << c1 << endl; // Name printed: Cir1
    cout << "c2 is " << c2 << endl; // Name printed: CircleNumber2
}
void DoCircleAssignment( )
{
    char * name = new char [kMaxNameSize];
    const char * kName1 = "Cir1";
    const char * kName2 = "CircleNumber2";
    strlcpy( name, kName1, _TRUNCATE );
    Circle c1( 1, 0, 0, name );
    cout << "c1 is " << c1 << endl;
    strlcpy( name, kName2, _TRUNCATE );
    Circle c2( 2, 1, 1, name );
    delete [] name;// delete first before printing the circle below
    cout << "Before assignment, c2 is " << c2 << endl;
    c2 = c1;
    cout << "After assignment, c2 is " << c2 << endl;
}
void CircleTest()
{
    CreateTwoCircles( );
    DoCircleAssignment( );
}
