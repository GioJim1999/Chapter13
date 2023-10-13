//Giovanni Jimenez
//10-13-2023
//Chapter 13 Assignment
//CMPR 121

#include<iostream>
#include"input.h"
#include"Date.h"
#include"Car.h"
#include"Patient.h"
#include"Procedure.h"
#include<iomanip>
#include<ctime>



//Function prototypes
int menuOptions();
void Challenge1();
void Challenge3();
void Challenge4();
string getCurrentDate();

//Date functions:
void setDate(Date& d);
bool checkEmptyDate(const Date d);

//Patient functions:
void displayPatientInfo(Patient& p);
void displayProcedureInfo(Procedure& p);


int main()
{
	do 
	{
		system("cls");
		switch (menuOptions())
		{
		case 0:
			exit(0); break;
		case 1:
			Challenge1(); break;
		case 3:
			Challenge3(); break;
		case 4:
			Challenge4(); break;
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
	cout << "\n\t1. Challange 1 - Date Class";
	cout << "\n\t3. Challange 3 - Car Class";
	cout << "\n\t4. Challange 4 - Patients Charges";
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
	system("cls");
	cout << "\n\tChallenge 3 - Car";
	cout << "\n\t_______________________________________________________________";
	
	Car userCar(inputInteger("\n\tEnter the car's year model (1900 - 2023): ", 1900, 2023), inputString("\n\tEnter the car's make: ", true));

	for (int i = 0; i < 5; i++)
	{
		cout << "\n\t" << userCar.getYearModel() << " " << userCar.getMake() << " is accelerating..." << userCar.getSpeed();
		userCar.accelerate();
	}

	cout << "\n";

	for (int i = 0; i < 5; i++)
	{
		cout << "\n\t" << userCar.getYearModel() << " " << userCar.getMake() << " is braking..." << userCar.getSpeed();
		userCar.brake();
	}
}

void Challenge4()
{
	system("cls");
	Patient p("Giovanni", " ", "Jimenez", "123 St. Apt 100", "Santa Ana", "92605", "California", "714-555-1234", "John Doe", "714-555-3333");

	string date = getCurrentDate();

	Procedure procedure1("Physical Exam", date, "Dr. Irvine", 250.00);
	Procedure procedure2("X-ray", date, "Dr. Jamison", 500.00);
	Procedure procedure3("Blood test", date, "Dr. Smith", 200.00);

	cout << "\n\tChallenge 4 - Patients & Procedures:";
	cout << "\n\t_______________________________________________________________\n";
	cout << "\n\tPatient Info: ";
	cout << "\n\t_______________________________________________________________\n";
	displayPatientInfo(p);
	cout << "\n\t_______________________________________________________________\n";
	cout << "\n\tProcedure #1: ";
	cout << "\n\t_______________________________________________________________\n";
	displayProcedureInfo(procedure1);
	cout << "\n\t_______________________________________________________________\n";
	cout << "\n\tProcedure #2: ";
	cout << "\n\t_______________________________________________________________\n";
	displayProcedureInfo(procedure2);
	cout << "\n\t_______________________________________________________________\n";
	cout << "\n\tProcedure #3: ";
	cout << "\n\t_______________________________________________________________\n";
	displayProcedureInfo(procedure3);
	cout << "\n\t_______________________________________________________________\n";

	double totalCharges = procedure1.getCharges() + procedure2.getCharges() + procedure3.getCharges();

	cout << "\n\tTotal Charges for all three procedures: $" << setprecision(2) << showpoint << fixed << totalCharges;
}

void displayPatientInfo(Patient& p)
{
	cout << "\n\tFirst Name: " << setw(25) << p.getFirstName();
	cout << "\n\tMiddle Name: " << setw(25) << p.getMiddleName();
	cout << "\n\tLast Name: " << setw(25) << p.getLastName();
	cout << "\n\tAddress: " << setw(35) << p.getAddress();
	cout << "\n\tCity: " << setw(32) << p.getCity();
	cout << "\n\tZip Code: " << setw(24) << p.getZipCode();
	cout << "\n\tState: " << setw(32) << p.getState();
	cout << "\n\tPhone Number: " << setw(27) << p.getPhone();
	cout << "\n\tEmergency Contact Name: " << setw(13) << p.getEmergencyContact();
	cout << "\n\tEmergency Contact Phone: " << setw(16) << p.getEmergencyPhone();
}

void displayProcedureInfo(Procedure& p)
{
	cout << "\n\tProcedure name: \t\t" << p.getProcedure();
	cout << "\n\tDate: \t\t\t\t" << p.getDate();
	cout << "\n\tPractitioner: \t\t\t" << p.getPractitioner();
	cout << "\n\tCharges: \t\t\t" << setprecision(2) << showpoint << fixed << "$" << p.getCharges();
}

string getCurrentDate()
{
	struct tm newtime;
	time_t now = time(0);
	localtime_s(&newtime, &now);
	int Month = 1 + newtime.tm_mon;
	int Day = newtime.tm_wday;
	int year = 1900 + newtime.tm_year;

	return to_string(Month) + "/" + to_string(Day) + "/" + to_string(year);
}