#include "Date.h"

//Month names array
string monthNames[] = { "January", "Feburary", "March", "April", "May", "June", "July", "August", "September", "October", "November" ,"December" };

//Constructors:
Date::Date()
{
	day = 0;
	month = 0;
	year = 0;
}

Date::Date(int newDay, int newMonth, int newYear)
{
	day = newDay;
	month = newMonth;
	year = newYear;
}

//Day setter and getter
void Date::setDay(int newDay)
{
	day = newDay;
}

int Date::getDay() const
{
	return day;
}
//Month setter and getter
void Date::setMonth(int newMonth)
{
	month = newMonth;
}

int Date::getMonth() const
{
	return month;
}

//Year setter and getter
void Date::setYear(int newYear)
{
	year = newYear;
}

int Date::getYear() const
{
	return year;
}

//Member functions 
string Date::dateFormat1()
{
	return to_string(getMonth()) + "/" + to_string(getDay()) + "/" + to_string(getYear());
}

string Date::dateFormat2()
{
	return monthNames[getMonth() - 1] + " " + to_string(getDay()) + ", " + to_string(getYear());
}

string Date::dateFormat3()
{
	return to_string(getDay()) + " " + monthNames[getMonth() - 1] + " " + to_string(getYear());
}