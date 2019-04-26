//
//  Point.cpp
//  EWeek1
//
//  Created by CLAYTON WONG on 7/12/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include <iostream>
#include "Point.hpp"

using namespace std;

namespace VG
{
    
    
    bool Point::isInBounds ( const Point& minPoint, const Point& maxPoint ) const noexcept
    {
        return (  minPoint.getX() <= myX  &&  myX <= maxPoint.getX()  )
            && (  minPoint.getY() <= myY  &&  myY <= maxPoint.getY()  );
    }

    
    bool Point::operator< ( const Point& rhs ) const noexcept
    {
        if ( myY < rhs.myY ) return true;
        if ( myY > rhs.myY ) return false;

        return myX < rhs.myX; // Y are equal, return based on X value
    }

        
    bool operator== ( const Point& lhs, const Point& rhs )
    {
        return ( lhs.getX() == rhs.getX() )
            && ( lhs.getY() == rhs.getY() );
    }
        

    bool operator!= ( const Point& lhs, const Point& rhs )
    {
        return ! ( lhs == rhs );
    }

        
    ostream& operator<< ( ostream& os, const Point& rhs )
    {
        os << "(" << rhs.getX() << "," << rhs.getY() << ")";
        return os;
    }
    
    
} // namespace VG
