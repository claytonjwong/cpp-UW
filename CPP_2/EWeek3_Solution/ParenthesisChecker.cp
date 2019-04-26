#include "ParenthesisChecker.h"
#include "Stack.h"
#include <string>
using namespace std;

// putting these in a string. Could use a set, but with only 3 parens, a linear search is pretty fast too.
static const string openParens ( "([{" );
static const string closeParens( ")]}" );


bool ParenthesisChecker::CheckAndPrint( const string & str, ostream & os )
{
	bool wellFormed = IsWellFormed( str );

	os << str << (wellFormed ? " is" : " is not" ) << " well formed" << endl;

	return wellFormed;
}

bool ParenthesisChecker::IsWellFormed( const string & str )
{
	if (str.empty())
		return true;	// empty string is well formed

	bool wellFormed = true;

	Stack s;
	int strSize = str.size();

	for ( int ii = 0; ii < strSize; ++ ii )
	{
		if ( IsOpenParen( str[ ii ] ) )		// the only char we push on stack is the open paren
		{
			s.Push( str[ ii ] );
		}
		else if (IsCloseParen( str[ ii ] ) )
		{
			if (s.Empty())					// if nothing on stack and we saw a close paren, then error
			{
				// Note that I could not have this 'wellFormed' flag, and just break out of the loop here.
				// And then outside the for loop, check if  ii < str.size(), then I must have encountered an error
				// In other words, if ii == str.size(), it means I came out of the for loop without any error
				// If I do that, I would need to declare int ii outside the for loop.
				// However, I think maintaining a flag like 'wellFormed' is clearer logic.
				wellFormed = false;	
				break;
			}

			// Get the open paren on top of stack and check if it matches with the close paren we are looking at
			char openParen = s.Pop();
			if ( ! IsMatchingCloseParen( openParen, str[ ii ] ) )
			{
				wellFormed = false;
				break;
			}
		}
	}

	// if everything is good so far, also check if stack is empty
	return wellFormed && s.Empty();
}

bool ParenthesisChecker::IsOpenParen( char ch )
{
	return openParens.find(ch) != string::npos;
}

bool ParenthesisChecker::IsCloseParen( char ch )
{
	return closeParens.find(ch) != string::npos;
}

bool ParenthesisChecker::IsMatchingCloseParen( char openParen, char closeParen )
{
	switch (openParen)
	{
	case '(':
		return closeParen == ')';
	case '{':
		return closeParen == '}';
	case '[':
		return closeParen == ']';
	default:
		return false;
	};
}