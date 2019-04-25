#pragma once

#include <iosfwd>
#include <map>
#include <string>

class FunctionProbe
{
public:
    FunctionProbe(const std::string& functionName);

    FunctionProbe& operator++();
    FunctionProbe operator++(int);

    unsigned getCallCount() const;
    static unsigned getCallCount(const std::string& functionName);

private:
    std::string myFunctionName;
    static std::map<std::string, unsigned> ourCallCounts;
};

std::ostream& operator<<(std::ostream& os, const FunctionProbe& probe);
