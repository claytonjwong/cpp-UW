#include "TestHarness.h"

#include <iostream>
#include <sstream>
#include <memory>
#include "Employee.h"

class Mutex
{
public:
	void lock()
	{
		std::cout << "Mutex::lock" << std::endl;
	}

	void unlock()
	{
		std::cout << "Mutex::unlock" << std::endl;
	}
};

int getValue()
{
	return 88;
}

Mutex mutex;

TEST(mutex, noRAII)
{
	mutex.lock();

	// Don't want multiple threads executing this at the same time

	int x = getValue();

	if (x < 5)
	{
		// ...
		mutex.unlock();
		return;
	}

	if (x > 99)
	{
		// ...
		mutex.unlock();
		return;
	}

	// ...

	mutex.unlock();
}

class MutexRAII
{
public:
	MutexRAII(Mutex& mutex)
		: myMutex(mutex)
	{
		myMutex.lock();
	}

	MutexRAII(const MutexRAII& src) = delete;
	MutexRAII& operator=(const MutexRAII& rhs) = delete;

	~MutexRAII()
	{
		myMutex.unlock();
	}

private:
	Mutex & myMutex;
};


class MutexRAII2
{
public:
	MutexRAII2(Mutex& mutex)
		: myMutex(mutex)
	{
		myMutex.lock();
	}

	void release()
	{
		if (!myIsLocked)
		{
			return;
		}

		myIsLocked = false;
		myMutex.unlock();
	}

	~MutexRAII2()
	{
		release();
	}

private:
	Mutex & myMutex;
	bool myIsLocked = true;
};

TEST(mutex, RAII)
{
	MutexRAII2 mutexRaii(mutex);

	// Don't want multiple threads executing this at the same time
	int x = getValue();

	if (x < 5)
	{
		// ...
		return;
	}

	if (x > 99)
	{
		// ...
		return;
	}

	mutexRaii.release();
	// ...
}

class AllocatorNeedsImprovement
{
public:
	AllocatorNeedsImprovement()
		: mySize(0)
	{
	}

	void initialize(int size)
	{
		if (myArray != nullptr)
		{
			return;
		}

		mySize = size;

		myArray = std::make_unique<int[]>(mySize);
	}

	void addValue(int index, int value)
	{
		if (myArray == nullptr)
		{
			return;
		}

		myArray[index] = value;
	}

private:
	std::unique_ptr<int[]> myArray;
	int mySize;
};

TEST(construct, AllocatorNeedsImprovement)
{
	AllocatorNeedsImprovement a;
	a.initialize(55);


	// ...
	a.initialize(66);
}

class Allocator
{
public:
	Allocator(int size)
		: mySize(size),
		myArray(std::make_unique<int[]>(mySize))
	{
	}

	void addValue(int index, int value)
	{
		myArray[index] = value;
	}

private:
	std::unique_ptr<int[]> myArray;
	int mySize;
};

TEST(instancecount, Employee)
{
	{
		Employee j("John");
		Employee p("Paul");
		Employee g("George");
		Employee r("Ringo");

		CHECK_EQUAL(4, Employee::getInstanceCount());
	}

	CHECK_EQUAL(0, Employee::getInstanceCount());
}

TEST(stream, Employee)
{
	Employee j("John");
	Employee p("Paul");
	Employee g("George");
	Employee r("Ringo");

	std::stringstream message;

	message << j << " " << p << " " << g << " " << r;

	CHECK_EQUAL("John Paul George Ringo", message.str());
}

TEST(streamFunction, Employee)
{
	Employee j("John");
	Employee p("Paul");
	Employee g("George");
	Employee r("Ringo");

	std::stringstream message;

	operator<<(operator<<(operator<<(message, j), " "), p);

	CHECK_EQUAL("John Paul", message.str());
}