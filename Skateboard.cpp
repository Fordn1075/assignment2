//
//Nicholas Ford 10/04/19
//

#include "Skateboard.h"
#include <stdlib.h>
#include <time.h>

double Skateboard::mileageEstimate(double time) {
	srand(time(NULL));
    double mileage;

    if(time > 25 && time < 250)
    {
    	mileage = (rand() % (time * 0.3) + 1) * time;
    }
    else
    {
    	mileage = (rand() % 5 + 1)/10 * time;
    }
    
    return mileage;
}