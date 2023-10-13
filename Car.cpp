#include "Car.h"

Car::Car(int newYearModel, string newMake)
{
	yearModel = newYearModel;
	make = newMake;
	speed = 0;
}

int Car::getYearModel() const
{
	return yearModel;
}

string Car::getMake() const
{
	return make;
}

int Car::getSpeed() const
{
	return speed;
}


void Car::accelerate()
{
	speed = speed + 5;
}

void Car::brake()
{
	if (speed == 0)
		speed = 0;
	else
		speed = speed - 5;
}