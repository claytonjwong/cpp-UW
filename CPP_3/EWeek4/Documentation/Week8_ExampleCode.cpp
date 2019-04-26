// TestStuff.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <vector>
#include "Decorators.h"

using namespace std;

constexpr bool useY{ false };

class X
{
public:
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

class Y : public X
{
public:
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

class Z : public X
{
public:
	virtual void operator += (int x)
	{
		value -= x;
	}

	virtual Z& operator = (const X &rhs)
	{
		if (this != &rhs)
		{
			const Z* tmp = dynamic_cast<const Z*>(&rhs);

			if (tmp != nullptr)
			{
				__super::operator=(rhs);
				value2 = tmp->value2;
			}
		}
		return *this;
	}

	virtual Z* Clone()
	{
		Z* tmp = new Z();
		tmp->value = this->value;
		tmp->value2 = this->value2;
		return tmp;
	}

	int value2{ 0 };
};

class YZFactory
{
public:

	void addPrototype(X* newProto)
	{
		myPrototypes.push_back(newProto);
	}

	static X* getYZ()
	{
		if (useY)
			return new Y();
		else
			return new Z();
	}

	X* getYZProto()
	{
		if (useY)
			return dynamic_cast<Y*>(myPrototypes[0])->Clone();
		else
			return dynamic_cast<Z*>(myPrototypes[1])->Clone();
	}
private:
	vector<X*> myPrototypes;

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

	xAsNewY = y.Clone();
	do_stuff(*xAsNewY);

	X* zFromFactory = YZFactory::getYZ();
	do_stuff(*zFromFactory);

	dynamic_cast<Z*>(zFromFactory)->value2 = 5;

	YZFactory factory;
	factory.addPrototype(&y);
	factory.addPrototype(zFromFactory);

	X* zFromPrototypeFactory = factory.getYZProto();

	Z aZ; // cannot do = *factory.getYZProto() because the compiler is looking for a copy c'Tor, and not the copy assign operator, and I don't have a copy c'tor Z(const& X)
	// I do get the compiler generated one for Z(const& Z) ... but then it can't figure out how to convert the X to a Z, as the error shows.
	// At this point, we can drill in and look at the vTable, and we will see at X's = operator has been polymorphically replaced with the one from Z.
	// If we look at value and value2, we'll see that both are 0, which is the default for X and Z respectively.
	aZ = *factory.getYZProto();
	// Now if we look at value 2, we see that it is 5, but 

	do_stuff(*zFromPrototypeFactory);

	IOperator* addTwo = new Add(new Unary(1));
	cout << endl << addTwo->operate(2);

	IOperator* subtractOne = new Subtract(new Unary(5));
	cout << endl << subtractOne->operate(1);

	IOperator* addTwice = new Add(new Add(new Unary(1)));
	cout << endl << addTwice->operate(2);

	IOperator* addTwiceSubtractOnce = new Add(new Add(new Subtract(new Unary(3))));
	cout << endl << addTwiceSubtractOnce->operate(4);


	IOperator* multiply = new Multiply(new Unary(2));
	cout << endl << multiply->operate(3);

	IOperator* addThenMultiply = new Multiply(new Add(new Unary(1)));
	cout << endl << addThenMultiply->operate(3);

	cout << endl <<  "Dynamic Chaining: " << endl;

	// Could be user input for true dynamism...
	vector<int> types{ 1,3 };
	
	IOperator* dynamic = new Unary(1);

	for (auto i : types)
	{
		dynamic = DecoratorFactory::getDecorator(i, dynamic);
	}

	cout << endl << dynamic->operate(3);

	return 0;
}



