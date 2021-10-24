#pragma once
#include <iostream>
#include "Solution.h"

using namespace std;

class Linear : public Solution {
private:
    double k;
    double b;
    double value;
public:
    
    Linear();
    
    Linear(double _k, double _b);
    
    void calculate();
    
    void print();

    ~Linear();
};