/*

1. CharQueue1 with a char* array as the private data member.
Use new to grow the array used for the queue as needed. Add other private member variables
as needed to track size and position.  Overload the copy constructor and assignment operator
to and implement a deep copy.


[Clayton]: Sure, I will plan to use the following variables to keep track of the char array:

beg <= curr <= end ( beg is less than or eq to curr is less than or eq to end )

* beg is the current index within q which is next-in-line to be dequeued
( beg is incremented by 1 for each dequeue, and is reset to 0 when q is empty )

* curr is the amount of valid enqueued chars
( curr is incremented by 1 for each enqueue, and is reset to 0 when q is empty )

* end is the size of the array.  its value can be thought of as
an imaginary index one-past the last valid index of the array,
similiar to end() with iterators


Base on these definitions, it follows that:

* if beg eq curr, then the q is empty 
* if curr eq end, then q is full


And I will assume we are NOT in a memory constrained environment.  So I will allow the size
of the array to remain as the largest size it has grown to.
( i.e. each resize will only make the array bigger )

*/

#pragma once

#include <memory>

class CharQueue1 {
public:
	/* constructors */
	CharQueue1() : beg(0),curr(0),end(DEFAULT_SIZE),q(new char[end]) {}
	CharQueue1(size_t size) : beg(0),curr(0),end(size),q(new char[size]) {}
	CharQueue1(const CharQueue1& src) : beg(0),curr(src.curr),end(src.capacity()),q(new char[end]) {
		for (int i=0; i<src.curr; ++i) q[i]=src.q[i];
	}

	/* accessors */
	bool isEmpty() const { return beg==curr; }
	bool isFull()  const { return curr==end; }
	int capacity() const { return end; } // size of internal array structure
	//
	// the following capacity() function returns the same value as CharQueue2 would
	// ( i.e. the actual amount of elements stored in the q ), however I found it more helpful
	// for CharQueue1 to return the size of the internal char[] structure in order to ensure
	// that it grows exponentially
	//
	//int capacity() const { return curr-beg;  } // amount of chars currently pushed on the q

	/* mutators */
	void enqueue(char ch);
	char dequeue();
	void swap(CharQueue1& src);

	/* operators */
	CharQueue1& operator=(CharQueue1 src);
	
private:
	const int DEFAULT_SIZE=1;
	int beg,curr,end;
	std::unique_ptr<char[]> q;

	void sink(std::unique_ptr<char[]> releaseMe) {}
	void resize();
};


