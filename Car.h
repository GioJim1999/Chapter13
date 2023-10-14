#pragma once
#include<string>
using namespace std;
class Car
{
private:
	int yearModel;
	string make;
	int speed;
public:
	//Constructors:
	Car(int newYearModel, string newSpeed);

	//Getters:
	int getYearModel() const;
	string getMake() const;
	int getSpeed() const;

	//Member functions:
	void accelerate();
	void brake();
};

