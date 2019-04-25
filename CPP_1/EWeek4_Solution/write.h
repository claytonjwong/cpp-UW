#ifndef WRITE_H_ALREADY_INCLUDED
#define WRITE_H_ALREADY_INCLUDED



#pragma once

#include <ostream>
#include <string>

void write(std::ostream& os, int value);

void write(std::ostream& os, float value);

void write(std::ostream& os, const std::string& value);

#endif

