#pragma once
#include <vector>
#include <string>
class Dictionary;
class BoardInitializer
{
public:
	BoardInitializer(const Dictionary & dict);
	
	void InitializeBoardRandom(std::vector<std::string> & board, int size);
	void InitializeBoardDebug(std::vector<std::string> & board, int size);
	void InitializeBoardWordSize(std::vector<std::string> & board, int size);

private:
	const Dictionary & mDict;
};