//Giovanni Jimenez
//10-13-2023
//Chapter 13 Assignment
//CMPR 121 M/W

#include<iostream>
#include"input.h"
#include"Date.h"
#include"Car.h"
#include"Patient.h"
#include"Procedure.h"
#include<iomanip>
#include<ctime>
#include"Inventory.h"
#include"Circle.h"
#include"Population.h"


//Function prototypes
int menuOptions();
void Challenge1();
void Challenge3();
void Challenge4();
void Challenge6();
void Challenge8();
void Challenge9();
string getCurrentDate();

//Date functions:
void setDate(Date& d);
bool checkEmptyDate(const Date d);

//Patient functions:
void displayPatientInfo(Patient& p);
void displayProcedureInfo(Procedure& p);

//Inventory Functions:
void createInventoryItem(Inventory& i);
void displayInventoryItem(Inventory& i);
void setInventoryItem(Inventory& i);

//Population Functions:
void displayPopulationData(Population& p);

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
		case 6:
			Challenge6(); break;
		case 8:
			Challenge8(); break;
		case 9:
			Challenge9(); break;
		}
		cout << "\n";
		system("pause");
	} while (true);

	return EXIT_SUCCESS;
}

//Displays the main menu and returns the user input for the main function
int menuOptions()
{
	cout << "\n\tChapter 13 - Assignments by Giovanni Jimenez";
	cout << "\n\t_______________________________________________________________";
	cout << "\n\t1. Challange 1 - Date Class";
	cout << "\n\t3. Challange 3 - Car Class";
	cout << "\n\t4. Challange 4 - Patients Charges";
	cout << "\n\t6. Challange 6 - Inventory Item";
	cout << "\n\t8. Challange 8 - Circle Class";
	cout << "\n\t9. Challange 9 - Population";
	cout << "\n\t_______________________________________________________________";
	cout << "\n\t0. Exit";
	cout << "\n\t_______________________________________________________________";
	return inputInteger("\n\tOptions: ",0,9);
}

//Code for challenge 1
void Challenge1()
{

	Date userDate;
	
	do
	{
		system("cls");
		cout << "\n\tChallenge 1 - Date";
		cout << "\n\t_______________________________________________________________";
		cout << "\n\t1. Set Date";
		cout << "\n\t2. Print date format 1 (MM/DD/YYYY)";
		cout << "\n\t3. Print date format 2 (Month DD, YYYY)";
		cout << "\n\t4. Print date format 3 (DD Month YYYY)";
		cout << "\n\t_______________________________________________________________";
		cout << "\n\t0. Exit";
		cout << "\n\t_______________________________________________________________";
		switch (inputInteger("\n\tOptions: ", 0, 4))
		{
		case 0:
			return;
		case 1:
			setDate(userDate);
			cout << "\n\tThe new Date has been set!\n";
			system("pause");
			break;
		case 2:
		{
			if (checkEmptyDate(userDate))
			{
				cout << "\n\tPlease select option 1 first...\n";
				system("pause");
			}
			else
			{
				system("cls");
				cout << "\n\tDate format 1: ";
				cout << "\n\t------------------------------------------------------------";
				cout << "\n\t" << userDate.dateFormat1();
				cout << "\n";
				system("pause");
			}
			break;
		}
		case 3:
		{
			if (checkEmptyDate(userDate))
			{
				cout << "\n\tPlease select option 1 first...\n";
				system("pause");
			}
			else
			{
				system("cls");
				cout << "\n\tDate format 2: ";
				cout << "\n\t------------------------------------------------------------";
				cout << "\n\t" << userDate.dateFormat2();
				cout << "\n";
				system("pause");
			}
			break;
		}
		case 4:
			if (checkEmptyDate(userDate))
			{
				cout << "\n\tPlease select option 1 first...\n";
				system("pause");
			}
			else
			{
				system("cls");
				cout << "\n\tDate format 3: ";
				cout << "\n\t------------------------------------------------------------";
				cout << "\n\t" << userDate.dateFormat3();
				cout << "\n";
				system("pause");
			}
			break;
		}

	} while (true);
}

