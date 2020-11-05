// Using Arrays to make a powerball game
// Lab #6 Powerball
// James Meyer
// 9/27/19

#include <iostream>
#include "power.h"
#include <cstdlib>
#include <ctime>

using std::cout; using std::cin; using std::endl;

void assign(int x[]) {
	for (int i = 0; i < arraySize; ++i) {
		x[i] = 0;
	}
}

bool check(int x[], int a) {
	for (int i = 0; i < arraySize; i++) {
		if (x[i] == a) {
			return true;
		}
	}
	return false;
}

void draw(int x[]) {
	srand(time(0));
	for (int i = 0; i < arraySize; ++i) {
		int r = ( rand() % 100) + 1;
		if (check(x, r) == false) {
			x[i] = r;
		}
		else
			--i;
	}
}

int entry() {
	int a;
	cout << "Choose a number from 1-100: " << endl;
	cin >> a;
	return a;
}

void printOut(int x[]) {
	cout << "The correct numbers were: ";
	for (int i = 0; i < arraySize; ++i){
		cout << x[i] <<endl;
	}
}