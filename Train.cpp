//
//Created by Nicholas Ford 10/03/19
//

#include "Train.h"
#include <stdlib.h>
#include <time.h>

Train::Train()
{
	numberOfCoalNuggets = 500; //Default of 500 coal nuggets
}

Train::~Train() = default;

double Train::mileageEstimate(double x) {
    double mileage = 0;

    while(numberOfCoalNuggets > 400) //While there is a ton of coal left
    {
    	mileage += (rand() % 25) + 1 * x;
    	numberOfCoalNuggets--;
    }

    while(numberOfCoalNuggets > 100) //A little less coal
    {
    	mileage += (rand() % 15) + 1 * x;
    	numberOfCoalNuggets--;
    }

    while(numberOfCoalNuggets > 0) //Almost empty
    {
    	mileage += (rand() % 5) + 1 * x;
    	numberOfCoalNuggets--;
    }

    return mileage;
}

string Train::toString() {
	return "-> Train\n";
}