//
//Created by Nicholas Ford 10/03/19
//

#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"

class Jet : public PoweredVehicle{

private:
	int numberOfEngines;

public:
	Jet();

	int getNumberOfEngines();
	void setNumberOfEnginers(int x);
	virtual double mileageEstimate(double time);
};

#endif //DRIVINGSIMULATOR_JET_H