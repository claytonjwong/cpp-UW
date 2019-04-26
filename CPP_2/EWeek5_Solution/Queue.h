#ifndef __QUEUE_H__
#define __QUEUE_H__

#include "QueueBase.h"

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

	void	Grow();
	void	Swap( Queue<T> & other );
	void	CopyData( T * const dest, const T * src, int srcStartIdx, int srcEndIdx );

	T * m_Array; 

};

// include cpp file here since we want template definition to be visible at place of instantiation
// as we are not using the export keyword.
#include "Queue.cpp"			

#endif