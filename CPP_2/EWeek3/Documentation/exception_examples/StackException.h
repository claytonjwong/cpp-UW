#ifndef __STACKEXCEPTION_H__
#define __STACKEXCEPTION_H__

// StackException is our base class for stack related exceptions.
class StackException
{
public:
		StackException() { } ;

		virtual const char *	GetDescription() const throw ();
};


class StackEmpty : public StackException
{
public:

	StackEmpty() {  };

	virtual const char *	GetDescription() const throw ();
};

class StackFull : public StackException
{
public:

	StackFull() { } ;

	virtual const char *	GetDescription() const throw ();
};

#endif