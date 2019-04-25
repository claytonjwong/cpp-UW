#include "TestHarness.h"

#include "write.h"

TEST(int, Write)
{
    std::stringstream ss;
    write(ss, 44);
    CHECK_EQUAL("44", ss.str());
}

TEST(float, Write)
{
    std::stringstream ss;
    write(ss, 44.44f);
    CHECK_EQUAL("44.44", ss.str());
}

TEST(string, Write)
{
    std::stringstream ss;
    write(ss, "Hello There");
    CHECK_EQUAL("Hello There", ss.str());
}