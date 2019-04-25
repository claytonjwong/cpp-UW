#pragma once

#include <iosfwd>

class ClassProbe
{
public:
    ClassProbe();

    ClassProbe& operator++();
    ClassProbe& operator--();

    unsigned getCurrentInstances() const;
    unsigned getTotalInstances() const;

	ClassProbe(const ClassProbe& src) = delete;
	ClassProbe& operator=(const ClassProbe& rhs) = delete;

private:
    unsigned myCurrentInstances;
    unsigned myTotalInstances;
};

std::ostream& operator<<(std::ostream& os, const ClassProbe& probe);
