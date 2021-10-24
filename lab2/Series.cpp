#include <iostream>
#include "Series.h"
using namespace std;

void Series::EnterValue(Solution* func) const {
	func->calculate();
	func->print();
}