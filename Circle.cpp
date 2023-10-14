#include "Circle.h"

//Constructors:
Circle::Circle()
{
	radius = 0;
}

Circle::Circle(double newRadius)
{
	radius = newRadius;
}

//Setters:
void Circle::setRadius(double newRadius)
{
	radius = newRadius;
}

//Getters:
double Circle::getRadius() const
{
	return radius;
}

double Circle::getArea() const
{
	return PI * radius * radius;
}

double Circle::getCircumference() const
{
	return 2 * PI * radius;
}

double Circle::getDiameter() const
{
	return radius * 2;
}