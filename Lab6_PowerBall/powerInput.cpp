// Using Arrays to make a powerball game
// Lab #6 Powerball
// James Meyer
// 9/27/19

#include <iostream>
#include "power.h"

using std::cout; using std::cin; using std::endl;

int main() {
	int a;

	int wins[arraySize];
	assign(wins);
	draw(wins);

	bool youWon = false;
	for (int i=0; i<3; ++i){
		a = entry();
		if (check(wins, a) == true) {
			cout << "You have won!" << endl;
			youWon = true;
			break;
		}
	}
	if (youWon == false)
		cout << "You have lost..." << endl;
	printOut(wins);
}