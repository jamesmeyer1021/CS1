#include <iostream>
#include "varArray.h"

using std::cout; using std::cin; using std::endl;

void output(double* arrayPtr[], int size) {
	for (int i=0; i < size; ++i)
		cout << &arrayPtr[i];
}

int check(double* arrayPtr, double number, int size) {

}

void addNumber(double*& arrayPtr, double number, int& size) {

}

void removeNumber(double*& arrayPtr, double number, int& size) {

}
