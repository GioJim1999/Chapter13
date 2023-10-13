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
	Car(int newYearModel, string newSpeed);

	int getYearModel() const;
	string getMake() const;
	int getSpeed() const;

	void accelerate();
	void brake();
};

