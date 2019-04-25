#pragma once

#ifndef CHAR_QUEUE2A_H_ALREADY_INCLUDED
#define CHAR_QUEUE2A_H_ALREADY_INCLUDED

#pragma once

#include <memory>

// preferred unique_ptr implementation

class CharQueue2a
{
public:
	CharQueue2a();
	CharQueue2a(size_t size);
	CharQueue2a(const CharQueue2a& src);

	void enqueue(char ch);
	char dequeue();

	bool isEmpty() const;
	void swap(CharQueue2a& src);

	int capacity() const;

	CharQueue2a& operator=(CharQueue2a src);

private:
	void copy(const CharQueue2a& src);
	bool isFull() const;

	size_t mySize;
	std::unique_ptr<char[]> myQueue;
	size_t myStart;
	size_t myEnd;
};

#endif