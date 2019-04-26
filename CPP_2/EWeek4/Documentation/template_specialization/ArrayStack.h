
#ifndef ARRAY_STACK_H
#define ARRAY_STACK_H

#include <deque>
#include "MyClass2.h"

template <typename T>
class  CArrayStack 
{	
public:
	
	// Default  constructor
	CArrayStack ( int size  = m_DefaultSize);
	
	~CArrayStack();				


	void	Push ( const T &  value );
	T		Pop ( );
	bool	IsEmpty () const;
	bool	IsFull () const;
	int		GetMaxSize() const;
	int		GetNumElements () const;
	const char *	GetType() const;
	

	// member template.
	template < typename T2 >
		CArrayStack<T> & operator = (const CArrayStack<T2> & other ) 
	{
		T  t1 = T();
		T2 t2 = T2();
		t1 = t2;		// just to test assignability from T2 to T

		cout << "Called assign operator" << endl;
		
		return *this;
	}


private:

	void			Initialize( int size );

	T	*	m_Array;						// this array will store the elements of type T
	int		m_Size;							// size of the array
	int		m_NumElements;			// tracks the number of elements pushed onto the stack

	static int	m_DefaultSize;
};


// Specialize CArrayStack template for MyClass2. Is this total or partial specialization?
template<>
class CArrayStack <MyClass2>
{	
public:
	
	CArrayStack ()
	{}
	
	~CArrayStack()
	{}

	// Intentionally calling it a different name than Push. 
	// Class interface on a specialization does not need
	// to be the same as the template it specializes

	void PushValue ( const MyClass2 &  value )
	{
		m_Array.push_front( value );
	}

	MyClass2 PopValue ( )
	{
		MyClass2 front = m_Array.front();
		m_Array.pop_front();

		return front;
	}

	bool IsEmpty () const
	{
		return m_Array.size() == 0;
	}
	
private:
	std::deque< MyClass2>	m_Array;				// Different implementation than the general CArrayStack template class
	
};

#endif