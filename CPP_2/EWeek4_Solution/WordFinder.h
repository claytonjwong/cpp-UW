#pragma once
#include <set>
#include <vector>
#include <string>

class Dictionary;
class Board;
class WordFinder
{
public:
	typedef std::set<std::string>	  TWordsList;

	WordFinder(const Dictionary&, const Board & board, int maxFoundWordLength);
	TWordsList	FindWords();

private:

	void	FindWords(int row, int col, std::string & word, TWordsList &);
	void	AddWord(const std::string & word, TWordsList & wordsFound);
	bool	IsValidRowCol(int row, int col) const;
	bool	IsVisited(int row, int col) const;
	void	MarkVisited(bool visited, int row, int col);

	const Dictionary& mWords;
	const Board & mBoard;
	std::vector < std::vector< bool > >	mVisited;
	int mMaxFoundWordLength;
};