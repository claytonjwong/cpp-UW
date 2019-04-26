#include <algorithm>
#include <iterator>
#include <iostream>

#include "WindowComponent.h"

////////////////////////////////////////////  Window  //////////////////////////////////////////////

void Window::AddComponents( int numComponents )
{
	for ( int ii = 0; ii < numComponents; ++ ii )
	{
		if ( (ii %  2) == 0 )
		{
			AddComponent( new ComponentA() );
		}
		else
		{
			AddComponent( new ComponentB() );
		}
	}
}

Window * Window::ShallowCopy() const
{
	return new Window(*this);
}

struct CopyComponent
{
	std::shared_ptr<Component> operator()( const std::shared_ptr<Component> c )
	{
	    std::shared_ptr<Component> temp{c->Clone()};
		return temp;
	}
};

Window * Window::DeepCopy() const
{
	Window * deepCopy = new Window();

	transform( mComponents.begin(), mComponents.end(), back_inserter( deepCopy->mComponents ), CopyComponent() );

	/*	     []( const Component * c )
	{
		c->Clone();
	} ); */

	return deepCopy;
}

void DoDraw(std::shared_ptr<Component> c)
{
	c->Draw();
}

// Base class algorithm will call the method on its components.
void Window::Draw()
{
	// std::for_each( mComponents.begin(), mComponents.end(), []( Component * c) { c->Draw(); } );
	for_each( mComponents.begin(), mComponents.end(), DoDraw )
		;
}

Window::~Window()
{}

////////////////////////////////////////////  Component  //////////////////////////////////////////////

void Component::PureVirtual2()
{
	std::cout << "Calling base class:  Component::PureVirtual2\n";
}

ComponentA::~ComponentA()
{
	std::cout << "ComponentA destructor\n";
}

void ComponentA::PureVirtual2()
{
	std::cout << "ComponentA::PureVirtual2\n";
}

void ComponentA::Draw()		// this gets called by the container class.
{
	std::cout << "-------------- ComponentA::Draw()  ----------------- \n";

	PureVirtual2();
	std::cout << "ComponentA::Draw\n";
}

Component *	ComponentA::Clone() const
{
	return new ComponentA( *this );
}

ComponentB::~ComponentB()
{
	std::cout << "ComponentB destructor\n";
}

void ComponentB::PureVirtual2()
{
	Component::PureVirtual2();			// this call is made to the base class pure virtual function. It has to be an explicit call.
}										// ComponentB has to implement PureVirtual2, since it is a pure virtual in the base class.

void ComponentB::Draw()
{
	std::cout << "-------------- ComponentB::Draw()  ----------------- \n";

	PureVirtual2();
	std::cout << "ComponentB::Draw\n";
}

Component *	ComponentB::Clone() const
{
	return new ComponentB( *this );
}
