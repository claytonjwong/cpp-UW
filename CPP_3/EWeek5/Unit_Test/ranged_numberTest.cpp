#include "TestHarness.h"
#include "ranged_number.hpp"

using namespace Utility;


TEST(cTor, ranged_number)
{
    ranged_number<short, 1, 12> grade{};

    grade = 5;
    CHECK_EQUAL(5, grade);
}

TEST(cTor2, ranged_number)
{
    ranged_number<short, 1, 12> grade{};

    grade = 12;
    CHECK_EQUAL(12, grade);
}

TEST(cTor3, ranged_number)
{
    ranged_number<short, 1, 12> grade{};

    grade = 1;
    CHECK_EQUAL(1, grade);
}

TEST(cTor4, ranged_number)
{
    ranged_number<short, 1, 12> grade{};

    grade = 13;
    CHECK_EQUAL(12, grade);
}

TEST(cTor5, ranged_number)
{
    ranged_number<short, 1, 12> grade{};

    grade = 0;
    CHECK_EQUAL(1, grade);
}

TEST(preIncrement, ranged_number)
{
    ranged_number<short, 1, 12> grade{};

    grade = 5;
    CHECK_EQUAL(5, grade);
    
    ++grade;
    CHECK_EQUAL(6, grade);
}

TEST(preIncrement2, ranged_number)
{
    ranged_number<short, 1, 12> grade{};

    grade = 5;
    CHECK_EQUAL(6, ++grade);
}

TEST(preIncrement3, ranged_number)
{
    ranged_number<short, 1, 12> grade{};

    grade = 5;
    CHECK_EQUAL(6, ++grade);
    CHECK_EQUAL(7, ++grade);
    CHECK_EQUAL(8, ++grade);
    CHECK_EQUAL(9, ++grade);
    CHECK_EQUAL(10, ++grade);
    CHECK_EQUAL(11, ++grade);
    CHECK_EQUAL(12, ++grade);
    CHECK_EQUAL(12, ++grade);
    CHECK_EQUAL(12, ++grade);
    CHECK_EQUAL(12, ++grade);
}

TEST(preIncrementConstraint, ranged_number)
{
    ranged_number<short, 1, 12> grade{};

    grade = 12;
    CHECK_EQUAL(12, grade);
    
    ++grade;
    CHECK_EQUAL(12, grade);
}

TEST(preIncrementConstraint2, ranged_number)
{
    ranged_number<short, 1, 12> grade{};

    grade = 12;
    CHECK_EQUAL(12, ++grade);
}

TEST(preIncrementConstraint3, ranged_number)
{
    ranged_number<short, 1, 12> grade{};

    grade = 12;
    CHECK_EQUAL(12, ++grade);
    CHECK_EQUAL(12, ++grade);
    CHECK_EQUAL(12, ++grade);
}


TEST(postIncrementConstraint, ranged_number)
{
    ranged_number<short, 1, 12> grade{};

    grade = 12;
    CHECK_EQUAL(12, grade);
    
    grade++;
    CHECK_EQUAL(12, grade);
}

TEST(postIncrementConstraint2, ranged_number)
{
    ranged_number<short, 1, 12> grade{};

    grade = 13;
    CHECK_EQUAL(12, grade);
    
    grade++;
    CHECK_EQUAL(12, grade);
}

TEST(postIncrementConstraint3, ranged_number)
{
    ranged_number<short, 1, 12> grade{};

    grade = 11;
    CHECK_EQUAL(11, grade);
    CHECK_EQUAL(11, grade++);
    CHECK_EQUAL(12, grade);
}

TEST(postIncrementConstraint4, ranged_number)
{
    ranged_number<short, 1, 12> grade{};

    grade = 11;
    CHECK_EQUAL(11, grade);
    CHECK_EQUAL(11, grade++);
    CHECK_EQUAL(12, grade++);
    CHECK_EQUAL(12, grade++);
    CHECK_EQUAL(12, grade++);
}

TEST(preDecrement, ranged_number)
{
    ranged_number<short, 1, 12> grade{};

    grade = 5;
    CHECK_EQUAL(5, grade);
    
    --grade;
    CHECK_EQUAL(4, grade);
}

TEST(preDecrement2, ranged_number)
{
    ranged_number<short, 1, 12> grade{};

    grade = 5;
    CHECK_EQUAL(5, grade);
    CHECK_EQUAL(4, --grade);
}

TEST(preDecrement3, ranged_number)
{
    ranged_number<short, 1, 12> grade{};

    grade = 5;
    CHECK_EQUAL(5, grade);
    CHECK_EQUAL(4, --grade);
    CHECK_EQUAL(3, --grade);
    CHECK_EQUAL(2, --grade);
    CHECK_EQUAL(1, --grade);
    CHECK_EQUAL(1, --grade);
    CHECK_EQUAL(1, --grade);
}

TEST(preDecrementConstraint, ranged_number)
{
    ranged_number<short, 1, 12> grade{};

    grade = 1;
    CHECK_EQUAL(1, grade);
    
    --grade;
    CHECK_EQUAL(1, grade);
}

TEST(preDecrementConstraint2, ranged_number)
{
    ranged_number<short, 0, 9> grade{};

    grade = -1;
    CHECK_EQUAL(0, grade);
    
    --grade;
    CHECK_EQUAL(0, grade);
}

TEST(preDecrementConstraint3, ranged_number)
{
    ranged_number<short, 0, 9> grade{};

    grade = 0;
    CHECK_EQUAL(0, grade);
    CHECK_EQUAL(0, --grade);
}

