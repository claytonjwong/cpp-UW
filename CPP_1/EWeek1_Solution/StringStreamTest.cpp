#include "TestHarness.h"

#include <sstream>
#include <string>

TEST(toDouble, stringstream)
{
    std::stringstream sValue("3.14159");
    double value;

    sValue >> value;

    if (!sValue)
    {
        CHECK_FAIL("conversion failed");
    }

    CHECK_DOUBLES_EQUAL(3.141589, value, .000001);
}

TEST(fromDouble, stringstream)
{
    double value = 2.71828;
	std::stringstream sValue;

    sValue << value;

    if (!sValue)
    {
        CHECK_FAIL("conversion failed");
    }

    CHECK_EQUAL("2.71828", sValue.str());
}

TEST(toFloat, stringstream)
{
    std::stringstream sValue("3.14159");
    float value;

    sValue >> value;

    if (!sValue)
    {
        CHECK_FAIL("conversion failed");
    }

    CHECK_DOUBLES_EQUAL(3.14159, value, .000001);
}

TEST(fromFloat, stringstream)
{
    float value = 2.71828f;
	std::stringstream sValue;

    sValue << value;

    if (!sValue)
    {
        CHECK_FAIL("conversion failed");
    }

    CHECK_EQUAL("2.71828", sValue.str());
}

TEST(toString, stringstream)
{
    std::stringstream sValue("Euler");
    std::string value;
    sValue >> value;

    CHECK_EQUAL("Euler", value);
}

TEST(fromString, stringstream)
{
    std::string value("pi");
	std::stringstream sValue;
    sValue << value;

    CHECK_EQUAL("pi", sValue.str());
}

TEST(toChar, stringstream)
{
    std::stringstream sValue("Euler");
    char value;
    sValue >> value;

    CHECK_EQUAL('E', value);
}

TEST(fromChar, stringstream)
{
    char value = 'q';
	std::stringstream sValue;
    sValue << value;

    CHECK_EQUAL("q", sValue.str());
}

TEST(errorDetection, stringstream)
{
    std::stringstream sValue("Hello");
    int value;
    sValue >> value;

	CHECK(!sValue);
}