// Week2_ExampleCode.cpp : Defines the entry point for the console application.
//

#include <vector>
#include <list>
#include <algorithm>
#include <iostream>
#include <chrono>



class Point
{
public:

	Point() { std::cout << "Point Default Ctor " << myX << "," << myY << std::endl; }

	Point(int x, int y) : myX{ x }, myY{ y }
	{
		std::cout << "Point arg Ctor" << myX << "," << myY << std::endl;
	}

	Point(const Point& other) : myX{ other.myX }, myY{ other.myY }
	{ std::cout << "Point Copy Ctor " << myX << "," << myY << std::endl; }

	Point(Point &&other) { std::cout << "Point Move Ctor " << myX << "," << myY << std::endl; }

	~Point() { std::cout << "Point Dtor" << std::endl; }
	
private:
	int myX{ 0 };
	int myY{ 0 };
};

class Point2
{
public:
	Point2() = default;
	Point2(const Point2& other) = default;
	Point2(Point2&& other) = default;
	Point2& operator =(const Point2& other) = default;
	Point2& operator = (Point2&& other) = default;

	constexpr Point2(int x, int y) : myX{ x }, myY{ y } {}
	constexpr auto getX() { return myX; }
	constexpr auto getY() { return myY; }

	~Point2() = default;

private:
	int myX{ 0 };
	int myY{ 0 };
};

class MyClass
{
public:
	MyClass() { std::cout << "MyClass Default ctor " << std::endl; };

	MyClass(const MyClass& other)
	{
		this->myPoints = other.myPoints;
		std::cout << "MyClass Copy ctor " << std::endl;		
	}

	MyClass(MyClass&& other) 
	{		
		this->myPoints = std::move(other.myPoints);
		std::cout << "MyClass Move ctor " << std::endl;		
	}

	MyClass& operator =(const MyClass& other)
	{
		if (this != &other)
		{
			this->myPoints = other.myPoints;
		}
		std::cout << "MyClass copy assign" << std::endl;
		return *this;
	}

	MyClass& operator = (MyClass&& other)
	{
		if (this != &other)
		{
			this->myPoints = std::move(other.myPoints);
		}
		std::cout << "MyClass move assign" << std::endl;
		return *this;
	}

	~MyClass() { std::cout << "MyClass Destruction" << std::endl; }

	void addPoint(Point& p)
	{
		std::cout << "Adding point&" << std::endl;
		myPoints.push_back(p);
	}

	void addPoint(Point&& p)
	{
		std::cout << "Adding point&&" << std::endl;
		myPoints.push_back(p);
	}
	
	void addPointFromCoords(int x, int y)
	{
		std::cout << "Adding from Coords" << std::endl;
		myPoints.emplace_back(x, y);
	}

	template<typename T> 
	void templateAdd(T&& other)
	{
		std::cout << "Template Add " << std::endl;
		myPoints.push_back(std::forward<T>(other));
	}

private:
	std::list<Point> myPoints;
};

Point constructPoint( int x, int y)
{
	return Point{ x,y };
}

Point& referenceToPoint_bad(int x, int y)
{
	Point p{ x,y };
	std::cout << &p << std::endl;
	return p;
}

Point&& referenceToPoint_AlsoBad(int x, int y)
{
	Point p{ x,y };
	std::cout << &p << std::endl;
	return std::move(p);
}

class Base
{
public:
	Base() = default;
	Base(std::string s) : name(s) {}
	void bar() { std::cout << name.c_str() << "Bar" << std::endl; }
	virtual void foo() { std::cout << "BFoo" << std::endl; }
private:
	std::string name{ "Base" };
};

class Derived1 : public virtual Base
{
public:
	Derived1() : Base("D1") {}
	virtual void foo() { std::cout << "D1Foo" << std::endl; }
};

class Derived2 : public virtual Base
{
public:
	Derived2() : Base("D2") {}
	virtual void foo() { std::cout << "D2Foo" << std::endl; }
};

class DerivedDerived : public Derived1, public Derived2
{
public:
	DerivedDerived() : Base("DerivedDerived") {}
	void foo()
	{
		Derived1::foo();
		Derived2::foo();
	}
};

int main()
{
	std::cout << "Diamond shaped inheritance" << std::endl;

	Base b;
	b.foo();
	b.bar();

	Derived1 d1;
	d1.foo();
	d1.bar();
	dynamic_cast<Base&>(d1).foo();

	Derived2 d2;
	d2.foo();
	d2.bar();
	dynamic_cast<Base&>(d2).foo();

	DerivedDerived dd;
	dd.bar();
	dd.foo();

	
	std::cout << std::endl << "Don't return the address of a temporary on the stack." << std::endl;

	Point p = referenceToPoint_bad(1, 2);
	std::cout << &p << std::endl;

	Point&& p2 = referenceToPoint_AlsoBad(2, 3);

	std::cout << std::endl << "Verious Move vs Copy ctors" << std::endl;

	MyClass c1;

	{ //so we see dtor
		std::cout << std::endl;
		Point p(0, 0);
		c1.addPoint(p);
	}

	std::cout << std::endl;
	c1.addPoint(Point{ 0,1 });
	
	// What is in p and p2 above?

	std::cout << std::endl;
	c1.addPoint(constructPoint(1, 0));

	std::cout << std::endl;
	c1.addPointFromCoords(1, 1);

	Point toAdd{ 2,2 };
	c1.templateAdd(toAdd);
	c1.templateAdd(Point{ 3,3 });

	std::cout << std::endl;
	MyClass c2 = c1;

	std::cout << std::endl;
	MyClass c3 = std::move(c2);

	std::cout << std::endl;

	constexpr auto x = Point2{ 3,4 }.getX();
	constexpr auto y = Point2{ 3,4 }.getY();

	// compiler error...
	constexpr auto y2 = Point2{ x,y }.getY(); 

	return 0;
}

