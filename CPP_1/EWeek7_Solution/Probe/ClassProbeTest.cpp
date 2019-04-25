#include "TestHarness.h"

#include "ClassProbe.h"
#include "Animal.h"

#include <sstream>

TEST(ctor, ClassProbe)
{
    ClassProbe p;

    CHECK_EQUAL(0, p.getCurrentInstances());
    CHECK_EQUAL(0, p.getTotalInstances());
}

TEST(preIncrement, ClassProbe)
{
    ClassProbe p;

    ++p;
    CHECK_EQUAL(1, p.getCurrentInstances());
    CHECK_EQUAL(1, p.getTotalInstances());

    ++p;
    ++p;
    CHECK_EQUAL(3, p.getCurrentInstances());
    CHECK_EQUAL(3, p.getTotalInstances());
}

TEST(preDecrement, ClassProbe)
{
    ClassProbe p;

	++p;
	++p;
	++p;
	++p;
    CHECK_EQUAL(4, p.getCurrentInstances());
    CHECK_EQUAL(4, p.getTotalInstances());

    --p;
    CHECK_EQUAL(3, p.getCurrentInstances());
    CHECK_EQUAL(4, p.getTotalInstances());
}

TEST(ostream, ClassProbe)
{
    ClassProbe p;

    ++p;
    ++p;
    ++p;
    --p;
    --p;

    std::stringstream s;
    s << p;

    CHECK_EQUAL("total: 3, current: 1", s.str());
}

TEST(ClassUse, ClassProbe)
{
    Animal a;

    std::stringstream s;
    s << a;
    CHECK_EQUAL("Animal total: 1, current: 1", s.str());

    {
        Animal a1;
    }

    {
        Animal a2;
    }

    s.str("");
    s << a;
    CHECK_EQUAL("Animal total: 3, current: 1", s.str());
}