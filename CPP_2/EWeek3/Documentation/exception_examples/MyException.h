#ifndef __MyException_h__
#define __MyException_h__

#include <iostream>

class MyException
{
public:

	MyException( int val )
		: mValue( val )
	{
		std::cout << "Created MyException at addr " << (void*) this << " with val " << mValue << std::endl;
	}
	MyException( const MyException & other)
		: mValue( other.mValue )
	{
		std::cout << "Copy constructed MyException at addr " << (void*) this << " with val " << mValue 
			<< " from other exception at addr " << (void*) &other << std::endl;
	}
	~MyException()
	{
		std::cout << "Destructing MyException at addr " <<  (void*) this << " with val " << mValue << std::endl;
		// Put a break point at end of function line below and look at the output window
	}

	int GetValue() const
	{
		return mValue;
	}
	void SetValue( int value )
	{
		mValue = value;
	}

private:
	int mValue;
};

#endif