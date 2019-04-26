/*
Dictionary
Board
BoardInitializer
WordFinder
LetterPoints

*/
#include <string>
#include <vector>
#include <iostream>
#include <iterator>
#include "Board.h"
#include "Dictionary.h"
#include "WordFinder.h"
using namespace std;

class WordGame
{
public:
	WordGame(int numRows, int numCols, int maxWordSizeToLookFor, const string & wordsFile);
	~WordGame();
	void	Run();

	static const int kDefaultBoardSize = 4;
	static const int kMaxBoardSize = 10;
	static const int kDefaultMaxFoundWordLength = 9;
	static const int kMaxMaxFoundWordLength = 15;

private:
	void	PrintWords(const WordFinder::TWordsList &);
	

	Board *			mGameBoard;
	Dictionary		mWordsDictionary;
	int				mMaxWordSizeToLookFor;
};

WordGame::WordGame(int numRows, int numCols, int maxWordSizeToLookFor, const string & wordsFile)
	: mWordsDictionary(wordsFile), mGameBoard(nullptr), mMaxWordSizeToLookFor(maxWordSizeToLookFor)
{
	mGameBoard = new Board(numRows, numCols, mWordsDictionary);
}

WordGame::~WordGame()
{
	delete mGameBoard;
}

void WordGame::Run()
{
	WordFinder wf(mWordsDictionary, *mGameBoard, mMaxWordSizeToLookFor);
	PrintWords(wf.FindWords());
}

void WordGame::PrintWords(const WordFinder::TWordsList & words)
{
	cout << "Max word length: " << mMaxWordSizeToLookFor << endl;
	cout << "Number of words found: " << words.size() << endl;
	copy(words.begin(), words.end(), ostream_iterator<string>(std::cout, " "));
}

void CheckArgs(int argc, char **argv, 
				int & numRows, int & numCols, int & maxWordSizeToLookFor, 
				string & wordsFile)
{
	// Really need a better way to input the parameters. This is error prone.
	if (argc > 1)
	{
		int rows = atoi(argv[1]);
		if ((rows > 0) && (rows < WordGame::kMaxBoardSize))
		{
			numRows = rows;
		}
	}
	if (argc > 2)
	{
		int cols = atoi(argv[2]);
		if ((cols > 0) && (cols < WordGame::kMaxBoardSize))
		{
			numCols = cols;
		}
	}
	if (argc > 3)
	{
		int maxWordSize = atoi(argv[3]);
		if ((maxWordSize > 0) && (maxWordSize <= WordGame::kMaxMaxFoundWordLength))
		{
			maxWordSizeToLookFor = maxWordSize;
		}
	}
	if (argc > 4)
	{
		wordsFile = argv[4];		// words file name
	}

	cout << "Board size " << numRows << " X " << numCols << ". Max word length " << maxWordSizeToLookFor
		 << " Words file:" << wordsFile << endl;
}

int main(int argc, char **argv)
{
	int numRows = WordGame::kDefaultBoardSize;
	int numCols = numRows;
	int maxWordSizeToLookFor = WordGame::kDefaultMaxFoundWordLength;
	string wordsFile("Words.txt");

	CheckArgs(argc, argv, numRows, numCols, maxWordSizeToLookFor, wordsFile);

	WordGame  wg(numRows, numCols, maxWordSizeToLookFor, wordsFile);
	wg.Run();

	return 0;
}