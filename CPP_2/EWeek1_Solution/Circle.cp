#include "Circle.h"

#include <iostream>
#include<algorithm>
using namespace std;

ostream & operator << ( ostream & os, const Circle & c )
{
	os << ( ( c.GetName() != NULL ) ? c.GetName() : "[NULL name circle]") << " radius " << c.GetRadius() << endl;
	return os;
}

static void CopyName( char *& destn, const char * src )
{
    if ( src )
    {   
        int size = strlen( src ) + 1;
        destn = new char [ size ];
        strncpy_s( destn, size, src, _TRUNCATE);
    }
}

/////////////////////////////////////////////////////////////////////////////////////////

Circle::Circle( int radius, int xCoord, int yCoord, const char * name )
: mRadius( radius ) , mXCoord( xCoord ), mYCoord( yCoord), mName( NULL )
{
    CopyName( mName, name );
}

Circle::Circle( const Circle & other )
: mRadius( other.mRadius ), mXCoord( other.mXCoord ), mYCoord( other.mYCoord ), mName( NULL )
{
    CopyName( mName, other.mName );
}

Circle::~Circle()
{
    delete [] mName;
}

#define SWAP_SEMANTICS
#ifdef SWAP_SEMANTICS
Circle & Circle::operator = ( Circle other )  // pass by value to create a copy
{
    swap( other );      // swap 'this' with the copy. Dont need to check for self assignment, in fact, you cannot, since you are getting a copy here
    return *this;
}
#else
Circle & Circle::operator = ( const Circle & other )
{
    if ( &other == this )       // prevent self assignment
        return *this;

	// First copy other.name to a buffer pointed to by a local on-stack pointer.
	char * tempName = NULL;
    CopyName( tempName, other.mName );

	// Now delete mName and copy pointer.
	delete [] mName;            // no need to check if mName is null or not
	mName = tempName;
	
	mRadius = other.mRadius;
	mXCoord = other.mXCoord;
	mYCoord = other.mYCoord;
	
	return *this;
}
#endif

void Circle::swap( Circle & other )
{
    std::swap( mRadius, other.mRadius );
    std::swap( mXCoord, other.mXCoord );
    std::swap( mYCoord, other.mYCoord );
    std::swap( mName, other.mName );
}

Circle Circle::operator +( const Circle & other ) const
{
    // use default value for name, and my own cords, since no requirement on what to use for name or coordinates.
    return Circle( mRadius + other.mRadius, mXCoord, mYCoord );     
}

Circle& Circle::operator ++( )      // pre increment
{
    ++ mRadius;
    return *this;
}

Circle Circle::operator ++( int )
{
    Circle copy(*this); 
    ++ mRadius;     // or better to say:  
                    // ++ *this;  or 
                    // this->operator ++(); or 
                    // operator ++(); 
                    // That way, u r doing whatever pre increment does, and if u decide to increment 
                    // the coords as well, it would be in one place, ie, in the pre increment operator.

    return copy;
}




