#ifndef CAT_H_ALREADY_INCLUDED
#define CAT_H_ALREADY_INCLUDED

#pragma once

#include <string>
#include <memory>

// cat returns an heap array. Caller must remember to delete[].
char* cat(const char* start, const char* end);

// Better cat - returns unique_ptr to explicitly code memory ownership transfer. ucat is
// a memory source.
std::unique_ptr<char[]> ucat(const char* start, const char* end); 

std::string cat(const std::string& start, const std::string& end);

#endif