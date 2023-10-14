#include "Procedure.h"

//Constructor:
Procedure::Procedure(string proc, string date, string practitioner, double charges)
{
	procedure = proc;
	dateOfProcedure = date;
	practitionerName = practitioner;
	chargeForProcedure = charges;
}

//Getters:
string Procedure::getProcedure() const
{
	return procedure;
}

string Procedure::getDate() const
{
	return dateOfProcedure;
}

string Procedure::getPractitioner() const
{
	return practitionerName;
}

double Procedure::getCharges() const
{
	return chargeForProcedure;
}


//Setters:
void Procedure::setProcedure(string proc)
{
	procedure = proc;
}

void Procedure::setDate(string date)
{
	dateOfProcedure = date;
}

void Procedure::setPractitioner(string doc)
{
	practitionerName = doc;
}

void Procedure::setCharges(double charge)
{
	chargeForProcedure = charge;
}