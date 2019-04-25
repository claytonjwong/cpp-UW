#pragma once

// It is better to write our own copy constructor and assignment operator because we need to perform a deep copy.
// This is apparent because we are using a unique pointer variable to store memory allocated with new

// The synthesized destructor works here as the unique_ptr destructor called by the synthesized destructor deletes the heap memory

// When our member data provided copy constructors or assignment operators that performed an appropriate value or deep copy
// then we could let our class use the compiler generated assignment and copy constructor

#include <memory>

class DynamicArray
{
public:
    DynamicArray();

    DynamicArray(const DynamicArray& src);

	// move constructor - not part of assignment - just shown as an example
	DynamicArray(DynamicArray&& src) noexcept;

    // insert the value at index. The array must expand to accommodate the new element. 
    void put(int index, int value);

    // returns the element at index.
    int get(int index) const;

    // removes the data at array the specified index. The array must contract.
    void remove(int index);

    int& operator[](int index);
    int operator[](int index) const;

    DynamicArray& operator=(DynamicArray rhs);

    // not required but useful
    int getSize() const;
    void clear();

    void swap(DynamicArray& other);

private:
    void resize(int newSize);

    // Use of a raw pointer is OK and correct for assignment. This example
    // shows unique_ptr usage with arrays. Note the type as int[].
    std::unique_ptr<int[]> myArray;
    int mySize;
};

