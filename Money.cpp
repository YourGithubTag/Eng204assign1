
#include "Money.h"
Money::Money() {
	this->dollars = 0;
	this->cents = 0;
}
Money::Money(int dollars, int cents) {
    if (dollars < 0) {
       dollars = 0;
    }

    if (cents < 0) {
        cents = 0;
        }

    if (cents > 99) {
        this->dollars = dollars + (cents / 100);
        this->cents = cents % 100;        
	}

    this->dollars = dollars;
    this->cents = cents;
}

int Money::getDollars() const {
	if (cents > 99) {
    		return (this->dollars + (this->cents / 100));
	}
	else {
		return this->dollars;
	}
}

int Money::getCents() const {
	if (cents > 99) {
		return (this->cents % 100);
	}
	else {
		return this->cents;
	}
}

int Money::asCents() const {
	if (this->dollars < 0){
        	return cents;
	}
	else if (this->cents < 0){
    		return this->dollars * 100;
	}
	else {
		return (this->dollars * 100 + this->cents);
	}
}

void Money::addDollars(int dollars) {
        if (dollars <  0){
            dollars = 0;
        }

        this->dollars = this->dollars + dollars;
}

void Money::addCents(int cents) {
    if (cents <  0){
            cents = 0;
        }
    if (cents > 99){
        addDollars((cents/100));
        cents = cents % 100;
    }
        this->cents = this->cents + cents;
}

void Money::subtractDollars(int dollars) {
	if (dollars > 0 ) {
		if (this->dollars - dollars >  0 ) {
			this->dollars = this->dollars - dollars;
		}
	}	
}

void Money::subtractCents(int cents) {
	int total = 0;
	if (cents > 0) {
		if (asCents() - cents >  0 ) {
			total = asCents() - cents;
			this->cents = total % 100;
			this->dollars = total / 100;
		}
	}	
}

void Money::add(const Money &other) {
	addDollars(other.dollars);
	addCents(other.cents);

 	if (this->cents > 99){
       	 	addDollars(this->cents/100);
       	 	this->cents = this->cents % 100;
    	}

}

void Money::subtract(const Money &other) {
	int total = 0;
	if(this->asCents() - other.asCents() >0 ){
		total =  this->asCents() - other.asCents();
		this->dollars = total / 100;
		this->cents = total % 100;
	}
}

void Money::split(Money &other) {
	int total = 0;
	total = this->asCents() + other.asCents();
	if (total % 2 == 0) {
		this->dollars = (total / 2) / 100;
		this->cents = (total / 2) % 100;
		other.dollars = (total / 2) / 100;
		other.cents = (total / 2) % 100;
	}
	if (total % 2 == 1) {
		total = total - 1;
		this->dollars = (total / 2) / 100;
		this->cents = (total / 2) % 100;
		other.dollars = (total / 2) / 100;
		other.cents = (total / 2) % 100;
		}
}

Money::~Money() {
	//TODO: implement
}
