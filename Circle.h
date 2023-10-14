#pragma once
class Circle
{
private:
	double radius;
	double PI = 3.14159;
public:
	//Constructors:
	Circle();
	Circle(double newRadius);

	//Setters:
	void setRadius(double newRadius);

	//Getters:
	double getRadius() const;
	double getArea() const;
	double getDiameter() const;
	double getCircumference() const;
};

