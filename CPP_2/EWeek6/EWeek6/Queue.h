#ifndef __QUEUE_H__
#define __QUEUE_H__

#include "QueueBase.h"
#include "Exceptions.h"
#include <vector>

//
// Clayton: please do not grade, this compiles using STL container as underlying structure,
// it doesn't work as expected, and I don't really understand what we are trying to accomplish here anyhow.
//
// I'm planning spend my time on other C++ projects... something fun such as
// making the previous word finder homework execute more efficiently with multiple threads
// or implement a trie for early DFS pruning.
//
// Or reading a new book I got... Effective Modern C++
//
// Another other awesome C++ books which you would suggest?
//
// Thanks again Professor Sanjeev, I've enjoyed learning from you!  I understand you
// and your assistant are time constrained, and I appreciate the individualized
// time you have each taken to contribute towards my learning.  Thanks, Clayton
//

template <typename T> class Queue : public QueueBase 
{  
public:    

	Queue ( unsigned int size );
	Queue ( const Queue & other );
	~Queue();

	void  Push ( const T & e );    

	T  Pop ();  

	Queue & operator = ( const Queue<T> & other );

	template<typename T2>
	Queue & operator = ( const Queue<T2> & other );

private:   
	template <typename T2> friend class Queue;

	void	Swap( Queue<T> & other );
    void	CopyData( std::vector<T>& dest, const std::vector<T>& src, int srcStartIdx, int srcEndIdx );

    std::vector<T> m_Array;

};

// include cpp file here since we want template definition to be visible at place of instantiation
// as we are not using the export keyword.

// #include "Queue.cpp" // doesn't compile for me... work-around to copy paste cpp contents here

template<typename T>
Queue<T>::Queue(unsigned int capacity)
:QueueBase(capacity), m_Array( m_Capacity )
{
}

template<typename T>
Queue<T>::~Queue()
{
    
}

// Copy constructor
template<typename T>
Queue<T>::Queue( const Queue<T> & other )
:QueueBase( other ), m_Array( m_Capacity )
{
    for ( int ii = 0; ii < m_Capacity; ++ ii )
    {
        m_Array[ ii ] = other.m_Array[ ii ];
    }
}

template<typename T>
Queue<T> & Queue<T>::operator = ( const Queue<T> & other )
{
    if ( &other != this )
    {
        Queue<T> temp( other );        // create a copy of other in temp.
        Swap( temp );                // swap temp with this.
        // Now, temp will get destructed here, taking its memory away, which really was this's memory to start with
    }
    
    return *this;
}

template<typename T>
template<typename T2>
Queue<T> & Queue<T>::operator = ( const Queue<T2> & other )
{
    // no need to guard against self assignment since other is not even the same type as this.
    int newCapacity = other.GetCapacity();
    T * buffer = new T[ newCapacity ];
    
    for ( int ii = 0; ii < newCapacity; ++ ii )
    {
        buffer[ ii ] = other.m_Array[ ii ];
    }
    
    // If we are here, then everything is ok so far.
    delete [] m_Array;
    
    m_Array = buffer;
    m_Head = other.m_Head;
    m_Tail = other.m_Tail;
    
    return *this;
}

template<typename T>
void Queue<T>::Swap( Queue<T> & other )
{
    QueueBase::Swap( other );
    std::swap( m_Array, other.m_Array );
}

template<typename T>
void Queue<T>::Push( const T & e )
{
    if ( m_Tail == QueueBase::kEmptyQueueValue )
    {
        m_Tail = m_Head = 0;
    }
    else
    {   
        m_Tail = (m_Tail + 1) % m_Capacity;  // either tail is incremented by 1, or if tail has reached end, then tail will go to begining
    }
    
    m_Array[ m_Tail ] = e;
}

template<typename T>
T Queue<T>::Pop ()
{
    T returnValue = T();        // assign default value of T
    
    if ( ! IsEmpty() )
    {
        returnValue = m_Array[ m_Head ];
        if ( m_Head ==  m_Tail )
        {
            m_Head = m_Tail = QueueBase::kEmptyQueueValue;
        }
        else
        {
            m_Head = (m_Head + 1) % m_Capacity;
        }
    }
    else
    {
        throw QueueEmpty();
    }
    
    return returnValue;
}

// Assumption: Input parameters are valid... memory is properly and sufficienctly allocated
// srcEndIdx is inclusive
template<typename T>
void Queue<T>::CopyData( std::vector<T>& dest, const std::vector<T>& src, int srcStartIdx, int srcEndIdx )
{
    int destIdx = 0;
    while ( srcStartIdx <= srcEndIdx )                // srcEndIdx is inclusive
    {
        dest[ destIdx ++ ] = src[ srcStartIdx ++ ];
    }
}


#endif
