#include "TestHarness.h"

#include <algorithm>

TEST(lambdaTestProblem, lambdas)
{
	auto values = { 2, 4, 6, 8, 10, 12 };
	auto sum = 0;

	std::for_each(values.begin(), values.end(), [&sum](int value)
	{
		sum += value;
	});

	CHECK_EQUAL(42, sum);
}
