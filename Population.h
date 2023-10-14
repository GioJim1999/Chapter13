#pragma once
class Population
{
private:
	int population;
	int numberOfBirths;
	int numberOfDeaths;
public:
	//Constructors:
	Population();
	Population(int pop, int births, int deaths);

	//Setters:
	void setPopulation(int pop);
	void setBirths(int births);
	void setDeaths(int deaths);

	//Getters:
	int getPopulation() const;
	int getBirths() const;
	int getDeaths()	const;
	double getBirthRate() const;
	double getDeathRate() const;
};

