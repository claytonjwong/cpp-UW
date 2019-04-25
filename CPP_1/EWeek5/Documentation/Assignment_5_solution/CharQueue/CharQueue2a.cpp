#include "CharQueue2a.h"

// CharQueue2a uses a circular buffer. See http://en.wikipedia.org/wiki/Circular_buffer

namespace
{
	const size_t defaultSize = 256;
}

CharQueue2a::CharQueue2a()
	: CharQueue2a(defaultSize)
{
}

CharQueue2a::CharQueue2a(size_t size)
	: mySize(size),
	myQueue(std::make_unique<char[]>(mySize + 1)),
	myEnd(0),
	myStart(0)
{
}

void
CharQueue2a::copy(const CharQueue2a& src)
{
	myEnd = src.myEnd;
	myStart = src.myStart;

	size_t start = myStart;

	while (start != myEnd)
	{
		myQueue[start] = src.myQueue[start];
		start++;
	}
}

CharQueue2a::CharQueue2a(const CharQueue2a& src)
	: mySize(src.mySize),
	myQueue(std::make_unique<char[]>(mySize + 1))
{
	copy(src);
}

bool CharQueue2a::isFull() const
{
	return (myEnd + 1) % mySize == myStart;
}

int CharQueue2a::capacity() const
{
	return mySize;
}

void CharQueue2a::enqueue(char ch)
{
	if (isFull())
	{
		CharQueue2a temp(mySize + 256);
		temp.copy(*this);
		swap(temp);
	}

	myQueue[myEnd] = ch;

	myEnd = (myEnd + 1) % mySize;
}

char CharQueue2a::dequeue()
{
	char ch = myQueue[myStart];
	myStart = (myStart + 1) % mySize;
	return ch;
}

bool CharQueue2a::isEmpty() const
{
	return myEnd == myStart;
}

void CharQueue2a::swap(CharQueue2a& rhs)
{
	std::swap(myQueue, rhs.myQueue);
	std::swap(myEnd, rhs.myEnd);
	std::swap(myStart, rhs.myStart);
	std::swap(mySize, rhs.mySize);
}

CharQueue2a& CharQueue2a::operator=(CharQueue2a src)
{
	swap(src);
	return *this;
}
