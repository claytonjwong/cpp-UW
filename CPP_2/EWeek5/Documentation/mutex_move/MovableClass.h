#ifndef __MOVABLECLASS__H__
#define __MOVABLECLASS__H__

#include <string>

class MovableClass
{
public:

	MovableClass( const std::string & name );
	~MovableClass();

	MovableClass( const MovableClass & other );
	MovableClass( MovableClass && other );

private:

	void	Init( const char * src, int length );

	char	*mStorage;
};

#endif