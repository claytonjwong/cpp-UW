#ifndef __HEADER_H__
#define __HEADER_H__

struct IntValueGenerator
{
	IntValueGenerator (int startingVal = 0)
		: m_Value(startingVal)
	{}

	int operator () ()
	{
		return  m_Value ++;
	}

	int m_Value;
};

#endif