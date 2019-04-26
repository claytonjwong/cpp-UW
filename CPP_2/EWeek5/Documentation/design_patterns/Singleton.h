#ifndef __SINGLETON_H__
#define __SINGLETON_H__

#include <string>

// DatabaseAccessor is a singleton class.
// Its constructor is private and is implemented
// Its copy constructor is declared private, but no implementation specified.
// Its assignment operator is declared private, but no implementation specified.
// As a result, if any code tries to use the copy constructor or assignment operator, then one of the below will happen:
// 1. If the code using it is in this class (or in a friend class or function), then the code will compile, but will get a link error,
//    since these two members (copy constructor and assignment operator) are not implemented.
// 2. If the code using it is outside this class (and not in a friend class or function), then that code will not compile, since these
//    two members (copy constructor and assignment operator) are private.
class DatabaseAccessor
{
public:

	static DatabaseAccessor *	GetInstance();

protected:
	DatabaseAccessor()
	{}

private:

	void ShowExample();

	// declare copy constructor and assignment operator private, but dont provide the implementation
	DatabaseAccessor( const DatabaseAccessor & other );
	DatabaseAccessor & operator = ( const DatabaseAccessor & other );

	static DatabaseAccessor *	mSInstance;
};


#endif