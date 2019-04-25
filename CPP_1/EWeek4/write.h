#pragma once

/*

2. Create a C++ header file named write.h which contains function prototypes
for three functions named write. Write the implementations for each write function
in a file named write.cpp. Each write function takes two arguments. The first argument
is always std::ostream& os. The second arguments are an int, a float, and a std::string respectively.
Each write function should stream its second argument to the passed in std::ostream.
Write cppunitlite unit tests that pass a std::stringstream as the first argument to each function
and verify its operation. Write non unit test code that calls each write function
and passes std::cout as the first argument (the cout tests are written outside the unit test framework
because verification can't easily be automated). Here's the prototype for the first write overload:

void write(std::ostream& os, int value);

Notice that both std::stringstream and std::cout may be passed as the first argument.
Both inherit from std::ostream and thus may be used where ever a std::ostream& is used.
This is our first use of inheritance in C++. We'll do much more with inheritance
as the course progresses.

*/

#include <ostream>

void write(std::ostream& os,int i);
void write(std::ostream& os,float f);
void write(std::ostream& os,std::string s);