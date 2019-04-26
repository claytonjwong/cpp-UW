//
//  ParensTest.cpp
//  EWeek3
//
//  Created by CLAYTON WONG on 5/11/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include "TestHarness.h"
#include "Parens.hpp"

TEST(single,Parens){
    Solution s;
    CHECK(!s.isValid("("));
    CHECK(!s.isValid(")"));
    CHECK(!s.isValid("{"));
    CHECK(!s.isValid("}"));
    CHECK(!s.isValid("["));
    CHECK(!s.isValid("]"));
}

TEST(doubles,Parens){
    Solution s;
    CHECK(s.isValid("()"));
    CHECK(s.isValid("{}"));
    CHECK(s.isValid("[]"));
    CHECK(!s.isValid(")("));
    CHECK(!s.isValid("}{"));
    CHECK(!s.isValid("]["));
    CHECK(!s.isValid("(}"));
    CHECK(!s.isValid("{)"));
    CHECK(!s.isValid("[}"));
    CHECK(!s.isValid("[)"));
}

TEST(examples1,Parens){
    /*
     a. The following are some examples of well formed (these are not exhaustive):
     i. { }
     ii. { { } }
     iii. ( ) ( ( ) )
     iv. ( { [] [] } {} ) () (( ))
     v. Foo ( array[7], twoDArray [2][2] )
     */
    
    Solution s;
    CHECK(s.isValid("{ }"));
    CHECK(s.isValid("{ { } }"));
    CHECK(s.isValid("( ) ( ( ) )"));
    CHECK(s.isValid("( { [] [] } {} ) () (( ))"));
    CHECK(s.isValid("Foo ( array[7], twoDArray [2][2] )"));
}

TEST(examples2,Parens){
    /*
     The following are some examples of NOT well formed (these are not exhaustive):
     i. ( ( )
     ii. ( [] [ [ ] )
     iii. ( { ) }
     iv. Bar( arr[ 4 [ )
     v. Foo())
     vi. Foo() }
     */
    
    Solution s;
    CHECK(!s.isValid("( ( )"));
    CHECK(!s.isValid("( [] [ [ ] )"));
    CHECK(!s.isValid("( { ) }"));
    CHECK(!s.isValid("Bar( arr[ 4 [ )"));
    CHECK(!s.isValid("Foo())"));
    CHECK(!s.isValid("Foo() }"));
}

TEST(no_solution_instance,Parens){
    /*
     
     Solution class function isValid can be made static so we don't need
     to create an instance of the Solution class...
     
     */
    CHECK(Solution::isValid("(())[]"));
    CHECK(!Solution::isValid("(([))]"));
    CHECK(!Solution::isValid("{)(]"));
}
