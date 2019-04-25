#pragma once

#include "Probe.h"

class TestProbe {
public:
	TestProbe(){
		probe.alertConstructed();
	}
	TestProbe(const TestProbe&)=delete;
	~TestProbe(){
		probe.alertDestructed();
	}
	TestProbe& operator=(const TestProbe&)=delete;

	static Probe probe;
};

Probe TestProbe::probe;
