#include "TestHarness.h"

#include <iostream>
#include <memory>

class A
{
	virtual int operator[](int i) const
	{
	}
};

class Animal
{
public:
	Animal(const std::string& name)
		: myName(name),
		myInt(new int)
	{
		std::cout << "Animal constructor for: " << name << std::endl;
	}

	virtual ~Animal()
	{
		std::cout << "Animal destructor for: " << getName() << std::endl;
	}

	std::string getName() const
	{
		return myName;
	}

	virtual void stream(std::ostream& os) const
	{
		os << myName;
	}

protected:
	int* myInt;
	std::string myName;
};

std::ostream& operator<<(std::ostream& os, const Animal& a)
{
	a.stream(os);
	return os;
}

class Legs
{
};

class Spider : public Animal
{
public:
	Spider(const std::string& name, int numLegs)
		: Animal(name),
		myNumLegs(numLegs)
	{
		std::cout << "Spider constructor for: " << name << std::endl;
	}

	~Spider()
	{
		std::cout << "Spider destructor for: " << getName() << std::endl;
	}

	int getNumLegs() const
	{
		return myNumLegs;
	}

	virtual void stream(std::ostream& os) const
	{
		Animal::stream(os);
		os << "," << myNumLegs;
	}

private:
	int myNumLegs;
	Legs myLegs;
};

class Cow : public Animal
{
public:
	Cow(const std::string& name)
		: Animal(name)
	{
		std::cout << "Cow constructor for: " << name << std::endl;
	}

	~Cow()
	{
		std::cout << "Cow destructor for: " << getName() << std::endl;
	}

private:
	Legs myLegs;
};

TEST(overload, streaming)
{
	Spider boris("Boris", 8);

	std::cout << "Testing streaming for: " << boris << std::endl;
}

TEST(chaining, destructors)
{
	Spider boris("Boris", 8);
}

TEST(moreChaining, destructors)
{
	std::unique_ptr<Animal> a = std::make_unique<Spider>("Theo", 8);
}

void f(const Animal& animal)
{
	std::cout << "Animal name: " << animal.getName() << std::endl;
}

TEST(upcasting, inheritance)
{
	Spider s("fred", 7);

	f(s);
}

void g(const Animal& animal)
{
	std::cout << "Animal name: " << animal.getName() << std::endl;

	auto spider = dynamic_cast<const Spider*>(&animal);

	if (spider != nullptr)
	{
		std::cout << "Animal is a spider with the numLegs: " << spider->getNumLegs() << std::endl;
	}
	else
	{
		std::cout << "Animal is not a spider" << std::endl;
	}

//	auto spider2 = dynamic_cast<const Spider&>(animal);
}

TEST(downcasting, inheritance)
{
	Spider s("joe", 8);
	g(s);

	Cow c("Mazy");
	g(c);
}

void q(const Animal& animal)
{
	std::cout << "****" << typeid(animal).name() << std::endl;

	auto& x = typeid(animal);
}

TEST(typeidtest, inheritance)
{
	Cow c("Sally");
	q(c);

    Spider s("Eunice", 8);
	q(s);

	Animal a("Charlotte");
	q(a);
}

class X
{
public:
	virtual void f() const = 0;
};

TEST(abstract, class)
{
	X x;
}

void u(const X& x)
{
	x.f();
}