#include <iostream>
#include <string>
using namespace std;

template<typename T1, typename T2>
void Foo( T1, T2 )
{
	cout << "template<typename T1, typename T2>  void Foo( T1, T2 )\n" << endl;
}

template<>
void Foo<int,int>( int a, int b )
{
	cout << "<int,int> total specialization of Foo\n";
}

template<>
void Foo<int,double>( int a, double b )
{
	cout << "<int,double> total specialization of Foo\n";
}

template<typename T> 
void Foo( T, T )
{
	cout << "template<typename T> void Foo( T, T ) overload \n" << endl;
}

template<typename T> 
void Foo( T*, T )
{
	cout << "template<typename T> void Foo( T*, T ) overload\n" << endl;
}

void Foo( char ch1, char ch2 )
{
	cout << "Non template Foo ( char, char )" << endl;
}

template <typename T>
int Fac( T n )
{
	return n > 1 ? n*Fac(n-1) : 1;
}

template<>
int Fac( double d )
{
	// conversion of double to int will lose value if the value of double is > MAX_INT, but in 
	// case of recursive factorial that does not matter as u would run out of stack space long before that :-)
	// and also the factorial results get rather large anyway.
	return Fac<int>( d );
	
	// OR
	//return Fac( (int)d );
}

void FuncTemplates()
{
	int f1 = Fac<int>( 5 );
	int f2 = Fac( 6.0 );
	
	int i = 1;
	double d = 2;
	string	s1("test");

	Foo<int,int>( i, i );
	Foo( i, d );
	Foo( d, d );
	Foo( s1, i );

	Foo( &i, d );
	Foo( &i, i );

	Foo( 'a', 'b' );	// call to non-template function that takes two characters.
}

