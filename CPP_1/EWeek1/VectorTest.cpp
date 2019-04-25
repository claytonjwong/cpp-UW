/*

4. Write a CppUnitLite test that creates a std::vector of int. Add 10 integers to the vector
with the values 0-9. Use CHECK_EQUAL to verify the vector has the correct values.

*/

#include "TestHarness.h"

#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

TEST(addTenElements,vector){
	vector<int> v{0,1,2,3,4,5,6,7,8,9};
	for (int i=0; i<v.size(); ++i) CHECK_EQUAL(v[i],i);
}

TEST(initialization, vector)
{
    std::vector<int> testScores;

    CHECK(testScores.empty());
}

TEST(addElements, vector)
{
    std::vector<int> testScores;

    testScores.push_back(44);
    testScores.push_back(55);
    testScores.push_back(66);

    CHECK_EQUAL(3, testScores.size());
}

TEST(addElementsByInitialization, vector)
{
    std::vector<int> testScores = { 4, 7, 10, 12 };

    CHECK_EQUAL(4, testScores.size());
}

TEST(elementAccess, vector)
{
    std::vector<int> testScores = { 4, 7, 10, 12 };

    CHECK_EQUAL(4, testScores[0]);
    CHECK_EQUAL(7, testScores[1]);
    CHECK_EQUAL(10, testScores[2]);
    CHECK_EQUAL(12, testScores[3]);
}

TEST(streaming, vector)
{
    std::vector<int> testScores = { 4, 7, 10, 12 };

    std::stringstream message;

    for (size_t i = 0; i < testScores.size(); ++i)
    {
        message << testScores[i] << " ";
    }

    CHECK_EQUAL("4 7 10 12 ", message.str());
}

TEST(rangedForstreaming, vector)
{
    std::vector<int> testScores = { 4, 7, 10, 12 };

    std::stringstream message;

    for (const int& value : testScores)
    {
        message << value << " ";
    }

    CHECK_EQUAL("4 7 10 12 ", message.str());
}

TEST(Iteratorstreaming, vector)
{
    std::vector<int> testScores = { 4, 7, 10, 12 };

    std::stringstream message;

    for (std::vector<int>::iterator pos = testScores.begin(); pos != testScores.end(); ++pos)
    {
        message << *pos << " ";
    }

    CHECK_EQUAL("4 7 10 12 ", message.str());
}

TEST(autoIteratorstreaming, vector)
{
    std::vector<int> testScores = { 4, 7, 10, 12 };

    std::stringstream message;

    for (auto pos = testScores.begin(); pos != testScores.end(); ++pos)
    {
        message << *pos << " ";
    }

    CHECK_EQUAL("4 7 10 12 ", message.str());
}


#include <iostream>

TEST(lambda,vector){
	vector<int> v{0,1,2,3,4};
	for_each(v.begin(),v.end(),[](int &x){x*=2;});
	for_each(v.begin(),v.end(),[](int x){ std::cout << x << endl; });
}