#ifndef __ITER_DEFS_H__
#define __ITER_DEFS_H__

#include <map>
#include <set>
#include <vector>
#include <deque>
#include <string>
using std::map;
using std::set;
using std::vector;
using std::deque;
using std::string;

#include "ABC.h"

typedef map<string, ABC>			TMapABC;
typedef TMapABC::iterator			TMapABC_Iter;
typedef TMapABC::const_iterator		TMapABC_CIter;
typedef TMapABC::reverse_iterator	TMapABC_RIter;

typedef vector<ABC>					TVecABC;
typedef TVecABC::iterator			TVecABC_Iter;
typedef TVecABC::const_iterator		TVecABC_CIter;
typedef TVecABC::reverse_iterator	TVecABC_RIter;

#endif