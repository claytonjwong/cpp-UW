#ifndef CHAR_QUEUE2_H_ALREADY_INCLUDED
#define CHAR_QUEUE2_H_ALREADY_INCLUDED

#pragma once

#include <memory>

// raw pointer implementation

class CharQueue2
{
public:
    CharQueue2();
    CharQueue2(size_t size);
    CharQueue2(const CharQueue2& src);
    ~CharQueue2();

    void enqueue(char ch);
    char dequeue();

    bool isEmpty() const;
    void swap(CharQueue2& src);

    int capacity() const;

    CharQueue2& operator=(CharQueue2 src);

private:
    void copy(const CharQueue2& src);
    bool isFull() const;

    size_t mySize;
    char* myQueue;
    size_t myStart;
    size_t myEnd;
};

#endif