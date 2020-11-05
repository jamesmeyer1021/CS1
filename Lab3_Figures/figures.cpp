//
//
//
//

#include <iostream>

using std::cout; using std::endl; using std::cin;

int main() {
	cout << "Input size variable: "; 
	int length;
	cin >> length;
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			cout << "*";
		}
		cout << endl;
	}

	cout << endl;

	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			if (i == j) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}

	cout << endl;
	
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length + 1; j++) {
			if (i == length - j) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}

	cout << endl;

	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			if (i == 0) {
				cout << "*";
			}
			else if (i == length-1) {
				cout << "*";
			}
			else if (j == 0) {
				cout << "*";
			}
			else if (j == length-1) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}

	cout << endl;

	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			if (i == 0) {
				cout << "*";
			}
			else if (i == length-1) {
				cout << "*";
			}
			else if (j == 0) {
				cout << "*";
			}
			else if (j == length-1) {
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
}

//If it is the first line - then print a star
//  else if it is the last line - then print a star
//  else if it is the first column - then print a star
//  else if it is the last column - then print a star
//  else print a space