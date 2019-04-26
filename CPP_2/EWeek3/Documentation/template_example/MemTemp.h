#ifndef __MEMTEMP_H__
#define __MEMTEMP_H__

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



	T * m_Array;
	int m_Size;
	int m_NumElements;
};

#endif