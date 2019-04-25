#include "TestHarness.h"
#include "Swapper.h"

/*****************************************
void Swapper(int*,int*);
*/

TEST(ptrTwoDiffVals,Swapper){
	int a=1,b=2;
	CHECK(a==1 && b==2);
	Swapper(&a,&b);
	CHECK(a==2 && b==1);
}

TEST(ptrTwoSameVals,Swapper){
	int a=7,b=7;
	CHECK(a==7 && b==7);
	Swapper(&a,&b);
	CHECK(a==7 && b==7);
}

TEST(ptrOneSameVar,Swapper){
	int a=16;
	CHECK(a==16);
	Swapper(&a,&a);
	CHECK(a==16);
}

TEST(ptrOneNullptrOneVar,Swapper){
	int *a=nullptr,*b=new int(19);
	CHECK(a==nullptr && *b==19);
	Swapper(a,b);
	CHECK(a==nullptr && *b==19);
	delete b;
}

TEST(ptrOneVarOneNullptr,Swapper){
	int *a=new int(3),*b=nullptr;
	CHECK(*a==3 && b==nullptr);
	Swapper(a,b);
	CHECK(*a==3 && b==nullptr);
	delete a;
}

TEST(ptrTwoNullptr,Swapper){
	int *a=nullptr,*b=nullptr;
	CHECK(!a && !b);
	Swapper(a,b);
	CHECK(!a && !b);
}

/*****************************************
void Swapper(int&,int&);
*/

TEST(refTwoDiffVals,Swapper){
	int a=4,b=5;
	CHECK(a==4 && b==5);
	Swapper(a,b);
	CHECK(a==5 && b==4);
}

TEST(refTwoSameVals,Swapper){
	int a=6,b=6;
	CHECK(a==6 && b==6);
	Swapper(a,b);
	CHECK(a==6 && b==6);
}

TEST(refOneSameVar,Swapper){
	int a=17;
	CHECK(a==17);
	Swapper(a,a);
	CHECK(a==17);
}