//Precondition: d (Date obj)
//Postcondition: sets the date object with user input
void setDate(Date& d)
{
	system("cls");
	cout << "\n\tSet new Date: ";
	cout << "\n\t_______________________________________________________________";
	d.setMonth(inputInteger("\n\tEnter the month (1...12): ",1, 12));
	d.setDay(inputInteger("\n\tEnter the day (1...31): ", 1, 31));
	d.setYear(inputInteger("\n\tEnter the year (1...9999): ", 1, 9999));
}

//Precondition: d (Date obj const)
//Postcondition: Checks to see if the date object member varialbes are empty
bool checkEmptyDate(const Date d)
{
	if (d.getDay() == 0 && d.getMonth() == 0 && d.getYear() == 0)
		return true;
	else
		return false;
}

//Code for challenge 3
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

//Code for challenge 4
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

//Precondition: p (Patient obj)
//Postcondition: displays all the member variables of the patient object using the getter functions
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

//Precondition: p (Precedure obj)
//Postcondition: displays all the member variables of the procedure object using the getter functions
void displayProcedureInfo(Procedure& p)
{
	cout << "\n\tProcedure name: \t\t" << p.getProcedure();
	cout << "\n\tDate: \t\t\t\t" << p.getDate();
	cout << "\n\tPractitioner: \t\t\t" << p.getPractitioner();
	cout << "\n\tCharges: \t\t\t" << setprecision(2) << showpoint << fixed << "$" << p.getCharges();
}

//Gets the system's time and then returns the current date 
//based on the system's time formatted as MM/DD/YYYY
string getCurrentDate()
{
	struct tm newtime;
	time_t now = time(0);
	localtime_s(&newtime, &now);
	int Month = 1 + newtime.tm_mon;
	int Day = newtime.tm_mday;
	int year = 1900 + newtime.tm_year;

	return to_string(Month) + "/" + to_string(Day) + "/" + to_string(year);
}

//Code fo challenge 6
void Challenge6()
{

	Inventory inventoryItem;
	
	do
	{
		system("cls");
		cout << "\n\tChallenge 6 - Inventory Class";
		cout << "\n\t_______________________________________________________________";
		cout << "\n\t1. Create Inventory item";
		cout << "\n\t2. Display Inventory item data";
		cout << "\n\t3. Set Inventory Item data";
		cout << "\n\t_______________________________________________________________";
		cout << "\n\t0. Exit";
		cout << "\n\t_______________________________________________________________";

		switch (inputInteger("\n\tOption: ", 0, 3))
		{
		case 0:
			return;
		case 1:
			createInventoryItem(inventoryItem);
			break;
		case 2:
			displayInventoryItem(inventoryItem);
			break;
		case 3:
			setInventoryItem(inventoryItem);
			break;
		}
	} while (true);
}

//Precondition: i (Inventory obj)
//Postcondition: fills the inventory object with user data using the setter functions
void createInventoryItem(Inventory& i)
{
	system("cls");
	cout << "\n\tCreate new Inventory Item";
	cout << "\n\t_______________________________________________________________";
	i.setItemNumber(inputInteger("\n\tEnter the inventory item's number: ", true));
	i.setCost(inputDouble("\n\tEnter the cost of the item: ", true));
	i.setQuantity(inputInteger("\n\tEnter the quantity of the item: ", true));
	i.setTotalCost();
	cout << "\n\tInventory item has been created!\n";
	system("pause");
}

//Precondition: i (Inventory obj)
//Postcondition: displays all the inventory object member variables using the getter functions
void displayInventoryItem(Inventory& i)
{
	system("cls");
	cout << "\n\tIventory Item:";
	cout << "\n\t_______________________________________________________________";
	cout << "\n\tItem Number: " << setw(40) << i.getItemNumber();
	cout << "\n\tItem Quantity: " << setw(38) << i.getQuantity();
	cout << "\n\tItem Cost: " << setw(40) << "$" << setprecision(2) << showpoint << fixed << i.getCost();
	cout << "\n\t_______________________________________________________________";
	cout << "\n\tTotal cost for inventory item: " << setw(20) << "$" << setprecision(2) << showpoint << fixed << i.getTotalCost() << '\n';
	system("pause");
}

