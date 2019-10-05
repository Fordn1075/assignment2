//
//Nicholas Ford 10/04/19
//

#include "Skateboard.h"
#include <stdlib.h>
#include <time.h>

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double x) {
    double mileage;

    if(x > 25 && x < 250) //If the time is greater then 25 seconds and less than 250 seconds
    {
    	mileage = (rand() % lround(x * 0.3) + 1); //Random number between 0 and 1/3 the value of the time + 1
    }
    else
    {
    	mileage = (rand() % 5 + 1)/10 * x; //Otherwise random number between 0.1 and 0.5 * the time
    }
    
    return mileage;
}

//For output
string Skateboard::toString() {
	return "-> Skateboard\n";
}