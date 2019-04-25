#include "Animal.h"

#include <ostream>

ClassProbe Animal::ourClassProbe;

Animal::Animal()
{
    ++ourClassProbe;
}

Animal::~Animal()
{
    --ourClassProbe;
}

std::ostream& operator<<(std::ostream& os, const Animal& animal)
{
    os << "Animal " << Animal::ourClassProbe;

    return os;
}
