// Project using different files
// Lab #5 Figures
// James Meyer
// 9/17/19

#include <iostream>
#include "figures.h"

using std::cout; using std::cin; using std::endl;

int main() {
	int figure;
	int size;

	do {
		cout << "1. Square" << endl;
		cout << "2. Slash" << endl;
		cout << "3. Backslash" << endl;
		cout << "Select a figure:" << endl;
		cin >> figure;

		cout << "Select a size: " << endl;
		cin >> size;

		if (figure == 1) {
			square(size);
		}

		else if (figure == 2) {
			slash(size);
		}

		else if (figure == 3) {
			backslash(size);
		}

		else {
			cout << "Not a shape." << endl;
		}

	} while (figure != 0);
	cout << "Terminated." << endl;
}