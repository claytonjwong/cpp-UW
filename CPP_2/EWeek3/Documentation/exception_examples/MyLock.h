// This example is Windows specific only due to calls to Critical section APIs.
// You can replace those calls with some other locking mechanism on your platform.

#ifdef _WIN32_ABC
#ifndef __MY_LOCK_H__
#define __MY_LOCK_H__

#include <windef.h>
#include <windows.h>

class MyLock
{
public:

	MyLock()
	{
		// make call to locking API
		EnterCriticalSection( &mSCriticalSection ); 

	}

	~MyLock()
	{
		// make call to unlocking API
		LeaveCriticalSection( &mSCriticalSection );

	}

private:
	// CRITICAL_SECTION is Windows specific, used here as an example.
	
	static CRITICAL_SECTION		mSCriticalSection;
	static DWORD				mSCritSecSpinCount;

	// In order to initialize the critical section only once, I am defining a nested class 
	// which does the initialization and deletion,
	// and then define a static variable of that type such that this initialization and deletion do happen.
	class InitCS
	{
		InitCS()
		{
			InitializeCriticalSectionAndSpinCount( &MyLock::mSCriticalSection, MyLock::mSCritSecSpinCount );
		}

		~InitCS()
		{
			DeleteCriticalSection( &MyLock::mSCriticalSection );
		}
	};

	static InitCS				mSInitCritSec;
};

#endif  // of __MY_LOCK_H__
#endif
