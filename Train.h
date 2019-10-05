//
//Created by Nicholas Ford 10/03/19
//

#ifndef DRIVINGSIMULATOR_TRAIN_H
#define DRIVINGSIMULATOR_TRAIN_H

#include "PoweredVehicle.h"

class Train : public PoweredVehicle{

private:
	int numberOfCoalNuggets; //Number of coal nuggets on the train

public:
	Train();
	virtual ~Train();
	virtual double mileageEstimate(double time);
	virtual string toString();
};

#endif //DRIVINGSIMULATOR_TRAIN_H