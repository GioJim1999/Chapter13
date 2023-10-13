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
	Date();
	Date(int newDay, int newMonth, int newYear);

	int getDay() const;
	void setDay(int newDay);

	int getMonth() const;
	void setMonth(int newMonth);

	int getYear() const;
	void setYear(int newYear);

	string dateFormat1();
	string dateFormat2();
	string dateFormat3();
};

