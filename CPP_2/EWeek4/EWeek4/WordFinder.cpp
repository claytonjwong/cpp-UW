//
//  WordFinder.cpp
//  EWeek4
//
//  Created by CLAYTON WONG on 5/23/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include <unordered_set>
#include "WordFinder.hpp"

using namespace std;

//
// construct words using go() to find all words starting from each cell (i,j) of the board
//
// myWords is emptied and filled again each time this function is invoked
// this is intended in case WordFinder is extended in the future to allow
// modification of the board, dictionary, word length, etc
//
// go() is my generic function name for recursive algorithms,
// it is my personal preference, since my 2 year-old son always says "go! go!"
// this generic and short name is on purpose since its simple for me to use and remember
//
TWordsList WordFinder::FindWords() {
    myWords.clear();
    for (int i=0; i<myBoard.NumRows(); ++i)
        for (int j=0; j<myBoard.NumCols(); ++j)
            go(i,j);
    return myWords;
}

//
// go()
//
// DFS + backtracking algo used to construct candidate words from the board
// if the candidate word is a word in the dictionary, it is inserted into myWords
//
void WordFinder::go(int i, int j) { // wrapper function
    string str;
    unordered_set<int> visited;
    go(i,j,str,visited);
}
void WordFinder::go(int i, int j, string& str, unordered_set<int>& visited) {
    if (i<0||j<0||i>=myBoard.NumRows()||j>=myBoard.NumCols()) return; // bounds check
    if (!visited.insert(key(i,j)).second) return; // try to insert, return if already visited
    str.push_back(myBoard[i][j]);
    if (str.size()<=myMaxLength){
        if (myDic.Contains(str))
            myWords.insert(str);
        if (str.size()!=myMaxLength) for (auto& dir: myDirs) // DFS recursive constraint on str.size()<maxMaxLength
            go(i+dir.first,j+dir.second,str,visited);
    }
    visited.erase(key(i,j)); // backtracking
    str.pop_back();
}
