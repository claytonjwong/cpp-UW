#pragma once

#include <iostream>

class Probe {

public:
	/* constructors */
	Probe() : ctorCnt{0},dtorCnt{0} {}
	Probe(const Probe&)=delete;

	/* operators */
	Probe& operator=(const Probe&)=delete;
	
	/* mutators */
	void alertConstructed() { ++ctorCnt; }
	void alertDestructed() { ++dtorCnt; }

	/* accessors */
	int instanceCount() const { return ctorCnt-dtorCnt; }
	int totalConstucted() const { return ctorCnt; }
	int totalDestructed() const { return dtorCnt;  }

private:
	int ctorCnt,dtorCnt;

};

std::ostream& operator<<(std::ostream& os,const Probe& rhs);
