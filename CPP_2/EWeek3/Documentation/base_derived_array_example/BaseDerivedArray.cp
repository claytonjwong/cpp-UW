#include <iostream>
using namespace std;

class Base
{
public:
	Base ()
	:mBaseVal1(100), mBaseVal2(100) {}

	virtual void Print( ostream & os );
protected:
	int		mBaseVal1;
	int		mBaseVal2;
};

class Derived : public Base
{
public:
	Derived() : mDerivedVal1(200), mDerivedVal2(200){}

	virtual void Print( ostream & os );

private:
	int		mDerivedVal1;
	int		mDerivedVal2;
};

void Base::Print( ostream & os )
{
	os << "mBaseVal1 " << mBaseVal1 << " mBaseVal2 " << mBaseVal2 << endl;
}


void Derived::Print( ostream & os )
{
	Base::Print( os );
	os << "mDerivedVal1 " << mDerivedVal1 << " mDerivedVal2 " << mDerivedVal2 << endl;
}

void ProcessObject( Base * bPtr )
{
	bPtr->Print( std::cout );
}

void Foo( Base * bPtr, int numElements )
{
	int count = 0;

	while ( count < numElements )
	{
		ProcessObject( bPtr );
		bPtr ++;
		++ count;
	}
}

void BaseArrayDerivedArray()
{
	Base		bArray[ 2 ];
	Derived		dArray[ 2 ];

	Foo( bArray, sizeof(bArray)/sizeof(Base));

	Foo( dArray, sizeof(dArray)/sizeof(Derived));

}