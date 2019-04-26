//
//  QueueTest.cpp
//  EWeek5
//
//  Created by CLAYTON WONG on 6/1/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include <iostream>
#include "TestHarness.h"
#include "Queue.hpp"

using namespace std;

TEST(ctor,Queue){
    Queue<int> q;
    CHECK(q.size()==0);
    CHECK(q.empty());
}


TEST(pushPop,Queue){
    Queue<string> q;

    q.push("hi");
    CHECK(q.size()==1);
    CHECK(!q.empty());
    CHECK(q.front()=="hi");

    q.push("there");
    CHECK(q.size()==2);
    CHECK(!q.empty());
    CHECK(q.front()=="hi");

    q.push("how");
    CHECK(q.size()==3);
    CHECK(!q.empty());
    CHECK(q.front()=="hi");

    q.push("are");
    CHECK(q.size()==4);
    CHECK(!q.empty());
    CHECK(q.front()=="hi");

    q.push("you?");
    CHECK(q.size()==5);
    CHECK(!q.empty());
    CHECK(q.front()=="hi");
    
    
    q.pop();

    CHECK(q.size()==4);
    CHECK(!q.empty());
    CHECK(q.front()=="there");
    q.pop();
    
    
    CHECK(q.size()==3);
    CHECK(!q.empty());
    CHECK(q.front()=="how");
    q.pop();
    
    
    CHECK(q.size()==2);
    CHECK(!q.empty());
    CHECK(q.front()=="are");
    q.pop();
    
    
    CHECK(q.size()==1);
    CHECK(q.front()=="you?");

    q.pop();
    CHECK(q.empty());

}

TEST(exceptionEmptyFront,Queue){
    Queue<bool> q;
    try {
        q.front();
        CHECK(false); // should jump over this statement due to ex thrown
    } catch (const QueueEmptyException& e) {
        CHECK(true);
        cerr << "PASS! Expected exception via q.front(): " << e.what() << endl;
    }
}

TEST(exceptionEmptyPop,Queue){
    Queue<double> q;
    try {
        q.pop();
        CHECK(false); // should jump over this statement due to ex thrown
    } catch (const QueueEmptyException& e) {
        CHECK(true);
        cerr << "PASS! Expected exception via q.pop(): " << e.what() << endl;
    }
}

TEST(copyCtorEmptyQueue,Queue){
    Queue<int> q;
    Queue<int> p(q);
    CHECK(q==p);
    CHECK(q==q);
    CHECK(p==q);
}

TEST(copyCtorAndAssignmentOper123Queue,Queue){
    Queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    
    Queue<int> p(q);
    CHECK(p==p);
    CHECK(q==q);
    CHECK(p==q);
    CHECK(q==p);
    
    q.pop();
    q.pop();
    q.pop();
    
    q.push(1);
    q.push(2);
    q.push(3);
    
    CHECK(p==p);
    CHECK(q==q);
    CHECK(p==q);
    CHECK(q==p);

    Queue<int> r;
    r=q;
    CHECK(r==r);
    CHECK(q==q);
    CHECK(r==q);
    CHECK(q==r);

    CHECK(p==p);
    CHECK(q==q);
    CHECK(r==p);
    CHECK(p==r);
    
    CHECK(r.size()==p.size());
}

TEST (selfAssignemnt,Queue){
    Queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q=q;
    CHECK(q.size()==3);
    CHECK(q.front()==1);
    q=q=q=q;
    CHECK(q.size()==3);
    CHECK(q.front()==1);
}

TEST(lvaluePushAndPop,Queue){
    int a=1,b=2,c=3;
    Queue<int> q;
    q.push(a);
    q.push(b);
    q.push(c);
    CHECK(q.size()==3);
    q.pop();
    CHECK(q.size()==2);
    q.pop();
    CHECK(q.size()==1);
    q.pop();
    CHECK(q.size()==0 && q.empty());
}


TEST(diffTypeAssignment,Queue){
    class base{ virtual void go(){} };
    class derive : public base{};
    Queue<base*> b;
    Queue<derive*> d;
    base *i=new derive(),*j=new derive(),*k=new derive();
    b.push(i);
    b.push(j);
    b.push(k);
    b=d;
    CHECK(b.front()==dynamic_cast<derive*>(i) && b.size()==3);
    b.pop();
    CHECK(b.front()==dynamic_cast<derive*>(j) && b.size()==2);
    b.pop();
    CHECK(b.front()==dynamic_cast<derive*>(k) && b.size()==1);
    b.pop();
    CHECK(b.empty() && b.size()==0);
}


TEST(diffTypeAssignment2,Queue){
    Queue<int> qi;
    Queue<double> qd;
    qd.push(1.0);
    qd.push(2.0);
    qd.push(3.0);
    qi=qd;
    CHECK(qi.front()==1 && qi.size()==3);
    qi.pop();
    CHECK(qi.front()==2 && qi.size()==2);
    qi.pop();
    CHECK(qi.front()==3 && qi.size()==1);
    qi.pop();
    CHECK(qi.empty() && qi.size()==0);
}

TEST(diffTypeAssignment3,Queue){
    Queue<double> qi;
    Queue<int> qd;
    qi.push(1);
    qi.push(2);
    qi.push(3);
    qd=qi;
    CHECK(qd.front()==1 && qd.size()==3);
    qd.pop();
    CHECK(qd.front()==2 && qd.size()==2);
    qd.pop();
    CHECK(qd.front()==3 && qd.size()==1);
    qd.pop();
    CHECK(qd.empty() && qd.size()==0);
}
