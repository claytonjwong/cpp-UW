#include <iostream>
#include "TestHarness.h"
#include "Queue.h"

using namespace std;

TEST(DriverExample,Queue){
    Queue<int> qi1(2);    // head = tail = -1
    qi1.Push(1);        // head = tail = 0
    CHECK(1==qi1.Pop());            // head = tail = -1 (queue is empty)
    
    try
    {
        CHECK(qi1.IsEmpty());
        qi1.Pop();            // this will cause an exception
    }
    catch ( const QueueEmpty & e )
    {
        CHECK(qi1.IsEmpty());
        CHECK(e.what()=="Queue Empty");
    }
    
    qi1.Push(1);        // head = tail = 0
    qi1.Push(2);        // tail = 1
    qi1.Push(3);        // Grow. head = 0, tail = 2
    CHECK(1==qi1.Pop());            // head = 1
    CHECK(2==qi1.Pop());            // head = 2
    qi1.Push(4);        // tail = 0
    qi1.Pop();            // head = 0 ?
    qi1.Pop();            // head = tail = -1 ?
    
    qi1.Push(5);        // head = tail = 0?
    qi1.Push(6);        // tail = 1
    qi1.Push(7);        // tail = 2
    
    Queue<int> qi2(4);    // head = tail = -1
    qi2.Push(1);        // head = tail = 0
    qi2.Push(2);        // tail = 1
    qi2.Push(3);        // tail = 2
    qi2.Push(4);        // tail = 3
    CHECK(1==qi2.Pop());            // head = 1
    CHECK(2==qi2.Pop());            // head = 2
    qi2.Push(5);        // tail = 0
    qi2.Push(6);        // tail = 1. head is 2, so next Push will trigger Grow
    qi2.Push(7);        // should cause a Grow. head = 0  tail = 4
    
    Queue<int> qi3(qi2);
    
    Queue<int> qi4(10);
    qi4 = qi3;
}




