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

Jet::Jet(string x)
{
	setFuelType(x);
}

void Jet::setNumberOfEngines(int x)
{
	numberOfEngines = x;
}

int Jet::getNumberOfEngines()
{
	return numberOfEngines;
}

double Jet::mileageEstimate(double x) {
    double mileage = ((rand() % 61) + 40) * x;
    
    if (fuelType == "Rocket" && numberOfEngines > 2) 
    {
        mileage += mileage * 0.055 * numberOfEngines;
    }

    return mileage;
}

string Jet::toString() {
	return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of Engines: " + 
		std::to_string(numberOfEngines);
}
