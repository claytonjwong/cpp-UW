/*

3. Write a CppUnitLite test that uses new to allocate an array of 10 integers.
Initialize the array with the values 0 to 9. Use CHECK_EQUAL to verify the array
has the correct values. Use delete to deallocate the array.

*/

#include "TestHarness.h"

TEST(simpleArray,nullptr){
	constexpr int size=10;
	int* a=new int[size];
	for (int i=0; i<size; ++i) a[i]=i;
	for (int i=0; i<size; ++i) CHECK_EQUAL(a[i],i);
	delete[] a;
}
