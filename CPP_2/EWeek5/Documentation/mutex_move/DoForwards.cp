#include "MovableClass.h"

//template < typename T >
void FuncFoo4( MovableClass & t )
{

}

//template < typename T >
void FuncFoo4( MovableClass && t )
{

}

template < typename T >
void FuncFoo3( T && t )
{
	// ... code here
	//FuncFoo4<T>( std::forward<T>( t ) );
	FuncFoo4( std::forward<T>( t ) );
}

void DoForwards()
{
	MovableClass	mc("mc");

	FuncFoo3( mc );
	FuncFoo3( std::move(mc) );

}