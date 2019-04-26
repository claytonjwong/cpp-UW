//
//  Circle.h
//  EWeek1
//
//  Created by CLAYTON WONG on 4/25/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#ifndef Circle_h
#define Circle_h

#include <utility>
#include <iostream>

class Circle
{
public:
    static const int MAX_NAME_SIZE=128;
    friend std::ostream& operator<<(std::ostream& os, const Circle& rhs);
    
    Circle( int radius,
           int xCoord = 0, int yCoord = 0,
           const char * name = NULL );
    ~Circle();
    
    Circle(const Circle& rhs);
    
    Circle& operator=(const Circle& rhs);
    
    char* const getName() const { return mName; }
    void setName(const char* name);
    
    int getRadius() const { return mRadius; }
    std::pair<int,int> getCoord() const { return {mXCoord,mYCoord}; }
    
    bool operator==(const Circle& rhs);  // sq  Should declare as const method
    bool operator!=(const Circle& rhs); // sq  Should declare as const method
    
    Circle& operator++();
    Circle operator++(int);
    
private:
    
    int mXCoord;
    int mYCoord;
    int mRadius;
    char * mName; // this stores the name of the circle
};

Circle operator+(const Circle& lhs, const Circle& rhs);


#endif /* Circle_h */
