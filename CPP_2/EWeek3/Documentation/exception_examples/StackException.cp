#include "StackException.h"


const char * StackException::GetDescription() const throw ()
{
	return  "Stack Exception";
}


const char * StackEmpty::GetDescription() const throw ()
{
	return  "Stack Empty exception";
}

const char * StackFull::GetDescription() const throw ()
{
	return  "Stack Full  exception";
}
