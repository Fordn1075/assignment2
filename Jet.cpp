//
//Created by Nicholas Ford 10/03/19
//

#include "Jet.h"
#include <stdlib.h>
#include <time.h>

Jet::Jet()
{
	numberOfEngines = 1; //Number of engines set to one
}

Jet::~Jet() = default;

Jet::Jet(string x)
{
	numberOfEngines = 1;
	setFuelType(x); //Change fuel type
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
    double mileage = ((rand() % 61) + 40) * x; //Random number 0-60 + 40
    
    if (fuelType == "Rocket" && numberOfEngines > 2) 
    {
        mileage += mileage * 0.055 * numberOfEngines; // If fueltype is roket
    }

    return mileage;
}

//For output
string Jet::toString() {
	return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of Engines: " + 
		std::to_string(numberOfEngines);
}
