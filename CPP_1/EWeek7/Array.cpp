#include "Array.h"
#include <algorithm>

using namespace std;

void Array::resize(int nextCap){
	auto nextArr=new int[nextCap];
	for (int i=0; i<min(capacity,nextCap); ++i)
		nextArr[i]=arr[i];
	for (int i=capacity; i<nextCap; ++i)
		nextArr[i]=0;
	arr.reset(nextArr);
	capacity=nextCap;
}

void Array::expand(int index){
	int nextCap=capacity;
	while (index>=nextCap)
		nextCap<<=1;
	resize(nextCap);
}

void Array::contract(int index){
	int nextCap=capacity;
	while (index<=nextCap>>1 && nextCap>>1 >= minSize)
		nextCap>>=1;
	resize(nextCap);
}

void Array::swap(Array& rhs){
	std::swap(capacity,rhs.capacity);
	std::swap(arr,rhs.arr);
}
