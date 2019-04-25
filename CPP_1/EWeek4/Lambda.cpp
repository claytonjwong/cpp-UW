/*

3. Write a lambda function which makes the following TEST pass:

*/

#include <algorithm>
#include "TestHarness.h"


TEST(lambdaTestProblem,lambdas)
{
	auto values ={2, 4, 6, 8, 10, 12};
	auto sum = 0;

	std::for_each(values.begin(),values.end(),[&](int x){
		sum+=x;
	});

	CHECK_EQUAL(42,sum);
}
