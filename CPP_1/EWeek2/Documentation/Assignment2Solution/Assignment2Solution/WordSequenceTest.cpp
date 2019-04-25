#include "TestHarness.h"

#include "WordSequence.h"

TEST(RemoveDuplicates, WordSequence)
{
    std::stringstream words("Small Large Little Big Little Quit End Small Big");
    auto actual = getUniqueWords(words);

    auto expected("Small Large Little Big");
    CHECK_EQUAL(expected, actual);
}

TEST(RemoveDuplicatesNoQuit, WordSequence)
{
    std::stringstream words("Small Large Little Big Little End Small Big");
    auto actual = getUniqueWords(words);

    auto expected("Small Large Little Big End");
    CHECK_EQUAL(expected, actual);
}

TEST(Sorted, WordSequence)
{
    std::stringstream words("Small Large Little Big Little Quit End Small Big");
    auto actual = getSortedUniqueWords(words);

    auto expected("Big Large Little Small");
    CHECK_EQUAL(expected, actual);

}