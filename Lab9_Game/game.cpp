#include <iostream>
#include <cstdlib>
#include <ctime>
#include "battleship.h"

using std::cout; using std::cin; using std::endl;

int main() {
	Fleet ship;
	ship.deployFleet();

	cout << "Print Ships? (y/n)";
	char input;
	cin >> input;
	if (input == 'y')
		ship.printFleet();
	
	int shipsNum=6;

	while (ship.operational() == true && shipsNum >= 1) {
		Location loc;
		loc.fire();

		if (ship.isHitNSink(loc) == true) {
			cout << "Shot Hit" << endl;
			--shipsNum;
		}
		else
			cout << "Shot Missed" << endl;
	}

	cout << "Print Ships? (y/n)";
	cin >> input;
	if (input == 'y')
		ship.printFleet();

	cout << "Game won" << endl;
	system("pause");
}