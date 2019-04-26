#include "TestHarness.h"
#include "VerifyEquality.h"
#include "SizedWord.h"

TEST(verifyEqualityThrows, Word)
{
    const unsigned char input[]{ 0xAB, 0xCD, 0 };
    std::stringstream ss{reinterpret_cast<const char*>(input)};

    const auto actual{ Binary::Word::readLittleEndian(ss) };
    const Binary::Word notReallyExpected{0xABCD};

    try
    {
        verifyEquality(notReallyExpected, actual, "notReallyExpected");
        CHECK(false);
    }
    catch (const std::exception& e)
    {
		CHECK_EQUAL(std::string("notReallyExpected - expected: 43981, actual: 52651"), e.what());
        CHECK(true);
    }
}

TEST(verifyEqualitySucceeds, Word)
{
	const unsigned char input[]{ 0xAB, 0xCD, 0 };
	std::stringstream ss{ reinterpret_cast<const char*>(input) };

	const auto actual{ Binary::Word::readLittleEndian(ss) };
	const Binary::Word notReallyExpected{ 0xCDAB };

	try
	{
		verifyEquality(notReallyExpected, actual, "notReallyExpected");
		CHECK(true);
	}
	catch (std::exception&)
	{
		CHECK(false);
	}
}
