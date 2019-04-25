#include "Array.h"
#include "TestHarness.h"

TEST(CreateArray,Array){
	Array a;
	CHECK_EQUAL(a.getCapacity(),8);
}

TEST(ExpandArray,Array){
	Array a;
	a.put(9,1);
	CHECK_EQUAL(a.getCapacity(),16);
}

TEST(ExpandArray2,Array){
	Array a;
	a.put(1000,1);
	CHECK_EQUAL(a.getCapacity(),1024);
}

TEST(SetArray,Array){
	Array a;
	a.put(2,1);
	CHECK_EQUAL(a[2],1);
}


TEST(ContractArray,Array){
	Array a;
	a.remove(1);
	CHECK_EQUAL(a.getCapacity(),8);
}


TEST(ContractArray2,Array){
	Array a;
	a.remove(7);
	CHECK_EQUAL(a.getCapacity(),8);
}


TEST(ExpandContractArray,Array){
	Array a;
	a.put(8,1);
	CHECK_EQUAL(a.getCapacity(),16);
	a.remove(8);
	CHECK_EQUAL(a.getCapacity(),8);
}

TEST(ExpandContractArray2,Array){
	Array a;
	a.put(8,1);
	CHECK_EQUAL(a.getCapacity(),16);
	CHECK_EQUAL(a[8],1);
	a.put(16,2);
	CHECK_EQUAL(a.getCapacity(),32);
	CHECK_EQUAL(a[16],2);
	a.remove(15);
	CHECK_EQUAL(a.getCapacity(),16);
	a.remove(9);
	CHECK_EQUAL(a.getCapacity(),16);
	CHECK_EQUAL(a[8],1);
}

TEST(DefaultValues,Array){
	Array a;
	for (int i=0; i<a.getCapacity(); ++i)
		CHECK_EQUAL(a[i],0);
}

TEST(DefaultValues2,Array){
	Array a;
	a.put(127,0);
	CHECK_EQUAL(a.getCapacity(),128);
	for (int i=0; i<a.getCapacity(); ++i)
		CHECK_EQUAL(a[i],0);
}

TEST(SetValues,Array){
	Array a;
	for (int i=0; i<a.getCapacity(); ++i)
		a[i]=i;
	for (int i=0; i<a.getCapacity(); ++i){
		CHECK_EQUAL(a[i],i);
		CHECK_EQUAL(a.get(i),i);
	}
		
}

TEST(SetValues2,Array){
	Array a;
	a.put(1000,1);
	for (int i=0; i<1000; ++i)
		CHECK_EQUAL(a[i],0);
	CHECK_EQUAL(a[1000],1);
	for (int i=1001; i<a.getCapacity(); ++i)
		CHECK_EQUAL(a[i],0);
}

TEST(SetValue3,Array){
	Array a;
	a.put(10,1);
	CHECK_EQUAL(a[10],1);
	a.remove(9);
	a.put(11,1);
	CHECK_EQUAL(a[10],0);
	CHECK_EQUAL(a[11],1);
}

TEST(SetAndGetValue,Array){
	Array a;
	a.put(16,1);
	CHECK_EQUAL(a[16],a.get(16));
	for (int i=0; i<a.getCapacity(); ++i)
		a[i]=i;
	for (int i=0; i<a.getCapacity(); ++i)
		CHECK_EQUAL(a[i],a.get(i));
}

TEST(Copy,Array){
	Array a;
	for (int i=0; i<a.getCapacity(); ++i)
		a[i]=i;
	Array b(a);
	for (int i=0; i<a.getCapacity(); ++i)
		a[i]=0;
	for (int i=0; i<a.getCapacity(); ++i)
		CHECK_EQUAL(b[i],i);
}

TEST(Assignment,Array){
	Array b;
	{	
		Array a;
		a.put(15,1);
		for (int i=0; i<a.getCapacity(); ++i)
			a[i]=i;
		b=a;
	}

	CHECK_EQUAL(b.getCapacity(),16);
	for (int i=0; i<b.getCapacity(); ++i)
		CHECK_EQUAL(b[i],i);
}

