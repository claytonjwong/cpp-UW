#include "Test.h"
#include "Failure.h"
#include "TestRegistry.h"
#include "TestResult.h"
#include <utility>

Test::Test(
    std::string testName,
    std::string fileName,
    long lineNumber)
    :
    myFileName(std::move(fileName)),
    myLineNumber(lineNumber),
    myName(std::move(testName))
{
    TestRegistry::addTest(this);
}

const std::string& Test::getFileName() const
{
    return myFileName;
}

const long& Test::getLineNumber() const
{
    return myLineNumber;
}

const std::string& Test::getName() const
{
    return myName;
}

void Test::run(TestResult& result)
{
    runTest(result);
    result.testWasRun();
}
