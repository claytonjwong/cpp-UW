//
//  StudentIO.hpp
//  EWeek2
//
//  Created by CLAYTON WONG on 5/3/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#ifndef StudentIO_hpp
#define StudentIO_hpp

#include <iostream>
#include <fstream>
#include <vector>
#include "Student.hpp"

class StudentIO {
public:
    static constexpr int DEFAULT_ID=0;
    
    StudentIO(const std::string& fileName)
    : myFin{fileName} {}
    
    void ExecIO();
    
private:
    std::fstream myFin;
    std::vector<std::vector<Student>> myStudents;
    
    void Input();
    void Output();
    
    std::string Strip(const std::string& s) const;
};

#endif /* StudentIO_hpp */
