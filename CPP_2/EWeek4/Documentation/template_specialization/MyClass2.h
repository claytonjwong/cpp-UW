#ifndef _MYCLASS2_H_
#define _MYCLASS2_H_

class MyClass2
{
public:
	
	MyClass2 (int value = 0);
	
	int  GetValue() const;

private:

	int	m_Value;
};

inline MyClass2::MyClass2( int value )
: m_Value (value)
{}

inline int MyClass2::GetValue() const
{
	return m_Value;
}

#endif