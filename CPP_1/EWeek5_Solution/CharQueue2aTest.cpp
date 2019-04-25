#include "TestHarness.h"

#include "CharQueue2a.h"

TEST(enqueueDequeue, CharQueue2a)
{
	CharQueue2a jobCodes;

	jobCodes.enqueue('a');
	jobCodes.enqueue('b');
	jobCodes.enqueue('c');

	CHECK_EQUAL('a', jobCodes.dequeue());
	CHECK_EQUAL('b', jobCodes.dequeue());
	CHECK_EQUAL('c', jobCodes.dequeue());
}

TEST(emptyQueue, CharQueue2a)
{
	CharQueue2a jobCodes;

	CHECK(jobCodes.isEmpty());
}

TEST(copyConstructor, CharQueue2a)
{
	CharQueue2a jobCodes;

	jobCodes.enqueue('a');
	jobCodes.enqueue('b');
	jobCodes.enqueue('c');

	CharQueue2a jobCodesCopy(jobCodes);

	CHECK_EQUAL('a', jobCodesCopy.dequeue());
	CHECK_EQUAL('b', jobCodesCopy.dequeue());
	CHECK_EQUAL('c', jobCodesCopy.dequeue());
}

TEST(assignment, CharQueue2a)
{
	CharQueue2a jobCodes;

	jobCodes.enqueue('a');
	jobCodes.enqueue('b');
	jobCodes.enqueue('c');

	CharQueue2a jobCodesCopy;

	jobCodesCopy = jobCodes;

	CHECK_EQUAL('a', jobCodesCopy.dequeue());
	CHECK_EQUAL('b', jobCodesCopy.dequeue());
	CHECK_EQUAL('c', jobCodesCopy.dequeue());
}

TEST(small, CharQueue2a)
{
	CharQueue2a jobCodes(3);

	CHECK_EQUAL(3, jobCodes.capacity());

	for (int i = 0; i < 2; ++i)
	{
		jobCodes.enqueue(i % 256);
	}

	for (int i = 0; i < 2; ++i)
	{
		jobCodes.dequeue();
	}

	CHECK(jobCodes.isEmpty());

	CHECK_EQUAL(3, jobCodes.capacity());
}

TEST(large, CharQueue2a)
{
	CharQueue2a jobCodes(100001);

	CHECK_EQUAL(100001, jobCodes.capacity());

	for (int i = 0; i < 100000; ++i)
	{
		jobCodes.enqueue(i % 256);
	}

	for (int i = 0; i < 100000; ++i)
	{
		jobCodes.dequeue();
	}

	CHECK(jobCodes.isEmpty());

	CHECK_EQUAL(100001, jobCodes.capacity());
}

TEST(grow, CharQueue2a)
{
	CharQueue2a jobCodes(10);

	for (int i = 0; i < 20; ++i)
	{
		jobCodes.enqueue(i % 256);
	}

	for (int i = 0; i < 20; ++i)
	{
		CHECK_EQUAL(i % 256, jobCodes.dequeue());
	}
}

TEST(capacity, CharQueue2a)
{
	CharQueue2a jobCodes(10);

	CHECK_EQUAL(10, jobCodes.capacity());

	for (int i = 0; i < 5; ++i)
	{
		jobCodes.enqueue(i % 256);
	}

	for (int i = 0; i < 5; ++i)
	{
		CHECK_EQUAL(i % 256, jobCodes.dequeue());
	}

	for (int i = 0; i < 5; ++i)
	{
		jobCodes.enqueue(i % 256);
	}

	for (int i = 0; i < 5; ++i)
	{
		CHECK_EQUAL(i % 256, jobCodes.dequeue());
	}

	for (int i = 0; i < 5; ++i)
	{
		jobCodes.enqueue(i % 256);
	}

	for (int i = 0; i < 5; ++i)
	{
		CHECK_EQUAL(i % 256, jobCodes.dequeue());
	}

	CHECK_EQUAL(10, jobCodes.capacity());
}