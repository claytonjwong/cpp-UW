#ifndef __TEMPLATE_METHOD_H__
#define __TEMPLATE_METHOD_H__

#include <list>

class Component
{
public:

	virtual void		Draw() = 0;
	virtual void		PureVirtual2() = 0;
	virtual Component *	Clone() const = 0;
};

class ComponentA : public Component
{
public:
	virtual void		Draw();
	virtual void		PureVirtual2();
	virtual Component *	Clone() const;
};

class ComponentB : public Component
{
public:
	virtual void		Draw();
	virtual void		PureVirtual2();
	virtual Component *	Clone() const;
};

class Window
{
public:

	void				AddComponent( Component * );
	virtual	void		Draw() ;

private:
	std::list<Component *>	mComponents;
};

inline void Window::AddComponent( Component * c )
{
		mComponents.push_back( c );
}

#endif