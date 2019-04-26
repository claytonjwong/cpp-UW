#pragma once

#include <sstream>
#include <string>

template<typename T> void verifyEquality(const T& expected, const T& actual, const std::string& name = "")
{
    if (expected != actual)
    {
        std::stringstream sstr;
        sstr << name << " - expected: " << expected << ", actual: " << actual;
        throw std::runtime_error{sstr.str()};
    }
}
