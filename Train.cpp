//
//Created by Nicholas Ford 10/03/19
//

#include "Train.h"
#include <stdlib.h>
#include <time.h>

Train::Train()
{
	numberOfCoalNuggets = 500;
}

double Train::mileageEstimate(double x) {
    double mileage = 0;

    while(numberOfCoalNuggets > 400)
    {
    	mileage += (rand() % 25) + 1 * x;
    	numberOfCoalNuggets--;
    }

    while(numberOfCoalNuggets > 100)
    {
    	mileage += (rand() % 15) + 1 * x;
    	numberOfCoalNuggets--;
    }

    while(numberOfCoalNuggets > 0)
    {
    	mileage += (rand() % 5) + 1 * x;
    	numberOfCoalNuggets--;
    }

    return mileage;
}

string Train::toString() {
	return "-> Train\n";
}