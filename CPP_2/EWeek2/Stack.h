#ifndef __STACK_H__
#define __STACK_H__

/* This is a toy implmentation to show the example.
   If u did have to implement a stack, u would typically want to use some STL container instead of T* 
*/
template <typename T>
class Stack
{
public:
	Stack ( int size )
		:m_NumElements(0), m_Array(NULL), m_Size(size)
	{
		if ( m_Size > 0 )
		{
			m_Array = new T[ m_Size ];
		}
	}

#define DEFINE_TCC 0
#if DEFINE_TCC
	template <typename T2>
	Stack( const Stack<T2> & other)
		:m_NumElements(other.m_Size), m_Array(NULL), m_Size(other.m_Size)
	{
		if (other.m_Array != NULL)
		{
			m_Array = new T[ m_Size ];
			for ( int ii = 0; ii < m_Size; ++ ii )
			{
				m_Array[ ii ] = T( other.m_Array[ ii ] );
			}
		}
	}
#endif	

	~Stack()
	{
		delete [] m_Array;
	}

	void Push ( const T & e )
	{
		if ( m_NumElements < m_Size )
		{
			m_Array[ m_NumElements ++ ] = e;
		}
		else
		{
			// error handling
		}
	}

	T Pop ()
	{
		// not implemented, just return a temp
		return T();
	}

	int GetNumElements() const
	{
		return m_NumElements;
	}

	bool IsEmpty() const
	{
		return m_NumElements == 0;
	}

	bool operator > ( const Stack & other ) const;
	
	template <typename T2> friend class Stack;		// so that the assignment operator below can access private data members

	template < typename T2 >
	Stack<T> & operator = (const Stack<T2> & other )
	{		
		
		// no need to check for self assignment, since the type being passed in is another type

		T * newArray = NULL;
		if ( other.m_Size > 0 )
		{
			newArray = new T[ other.m_Size ];
			for ( int ii = 0; ii < other.m_NumElements; ++ ii )
			{
				newArray[ ii ] = (T) other.m_Array[ ii ];
			}

			delete [] m_Array;

			m_Array = newArray;
			m_Size = other.m_Size;
			m_NumElements = other.m_NumElements;
		}
		else
		{
			m_Size = 0;		// reset size to 0. 
		}

		return *this;
	}


private:

	T * m_Array;
	int m_Size;
	int m_NumElements;
};

template< typename T>
inline bool Stack<T>::operator > ( const Stack<T> & other ) const
{
	return m_Size > other.m_Size;		// just making this up for the sake of this example
}

#endif