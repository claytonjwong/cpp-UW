#include "ArrayStack.h"

#include <iostream>
using namespace std;


// Default  constructor
template < typename T >
CArrayStack <T>::CArrayStack( int size /* = m_DefaultSize */ )
{
	Initialize ( size );
}

template < typename T >
void CArrayStack< T >::Initialize( int size )
{
	m_Size = size;

	m_NumElements = 0;
	
	m_Array = new T [ m_Size ];
}

// Destructor
template < typename T >
CArrayStack<T>::~CArrayStack()
{
	delete [ ] m_Array;
}

template < typename T >
int CArrayStack<T>::m_DefaultSize = 50;

template < typename T >
void CArrayStack<T>::Push ( const T & value )
{
	if ( ! IsFull() )
	{
		m_Array [ m_NumElements ] = value;
		m_NumElements ++ ;
	}
	else	// Normally would throw an exception here
		cerr << "Error: Stack was full" << endl; 
}	

template < typename T >
T	CArrayStack<T>::Pop ( )
{
	// int retVal = int();
	T  retVal = T();

	if ( ! IsEmpty() )
	{
		retVal = m_Array [ --  m_NumElements ];		// pre decrement m_NumElements.
		// or simply say      return   m_Array [ --  m_NumElements ];   Then no need to declare  retVal above
	}
	else	// Normally would throw an exception here
		cerr << "Error: Stack was empty" << endl; 

	return retVal;	// Note in case of stack empty, default value is returned. But this is just an example
}

template < typename T >
bool CArrayStack<T>::IsEmpty () const
{
	return m_NumElements == 0;
}

template < typename T >
bool CArrayStack<T>::IsFull () const
{
	return  m_NumElements == m_Size;
}

template < typename T >
int	CArrayStack<T>::GetMaxSize() const
{
	return m_Size;
}

template < typename T >
int	CArrayStack<T>::GetNumElements () const
{
	return m_NumElements;
}

template < typename T >
const char * CArrayStack<T>::GetType() const
{
	return  "CArrayStack";
}


// There is a bug in MCVC++.  Its work around  requires me to
// do an explicit template instantiation.
// Hence, the lines below to instantiate the template class for  int, char and MyClass

template class CArrayStack<int>; 
template class CArrayStack<char>; 

#include "MyClass.h"
template class CArrayStack<MyClass>; 
