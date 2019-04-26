#pragma once
#include <string>
#include <set>

class Dictionary
{
public:
	Dictionary(const std::string & wordsFile);

	bool Contains(const std::string & word) const;

	using citerator = std::set<std::string>::const_iterator;
	citerator	Start() const;
	citerator	End() const;
	citerator &	FindNextWord(int size, citerator & iter) const;

private:
	std::set<std::string>		mWords;
};