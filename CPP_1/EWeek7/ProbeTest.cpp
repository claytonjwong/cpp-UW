#include "TestHarness.h"
#include "TestProbe.h"
#include <memory>
#include <sstream>

using namespace std;

TEST(singleCtor,TestProbe){
	auto tp=make_shared<TestProbe>();
	CHECK_EQUAL(TestProbe::probe.instanceCount(),1);
}

TEST(singleCtorDtor,TestProbe){
	{
		auto tp=make_shared<TestProbe>();
		CHECK_EQUAL(TestProbe::probe.instanceCount(),1);
	}
	CHECK_EQUAL(TestProbe::probe.instanceCount(),0);
}

TEST(dependency1,TestProbe){ // total constructed count is dependent on above test cases
	auto tp=make_shared<TestProbe>();
	CHECK_EQUAL(TestProbe::probe.totalConstucted(),3);
}

TEST(dependency2,TestProbe){ // total constructed count is dependent on above test cases
	{
		auto tp=make_shared<TestProbe>();
		CHECK_EQUAL(TestProbe::probe.totalConstucted(),4);
	}
	CHECK_EQUAL(TestProbe::probe.totalDestructed(),4);
}

TEST(dependency3,TestProbe){ // simulate memory leak
	auto tp=new TestProbe();
}

TEST(dependency4,TestProbe){
	CHECK_EQUAL(TestProbe::probe.instanceCount(),1); // check for memory leak
}

TEST(dependecy5,TestProbe){
	stringstream ss;
	ss << TestProbe::probe;
	CHECK_EQUAL(ss.str(),"Probe[cnt: 1,ctor: 5,dtor: 4]");
}
