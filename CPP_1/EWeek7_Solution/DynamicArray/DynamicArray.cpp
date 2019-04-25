#include "DynamicArray.h"

#include <algorithm>
#include <cstring>
#include <iostream>

// Intentionally no error checking on whether an index is in range. If the index is not within bounds this implementation
// exhibits the same error as if using an out of range index on a raw array. Usually an access violation exception.

DynamicArray::DynamicArray()
	: mySize(0)
{
}

DynamicArray::DynamicArray(const DynamicArray& src)
{
	if (src.mySize != 0)
	{
		myArray = std::make_unique<int[]>(src.mySize);
	}

	mySize = src.mySize;

	for (int i = 0; i < src.mySize; ++i)
	{
		myArray[i] = src.myArray[i];
	}
}

DynamicArray::DynamicArray(DynamicArray&& src) noexcept
	: myArray(std::move(src.myArray)),
	mySize(src.mySize)
{
	src.mySize = 0;
}

DynamicArray& DynamicArray::operator=(DynamicArray rhs)
{
	swap(rhs);
	return *this;
}

void DynamicArray::swap(DynamicArray& other)
{
	myArray.swap(other.myArray);
	std::swap(mySize, other.mySize);
}

void DynamicArray::resize(int newSize)
{
	auto newArray = std::make_unique<int[]>(newSize);

	int size = newSize < mySize ? newSize : mySize;

	for (int i = 0; i < size; ++i)
	{
		newArray[i] = myArray[i];
	}

	mySize = newSize;
	myArray = std::move(newArray);
}

// insert the value at index. The array must expand to accommodate the new element. 
void DynamicArray::put(int index, int value)
{
	if (mySize < index + 1)
	{
		resize(index + 1);
	}

	myArray[index] = value;
}

// returns the element at index.
int DynamicArray::get(int index) const
{
	return myArray[index];
}

// removes the data at array the specified index. The array must contract.
void DynamicArray::remove(int index)
{
	if (mySize == 0)
	{
		return;
	}

	for (int i = index; i < mySize; ++i)
	{
		myArray[i] = myArray[i + 1];
	}

	resize(mySize - 1);
}

int& DynamicArray::operator[](int index)
{
	return myArray[index];
}

int DynamicArray::operator[](int index) const
{
	return myArray[index];
}

int DynamicArray::getSize() const
{
	return mySize;
}

void DynamicArray::clear()
{
	myArray.reset();
	mySize = 0;
}