//
//  DictionaryTest.cpp
//  EWeek4
//
//  Created by CLAYTON WONG on 5/23/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include <stdio.h>
#include "TestHarness.h"
#include "Dictionary.hpp"

using namespace std;

TEST(smallFile,Dictionary){
    
    Dictionary dic("smallFile.txt");
    
    CHECK(dic.Contains(string("hi")));
    CHECK(dic.Contains(string("there")));
    CHECK(dic.Contains(string("how")));
    CHECK(dic.Contains(string("are")));
    CHECK(dic.Contains(string("you")));
    
    CHECK(!dic.Contains(string("nope")));
    CHECK(!dic.Contains(string("none")));
    CHECK(!dic.Contains(string("of")));
    CHECK(!dic.Contains(string("these")));
}

TEST(largeFile,Dictionary){
    Dictionary dic("WordsList.txt");
    
    CHECK(dic.Contains(string("abracadabra")));
    CHECK(dic.Contains(string("hocuspocus")));
    
    CHECK(!dic.Contains(string("notaword")));
    CHECK(!dic.Contains(string("magicmushrooms")));
}

TEST(caseSensitivity,Dictionary){
    Dictionary dic("WordsList.txt");
    
    CHECK(dic.Contains(string("Abracadabra")));
    CHECK(dic.Contains(string("ABRACADABRA")));
}

TEST(fileNotFound,Dictionary){
    Dictionary dic("notfound.txt");
    CHECK(!dic.Contains("Abracadabra"));
    CHECK(!dic.Contains("word"));
}
