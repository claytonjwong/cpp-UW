#include "Singleton.h"

 DatabaseAccessor *	DatabaseAccessor::mSInstance = NULL;	// static members will be initialized to NULL (or zero) even if we dont specify NULL

 DatabaseAccessor *	DatabaseAccessor::GetInstance()
 {
	 return mSInstance ? mSInstance : (mSInstance = new DatabaseAccessor() );
 }

 void Singleton()
 {
	 DatabaseAccessor * da1 = DatabaseAccessor::GetInstance();
	 DatabaseAccessor * da2 = DatabaseAccessor::GetInstance();

	 bool pointersAreSame = da1 == da2;

	 // DatabaseAccessor a;										// This line will not compile
	 // DatabaseAccessor * aPtr = new DatabaseAccessor();		// This line will not compile
 }

 void DatabaseAccessor::ShowExample()
 {
	 DatabaseAccessor * da1 = DatabaseAccessor::GetInstance();
	 //DatabaseAccessor * da2 = new DatabaseAccessor( *da1 );		// This will cause a link error
	 DatabaseAccessor da3;											// This creates another object, but only inside this class's member method
 }