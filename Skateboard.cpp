//
//Nicholas Ford 10/04/19
//

#include "Skateboard.h"
#include <stdlib.h>
#include <time.h>

double Skateboard::mileageEstimate(double x) {
    double mileage;

    if(x > 25 && x < 250)
    {
    	mileage = (rand() % lround(x * 0.3) + 1);
    }
    else
    {
    	mileage = (rand() % 5 + 1)/10 * x;
    }
    
    return mileage;
}

string Skateboard::toString() {
	return "-> Skateboard\n";
}