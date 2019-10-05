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

	explicit Jet(string fuelType);

	int getNumberOfEngines();
	void setNumberOfEngines(int x);
	virtual double mileageEstimate(double time);
	virtual string toString();
};

#endif //DRIVINGSIMULATOR_JET_H