#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#include <iostream>

class Circle
{
public:

	Circle( int radius, int xCoord = 0, int yCoord = 0, const char * name = 0 );
    Circle( const Circle & other );
	~Circle();
	
	Circle &    operator = ( Circle other );
    Circle      operator + ( const Circle & other ) const;
    
    Circle&     operator ++ ();         // pre increment
    Circle      operator ++ (int );     // post increment with a dummy int argument
    

	const char * GetName() const;
	int			GetRadius() const;

    void   swap( Circle & other );


private:
    
	int    mXCoord;
	int    mYCoord;
	int    mRadius;
	char * mName;     // this stores the name of the circle
};

std::ostream & operator << ( std::ostream & os, const Circle & c );

inline const char * Circle::GetName() const
{
	return mName;
}

inline int Circle::GetRadius() const
{
	return mRadius;
}

#endif