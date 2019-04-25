#include "TestHarness.h"
#include "CharQueue2.h"


/***********************************************************************
enqueue to test resizing
*/

TEST(enqueueWithoutResize,CharQueue2){
	CharQueue2 cq;
	cq.enqueue('a');
	CHECK(1==cq.capacity());
}

TEST(enqueueWithResize,CharQueue2){
	CharQueue2 cq;
	cq.enqueue('a');
	cq.enqueue('b');
	CHECK(2==cq.capacity());
}

TEST(enqueueWithTwoResize,CharQueue2){
	CharQueue2 cq;
	cq.enqueue('a');
	cq.enqueue('b');
	cq.enqueue('c');
	cq.enqueue('d');
	CHECK(4==cq.capacity());
}

TEST(enqueueWithThreeResize,CharQueue2){
	CharQueue2 cq;
	cq.enqueue('a');
	cq.enqueue('b');
	cq.enqueue('c');
	cq.enqueue('d');
	cq.enqueue('e');
	cq.enqueue('f');
	cq.enqueue('g');
	cq.enqueue('h');
	CHECK(8==cq.capacity());
}

TEST(enqueueWithFourResize,CharQueue2){
	CharQueue2 cq;
	cq.enqueue('a');
	cq.enqueue('b');
	cq.enqueue('c');
	cq.enqueue('d');
	cq.enqueue('e');
	cq.enqueue('f');
	cq.enqueue('g');
	cq.enqueue('h');
	cq.enqueue('i');
	CHECK(9==cq.capacity());
}



/***********************************************************************
dequeue
*/

TEST(enqueueDequeueOneByOne,CharQueue2){
	CharQueue2 cq;
	for (int i=0; i<(1<<3); ++i){ // 4096 iterations
		char curr='a'+i%26;
		cq.enqueue(curr);
		char next=cq.dequeue();
		CHECK_EQUAL(curr,next);
	}
}


TEST(equeueDequeueInSmallChunks,CharQueue2){
	CharQueue2 cq;
	for (int i=1; i<=(1<<8); ++i){
		int innerEnd=(i*26);
		for (int j=0; j<innerEnd; ++j){
			char curr='a'+i%26;
			cq.enqueue(curr);
		}
		for (int j=0; j<innerEnd; ++j){
			char expected='a'+i%26;
			char observed=cq.dequeue();
			CHECK_EQUAL(expected,observed);
		}
	}
	CHECK_EQUAL(cq.capacity(),0);
}

TEST(equeueDequeueInLargeChunks,CharQueue2){
	CharQueue2 cq;
	for (int i=1; i<=(1<<4); ++i){
		int innerEnd=(i*26)<<8,offset=i%26;
		for (int j=0; j<innerEnd; ++j){
			char curr='a'+offset;
			cq.enqueue(curr);
		}
		for (int j=0; j<innerEnd; ++j){
			char expected='a'+offset;
			char observed=cq.dequeue();
			CHECK_EQUAL(expected,observed);
		}
	}
	CHECK_EQUAL(cq.capacity(),0);
}


/***********************************************************************
swap
*/

TEST(swap1,CharQueue2){
	CharQueue2 a,b;
	a.enqueue('a');
	b.enqueue('b');
	a.swap(b);
	CHECK_EQUAL('a',b.dequeue());
	CHECK_EQUAL('b',a.dequeue());
}

TEST(swap2,CharQueue2){
	CharQueue2 a,b;
	int end=26;
	for (int i=0; i<end; ++i) a.enqueue('a'+i);
	b.enqueue('b');
	a.swap(b);
	for (int i=0; i<end; ++i) CHECK_EQUAL('a'+i,b.dequeue())
		CHECK_EQUAL('b',a.dequeue());
}

TEST(swapBackAndForth1,CharQueue2){
	CharQueue2 a,b;
	int end=(1<<8);
	for (int i=0; i<end; ++i){
		int offset=i%26;
		a.enqueue('a'+offset);
		b.enqueue('z'-offset);
	}
	a.swap(b);
	b.swap(a);
	for (int i=0; i<end; ++i){
		int offset=i%26;
		CHECK_EQUAL('a'+offset,a.dequeue());
		CHECK_EQUAL('z'-offset,b.dequeue());
	}
}

TEST(swapBackAndForth2,CharQueue2){
	CharQueue2 a,b;
	int end=(1<<8);
	for (int i=0; i<end; ++i){
		int offset=i%26;
		a.enqueue('a'+offset);
		b.enqueue('z'-offset);
	}
	a.swap(b);
	b.swap(a);
	a.swap(b);
	b.swap(a);
	for (int i=0; i<end; ++i){
		int offset=i%26;
		CHECK_EQUAL('a'+offset,a.dequeue());
		CHECK_EQUAL('z'-offset,b.dequeue());
	}
}

TEST(swapBackAndForth3,CharQueue2){
	CharQueue2 a,b;
	int end=(1<<8);
	for (int i=0; i<end; ++i){
		int offset=i%26;
		a.enqueue('a'+offset);
		b.enqueue('z'-offset);
	}
	a.swap(b);
	b.swap(a);
	a.swap(b);
	b.swap(a);
	a.swap(b);
	for (int i=0; i<end; ++i){
		int offset=i%26;
		CHECK_EQUAL('z'-offset,a.dequeue());
		CHECK_EQUAL('a'+offset,b.dequeue());
	}
}


/***********************************************************************
Assignment
*/

TEST(assignment1,CharQueue2){
	CharQueue2 a,b;
	a.enqueue('a');
	a.enqueue('b');
	a.enqueue('c');
	b=a;
	CHECK_EQUAL(3,b.capacity());
	CHECK_EQUAL('a',b.dequeue());
	CHECK_EQUAL('b',b.dequeue());
	CHECK_EQUAL('c',b.dequeue());
	CHECK(b.isEmpty());
	CHECK_EQUAL(0,b.capacity());

	CHECK_EQUAL(3,a.capacity());
	CHECK_EQUAL('a',a.dequeue());
	CHECK_EQUAL('b',a.dequeue());
	CHECK_EQUAL('c',a.dequeue());
	CHECK(a.isEmpty());
	CHECK_EQUAL(0,a.capacity());
}

TEST(assignment2,CharQueue2){
	CharQueue2 a,b;
	a.enqueue('a');
	b=a;
	CHECK_EQUAL('a',b.dequeue());
	CHECK_EQUAL('a',a.dequeue());
}

TEST(assignment3,CharQueue2){
	CharQueue2 a,b;
	b=a;
	CHECK(a.isEmpty());
	CHECK(b.isEmpty());
	a.enqueue('a');
	a.enqueue('b');
	a.enqueue('c');
	CHECK(b.isEmpty());
	a.dequeue();
	a.dequeue();
	a.dequeue();
	b=a;
	CHECK_EQUAL(0,b.capacity());
	CHECK(a.isEmpty());
	CHECK(b.isEmpty());
}

