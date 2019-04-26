#pragma once

#include <exception>

template<class Target, class Source>
Target narrow_cast(Source v)
{
    auto r = static_cast<Target>(v);
    if (static_cast<Source>(r) != v)
    {
        throw std::runtime_error("narrow_cast<>() failed");
    }

    return r;
}
