#include "TestHarness.h"

#include "FunctionProbe.h"
#include "Animal.h"

#include <sstream>

TEST(ctor, FunctionProbe)
{
    FunctionProbe p("ctor");

    CHECK_EQUAL(0, p.getCallCount("ctor"));
}

TEST(increment, FunctionProbe)
{
    FunctionProbe p("increment");

    ++p;
    p++;

    CHECK_EQUAL(2, p.getCallCount());
    CHECK_EQUAL(2, FunctionProbe::getCallCount("increment"));
}

void TestFunction()
{
    static FunctionProbe functionProbe("TestFunction");
    ++functionProbe;
}

TEST(FunctionCall, FunctionProbe)
{
    TestFunction();
    TestFunction();
    TestFunction();
    TestFunction();

    CHECK_EQUAL(4, FunctionProbe::getCallCount("TestFunction"));
}

void NoCallTestFunction()
{
    static FunctionProbe functionProbe("NoCallTestFunction");
    ++functionProbe;
}

TEST(NoFunctionCall, FunctionProbe)
{
    CHECK_EQUAL(0, FunctionProbe::getCallCount("NoCallTestFunction"));
}