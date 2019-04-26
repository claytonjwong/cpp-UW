//
//  Circle.cpp
//  EWeek1
//
//  Created by CLAYTON WONG on 4/25/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

// sq  Search for sq below for my comments.

#include <stdio.h>
#include <cstring>
#include "Circle.h"

Circle::Circle( int radius,
       int xCoord, int yCoord,
       const char * name )
: mXCoord{xCoord},mYCoord{yCoord},mRadius{radius}{
    mName=new char[Circle::MAX_NAME_SIZE];
    mName[0]='\0';
    if (name)
        strlcpy(mName,name,Circle::MAX_NAME_SIZE);
}

Circle::~Circle(){
    delete[] mName;
}

Circle::Circle(const Circle& rhs)
: Circle(rhs.mRadius,rhs.mXCoord,rhs.mYCoord,rhs.mName) {}

Circle& Circle::operator=(const Circle& rhs){
    if (*this==rhs) return *this;      // sq  This check should really compare just the address
										//    It should look like  this == &rhs
										//   But this check could do the wrong this in the following scenario:
										//   Lets say your class has 5 data members dataMember1 .. dataMember5
										//   Lets say your equal operator really looks at only two data members
										//   to determine equality (eg, Student object checks name and unique student ID to determine equality)
										//   In this case, == returns true if those two data members are the same, but
										//   you still want the assignment to be done because you probably read in some new/modified data
										//   into rhs and want that to be assigned to lhs.
									
										//   Bottom line summary: This check will work and be fine as long as the scenario I mentioned above
										//   is not your scenario.  But I would still prefer to check 
										//   address only to guard self assignment, and not do it the way its here.
										
										//   Please let me know if you have any questions/clarifications. 

    mRadius=rhs.mRadius;
    mXCoord=rhs.mXCoord;
    mYCoord=rhs.mYCoord;
    strlcpy(mName,rhs.mName,Circle::MAX_NAME_SIZE);
    return *this;
}

void Circle::setName(const char* name){
    if (name==nullptr)
        name=nullptr;            // sq  BUG: I think u meant  mName = nullptr here. 
								//       If yes, then you have a memory leak here, since you would need to release mName memory
								//       Alternatively, u can simply say *mName = 0; OR  mName[0] = 0; In this case, dont release mName
    else
        strlcpy(mName, name, sizeof(mName));  // sq  BUG : Do not use sizeof, that returns pointer size, not string size. use strlen or something similar
												//   Try running this and u will see only sizeof(char *) bytes are copied, so like 4 or 8 bytes, depending on platform
}

bool Circle::operator==(const Circle& rhs){
    if (mRadius==rhs.mRadius && mXCoord==rhs.mXCoord && mYCoord==rhs.mYCoord
        && strncmp(mName,rhs.getName(),Circle::MAX_NAME_SIZE)==0) return true;
    return false;
}

bool Circle::operator!=(const Circle& rhs){
    return !(*this==rhs);               //  sq  Good reuse 
}

Circle& Circle::operator++(){
    ++mRadius;
    return *this;
}

Circle Circle::operator++(int){
    Circle c(*this);
    ++mRadius;
    return c;
}

Circle operator+(const Circle& lhs, const Circle& rhs){
    return std::move(Circle(lhs.getRadius()+rhs.getRadius()));   // sq No need to call move, compiler will do return value optimization (we havent covered that, but I do have some slides on that online)
}

std::ostream& operator<<(std::ostream& os, const Circle& rhs){
    os << "(n=\"" << rhs.mName << "\",r=" << rhs.mRadius
    << ",x=" << rhs.mXCoord << ",y=" << rhs.mYCoord << ")";
    return os;
}


