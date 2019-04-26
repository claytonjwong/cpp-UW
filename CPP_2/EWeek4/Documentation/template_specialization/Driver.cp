#include "MyCollection.h"
#include <iostream>
using namespace std;

void DoFactorial();

int main(int argc, char * argv[])
{
	MyCollection< int > mc1;

	for (int ii = 0; ii < 10; ++ ii )
		mc1.Add( ii );

	mc1.PrintAll( cout );
	cout << endl;
	mc1.PrintAllReverseOrder( cout );
	cout << endl;
		
	DoFactorial();

	return 0;
}

