#include <iostream>
using namespace std;

template < typename T1, typename T2 > struct MyClass				{ MyClass() { cout << "T1, T2" << endl; } };	// primary template
template < typename T1, typename T2 > struct MyClass < T1*, T2>		{ MyClass() { cout << "T1*, T2" << endl;} };	// partial specialization
template < typename T1, typename T2 > struct MyClass < T1, T2*>		{ MyClass() { cout << "T1, T2*" << endl;} };	// partial specialization
//template < typename T1, typename T2 > struct MyClass < T1*, T2*>	{ MyClass() { cout << "T1*, T2*" << endl;} };	// partial specialization

template < typename T1, typename T2, typename T3, typename T4 > 
struct MyClass	< pair<T1, T2>, pair<T3, T4> > { MyClass() { cout << "pair<T1, T2>, pair<T3, T4>" << endl; } };		// partial specialization

void ClassSpecializations()
{
	MyClass < int, int >	ii;
	MyClass < int*, int >	Ptri;
	MyClass < int, int *>	iPtr;
	// MyClass < int*, int *>	PtrPtr;		// compile error, unless the T1*, T2* specialization is defined.

	MyClass <pair<int, char>, pair<double, string> >  pair2;
	// MyClass <string, string>  mcStrStr;			// uncomment this to see the error saying you instantiated the primary template for string,string, 
													// and then defined the specialization for that below.
}

template <> struct MyClass < string, string>		{ MyClass() { cout << "string, string" << endl;} };	// explicit specialization
