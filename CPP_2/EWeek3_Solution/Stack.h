#ifndef __Stack_h__
#define __Stack_h__

#include <vector>

// Note: I just wrote a simple stack wrapper class.
// I am using a vector container underneath.
// You can (and should) try this using the 
// stack adaptor:  http://www.cplusplus.com/reference/stack/stack/?kw=stack

class Stack
{
public:

	void	Push( char ch );
	char	Pop();
	bool	Empty() const;

private:

	std::vector<char>	mColl;
};

inline void	Stack::Push( char ch )
{
	mColl.push_back( ch );
}

inline char	Stack::Pop()
{
	char retVal(0);			// returning null character when empty, ideally might throw an exception

	if ( ! Empty() )
	{
		retVal = mColl.back();
		mColl.pop_back();
	}
	
	return retVal;
}

inline bool	Stack::Empty() const
{
	return mColl.empty();
}

#endif