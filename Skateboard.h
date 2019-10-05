//
//Nicholas Ford 10/04/19
//

#include "Vehicle.h"

#ifndef DRIVINGSIMULATOR_SKATEBOARD_H
#define DRIVINGSIMULATOR_SKATEBOARD_H

class Skateboard : public Vehicle 
{
public:
	virtual ~Skateboard();
	virtual double mileageEstimate(double time);
	virtual string toString();
};


#endif //DRIVINGSIMULATOR_SKATEBOARD_H