#ifndef CHAR_QUEUE1_H_ALREADY_INCLUDED
#define CHAR_QUEUE1_H_ALREADY_INCLUDED

#pragma once

#include <deque>

class CharQueue1
{
public:
    CharQueue1() = default;
    CharQueue1(size_t size);
    CharQueue1(const CharQueue1& src) = default;

    void enqueue(char ch);
    char dequeue();

    bool isEmpty() const;
    void swap(CharQueue1& src);

    int capacity() const;

    CharQueue1& operator=(const CharQueue1& rhs) = default;

private:
    std::deque<char> myQueue;
};

#endif