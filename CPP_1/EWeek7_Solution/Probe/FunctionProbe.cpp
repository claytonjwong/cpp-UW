#include "FunctionProbe.h"

#include <ostream>

std::map<std::string, unsigned> FunctionProbe::ourCallCounts;

FunctionProbe::FunctionProbe(const std::string& functionName)
    : myFunctionName(functionName)
{
}

FunctionProbe& FunctionProbe::operator++()
{
    std::map<std::string, unsigned>::iterator pos = ourCallCounts.find(myFunctionName);
    if (pos != ourCallCounts.end())
    {
        pos->second++;
    }
    else
    {
        ourCallCounts.insert(std::make_pair(myFunctionName, 1));
    }

    return *this;
}

FunctionProbe FunctionProbe::operator++(int)
{
    FunctionProbe temp(*this);
    operator++();
    return temp;
}

unsigned FunctionProbe::getCallCount(const std::string& functionName)
{
    std::map<std::string, unsigned>::iterator pos = ourCallCounts.find(functionName);
    if (pos != ourCallCounts.end())
    {
        return pos->second;
    }

    return 0u;
}

unsigned FunctionProbe::getCallCount() const
{
    return getCallCount(myFunctionName);
}

std::ostream& operator<<(std::ostream& os, const FunctionProbe& probe)
{
    os << "callCount: " << probe.getCallCount();
    return os;
}
