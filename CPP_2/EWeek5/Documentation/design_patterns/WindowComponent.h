#ifndef __WINDOW_COMPONENT_H__
#define __WINDOW_COMPONENT_H__

#include <list>
#include <memory>

class Component
{
public:

	virtual void		Draw() = 0;
	virtual void		PureVirtual2() = 0;
	virtual Component *	Clone() const = 0;

	virtual ~Component() {};
};

class ComponentA : public Component
{
public:
	virtual void		Draw();
	virtual void		PureVirtual2();
	virtual Component *	Clone() const;

	virtual ~ComponentA();
};

class ComponentB : public Component
{
public:
	virtual void		Draw();
	virtual void		PureVirtual2();
	virtual Component *	Clone() const;

	virtual ~ComponentB();
};

class Window
{
public:
	void				AddComponents( int numComponents );		// helper method
	void				AddComponent( Component * );			// Window owns the component, and will delete them
	virtual	void		Draw();

	virtual	Window *	ShallowCopy() const;
	virtual	Window *	DeepCopy() const;

    Window(){}
    //Window(const Window&) = delete;
	~Window();

private:
	std::list<std::shared_ptr<Component>>	mComponents;
};

inline void Window::AddComponent( Component * c )
{
		mComponents.push_back( std::shared_ptr<Component>(c) );
}

#endif
