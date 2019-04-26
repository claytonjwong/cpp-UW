#ifndef __QUEUE_H__
#define __QUEUE_H__

#include <iostream>

namespace SQ_712
{
template <typename Container> 
class Queue
{  
public:    

	// The value_type is a typedef inside the Container class, it tells u the element type 
	// stored in the container.
	// Eg. If I use list<int> as my container, then value_type inside list is int.
	// Eg. If I use deque<double> as my container, then value_type inside deque is double.
	//    So, If I passed in deque<double> as my container to the Queue class, value_type is double.
	//    This would look like  SQ_712::Queue< deque<double> > qd1;

	typedef typename Container::value_type Element; 

	
	void  Push ( const Element & e );    

	Element  Pop ();  


	// The template method below is not a requirement in the assignment, but I am adding it here
	// just to show that we can do this as well, as long as the 
	// assignments make sense (ie, the required conditions are met, 
	// or in other words, the needed methods/operators are defined).

	template<typename Container2>
	Queue & operator = ( const Queue<Container2> & other );

private:   
	template <typename Container2> friend class Queue;

	Container	mContainer;

};


////////////////////////////////////////////////
// Specialization of Queue for deque<int>.
////////////////////////////////////////////////

// Note the two typedefs below for Container and Element to keep things similar to the template Queue class
// Also, look at the comments in Queue.cpp inside the definition of  Queue<Container>::operator = ( const Queue<Container2> & other )
template<>
class Queue<deque<int>>
{
public:

	typedef deque<int>  Container;			// I can add this typedef here, so that way I can just call it a Container below, instead of typing deque<int>
	typedef int	Element;					// Same thing with this, I typedef int to Element to keep the code below consistent / not too different.

	template<typename Container2>
	Queue & operator = ( const Queue<Container2> & other )
	{
		Container temp;

		// Create iterator for other
		Container2::const_iterator cOtherIter = other.mContainer.begin();
		Container::iterator myIter = mContainer.begin();

		for ( ; cOtherIter != other.mContainer.end(); ++ cOtherIter )
		{
			temp.push_back( *cOtherIter );
		}
		
		mContainer.swap( temp );

		// Print some debug information:
		std::cout << endl << endl << "In member template assignment of deque<int> specialization of Queue." << endl;
		std::cout << "Container1: " << endl << typeid(*this).name() << endl;
		std::cout << "Container2: " << endl << typeid(other).name() << endl;

		return *this;
	}

	void  Push ( const int & i )
	{
		mContainer.push_front(i);
	}

	int Pop ()
	{
		int retValue = int();		// default value of int, which is 0

		if ( ! mContainer.empty() )
		{
			retValue = mContainer.front();
			mContainer.pop_front();
		}

		return retValue;
	}

	Container	mContainer;
};

}

// include cpp file here since we want template definition to be visible at place of instantiation
// as we are not using the export keyword.
#include "Queue.cpp"			

#endif