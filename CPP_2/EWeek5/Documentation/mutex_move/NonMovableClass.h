#ifndef __NONMOVABLECLASS__H__
#define __NONMOVABLECLASS__H__

#include <string>

class NonMovableClass
{
public:

	NonMovableClass( const std::string & name );
	~NonMovableClass();

	NonMovableClass( const NonMovableClass & other );

private:

	void	Init( const char * src, int length );

	char	*mStorage;
};

#endif