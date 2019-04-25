#include "CharQueue1.h"
#include <stdexcept>

using namespace std;

/***********************************************************************
PUBLIC
*/


/* mutators */

void CharQueue1::enqueue(char ch){
	if (isFull()) resize();
	q[curr++]=ch;
}

char CharQueue1::dequeue(){
	if (isEmpty()) throw exception("Cannot dequeue when q is empty");
	int res=q[beg++];
	if (isEmpty()){ // perform next enqueue at the beginning of the array
		curr=0;
		beg=0;
	}
	return res;
}

void CharQueue1::swap(CharQueue1& src){
	auto temp=move(q); // swap q with src.q
	q=move(src.q);
	src.q=move(temp);

	std::swap(beg,src.beg);
	std::swap(curr,src.curr);
	std::swap(end,src.end);
}


/* operators */

CharQueue1& CharQueue1::operator=(CharQueue1 src){
	beg=src.beg;
	curr=src.curr;
	end=src.end;
	sink(move(q));
	q=make_unique<char[]>(end);
	for (int i=0; i<curr; ++i) q[i]=src.q[i];
	return *this;
}


/***********************************************************************
PRIVATE
*/


/* mutators */

void CharQueue1::resize() {
	end<<=1; // increase size by 2 times the current size
	auto next=std::make_unique<char[]>(end);
	for (int i=0; i<end; ++i) next[i]=q[i];
	sink(move(q));
	q=move(next);
}
