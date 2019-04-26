#include "MovableClass.h"
#include "NonMovableClass.h"

#include <algorithm>
#include <string>
#include <vector>
#include <mutex>
#include <thread>
#include <iostream>
#include <chrono>
using namespace std;

void StrFunc( string  & str )
{

}

void FuncFoo0( MovableClass mc )
{

}

#if 0
void FuncFoo1( MovableClass && mc )
{
	
}
#endif

void FuncFoo1(  MovableClass & mc )
{
	
}

void FuncFoo2( NonMovableClass && nmc )
{
	
}

void FuncFoo2( const NonMovableClass & nmc )
{
	
}

MovableClass ReturnMC()
{
	return MovableClass("ReturnedByValue");
}

void task(mutex& m1, mutex& m2)
{
	unique_lock<mutex> lck1 (m1, defer_lock);
	unique_lock<mutex> lck2 (m2, defer_lock);
	lock(lck1,lck2);
	// ... use resources ...
}

void DoSomethingThready()
{
	cout << "DoSomethingThready\n";
}

void DoMutex()
{
	mutex m1, m2, m3, m4, m5, m6, m7;
	//lock( m1, m2, m3, m4, m5, m6 );

	unique_lock<mutex> lg1(m1, defer_lock);
	unique_lock<mutex> lg2(m2, defer_lock);
	unique_lock<mutex> lg3(m3, defer_lock);
	unique_lock<mutex> lg4(m4, defer_lock);
	unique_lock<mutex> lg5(m5, defer_lock);
	unique_lock<mutex> lg6(m6, defer_lock);
	unique_lock<mutex> lg7(m7, defer_lock);
	
	lock( lg1, lg2, lg3, lg4, lg5, lg6, lg7 ); 
	

	thread t1;
	bool t1Joinable = t1.joinable();
	thread::id t1Id = t1.get_id();
	
	try
	{
		t1.detach();
	}
	catch (system_error& e) 
	{
		
		cout << e.what() << '\n';
		cout << e.code() << '\n';
	}

	thread t2( DoSomethingThready );
	bool t2Joinable = t2.joinable();
	thread::id t2Id = t2.get_id();
	t2.detach();

	thread::id defID = thread::id();
	
	int n = thread::hardware_concurrency();
	

	timed_mutex mtx;
	try 
	{
		mtx.try_lock_for( chrono::milliseconds(100) ) ;
		mtx.lock();
		mtx.lock(); // tr y to lock a second time
	}
	catch (system_error& e) 
	{
		mtx.unlock();
		cout << e.what() << '\n';
		cout << e.code() << '\n';
	}

}

void DoMoves()
{
	DoMutex();

	void someRandomFunction() ;
	someRandomFunction() ;

	StrFunc( string("aaa"));

	MovableClass mc("mc");
	FuncFoo0( mc );			
	FuncFoo0( std::move(mc) );	// so we have to "move" the lvalue to an rvalue

	MovableClass mc2("mc2");
	FuncFoo0(mc2);
	FuncFoo0( ReturnMC() );	// No move needed here, since ReturnMC returns a temporary (return by value)
	
	FuncFoo1( ReturnMC() );	

	const MovableClass cmc("cmc");
	//FuncFoo1( std::move( cmc ) );	// calling move on a const will not cause move to happen

	///////////////////////////////

	NonMovableClass  nmc("nmc");
	FuncFoo2( nmc );
	
	FuncFoo2( std::move( nmc ) );
}


int mean( vector<int> & data) 
{
  int res = 0;
  for(size_t i = 0; i< data.size(); i++) 
  {
    res += data[i];
  }
  return res/data.size();
}

vector<int> makeRandomData()
{
  vector<int> stuff;
  int numInts = rand()%100;
  for(int i = 0; i< numInts; i++)
  {
    stuff.push_back(rand()%100);
  }
  return stuff;
}

void someRandomFunction() 
{
  int results = mean(makeRandomData());
}