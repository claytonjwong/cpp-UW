// Should not include Queue.h, since this file is included FROM inside of Queue.h, as we are defining a template class here

#include <iterator>

namespace SQ_712
{


template<typename Container>
template<typename Container2>
Queue<Container> & Queue<Container>::operator = ( const Queue<Container2> & other )
{
	// Since we have two different types of containers, we need to iterate over other.
	// We could have any of the following scenarios:
	// 1. Container is, say, vector<double> and Container2 is vector<int>
	// 2. Container is, say, vector<string> and Container2 is vector<char *>
	// 3. Container is, say, deque<string> and Container2 is vector<char *>
	// 4. Container is, say, vector<double> and Container2 is deque<int>
	// 5. and so on.

	// Note that all cases wont work, as all cases of assignemnts wont make sense.
	// For example: If Container is vector<int> and Container2 is deque<string> or vector<string>, 
	//              this assignment will not work, since you cannot assign a string to an int.
	//           In other words, it should be possible to do the following assignment:
	//                        Queue<Container2>::value_type should be assignable to Queue<Container>::value_type 
	//           Another way to say that is that the following assignment should be valid:
	//           Queue<Container>::value_type   q1Element;
	//           Queue<Container2>::value_type  q2Element;
	//           q1Element = q2Element;             This assignment should be defined and valid for the two types inside the queues.
	
	
	// Now, assignment should be exception safe, ie, if we throw, dont mess up this object.
	// STL does not many places that it throws an exception. But the assignment of the individual elements could throw
	// if the assignment operator is overloaded in the element's class, or any of the element's contained classes (ie, data members of element),
	// or if the conversion operator from element2 to element1 throws.

	Container temp;

	// Can use std::copy
	std::copy( other.mContainer.begin(), other.mContainer.end(), std::back_inserter( temp ) );

	// OR, copy using iterators... above is shorter

	// Create iterator for other
	/******************************
	Container2::const_iterator cOtherIter = other.mContainer.begin();
	Container::iterator myIter = mContainer.begin();

	for ( ; cOtherIter != other.mContainer.end(); ++ cOtherIter )
	{
		temp.push_back( *cOtherIter );
	}
	******************************/

	// Now that we are done with copying other to temp, we can swap.
	// Note that all STL containers have a swap method, so we can use it.
	// Now, if u instantiate Queue with ur own container (ie, Container here would represent ur own class), 
	// the requirement on ur container class will be that it has to have a swap method, otherwise u will get a compile error.

	mContainer.swap( temp );

	// Print some debug information:
	std::cout << endl << endl << "In member template assignment of Queue." << endl;
	std::cout << "Container1: " << endl << typeid(*this).name() << endl;
	std::cout << "Container2: " << endl << typeid(other).name() << endl;

	return *this;
}

template<typename Container>
void Queue<Container>::Push( const Element & e )
{
	mContainer.push_back( e );
}

template<typename Container>
typename Queue<Container>::Element Queue<Container>::Pop ()
{
	Element returnValue = Element();
	
	if ( ! mContainer.empty() ) 
	{
		returnValue = mContainer.front();
		mContainer.pop_front();
	}

	return returnValue;
}

}