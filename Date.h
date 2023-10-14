#pragma once
#include<string>
using namespace std;

class Date
{
private:
	int day;
	int month;
	int year;

public: 
	//Constructors:
	Date();
	Date(int newDay, int newMonth, int newYear);

	//Day getter and setter
	int getDay() const;
	void setDay(int newDay);

	//Month getter and setter
	int getMonth() const;
	void setMonth(int newMonth);

	//Year getter and setter
	int getYear() const;
	void setYear(int newYear);

	//Member functions
	string dateFormat1();
	string dateFormat2();
	string dateFormat3();
};

