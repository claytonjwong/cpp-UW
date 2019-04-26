//
//  StudentTest.cpp
//  EWeek2
//
//  Created by CLAYTON WONG on 5/3/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include <stdio.h>
#include "TestHarness.h"
#include "Student.hpp"
#include "StudentIO.hpp"

TEST(ctor,Student){
    Student s1("Abner",5);
    Student s2("Boden",4);
    Student s3("Cyrus",2);
    CHECK(s1.getName()=="Abner" && s1.getID()==5);
    CHECK(s2.getName()=="Boden" && s2.getID()==4);
    CHECK(s3.getName()=="Cyrus" && s3.getID()==2);
}

TEST(defaultID,Student){
    Student s("Default");
    CHECK(s.getName()=="Default" && s.getID()==StudentIO::DEFAULT_ID);
}