//Precondition: i (Inventory obj)
//Postcondition: displays a menu allowing the user the change specific member variables of the inventory object using the setter functions
void setInventoryItem(Inventory& i)
{
	do
	{
		system("cls");
		cout << "\n\tSet Inventory Item Data";
		cout << "\n\t_______________________________________________________________";
		cout << "\n\t1. Set Inventory Item Number";
		cout << "\n\t2. Set Inventory Item Cost";
		cout << "\n\t3. Set Inventory Item Quantity";
		cout << "\n\t_______________________________________________________________";
		cout << "\n\t0. return";
		cout << "\n\t_______________________________________________________________";
		cout << "\n";

		switch (inputInteger("\n\tOption: ",0,3))
		{
		case 0:
			i.setTotalCost();
			return;
		case 1:
			i.setItemNumber(inputInteger("\n\tNew Item Number: ", true));
			break;
		case 2:
			i.setCost(inputDouble("\n\tNew Item Cost: ", true));
			break;
		case 3:
			i.setQuantity(inputInteger("\n\tNew Item Quantity: ", true));
			break;
		}
	} while (true);
}

//Code for challenge 8
void Challenge8()
{
	system("cls");
	cout << "\n\tChapter 8 - Circle";
	cout << "\n\t_______________________________________________________________";
	Circle circle(inputDouble("\n\tEnter the radius of the circle: ", true));
	cout << "\n\t_______________________________________________________________";
	cout << "\n\tCircle Data: ";
	cout << "\n\tArea of Circle: " << setw(29) << circle.getArea();
	cout << "\n\tDiameter of Circle: " << setw(20) << circle.getDiameter();
	cout << "\n\tCircumference of Circle: " << setw(20) << circle.getCircumference() << '\n';
}

//Code for challenge 9
void Challenge9()
{
	Population pop;
	do
	{
		system("cls");
		cout << "\n\tChallenge 9 - Population";
		cout << "\n\t_______________________________________________________________";
		cout << "\n\t1. Set Population";
		cout << "\n\t2. Set Number of Births";
		cout << "\n\t3. Set Number of Deaths";
		cout << "\n\t4. Display all Data";
		cout << "\n\t_______________________________________________________________";
		cout << "\n\t0. Return";
		cout << "\n\t_______________________________________________________________";

		switch (inputInteger("\n\tOption: ", 0, 4))
		{
		case 0:
			return;
		case 1:
			pop.setPopulation(inputInteger("\n\tEnter the population: ", true));
			cout << "\n\tPopulation set!\n";
			system("pause");
			break;
		case 2:
			pop.setBirths(inputInteger("\n\tEnter the number of births per year: ", true));
			cout << "\n\tNumber of births per year set!\n";
			system("pause");
			break;
		case 3:
			pop.setDeaths(inputInteger("\n\tEnter tthe number of deaths per year: ", true));
			cout << "\n\tNumber of deaths per year set!\n";
			system("pause");
			break;
		case 4:
			if (pop.getPopulation() == 0)
			{
				cout << "\n\tCannot display data for a population of 0 people. Please set a population\n";
				system("pause");
			}
			else
				displayPopulationData(pop);
			break;
		}
	} while (true);
}

//Precondition: p (Population ojb)
//Postcondition: displays all the data in the population object using the getter functions
void displayPopulationData(Population& p)
{
	double birthRate = p.getBirthRate();
	system("cls");
	cout << "\n\tPopulation Data: ";
	cout << "\n\t_______________________________________________________________";
	cout << "\n\tPopulation: " << setw(37) << p.getPopulation();
	cout << "\n\tNumber of Births per year: " << setw(20) << p.getBirths();
	cout << "\n\tNumber of Deaths per year: " << setw(20) << p.getDeaths();
	cout << "\n\t_______________________________________________________________";
	cout << "\n\tThe birth rate in a population of " << p.getPopulation() << " people with " << p.getBirths() <<  " briths per year is: " << showpoint << setprecision(2) << fixed << p.getBirthRate();
	cout << "\n\tThe death rate in a population of " << p.getPopulation() << " people with " << p.getDeaths() << " deaths per year is: " << showpoint << setprecision(2) << fixed << p.getDeathRate() << '\n';
	system("pause");
}