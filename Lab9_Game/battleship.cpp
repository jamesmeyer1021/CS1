#include <iostream>
#include <cstdlib>
#include <ctime>
#include "battleship.h"

using std::cout; using std::cin; using std::endl;

Location::Location() {
	x_ = -1;
	y_ = '*';
}

void Location::pick() {
	x_ = rand() % fieldSize_ + 1;

	switch (rand() % fieldSize_ + 1) {
	case 1:
		y_ = 'a';
		break;
	case 2:
		y_ = 'b';
		break;
	case 3:
		y_ = 'c';
		break;
	case 4:
		y_ = 'd';
		break;
	case 5:
		y_ = 'e';
		break;
	case 6:
		y_ = 'f';
		break;
	}
}

void Location::fire() {
	cout << "Input X Cord:" << endl;
	cin >> x_;
	cout << "Input Y Cord:" << endl;
	cin >> y_;
}

void Location::print() const {
	cout << x_ << y_ << endl;
}

bool compare(const Location& locA, const Location& locB) {
	if (locA.x_ == locB.x_ && locA.y_ == locB.y_)
		return true;
	else
		return false;
}

Ship::Ship() {
	sunk_ = false;
}

bool Ship::match(const Location& locA) const {
	if (compare(locA, loc_))
		return true;
	else
		return false;
}

void Ship::sink() {
	sunk_ = true;
}

void Ship::setLocation(const Location& loc) {
	loc_ = loc;
}

void Ship::printShip() const {
	loc_.print();
	if (sunk_ == true)
		cout << "Sunk" << endl;
	else
		cout << "Not Sunk" << endl;
}

void Fleet::deployFleet() {
	int numShips = 0;
	while (numShips < fleetSize_) {
		Location loc;
		loc.pick();
		if (check(loc) == -1) {
			ships_[numShips].setLocation(loc);
			++numShips;
		}
	}
}

bool Fleet::operational() const {
	for (int i = 0; i < fleetSize_; ++i)
		if (ships_[i].isSunk() == false)
			return true;
	return false;
}

bool Fleet::isHitNSink(const Location& loc) {
	for (int i = 0; i < fleetSize_; ++i)
		if (ships_[i].match(loc) == true && ships_[i].isSunk() == false) {
			ships_[i].sink();
			return true;
		}
	return false;
}

void Fleet::printFleet() const {
	for (int i = 0; i < fleetSize_; ++i)
		ships_[i].printShip();
}

int Fleet::check(const Location& loc) const {
	for (int i = 0; i < fleetSize_; ++i)
		if (ships_[i].match(loc) == true)
			return i;
	return -1;
}