//
//  StudentIO_Test.cpp
//  EWeek2
//
//  Created by CLAYTON WONG on 5/3/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include <stdio.h>
#include "StudentIO.hpp"
#include "TestHarness.h"

using namespace std;

TEST(test1,StudentIO){
    cout << "test1.txt:" << endl;
    StudentIO io("test1.txt");
    io.ExecIO();
    cout << endl << endl;
}

TEST(test2,StudentIO){
    cout << "test2.txt:" << endl;
    StudentIO io("test2.txt");
    io.ExecIO();
    cout << endl << endl;
}

TEST(file_not_found,StudentIO){
    cout << "does_not_exist:" << endl;
    StudentIO io("does_not_exist");
    io.ExecIO();
    cout << endl << endl;
}
