
#include "basics.h"

int totalCents(int dollars, int cents) {
	if (dollars < 0 || cents < 0){
		return -1;
	}
	return dollars * 100 + cents;
}

int sumAsCents(int moneyOneDollars, int moneyOneCents, int moneyTwoDollars, int moneyTwoCents) {
	int moneyOneTotal =  totalCents(moneyOneDollars,moneyOneCents);
	int moneyTwoTotal =  totalCents(moneyTwoDollars,moneyTwoCents);

	if (moneyOneTotal == -1 || moneyTwoTotal == -1) {
		return -1;
}
	return moneyOneTotal + moneyTwoTotal;
}

int split(int moneyOneDollars, int moneyOneCents, int moneyTwoDollars, int moneyTwoCents) {
	int total = sumAsCents(moneyOneDollars,moneyOneCents,moneyTwoDollars,moneyTwoCents);

	if (total < 0) {
		return -1;
	}

	else if (total % 2 == 0) {
		return total / 2;
	}

	else if (total % 2 == 1) {
		return (total - 1) / 2	;
	}	
	else {
		return -1;
	}
	
}

