#include "TestHarness.h"
#include "narrow_cast.h"

TEST(narrow_cast, succeeded)
{
    auto v = narrow_cast<std::uint8_t>(245);

    CHECK_EQUAL(245, v);
}

TEST(narrow_cast, failed)
{
    auto exceptionThrown = false;

    try
    {
        auto v = narrow_cast<char>(5000);
    }
    catch (const std::exception& e)
    {
        exceptionThrown = true;
        CHECK_EQUAL("narrow_cast<>() failed", e.what());
    }

    CHECK(exceptionThrown);
}