#pragma once
#include <iostream>
#include <algorithm>
#include "Solution.h"


using namespace std;

class Square : public Solution {
private:
	double a;
	double b;
	double c;
	double d;
    double x1;
    double x2;
public:
   
    Square();

    Square(double _a, double _b, double _c);


    void calculate();

    void print();

    ~Square();
};