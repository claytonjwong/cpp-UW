//
//  Point.cpp
//  EWeek1
//
//  Created by CLAYTON WONG on 7/12/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include "Point.hpp"
#include <iostream>

using namespace std;

namespace VG {

    bool operator==(const Point& lhs, const Point& rhs)
    {
        return lhs.getX() == rhs.getX()
            && lhs.getY() == rhs.getY();
    }
    
    bool operator!=(const Point& lhs, const Point& rhs) {
        return !( lhs == rhs );
    }

    ostream& operator<<(ostream& os, const Point& rhs) {
        os << "<Point x=\"" << rhs.getX() << "\" y=\"" << rhs.getY() << "\"/>";
        return os;
    }
}
