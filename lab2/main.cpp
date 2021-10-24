#include <iostream>
#include <vld.h>
#include "interactor.h"

using namespace std;


int main() {
	
	int n;
	cout << "Enther the number of equation:" << endl;
	cin >> n;
	Interactor source;
	while (n) {
		source.interactor();
		n--;
	}
	system("Pause");


}



