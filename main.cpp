//Giovanni Jimenez
//10-13-2023
//Chapter 13 Assignment
//CMPR 121

#include<iostream>
#include"input.h"
#include"Date.h"
#include"Car.h"
using namespace std;

//Function prototypes
int menuOptions();
void Challenge1();
void Challenge3();

//Date functions:
void setDate(Date& d);
bool checkEmptyDate(const Date d);

//Car functions:



int main()
{
	do 
	{
		system("cls");
		switch (menuOptions())
		{
		case 0:
			exit(1); break;
		case 1:
			Challenge1(); break;
		case 3:
			Challenge3(); break;
		}
		cout << "\n";
		system("pause");
	} while (true);

	return EXIT_SUCCESS;
}

int menuOptions()
{
	cout << "\n\tChapter 13 - Assignments by Giovanni Jimenez";
	cout << "\n\t_______________________________________________________________";
	cout << "\n\t0. Exit";
	cout << "\n\t1. Challange 1 - Date";
	cout << "\n\t3. Challange 3 - Car";
	cout << "\n\t4. Challange 4";
	cout << "\n\t6. Challange 6";
	cout << "\n\t8. Challange 8";
	cout << "\n\t9. Challange 9";
	cout << "\n\t_______________________________________________________________";
	return inputInteger("\n\tOptions: ",0,9);
}

void Challenge1()
{
	system("cls");
	Date userDate;
	cout << "\n\tChallenge 1 - Date";
	cout << "\n\t-------------------------------------------------------";
	cout << "\n\t1. Set Date";
	cout << "\n\t2. Print date format 1 (MM/DD/YYYY)";
	cout << "\n\t3. Print date format 2 (Month DD, YYYY)";
	cout << "\n\t4. Print date format 3 (DD Month YYYY)";
	cout << "\n\t0. Exit";
	cout << "\n\t------------------------------------------------------------";
	
	do
	{
		switch (inputInteger("\n\tOptions: ", 0, 4))
		{
		case 0:
			return;
		case 1:
			setDate(userDate);
			break;
		case 2:
		{
			if (checkEmptyDate(userDate))
				cout << "\n\tPlease select option 1 first...";
			else
				cout << "\n\t" << userDate.dateFormat1();
			break;
		}
		case 3:
		{
			if (checkEmptyDate(userDate))
				cout << "\n\tPlease select option 1 first...";
			else
				cout << "\n\t" << userDate.dateFormat2();
			break;
		}
		case 4:
			if (checkEmptyDate(userDate))
				cout << "\n\tPlease select option 1 first...";
			else
				cout << "\n\t" << userDate.dateFormat3();
			break;
		}

	} while (true);
}

void setDate(Date& d)
{
	d.setMonth(inputInteger("\n\tEnter the month: (1...12)",1, 12));
	d.setDay(inputInteger("\n\tEnter the day: (1...31)", 1, 31));
	d.setYear(inputInteger("\n\tEnter the year: (1...9999)", 1, 9999));
}

bool checkEmptyDate(const Date d)
{
	if (d.getDay() == 0 && d.getMonth() == 0 && d.getYear() == 0)
		return true;
	else
		return false;
}


void Challenge3()
{


}