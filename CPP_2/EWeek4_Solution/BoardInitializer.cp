#include <assert.h>
#include "BoardInitializer.h"
#include "Dictionary.h"
using namespace std;

BoardInitializer::BoardInitializer(const Dictionary & dict)
	:mDict(dict)
{}

void BoardInitializer::InitializeBoardRandom(std::vector<std::string> & board, int numCols)
{
	// TBD
}

void BoardInitializer::InitializeBoardWordSize(std::vector<std::string> & board, int numCols)
{
	int wordLengthToLookFor = numCols;
	Dictionary::citerator wordsIter = mDict.Start();

	for (unsigned int row = 0; row < board.size(); ++row)
	{
		wordsIter = mDict.FindNextWord(wordLengthToLookFor, wordsIter);
		if (wordsIter != mDict.End())
		{
			board[row] = *wordsIter;
			++wordsIter;
		}
		else
		{
			// Need better error handling, and also log a message
			board[row] = string(wordLengthToLookFor, 'Z');
		}
	}
}

void BoardInitializer::InitializeBoardDebug(std::vector<std::string> & board, int numCols)
{
	board[0] = "apex";
	board[1] = "nots";
	board[2] = "etin";
	board[3] = "ryeg";

	// check that we didnt mess up in initialization above
	for (int row = 0; row < board.size(); ++row)
	{
		assert(board[row].size() == numCols);
	}
}
