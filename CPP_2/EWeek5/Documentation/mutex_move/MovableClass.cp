#include <iostream>
using namespace std;

#include "MovableClass.h"


MovableClass::MovableClass( const std::string & name )
	: mStorage( NULL )
{
	cout << "MovableClass( const std::string & name )\n";

	Init( name.c_str(), name.size() );
}

// Assumption: src is non NULL... no checking is done
void MovableClass::Init( const char * src, int length )
{
	mStorage = new char [ length + 1 ];
	strcpy( mStorage, src );		// unsafe copy
}

MovableClass::~MovableClass()
{
	delete [] mStorage;
}

MovableClass::MovableClass( const MovableClass & other )
{
	cout << "MovableClass( const MovableClass & other )\n";
	Init( other.mStorage, strlen( other.mStorage ) );
}

MovableClass::MovableClass( MovableClass && other )
	:mStorage( other.mStorage )
{
	cout << "MovableClass( MovableClass && other )\n";
	other.mStorage = NULL;
}

