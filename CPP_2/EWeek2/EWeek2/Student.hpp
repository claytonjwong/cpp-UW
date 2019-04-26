//
//  Student.hpp
//  EWeek2
//
//  Created by CLAYTON WONG on 5/3/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#ifndef Student_hpp
#define Student_hpp

#include <string>

class Student {
public:
    Student(const std::string& name, int id=0) : myName{name}, myID{id} {}
    const std::string& getName() const { return myName; } 
    int getID() const { return myID; }
private:
    std::string myName;
    int myID;
};


#endif /* Student_hpp */
