
#ifndef __AUTO_PTR__h_
#define __AUTO_PTR__h_

namespace C712
{
template<class T>
class auto_ptr 
{
public:

    // typedef T element_type;

    explicit auto_ptr(T *p = 0) throw() 
    : m_Ptr (p), 
	  m_Own(p != 0)
    {}

    auto_ptr(const auto_ptr<T>& rhs) throw()
     :m_Ptr (rhs.m_Ptr), 
	  m_Own( rhs.m_Own)
    { 
		rhs.release();
	}

    auto_ptr<T>& operator=(auto_ptr<T>& rhs) throw()
    {
       if (m_Own)  
		   delete m_Ptr;
       
	   m_Ptr = rhs.m_Ptr;
       rhs.release();
       
	   return *this;
    }

    ~auto_ptr()						{ if (m_Own)  delete m_Ptr; }

    T& operator*() const throw()	{ return *m_Ptr; }

    T *operator->() const throw()	{ return m_Ptr; }

    T *get() const throw()			{ return m_Ptr; }

    void release()  throw()			{ m_Own = false;}

private:
    T * 	m_Ptr;
    bool 	m_Own;
};
}

#endif
