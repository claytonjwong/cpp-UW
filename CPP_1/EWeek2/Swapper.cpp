/*

1. Write a function that swaps (exchanges the values of two integers).
Use int* as the argument type. Write a second swap function using a reference (i.e., int&)
as the argument type.

*/

void Swapper(int* a,int* b){
	if (a==b || !a || !b) return;
	*a^=*b;
	*b^=*a;
	*a^=*b;
}

void Swapper(int& a,int& b){
	if (&a==&b) return;
	a^=b;
	b^=a;
	a^=b;
}
