#pragma once

#include <memory>

/*
5. In this case, why is it better to write our own copy constructor
and assignment operator rather than rely on the compiler generated ones?

[Clayton]: here we want a deep copy, instead of copy-by-value.  The compiler
generated copy ctor and assignment oprt perform bitwise copy-by-value, so if
we used those, then multiple Arrays would try to point towards the same memory,
however, this cannot be done, since the array memory is stored in a unique ptr.
So instead, we want to implement our own copy ctor and assignment oprt in order
for each Array to point towards separate and distinct memory locations.


6. In what situation might it be better to rely on the compiler generated
copy constructor and assignment operators?

[Clayton]: if the copy constructors of the underlying data structures by default
perform a deep copy, then the compiler generated functions would be sufficient.

*/

//
// client beware, there is no bounds check,
// it is easy to use this API incorrectly until
// it is written with bounds check by throwing exceptions
// which I hope to learn in C++ Intermediate
//
// until then, client beware!!
//
class Array{
public:

	/* constructors */
	Array() : capacity{minSize},arr{new int[capacity]} {
		for (int i=0; i<capacity; ++i)
			arr[i]=0;
	}
	Array(const Array& src)
		: capacity{src.capacity},arr{new int[capacity]} {
		for (int i=0; i<capacity; ++i){
			arr[i]=src.arr[i];
		}
	}


	/* accessors */
	int get(int index) const {
		return arr[index];
	}

	int operator[](int index) const {
		return arr[index];
	}

	// client beware, this is NOT the size of the valid values of array
	// this is the size of the internal structure holding the array values
	int getCapacity() const { return capacity; } 

	/* mutators */
	void put(int index,int value){
		expand(index);
		arr[index]=value;
	}

	void remove(int index){
		contract(index);
		for (int i=index; i<capacity; ++i)
			arr[i]=0;
	}
	
	int& operator[](int index) {
		return arr[index];
	}

	Array& operator=(Array& rhs){
		swap(rhs);
		return *this;
	}

private:
	const int minSize=8;
	int capacity;
	std::unique_ptr<int[]> arr;

	void resize(int nextCap);
	void expand(int index);
	void contract(int index);
	void swap(Array& rhs);
};
