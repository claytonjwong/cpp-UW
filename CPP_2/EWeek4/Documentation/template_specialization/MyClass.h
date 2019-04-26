#ifndef _MYCLASS_H_
#define _MYCLASS_H_

class MyClass
{
public:
	
	MyClass (int value = 0);
	
	int  GetValue() const;

private:

	int	m_Value;
};

inline MyClass::MyClass( int value )
: m_Value (value)
{}

inline int MyClass::GetValue() const
{
	return m_Value;
}

#endif