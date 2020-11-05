// Figures BMR for women and Men
// Lab #5 BMR
// James Meyer
// 9/17/19

#include <iostream>

using std::cout; using std::cin; using std::endl;

int main() {
	
	cout << "1. Women" << endl;
	cout << "2. Men" << endl;
	cout << "Select Gender" << endl;
	int gender;
	cin >> gender;
	
	if (gender == 1) {
		cout << "Enter weight in pounds: " << endl;
		int weight;
		cin >> weight;
		cout << "Enter height in inches: " << endl;
		int height;
		cin >> height;
		cout << "Enter age: " << endl;
		int age;
		cin >> age;
		int bmrWomen = (655 + (4.3 * weight) + (4.7 * height) - (4.7 * age));
		int doughnuts = floor(bmrWomen / 196);
		cout << endl;
		cout << "Your Basal Metabolic Rate (BMR) is: " << bmrWomen << endl;
		cout << "Number of doughnuts needed to be eaten per day: " << doughnuts << endl;
	}
	else if (gender == 2) {
		cout << "Enter weight in pounds: " << endl;
		int weight;
		cin >> weight;
		cout << "Enter height in inches: " << endl;
		int height;
		cin >> height;
		cout << "Enter age: " << endl;
		int age;
		cin >> age;
		int bmrMen = (66 + (6.3 * weight) + (12.9 * height) - (6.8 * age));
		int doughnuts = floor(bmrMen / 196);
		cout << endl;
		cout << "Your Basal Metabolic Rate (BMR) is: " << bmrMen << endl;
		cout << "Number of doughnuts needed to be eaten per day: " << doughnuts << endl;
	}
	else {
		cout << "Not an option" << endl;
	}
}