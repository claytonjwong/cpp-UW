// TestStuff.cpp : Defines the entry point for the console application.
//

#include <iostream>

using namespace std;

struct X 
{
	int value{ 0 };
	virtual void operator += (int x)
	{
		value += x;
	}

	virtual X& operator = (const X &rhs)
	{
		if (this != &rhs)
		{
			value = rhs.value;
		}
		return *this;
	}

	virtual X* Clone()
	{
		X* tmp = new X();
		tmp->value = this->value;
		return tmp;
		//return new X(*this); uses copy ctor
	}
};

struct Y : X
{

	virtual void operator += (int x)
	{
		value *= x;
	}

	virtual Y& operator = (const Y &rhs)
	{
		if (this != &rhs)
		{
			__super::operator=(rhs);
			value2 = rhs.value2;
		}
		return *this;
	}

	virtual Y* Clone()
	{
		Y* tmp = new Y();
		tmp->value = this->value;
		tmp->value2 = this->value2;
		return tmp;
	}

	int value2{ 0 };
};

void do_stuff(X& x)
{
	x += 10;
	cout << "Final value " << x.value << endl;
}

int main()
{
	X x;
	x.value = 10;
	Y y;
	y.value = 10;
	do_stuff(x);
	do_stuff(y);

	X* xAsNewY = new Y();
	xAsNewY->value = 2;
	dynamic_cast<Y*>(xAsNewY)->value2 = 2;

	*xAsNewY = y;
	xAsNewY = y.Clone();

	char* charArr = new char[2];
	*charArr = 1;
	charArr++;
	*charArr = 2;

	short* shortFromChars = reinterpret_cast<short*>(charArr); 

	cout << *shortFromChars;

	return 0;
}

