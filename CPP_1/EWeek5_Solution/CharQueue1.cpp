#include "CharQueue1.h"

CharQueue1::CharQueue1(size_t /*size*/)
{
}

int CharQueue1::capacity() const
{
    return myQueue.max_size();
}

void CharQueue1::enqueue(char ch)
{
    myQueue.push_back(ch);
}

char CharQueue1::dequeue()
{
    char ch = myQueue.front();
    myQueue.pop_front();
    return ch;
}

bool CharQueue1::isEmpty() const
{
    return myQueue.empty();
}

void CharQueue1::swap(CharQueue1& rhs)
{
    myQueue.swap(rhs.myQueue);
}
