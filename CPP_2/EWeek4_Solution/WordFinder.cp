#include "WordFinder.h"
#include "Dictionary.h"
#include "Board.h"
#include <vector>
#include <ctime>
using namespace std;

WordFinder::WordFinder(const Dictionary& words, const Board & board, int maxFoundWordLength)
:mWords(words), mBoard(board), mMaxFoundWordLength(maxFoundWordLength)
{
	for (int ii = 0; ii < mBoard.NumRows(); ++ii)
	{
		mVisited.push_back(vector<bool>(mBoard.NumCols()));  // should be initialized to false (default value)
	}
}

WordFinder::TWordsList WordFinder::FindWords()
{
	TWordsList wordsFound;
	string word;
	word.reserve(mMaxFoundWordLength);		// max word length
	clock_t start = clock();

	for (int row = 0; row < mBoard.NumRows(); ++row)
	{
		for (int col = 0; col < mBoard.NumCols(); ++col)
		{
			int startingSize = static_cast<int>(wordsFound.size());
			cout << "Finding words starting with board(" << row << "," << col << "). " ;
			word.clear();

			FindWords(row, col, word, wordsFound); // Find all words starting at character at position (row,col) in the board
			
			cout << "Found " << wordsFound.size() - startingSize << " words\n";
		}
	}

	clock_t end = clock();
	cout << "Time taken " << end - start << endl;

	return wordsFound;
}

void WordFinder::FindWords(int row, int col, string & word, TWordsList & wordsFound)
{
	if (word.size() == mMaxFoundWordLength)
		return;

	MarkVisited(true, row, col);	// mark board cell [row][col] as visited
	word.append(1, mBoard(row, col));
	AddWord(word, wordsFound);		// if word is valid, then add to wordsFound

	for (int rowIdx = row - 1; rowIdx <= row + 1; ++rowIdx)
	{
		for (int colIdx = col - 1; colIdx <= col + 1; ++colIdx)
		{
			if (!IsValidRowCol(rowIdx, colIdx) || IsVisited(rowIdx, colIdx))
				continue;

			FindWords(rowIdx, colIdx, word, wordsFound);
		}
	}

	// We are back tracking, so drop the letter (mBoard[row][col]) that we had appended to word
	if (!word.empty())
	{
		word.erase(word.end() - 1);
	}
	MarkVisited(false, row, col);		// clear the visited flag for board cell [row][col]
}

bool WordFinder::IsValidRowCol(int row, int col) const
{
	return (row >= 0) && (col >= 0) && (row < mBoard.NumRows()) && (col < mBoard.NumCols());
}

void WordFinder::AddWord(const string & word, TWordsList & wordsFound)
{
	if (mWords.Contains(word))
	{
		wordsFound.insert(word);
	}
}

bool WordFinder::IsVisited(int row, int col) const
{
	return mVisited[row][col];
}

void WordFinder::MarkVisited(bool visited, int row, int col)
{
	mVisited[row][col] = visited;
}

