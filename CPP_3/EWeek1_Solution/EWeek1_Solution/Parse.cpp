#include "Parse.h"
#include <iostream>

namespace Parse
{
    void trim(std::string& sourceString,
              std::string const& trimmables)
    {
		sourceString.erase(0, sourceString.find_first_not_of(trimmables));

		sourceString.erase(sourceString.find_last_not_of(trimmables) + 1);
    }
    
    void eat(std::istream& sourceStream,
             const std::string& edibles)
    {
		int nextchar;

		while ((nextchar = sourceStream.peek()) != EOF) {
			if (edibles.find(static_cast<char>(nextchar)) != std::string::npos) 
			{
				sourceStream.get();
			}
			else 
			{
				// Give up looking on the first non-edible character.
				break;
			}
		}
    }

	bool getBool(std::istream& sourceStream)
	{
		bool theBool{ false };
		sourceStream >> std::boolalpha >> theBool;

		if (!(sourceStream.rdstate() & (std::ios_base::goodbit | std::ios_base::eofbit)))
		{
			throw std::runtime_error{ "Invalid boolean text value." };
		}

		return theBool;
	}
}