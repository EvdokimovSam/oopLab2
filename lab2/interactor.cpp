#include <iostream>
#include "Linear.h"
#include "Solution.h"
#include "Square.h"
#include "Series.h"
#include "interactor.h"

using namespace std;

void Interactor::interactor()
{
	int command;
	Series source;
	cout << "Choose type of equations: \n 1-Linear; \n 2-Square;\n";
	cin >> command; if (command < 1 || command > 2)
	{
		throw std::exception("Enter correct command:\n");
	}
	else {
		Solution* sol = nullptr;

		switch (command) {
		case 1: {
			cout << "Enter the arguments of the equation:\n";
			double k, b;
			cin >> k >> b;
			sol = new Linear(k, b);
			break;
		}
		case 2: {
			cout << "Enter the arguments of the equations:\n";
			double a, b, c;
			cin >> a >> b >> c;
			sol = new Square(a, b, c);
			break;
		}
		}
		
		if (sol) {
			source.EnterValue(sol);
			delete sol;
		}
		
	}

}