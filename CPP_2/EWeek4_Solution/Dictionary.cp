#include "Dictionary.h"
#include <fstream>
#include <iterator>
#include <iostream>
using namespace std;

Dictionary::Dictionary(const std::string & wordsFile)
{
	ifstream inpFile(wordsFile.c_str());
	if (!inpFile)
	{
		cerr << "Error reading input file: " << wordsFile << endl;
		throw 1;  // should be some exception class object.
	}

	mWords.insert(istream_iterator<string>(inpFile), istream_iterator<string>());
	cout << "Dictionary. Read " << mWords.size() << " words from file " << wordsFile << endl;
}

Dictionary::citerator &	Dictionary::FindNextWord(int size, Dictionary::citerator & iter) const
{
	while (iter != mWords.end())
	{
		if (iter->size() == size)
			break;
		++iter;
	}

	return iter;
}

Dictionary::citerator Dictionary::Start() const
{
	return mWords.cbegin();
}

Dictionary::citerator Dictionary::End() const
{
	return mWords.cend();
}

bool Dictionary::Contains(const std::string & word) const
{
	return mWords.find(word) != mWords.end();
}