#include "Parse.h"
#include "TestHarness.h"

TEST(trimBeginning, Parse)
{
    std::string actual{"  \tHello"};
    Parse::trim(actual, " \t\n");
    
    CHECK_EQUAL("Hello", actual);
}

TEST(trimEnd, Parse)
{
    std::string actual{"Hello  \n\n\n\t"};
    Parse::trim(actual, " \t\n");
    
    CHECK_EQUAL("Hello", actual);
}

TEST(trimBeginningAndEnd, Parse)
{
    std::string actual{"  Hello\n\t"};
    Parse::trim(actual, " \t\n");
    
    CHECK_EQUAL("Hello", actual);
}

TEST(trimNone, Parse)
{
    std::string actual{"Hello"};
    Parse::trim(actual);
    
    CHECK_EQUAL("Hello", actual);
}

TEST(trimEmpty, Parse)
{
    std::string actual;
    Parse::trim(actual);
    
    CHECK_EQUAL("", actual);
}

TEST(trimEverything, Parse)
{
    std::string actual{"Hello 1234"};
    std::string trimmables{"Hello 0123456789"};
    Parse::trim(actual, trimmables);
    
    CHECK_EQUAL("", actual);
}

TEST(eatNothing, Parse)
{
    std::istringstream stream{"Hello"};
    Parse::eat(stream, "123456789");
    
    std::ostringstream actual;
    actual << stream.rdbuf();
    
    CHECK_EQUAL("Hello", actual.str());
}

TEST(eatSomething, Parse)
{
    std::istringstream stream{"4320Hello"};
    Parse::eat(stream, "1234567890");
    
    std::ostringstream actual;
    actual << stream.rdbuf();
    
    CHECK_EQUAL("Hello", actual.str());
}

TEST(eatSomeLeadingWhitespace, Parse)
{
    std::istringstream stream{"   I had leading whitespace"};
    Parse::eat(stream);
    
    std::ostringstream actual;
    actual << stream.rdbuf();
    
    CHECK_EQUAL("I had leading whitespace", actual.str());
}

TEST(getBoolTrue, Parse)
{
	std::stringstream ss("true");
	bool value{ false };
	value = Parse::getBool(ss);

	CHECK(value);
}

TEST(getBoolFalse, Parse)
{
	std::stringstream ss("false");
	bool value{ true };
	value = Parse::getBool(ss);

	CHECK(!value);
}

TEST(getBoolThrows, Parse)
{
	try
	{
		std::stringstream ss("faLse");
		bool value{ true };
		value = Parse::getBool(ss);
	}
	catch (std::runtime_error &re)
	{
		CHECK(true);
		return;
	}

	CHECK(false);
}

TEST(boolToString, Parse)
{
	CHECK_EQUAL("true", Parse::boolToString(true));
	CHECK_EQUAL("false", Parse::boolToString(false));
}

