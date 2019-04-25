#include "TestHarness.h"

#include "DynamicArray.h"

// RAII class to setup and teardown data used for tests
class TestSetup
{
public:
    TestSetup()
    {
        myValues.put(0, 100);
        myValues.put(1, 200);
        myValues.put(2, 300);
        myValues.put(3, 400);
    }

    DynamicArray myValues;
};

TEST(ctor, DynamicArray)
{
    DynamicArray values;
    CHECK_EQUAL(0, values.getSize());
}

TEST(putInsert, DynamicArray)
{
    DynamicArray values;

    values.put(22, 33);

    CHECK_EQUAL(23, values.getSize());
    CHECK_EQUAL(0, values[0]);
    CHECK_EQUAL(33, values[22]);
}

TEST(putModify, DynamicArray)
{
    TestSetup testSetup;
    CHECK_EQUAL(400, testSetup.myValues[3]);

    testSetup.myValues.put(2, 333);
    CHECK_EQUAL(333, testSetup.myValues[2]);
}

TEST(remove, DynamicArray)
{
    TestSetup testSetup;
    CHECK_EQUAL(4, testSetup.myValues.getSize());

    testSetup.myValues.remove(2);
    CHECK_EQUAL(3, testSetup.myValues.getSize());
    CHECK_EQUAL(100, testSetup.myValues[0]);
    CHECK_EQUAL(200, testSetup.myValues[1]);
    CHECK_EQUAL(400, testSetup.myValues[2]);
}

TEST(copyConstructor, DynamicArray)
{
    TestSetup testSetup;
    DynamicArray copy(testSetup.myValues);

    CHECK_EQUAL(4, copy.getSize());
    CHECK_EQUAL(100, copy[0]);
    CHECK_EQUAL(200, copy[1]);
    CHECK_EQUAL(300, copy[2]);
    CHECK_EQUAL(400, copy[3]);

	CHECK_EQUAL(4, testSetup.myValues.getSize());
	CHECK_EQUAL(100, testSetup.myValues[0]);
	CHECK_EQUAL(200, testSetup.myValues[1]);
	CHECK_EQUAL(300, testSetup.myValues[2]);
	CHECK_EQUAL(400, testSetup.myValues[3]);
}

TEST(moveConstructor, DynamicArray)
{
	TestSetup testSetup;
	DynamicArray copy(std::move(testSetup.myValues));

	CHECK_EQUAL(4, copy.getSize());
	CHECK_EQUAL(100, copy[0]);
	CHECK_EQUAL(200, copy[1]);
	CHECK_EQUAL(300, copy[2]);
	CHECK_EQUAL(400, copy[3]);

	CHECK_EQUAL(0, testSetup.myValues.getSize());
}

TEST(assignment, DynamicArray)
{
    TestSetup testSetup;
    DynamicArray copy;

    copy = testSetup.myValues;

    CHECK_EQUAL(4, testSetup.myValues.getSize());
    CHECK_EQUAL(100, testSetup.myValues[0]);
    CHECK_EQUAL(200, testSetup.myValues[1]);
    CHECK_EQUAL(300, testSetup.myValues[2]);
    CHECK_EQUAL(400, testSetup.myValues[3]);
}

TEST(clear, DynamicArray)
{
    TestSetup testSetup;
    CHECK_EQUAL(4, testSetup.myValues.getSize());

    testSetup.myValues.clear();
    CHECK_EQUAL(0, testSetup.myValues.getSize());
}

TEST(constArrayOperator, DynamicArray)
{
    TestSetup testSetup;
    CHECK_EQUAL(4, testSetup.myValues.getSize());

    const DynamicArray& ref = testSetup.myValues;
    CHECK_EQUAL(400, ref[3]);
}

TEST(arrayOperator, DynamicArray)
{
    TestSetup testSetup;
    CHECK_EQUAL(4, testSetup.myValues.getSize());

    DynamicArray& ref = testSetup.myValues;
    ref[3] = 500;

    CHECK_EQUAL(500, testSetup.myValues[3]);
}