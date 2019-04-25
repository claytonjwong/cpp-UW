#include "ClassProbe.h"

#include <ostream>

ClassProbe::ClassProbe()
    : myCurrentInstances(0), myTotalInstances(0)
{
}

ClassProbe& ClassProbe::operator++()
{
    ++myCurrentInstances;
    ++myTotalInstances;

    return *this;
}

ClassProbe& ClassProbe::operator--()
{
    myCurrentInstances--;
    return *this;
}

unsigned ClassProbe::getCurrentInstances() const
{
    return myCurrentInstances;
}

unsigned ClassProbe::getTotalInstances() const
{
    return myTotalInstances;
}

std::ostream& operator<<(std::ostream& os, const ClassProbe& probe)
{
    os << "total: " << probe.getTotalInstances() << ", current: " << probe.getCurrentInstances();
    return os;
}