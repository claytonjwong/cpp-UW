//
//  TokenTest.cpp
//  EWeek1
//
//  Created by CLAYTON WONG on 7/20/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include "TestHarness.h"
#include "Token.hpp"

using namespace VG;

TEST(empty,Token){
    Token tok;
    CHECK(tok.orig.empty());
    CHECK(tok.beg.empty())
    CHECK(tok.name.empty());
    CHECK(tok.attributes.empty());
    CHECK(tok.end.empty());
    CHECK(tok.isOpen()==true)
}

TEST(openToken1,Token){
    Token tok;
    tok.orig="<Element/>";
    tok.beg="<";
    tok.end="/>";
    CHECK(tok.isOpen());
}

TEST(openToken2,Token){
    Token tok;
    tok.orig="<Element>";
    tok.beg="<";
    tok.end=">";
    CHECK(tok.isOpen());
}

TEST(closeToken,Token){
    Token tok;
    tok.orig="</Element>";
    tok.beg="</";
    tok.end=">";
    CHECK(!tok.isOpen());
}
