//
//  Conversion.cpp
//  EWeek5
//
//  Created by Clayton Wong on 9/16/18.
//  Copyright © 2018 Clayton Wong. All rights reserved.
//

#include <sstream>

using namespace std;

namespace Utility
{
    
    int toInt ( const string& str )
    {
        int value{ 0 };
        stringstream stream{ str };
        stream >> value;
        
        if ( ! stream )
        {
            runtime_error{ "unable to convert string to integer" };
        }
        
        return value;
    }
    
    
} // namespace Utility
