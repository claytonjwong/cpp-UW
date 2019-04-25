#pragma once

#include "ClassProbe.h"

class Animal
{
public:
    Animal();
    ~Animal();

    friend std::ostream& operator<<(std::ostream& os, const Animal& animal);

private:
    static ClassProbe ourClassProbe;
};



