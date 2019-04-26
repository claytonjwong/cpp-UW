//
//  WordGame.cpp
//  EWeek4
//
//  Created by CLAYTON WONG on 5/22/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include <exception>
#include <fstream>
#include "WordGame.hpp"
#include "Board.hpp"
#include "BoardInitializer.hpp"
#include "WordFinder.hpp"

using namespace std;

void WordGame::Run() const {
    int rows, cols, len;
    
    cout << "# rows: ";
    cin >> rows;
    assert(rows>0);
    
    cout << "# cols: ";
    cin >> cols;
    assert(cols>0);
    
    cout << "Max len: ";
    cin >> len;
    assert(len>0);
    
    Run(rows,cols,len);
}

void WordGame::Run(int rows, int cols, int len, bool debug, const string dicFile, const string outFile) const {
    assert(rows>0 && cols>0 && len>0);
    Board board(rows,cols,debug);
    Dictionary dic(dicFile);
    WordFinder finder(board,dic,len);
    auto words=finder.FindWords();
    int maxlen=0; for (const auto& w: words) maxlen=max(maxlen,(int)w.size());
    try {
        ofstream fout(outFile);
        fout << "Max word length: " << maxlen << endl
             << "Number of words found: " << words.size() << endl;
        for (const auto& w: words) fout << w << " ";
    } catch (...) {
        cerr << "ERROR: Unable to open output file: " << outFile << endl;
    }
}
