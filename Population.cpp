#include "Population.h"

//Constructors:
Population::Population()
{
	population = 0;
	numberOfBirths = 0;
	numberOfDeaths = 0;
}

Population::Population(int pop, int births, int deaths)
{
	population = pop;
	numberOfBirths = births;
	numberOfDeaths = deaths;
}

//Setters:
void Population::setPopulation(int pop)
{
	population = pop;
}

void Population::setBirths(int births)
{
	numberOfBirths = births;
}

void Population::setDeaths(int deaths)
{
	numberOfDeaths = deaths;
}

//Getters:
int Population::getPopulation() const
{
	return population;
}

int Population::getBirths() const
{
	return numberOfBirths;
}

int Population::getDeaths() const
{
	return numberOfDeaths;
}

double Population::getBirthRate() const
{

	return 	static_cast<double>(getBirths()) / static_cast<double>(getPopulation());
}

double Population::getDeathRate() const
{
	return static_cast<double>(getDeaths()) / static_cast<double>(getPopulation());
}