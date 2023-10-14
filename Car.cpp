#include "Car.h"

//Constructors:
Car::Car(int newYearModel, string newMake)
{
	yearModel = newYearModel;
	make = newMake;
	speed = 0;
}


//Getters:
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

//Adds 5 to the car's speed
void Car::accelerate()
{
	speed = speed + 5;
}

//Removes 5 from the car's speed
//if the speed is already at 0 it sets the speed back to 0
//a car cannot have a negative speed.
void Car::brake()
{
	if (speed == 0)
		speed = 0;
	else
		speed = speed - 5;
}