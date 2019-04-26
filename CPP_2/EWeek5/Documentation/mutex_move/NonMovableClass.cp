#include <string>
#include "NonMovableClass.h"


NonMovableClass::NonMovableClass( const std::string & name )
	: mStorage( NULL )
{
	Init( name.c_str(), name.size() );
}

// Assumption: src is non NULL... no checking is done
void NonMovableClass::Init( const char * src, int length )
{
	mStorage = new char [ length + 1 ];
	strcpy( mStorage, src );		// unsafe copy
}

NonMovableClass::~NonMovableClass()
{
	delete [] mStorage;
}

NonMovableClass::NonMovableClass( const NonMovableClass & other )
{
	Init( other.mStorage, strlen( other.mStorage ) );
}
	