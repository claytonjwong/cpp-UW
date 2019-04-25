/*

2. CharQueue2 with a std::deque<char> data member. Use the compiler generated copy constructor
and assignment operator as a bitwise copy of the deque will perform a deep copy.

[Clayton]: sure, implementing CharQueue2 was significantly easier than implementating CharQueue1.
CharQueue2 took me 1 or 2 minutes to write, and I was able to re-use all test cases I wrote from CharQueue1.
CharQueue1 took me 1 or 2 hours to write, and I had to think about all the internal stuff.

Though I'm not sure how to handle the initialization of the interal deque differently
for the first two CharQueue2 Constructors, so I just let the default deque constructor be called implicitly
( nothing special is done with the param "size" )

I didn't make separate .cpp file for CharQueue2 since the implementation is just 1-3 lines per function

capacity() also has different meanings between CharQueue1 and CharQueue2.  For CharQueue1, capacity() can be used
to check that the internal array structure is growing exponentially upon resize.  For CharQueue1, capacity()
simply returns the amount of chars currently stored in internal q itself.

*/

#pragma once

#include <deque>

class CharQueue2
{
public:
	CharQueue2() {}
	CharQueue2(size_t size) {}
	CharQueue2(const CharQueue2& src) : q(src.q) {}

	/* accessors */
	bool isEmpty() const { return q.empty(); }
	int capacity() const { return q.size(); }

	/* mutators */
	void enqueue(char ch) {
		q.push_back(ch);
	}
	char dequeue() { 
		char res=q.front();
		q.pop_front();
		return res;
	}

	void swap(CharQueue2& src) {
		q.swap(src.q);
	}

	/* operators */
	CharQueue2& operator=(CharQueue2 src) {
		q=src.q;
		return *this;
	}

private:
	std::deque<char> q;
};


