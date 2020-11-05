// Project using different files
// Lab #5 Figures
// James Meyer
// 9/17/19

#include <iostream>
#include "figures.h"

using std::cout; using std::cin; using std::endl;

int size;

void slash(int size) {

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size + 1; j++) {
			if (i == size - j) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
}

void backslash(int size) {

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == j) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
}

void square(int size) {

	cout << "Filled, Hollow or Crossed [f/h/c]: " << endl;

	char choice;
	cin >> choice;

	switch (choice) {
	case 'f':
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				cout << "*";
			}
			cout << endl;
		}
		break;

	case 'h':
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if (i == 0) {
					cout << "*";
				}
				else if (i == size - 1) {
					cout << "*";
				}
				else if (j == 0) {
					cout << "*";
				}
				else if (j == size - 1) {
					cout << "*";
				}
				else {
					cout << " ";
				}
			}
			cout << endl;
		}
		break;

	case 'c':
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if (i == 0) {
					cout << "*";
				}
				else if (i == size - 1) {
					cout << "*";
				}
				else if (j == 0) {
					cout << "*";
				}
				else if (j == size - 1) {
					cout << "*";
				}
				else if (i == j) {
					cout << "*";
				}
				else {
					cout << " ";
				}
			}
			cout << endl;
		}
		break;

	default:
		cout << "Not an option." << endl;
	}
}