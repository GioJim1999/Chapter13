#pragma once
#include<string>
using namespace std;
class Procedure
{
private:
	string procedure;
	string dateOfProcedure;
	string practitionerName;
	double chargeForProcedure;
public:
	//Constructor:
	Procedure(string proc, string date, string practitioner, double charges);

	//Getters:
	string getProcedure() const;
	string getDate() const;
	string getPractitioner() const;
	double getCharges() const;

	//Setters:
	void setProcedure(string proc);
	void setDate(string date);
	void setPractitioner(string practitioner);
	void setCharges(double charges);
};

