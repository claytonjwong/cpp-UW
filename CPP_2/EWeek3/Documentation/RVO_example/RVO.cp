#include <iostream>
using namespace std;

class ABC
{
public:

	ABC()
	{
		cout << "default\n";

	}

/*	ABC( ABC && rvalue )
		:mValue1( rvalue.mValue1)
	{
		cout << "move\n";
	}
	*/

	ABC (const ABC & other )
			:mValue1( other.mValue1)
	{
		cout << "copy\n";
	}

	ABC & operator=( const ABC & other )
	{
		cout << "Assign operator\n";
		mValue1 = other.mValue1;
		return *this;
	}

private:
	int		mValue1;
};


ABC NamedRVO1()
{
	ABC a1;

	return a1;
}

ABC UnNamedRVO2()
{
	return ABC();
}

ABC MixedRVO1(int arg)
{
	if (arg < 0)
		return ABC();
	else
	{
		ABC a1;

		return a1;
	}
}
	
ABC MixedRVO2( int arg )
{
	if (arg < 0)
		return ABC();
	else if (arg < 100)
	{
		ABC a1;
		// ...
		return a1;
	}
	else 
	{
		ABC a2;
		// ...
		return a2;
	}
}

void DoRVO()
{
	ABC b1;
	b1 = NamedRVO1();				// assignment
	cout << "1\n";

	ABC b11 = NamedRVO1();			// copy creation
	cout << "2\n";
	
	ABC b2 = UnNamedRVO2();			// copy creation
	cout << "3\n";

	ABC b3 = MixedRVO1( 1 );			// calls copy constructor
	cout << "4\n";

	ABC b4 = MixedRVO1( -1 );
	cout << "5\n";

	ABC b5 = MixedRVO2( 1 );
	cout << "6\n";
}

void RVO()
{
	DoRVO();
}

ABC & ReturnByRef1()
{
	static ABC  s_abc;

	return s_abc;
}

void ReturnByRef()
{
	cout << "accept return by value\n";
	ABC nonRef (ReturnByRef1());

	cout << "accept return by reference\n";
	ABC & ref (ReturnByRef1());
}

int main(int argc, char * argv[])
{
	cout << "RVO calls\n";
	RVO();

	cout << "\nReturnByRef\n";
	ReturnByRef();

	return 0;
}

/*
With optimization (RVO) enabled

RVO calls
default
default
Assign operator
1
default
2
default
3
default
copy
4
default
5

ReturnByRef
accept return by value
default
copy
accept return by reference

-----------------------------------
With no optimizations

RVO calls
default
default
copy
Assign operator
1
default
copy
2
default
3
default
copy
4
default
5

ReturnByRef
accept return by value
default
copy
accept return by reference

*/
