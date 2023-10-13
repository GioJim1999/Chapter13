#include "Patient.h"

Patient::Patient(string fName, string mName, string lName, string newAddress, string newCity, string newZipCode, string newState, string newPhone, string newEContact, string newEPhone)
{
	firstName = fName;
	middleName = mName;
	lastName = lName;
	Address = newAddress;
	city = newCity;
	zipCode = newZipCode;
	state = newState;
	phone = newPhone;
	emergencyContact = newEContact;
	emergencyContactPhone = newEPhone;
}

//GETTERS
string Patient::getFirstName() const
{
	return firstName;
}

string Patient::getMiddleName() const
{
	return middleName;
}

string Patient::getLastName() const
{
	return lastName;
}

string Patient::getAddress() const
{
	return Address;
}

string Patient::getCity() const
{
	return city;
}

string Patient::getState() const
{
	return state;
}

string Patient::getZipCode() const
{
	return zipCode;
}

string Patient::getPhone() const
{
	return phone;
}

string Patient::getEmergencyContact() const
{
	return emergencyContact;
}

string Patient::getEmergencyPhone() const
{
	return emergencyContactPhone;
}


//SETTERS
void Patient::setFirstName(string fName)
{
	firstName = fName;
}

void Patient::setMiddleName(string mName)
{
	middleName = mName;
}

void Patient::setLastName(string lName)
{
	middleName = lName;
}

void Patient::setAddress(string newAddress)
{
	Address = newAddress;
}
void Patient::setCity(string newCity)
{
	city = newCity;
}
void Patient::setZipCode(string newZip)
{
	zipCode = newZip;
}
void Patient::setState(string newState)
{
	state = newState;
}
void Patient::setPhone(string newPhone)
{
	phone = newPhone;
}
void Patient::setEmergencyContact(string newName)
{
	emergencyContact = newName;
}
void Patient::setEmergencyPhone(string newPhone)
{
	emergencyContactPhone = newPhone;
}