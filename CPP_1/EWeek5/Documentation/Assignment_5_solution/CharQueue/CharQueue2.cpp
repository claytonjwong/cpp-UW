#include "CharQueue2.h"

// CharQueue2 uses a circular buffer. See http://en.wikipedia.org/wiki/Circular_buffer

namespace
{
    const size_t defaultSize = 256;
}

CharQueue2::CharQueue2()
	: CharQueue2(defaultSize)
{
}

CharQueue2::CharQueue2(size_t size)
    : mySize(size),
    myQueue(new char[mySize + 1]),
    myEnd(0),
    myStart(0)
{
}

void
CharQueue2::copy(const CharQueue2& src)
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

CharQueue2::CharQueue2(const CharQueue2& src)
    : mySize(src.mySize),
    myQueue(new char[mySize + 1])
{
    copy(src);
}

CharQueue2::~CharQueue2()
{
    delete [] myQueue;
}

bool CharQueue2::isFull() const
{
    return (myEnd + 1) % mySize == myStart;
}

int CharQueue2::capacity() const
{
    return mySize;
}

void CharQueue2::enqueue(char ch)
{
    if (isFull())
    {
        CharQueue2 temp(mySize + 256);
        temp.copy(*this);
        swap(temp);
    }

    myQueue[myEnd] = ch;

    myEnd = (myEnd + 1) % mySize;
}

char CharQueue2::dequeue()
{
    char ch = myQueue[myStart];
    myStart = (myStart + 1) % mySize;
    return ch;
}

bool CharQueue2::isEmpty() const
{
    return myEnd == myStart;
}

void CharQueue2::swap(CharQueue2& rhs)
{
    std::swap(myQueue, rhs.myQueue);
    std::swap(myEnd, rhs.myEnd);
    std::swap(myStart, rhs.myStart);
    std::swap(mySize, rhs.mySize);
}

CharQueue2& CharQueue2::operator=(CharQueue2 src)
{
    swap(src);
    return *this;
}
