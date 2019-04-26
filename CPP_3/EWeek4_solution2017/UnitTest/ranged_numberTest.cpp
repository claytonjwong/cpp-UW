#include "TestHarness.h"

#include "ranged_number.h"


TEST(cTor, ranged_number)
{
	//Will not compile, otherwise behavior becomes undefined.
	//ranged_number<short, 12, 1> grade{ 2 };

	const ranged_number<short, 1, 12> grade = 5;
    CHECK_EQUAL(5, grade);
}

TEST(preIncrement, ranged_number)
{
	ranged_number<short, 1, 12> grade = 5;
    CHECK_EQUAL(5, grade);
    
    ++grade;
    CHECK_EQUAL(6, grade);
}

TEST(preIncrementConstraint, ranged_number)
{
	ranged_number<short, 1, 12> grade = 12;
    CHECK_EQUAL(12, grade);
    
    ++grade;
    CHECK_EQUAL(12, grade);
}

TEST(postIncrementConstraint, ranged_number)
{
	ranged_number<short, 1, 12> grade = 12;
    CHECK_EQUAL(12, grade);
    
    grade++;
    CHECK_EQUAL(12, grade);
}

TEST(preDecrementConstraint, ranged_number)
{
	ranged_number<short, 1, 12> grade = 1;
    CHECK_EQUAL(1, grade);
    
    --grade;
    CHECK_EQUAL(1, grade);
}

TEST(postDecrementConstraint, ranged_number)
{
	ranged_number<short, 1, 12> grade = 1;
    CHECK_EQUAL(1, grade);
    
    grade--;
    CHECK_EQUAL(1, grade);
}

using Grade = ranged_number<int, 1, 12>;
TEST(operatorPlus, ranged_number)
{
    Grade grade{5};

    grade = grade + Grade{5};
    CHECK_EQUAL(10, grade);

    grade = grade + Grade{5};
    CHECK_EQUAL(12, grade);
}

TEST(operatorPlusEquals, ranged_number)
{
    Grade grade {5};

    grade += 5;
    CHECK_EQUAL(10, grade);

    grade += 5;
    CHECK_EQUAL(12, grade);
}

TEST(wrapAroundUpperLimitOfUnsignedType, ranged_number)
{
	ranged_number<uint8_t, 1, 250> wrapable{ 249 };

	wrapable += {10};

	CHECK_EQUAL(250, wrapable);
}

TEST(wrapAroundUpperLimitOfSignedType, ranged_number)
{
	ranged_number<int8_t, 1, 120> wrapable{ 119 };

	wrapable += {10};

	CHECK_EQUAL(120, wrapable);
}

TEST(addingNegativeSignedType, ranged_number)
{
	ranged_number<int8_t, -5, 5> range{ 1 };

	range += -4;

	CHECK_EQUAL(-3, range);

	range += -4;

	CHECK_EQUAL(-5, range);
}

TEST(wrapAroundLowerLimitOfSignedType, ranged_number)
{
	ranged_number<int8_t, -120, 5> wrapable{ -119 };

	wrapable += {-10};

	CHECK_EQUAL(-120, wrapable);
}
