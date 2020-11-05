#include <iostream>
#include <cstdlib>
#include <ctime>
#include "battleship.h"

using std::cout; using std::cin; using std::endl;

void initialize(Ship ships[]) {
	for (int i = 0; i < fleetSize; ++i) {
		ships[i].loc.x = -1;
		ships[i].loc.y = '*';
	}
}

Location pick() {
	Location randLocation;
	srand(time(nullptr));
	randLocation.x = rand() % fleetSize + 1;

	switch (rand() % fleetSize + 1) {
	case 1:
		randLocation.y = 'a';
		break;
	case 2:
		randLocation.y = 'b';
		break;
	case 3:
		randLocation.y = 'c';
		break;
	case 4:
		randLocation.y = 'd';
		break;
	case 5:
		randLocation.y = 'e';
		break;
	case 6:
		randLocation.y = 'f';
		break;
	}
	return randLocation;
}

bool match(const Ship& ship, const Location& location) {
	if (ship.loc.x == location.x && ship.loc.y == location.y)
		return true;
	else
		return false;
}

int check(const Ship ship[], const Location& location) {
	for (int i = 0; i < fleetSize; ++i) {
		if (ship[i].loc.x == location.x && ship[i].loc.y == location.y) {
			return i;
		}
	}
	return -1;
}

void deploy(Ship ship[]) {
	for (int i = 0; i < fleetSize; ++i) {
		Location tempLoc = pick();
		if (check(ship, tempLoc) != -1) {
			ship[i].loc = tempLoc;
		}
		else {
			--i;
		}
		ship[i].sunk = false;
	}
}

void printShip(const Ship& ship) {
	cout << ship.loc.x << ship.loc.y << endl;
	if (ship.sunk == true)
		cout << "Sunk" << endl;
	else
		cout << "Not Sunk" << endl;
}

void printFleet(const Ship ship[]) {
	for (int i = 0; i < fleetSize; ++i) {
		printShip(ship[i]);
	}
}

bool operational(const Ship ship[]) {
	if (fleetSize >= 1)
		return true;
}

Location fire() {
	Location tempLoc;
	cout << "Input your X: " << endl;
	cin >> tempLoc.x;
	cout << "Input your Y:" << endl;
	cin >> tempLoc.y;
	return tempLoc;
}

void sink(Ship& ship) {
	ship.sunk = true;
}