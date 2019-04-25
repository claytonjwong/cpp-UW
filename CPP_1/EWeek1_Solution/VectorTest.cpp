#include "TestHarness.h"

#include <vector>

TEST(arrayValues, array)
{
	int* intValues = new int[10];

	for (int i = 0; i < 10; ++i)
	{
		intValues[i] = i;
	}

	CHECK_EQUAL(0, intValues[0]);
	CHECK_EQUAL(1, intValues[1]);
	CHECK_EQUAL(2, intValues[2]);
	CHECK_EQUAL(3, intValues[3]);
	CHECK_EQUAL(4, intValues[4]);
	CHECK_EQUAL(5, intValues[5]);
	CHECK_EQUAL(6, intValues[6]);
	CHECK_EQUAL(7, intValues[7]);
	CHECK_EQUAL(8, intValues[8]);
	CHECK_EQUAL(9, intValues[9]);

	delete intValues;
}

TEST(vectorValues, array)
{
	std::vector<int> intValues;

	for (int i = 0; i < 10; ++i)
	{
		intValues.push_back(i);
	}

	CHECK_EQUAL(0, intValues[0]);
	CHECK_EQUAL(1, intValues[1]);
	CHECK_EQUAL(2, intValues[2]);
	CHECK_EQUAL(3, intValues[3]);
	CHECK_EQUAL(4, intValues[4]);
	CHECK_EQUAL(5, intValues[5]);
	CHECK_EQUAL(6, intValues[6]);
	CHECK_EQUAL(7, intValues[7]);
	CHECK_EQUAL(8, intValues[8]);
	CHECK_EQUAL(9, intValues[9]);
}