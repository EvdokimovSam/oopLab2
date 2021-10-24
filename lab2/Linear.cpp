#include "Linear.h"
#include <iostream>
#include "Solution.h"
using namespace std;

Linear::Linear() {
    k = 1;
    b = 0;
    value = NULL;
}

Linear::Linear(double _k, double _b) {
    if (_k == 0) {
        throw std::exception("k is less than zero.");
    }
    k = _k;
    b = _b;
    value = NULL;
}

void Linear::calculate() {
    value = -b / k;
}

void Linear::print() {
    cout << "y = kx + b <=>\n0 = " << k << "x + " << b << " <=> \nx = -" << k << "/" << b << " <=>\nx = " << value << endl;
}

Linear::~Linear() {}

