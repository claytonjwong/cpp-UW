#ifndef __ABC_H__
#define __ABC_H__

#include <string>
using std::string;
#include <ostream>
using std::ostream;

class ABC
{
public:

	ABC()
	{}

	ABC ( const string & name, int value )
	 :mValue1( value ), mName( name )
	{}

	const string &	GetName() const;
	int				GetValue() const;

private:
	int		mValue1;
	string  mName;
};

inline const string & ABC::GetName() const
{
	return mName;
}

inline int ABC::GetValue() const
{
	return mValue1;
}

inline ostream & operator << ( std::ostream & os, const ABC & abc )
{
	os << "Name: " << abc.GetName() << " Value: " << abc.GetValue();
	return os;
}

#endif