#include "TestHarness.h"

#include "CharQueue1.h"

TEST(enqueueDequeue, CharQueue1)
{
    CharQueue1 jobCodes;

    jobCodes.enqueue('a');
    jobCodes.enqueue('b');
    jobCodes.enqueue('c');

    CHECK_EQUAL('a', jobCodes.dequeue());
    CHECK_EQUAL('b', jobCodes.dequeue());
    CHECK_EQUAL('c', jobCodes.dequeue());
}

TEST(emptyQueue, CharQueue1)
{
    CharQueue1 jobCodes;

    CHECK(jobCodes.isEmpty());
}

TEST(copyConstructor, CharQueue1)
{
    CharQueue1 jobCodes;

    jobCodes.enqueue('a');
    jobCodes.enqueue('b');
    jobCodes.enqueue('c');

    CharQueue1 jobCodesCopy(jobCodes);

    CHECK_EQUAL('a', jobCodesCopy.dequeue());
    CHECK_EQUAL('b', jobCodesCopy.dequeue());
    CHECK_EQUAL('c', jobCodesCopy.dequeue());
}

TEST(assignment, CharQueue1)
{
    CharQueue1 jobCodes;

    jobCodes.enqueue('a');
    jobCodes.enqueue('b');
    jobCodes.enqueue('c');

    CharQueue1 jobCodesCopy;
    
    jobCodesCopy = jobCodes;

    CHECK_EQUAL('a', jobCodesCopy.dequeue());
    CHECK_EQUAL('b', jobCodesCopy.dequeue());
    CHECK_EQUAL('c', jobCodesCopy.dequeue());
}

TEST(small, CharQueue1)
{
    CharQueue1 jobCodes(10);

    for (int i = 0; i < 10; ++i)
    {
        jobCodes.enqueue(i % 256);
    }

    for (int i = 0; i < 10; ++i)
    {
        jobCodes.dequeue();
    }

    CHECK(jobCodes.isEmpty());
}

TEST(large, CharQueue1)
{
    CharQueue1 jobCodes(100000);

    for (int i = 0; i < 100000; ++i)
    {
        jobCodes.enqueue(i % 256);
    }

    // This test made me change the vector to a deque. Vector is inefficient when
    // removing items from the front where deque is fast at this operation
    for (int i = 0; i < 100000; ++i)
    {
        jobCodes.dequeue();
    }

    CHECK(jobCodes.isEmpty());
}

TEST(grow, CharQueue1)
{
    CharQueue1 jobCodes(10);

    for (int i = 0; i < 20; ++i)
    {
        jobCodes.enqueue(i % 256);
    }

    for (int i = 0; i < 20; ++i)
    {
        CHECK_EQUAL(i % 256, jobCodes.dequeue());
    }
}

TEST(addRemoveAddRemove, CharQueue1)
{
    CharQueue1 jobCodes(20);

    for (int i = 0; i < 20; ++i)
    {
        jobCodes.enqueue(i % 256);
    }

    for (int i = 0; i < 20; ++i)
    {
        CHECK_EQUAL(i % 256, jobCodes.dequeue());
    }

    for (int i = 0; i < 20; ++i)
    {
        jobCodes.enqueue(i % 256);
    }

    for (int i = 0; i < 20; ++i)
    {
        CHECK_EQUAL(i % 256, jobCodes.dequeue());
    }
}