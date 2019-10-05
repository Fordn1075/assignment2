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

double Train::mileageEstimate(double time) {
    srand(time(NULL));
    double mileage;

    while(numberOfCoalNuggets > 400)
    {
    	mileage += (rand() % 25) + 1 * time;
    	numberOfCoalNuggets--;
    }

    while(numberOfCoalNuggets > 100)
    {
    	mileage += (rand() % 15) + 1 * time;
    	numberOfCoalNuggets--;
    }

    while(numberOfCoalNuggets > 0)
    {
    	mileage += (rand() % 5) + 1 * time;
    	numberOfCoalNuggets--;
    }

    return mileage;
}