TEST(preDecrementConstraint4, ranged_number)
{
    ranged_number<short, 0, 9> grade{};

    grade = 0;
    CHECK_EQUAL(0, grade);
    CHECK_EQUAL(0, --grade);
    CHECK_EQUAL(0, --grade);
    CHECK_EQUAL(0, --grade);
}

TEST(postDecrementConstraint, ranged_number)
{
    ranged_number<short, 1, 12> grade{};

    grade = 1;
    CHECK_EQUAL(1, grade);
    
    grade--;
    CHECK_EQUAL(1, grade);
}

TEST(postDecrementConstraint2, ranged_number)
{
    ranged_number<short, 1, 12> grade{};

    grade = 1;
    CHECK_EQUAL(1, grade);
    CHECK_EQUAL(1, --grade);
    CHECK_EQUAL(1, --grade);
    CHECK_EQUAL(1, --grade);
}

TEST(postDecrementConstraint3, ranged_number)
{
    ranged_number<short, 1, 12> grade{};

    grade = 5;
    CHECK_EQUAL(5, grade);
    CHECK_EQUAL(4, --grade);
    CHECK_EQUAL(3, --grade);
    CHECK_EQUAL(2, --grade);
    CHECK_EQUAL(1, --grade);
    CHECK_EQUAL(1, --grade);
    CHECK_EQUAL(1, --grade);
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

TEST(operatorPlus2, ranged_number)
{
    Grade grade{5};

    grade = grade + Grade{5} + 2;
    CHECK_EQUAL(12, grade);

    grade = grade + Grade{5};
    CHECK_EQUAL(12, grade);
}

TEST(operatorPlus3, ranged_number)
{
    Grade grade{5};

    grade = 5 + grade + 2;
    CHECK_EQUAL(12, grade);

    grade = 5 + grade + Grade{5};
    CHECK_EQUAL(12, grade);
}

TEST(operatorPlus4, ranged_number)
{
    Grade grade{5};

    grade = 5 + grade;
    CHECK_EQUAL(10, grade);

    grade = 5 + grade;
    CHECK_EQUAL(12, grade);
}

using Grade = ranged_number<int, 1, 12>;
TEST(operatorMinus, ranged_number)
{
    Grade grade{6};

    grade = grade - Grade{5};
    CHECK_EQUAL(1, grade);

    grade = grade - Grade{5};
    CHECK_EQUAL(1, grade);
}

TEST(operatorMinus2, ranged_number)
{
    Grade grade{12};

    grade = grade - Grade{5} - 2;
    CHECK_EQUAL(5, grade);

    grade = grade - Grade{4};
    CHECK_EQUAL(1, grade);
}

TEST(operatorMinus3, ranged_number)
{
    Grade grade{5};

    grade = 5 - grade;
    CHECK_EQUAL(1, grade);
}

TEST(operatorMultiply, ranged_number)
{
    Grade grade{2};
    grade = grade * 2;
    CHECK_EQUAL(4, grade);
}

TEST(operatorMultiply2, ranged_number)
{
    Grade grade{1};
    grade = grade * 2 * grade;
    CHECK_EQUAL(2, grade);
}

TEST(operatorMultiply3, ranged_number)
{
    Grade grade{1};
    grade = grade * 12;
    CHECK_EQUAL(12, grade);
}

TEST(operatorMultiply4, ranged_number)
{
    Grade grade{1};
    grade = grade * 12;
    CHECK_EQUAL(12, grade);
}

TEST(operatorDivide, ranged_number)
{
    Grade grade{ 2 };
    grade = grade / 2;
    CHECK_EQUAL( 1, grade );
}

TEST(operatorDivide2, ranged_number)
{
    Grade grade{ 2 };
    grade = grade / 2;
    grade = grade / Grade{ 2 };
    CHECK_EQUAL( 1, grade );
}

TEST(assignment, ranged_numer)
{
    Grade gradeA, gradeB{ 2 };
    gradeA = gradeB;
    CHECK_EQUAL( gradeA, gradeB );
}

TEST(selfAssignment, ranged_numer)
{
    Grade gradeA{ 2 }, gradeB{ 2 };
    gradeB = gradeB;
    CHECK_EQUAL( gradeA, gradeB );
}

TEST(selfAssignment2, ranged_numer)
{
    Grade gradeA{ 2 }, gradeB{ 2 };
    gradeB = gradeB = gradeB;
    CHECK_EQUAL( gradeA, gradeB );
}

TEST(selfAssignment3, ranged_numer)
{
    Grade gradeA{ 2 }, gradeB;
    gradeB = gradeB = gradeB = 2;
    CHECK_EQUAL( gradeA, gradeB );
}

TEST(assignmentViaMove, ranged_numer)
{
    Grade grade;
    grade = Grade{ 10 };
    CHECK_EQUAL( grade, 10 );
}

TEST(assignmentViaMove2, ranged_numer)
{
    Grade grade;
    grade = Grade{ 16 };
    CHECK_EQUAL( grade, 12 );
}

TEST(operatorPlusEquals, ranged_number)
{
    Grade grade {5};

    grade += 5;
    CHECK_EQUAL(10, grade);

    grade += 5;
    CHECK_EQUAL(12, grade);
}

TEST(operatorPlusEquals2, ranged_number)
{
    Grade grade {5};

    grade += grade;
    CHECK_EQUAL(10, grade);

    grade += grade;
    CHECK_EQUAL(12, grade);
}


