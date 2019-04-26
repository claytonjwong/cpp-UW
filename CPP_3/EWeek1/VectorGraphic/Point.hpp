//
//  Point.hpp
//  EWeek1
//
//  Created by CLAYTON WONG on 7/12/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#pragma once

#include <stdio.h>
#include <iostream>
#include <exception>

namespace VG {
    
    class Point{
    public:
    
        constexpr Point(int x, int y) : myX{x},myY{y} {
            if (x<0 || y<0)
                throw std::out_of_range("point values cannot be negative");
        }
        
        ~Point()=default;
        
        Point(const Point& src)=default;
        Point(Point&& src)=default;
        
        Point& operator=(const Point& rhs)=default;
        Point& operator=(Point&& rhs)=default;
        
        constexpr int getX() const noexcept { return myX; }
        constexpr int getY() const noexcept { return myY; }
        size_t getHash() const noexcept { return (2<<20)*myX+myY; }
                
    private:
        int myX{ 0 };
        int myY{ 0 };
    };
    
    bool operator==(const Point& lhs, const Point& rhs);
    bool operator!=(const Point& lhs, const Point& rhs);
    std::ostream& operator<<(std::ostream& os, const Point& rhs);
}
