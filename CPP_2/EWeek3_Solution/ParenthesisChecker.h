#ifndef ParenthesisChecker_h__
#include <string>
#include <iostream>

class ParenthesisChecker
{
public:
	
	static bool		CheckAndPrint( const std::string & str, std::ostream & os );

	static bool		IsOpenParen( char ch );
	static bool		IsCloseParen( char ch );
	static bool		IsMatchingCloseParen( char openParen, char closeParen );

private:

	static bool		IsWellFormed( const std::string & str );
};

#endif