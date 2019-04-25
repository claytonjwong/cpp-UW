#include "Probe.h"

std::ostream& operator<<(std::ostream& os,const Probe& rhs){
	os  << "Probe[cnt: " << rhs.instanceCount()
		<< ",ctor: " << rhs.totalConstucted()
		<< ",dtor: " << rhs.totalDestructed()
		<< "]";
	return os;
}
