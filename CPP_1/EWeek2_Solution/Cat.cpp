#include "Cat.h"

char* cat(const char* start, const char* end)
{
    auto result = new char[strlen(start) + strlen(end) + 1];
    auto p = result;

    // you could use strcpy here as well. This solution copies strings with pointer arithmetic and assignment

    while (*p++ = *start++)
    {
        if (*start == '\0')
        {
            break;
        }
    }

    while (*p++ = *end++)
    {
    }

    return result;
}

std::unique_ptr<char[]> ucat(const char* start, const char* end)
{
	auto result = std::make_unique<char[]>(strlen(start) + strlen(end) + 1);
	auto p = result.get();

	// you could use strcpy here as well. This solution copies strings with pointer arithmetic and assignment

	while (*p++ = *start++)
	{
		if (*start == '\0')
		{
			break;
		}
	}

	while (*p++ = *end++)
	{
	}

	return result;
}

std::string cat(const std::string& start, const std::string& end)
{
    return start + end;
}
