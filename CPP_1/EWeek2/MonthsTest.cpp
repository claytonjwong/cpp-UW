#include <string>
#include "TestHarness.h"
#include "Months.h"

using namespace std;

const string key =
	"JAN: 31\nFEB: 28\nMAR: 31\nAPR: 30\nMAY: 31\nJUN: 30\n" \
	"JUL: 31\nAUG: 31\nSEP: 30\nOCT: 31\nNOV: 30\nDEC: 31\n";

TEST(monthsViaTwoArrays,Months){
	CHECK_EQUAL(getMonthsTwoArrays(),key);
}

TEST(monthsViaArrayStruct,Months){
	CHECK_EQUAL(getMonthsOneArrayStruct(),key);
}
