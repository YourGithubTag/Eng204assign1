
#include "Money.h"

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
        this->cents = cents % 10;        
}
    this->dollars = dollars;
    this->cents = cents;

    //TODO: do
}

int Money::getDollars() const {
    
    return this->dollars;
}

int Money::getCents() const {
    return this->cents;
}

int Money::asCents() const {
    if (dollars < 0 || cents < 0){
        return -1;
    }
    return dollars * 100 + cents;
}

void Money::addDollars(int dollars) {
        if (dollars <  0){
            dollars = 0;
        }

        this->dollars = this->dollars + dollars;
}

void Money::addCents(int cents) {
    if (cents <  0){
            cents= 0;
        }
    if (cents > 99){
        addDollars(cents/100);
        cents = cents % 100;
    }
        this-> cents = this->cents + cents;
}

void Money::subtractDollars(int dollars) {
    this->
    //TODO: implement
}

void Money::subtractCents(int cents) {

    int total = asCents() - cents;
    if (total < 0) {
        total = 0;
    }
    this->dollars = total /100;
    this->cents = total % 100;
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
