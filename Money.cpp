
#include "Money.h"

Money::Money() {
	this->dollars = 0;
	this->cents = 0;
	//TODO: do
}

Money::Money(int dollars, int cents) {
	if (dollars < 0) {
		this->dollars = 0;
	}
	if (cents < 0) {
		this->cents = 0;
		} 

		//set to zero for either variables
	if (cents > 99) {
		this->dollars = this->dollars + (cents / 100);
		this->cents = cents % 100;		
}
	this->dollars = dollars;
	this->cents = cents;

	//TODO: do
}

int Money::getDollars() const {
	//TODO: implement
	return -1;
}

int Money::getCents() const {
	//TODO: implement
	return -1;
}

int Money::asCents() const {
	//TODO: implement
	return -1;
}

void Money::addDollars(int dollars) {
	//TODO: implement
}

void Money::addCents(int cents) {
	//TODO: implement
}

void Money::subtractDollars(int dollars) {
	//TODO: implement
}

void Money::subtractCents(int cents) {
	//TODO: implement
}

void Money::add(const Money &other) {
	//TODO: implement
}

void Money::subtract(const Money &other) {
	//TODO: implement
}

void Money::split(Money &other) {
	//TODO: implement
}

Money::~Money() {
	//TODO: implement
}
