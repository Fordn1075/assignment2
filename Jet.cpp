//
//Created by Nicholas Ford 10/03/19
//

#include "Jet.h"
#include <stdlib.h>
#include <time.h>

Jet::Jet()
{
	numberOfEngines = 1;
}

void Jet::setNumberOfEnginers(int x)
{
	numberOfEngines = x;
}

int Jet::getNumberOfEngines()
{
	return numberOfEngines;
}

double Jet::mileageEstimate() {
    srand(time(NULL));
    double mileage = (rand() % 61) + 40;
    
    if (fuelType == "Rocket" && numberOfEngines > 2) 
    {
        mileage += mileage * 0.055 * numberOfEngines;
    }

    return mileage;
}
