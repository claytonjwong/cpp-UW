// This example is Windows specific only due to calls to Critical section APIs.
// You can replace those calls with some other locking mechanism on your platform.

#include <iostream>
using namespace std;

#ifdef _WIN32_ABC

#include "MyLock.h"

DWORD MyLock::mSCritSecSpinCount(2000);


void LockExample1()
{
	MyLock lockObj;

	// Now my code that needed a lock goes here...

}	// At this point, lockObj goes out of scope, and its destructor gets called, which releases the lock

void LockExample2()
{
	// Have some code here..
	// ...

	// Now I have a need to lock the next few lines.
	// So I create a begin / end scope
	{
		MyLock lockObj;

		// Now my code that needed a lock goes here...

	}	// At this point, lockObj goes out of scope, and its destructor gets called, which releases the lock


	///

}


void LockExample()
{
	LockExample1();
	LockExample2();
}

#else

void LockExample()
{
	cout << "Non windows platform, this example is empty for now" << endl;
}

#endif