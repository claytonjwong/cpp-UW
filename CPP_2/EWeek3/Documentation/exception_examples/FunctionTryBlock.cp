#include <iostream>
using namespace std;

class MC1
{
public:
	MC1(  )
	{
		cout << "MC1\n";
	}
	~MC1()
	{
		cout << "MC1 destr\n";
	}
};

class MC2
{
public:
	MC2( int i )
	{
		if  ( i > 0)
			throw 1;
	}
};

class MyC
{
public:
	MyC::MyC(int n)
	try
		: mc2(n)   // mc1 is constructed before mc2 (since it is declared in the class before mc2).
				   // if mc2 constructor throws, mc1 destructor will get called
	{
		
	}
	catch(...)
	{
		cout << "Caught in MC constructor " << endl;
	}
	
private:
	MC1 mc1;
	MC2 mc2;
};

void FuncTry()
{
	try
	{
		MyC  m0(0);
		MyC  m1(1);

		cout << "Created two MyC objects\n";
	}
	catch(...)
	{
		cout << "in main \n";
	}
}
