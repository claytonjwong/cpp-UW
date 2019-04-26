//
//  CircleTest.cpp
//  EWeek1
//
//  Created by CLAYTON WONG on 4/25/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include <stdio.h>
#include "TestHarness.h"
#include "Circle.h"

/*
 Circle( int radius,
 int xCoord = 0, int yCoord = 0,
 const char * name = NULL );
 */

TEST(ctor,Circle){
    const char* s1="basic";
    Circle circle(1,2,3,s1);
    s1=nullptr;
    const char *name=circle.getName(), *s2="basic";
    for (int i=0; name[i]!='\0'; ++i)
        CHECK(name[i]==s2[i]);
}

TEST(copy,Circle){
    const char *s1="orig",*s2="copy";
    Circle orig(1,2,3,s1),copy(orig);
    CHECK(orig==copy);
    s1=nullptr;
    CHECK(orig==copy);
    copy.setName(s2);
    CHECK(orig!=copy);
    
    auto next=copy;
    CHECK(next==copy);
    next.setName("bam!");
    CHECK(next!=copy);
}

TEST(assignment,Circle){ // also tests operator +
    Circle a(1,1,1,"aye"),b(4,4,4,"bee");
    Circle c=a+b;//,c=a+b;
    CHECK(c.getRadius()==5); // 1+4==5
    auto p=c.getCoord(); // {0,0}
    
    // default construtor values
    CHECK (p.first==0 && p.second==0 && strncmp(c.getName(),"",Circle::MAX_NAME_SIZE)==0);
    
    a=b=c;
    CHECK(a==a); // reflexive
    
    CHECK(a==b); // associative
    CHECK(b==a);
    
    CHECK(b==c); // transitive
    CHECK(a==c);
    CHECK(a==c);
    
}

TEST(increment,Circle){
    Circle a(1,1,1,"aye"),b(1,1,1,"bee");
    CHECK(a.getRadius()==1 && b.getRadius()==1);
    ++a;
    b++;
    CHECK(a.getRadius()==2 && b.getRadius()==2);
    
    auto c=a++;
    CHECK(a.getRadius()-1==c.getRadius()); // minus 1 for post ++
    
    auto d=++a;
    CHECK(a.getRadius()==d.getRadius()); // equal for pre ++
}



