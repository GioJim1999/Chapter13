#pragma once
#include<string>
using namespace std;
class Patient
{
private:
	string firstName;
	string middleName;
	string lastName;
	string Address;
	string city;
	string state;
	string zipCode;
	string phone;
	string emergencyContact;
	string emergencyContactPhone;
public:
	Patient(string fName, string mName, string lName, string newAddress, string newCity, string newZipCode, string newState, string newPhone, string newEContact, string newEPhone);

	//getters
	string getFirstName() const;
	string getMiddleName() const;
	string getLastName() const;
	string getAddress() const;
	string getCity() const;
	string getZipCode() const;
	string getState() const;
	string getPhone() const;
	string getEmergencyContact() const;
	string getEmergencyPhone() const;

	//setters
	void setFirstName(string fName);
	void setMiddleName(string mName);
	void setLastName(string lName);
	void setAddress(string newAddress);
	void setCity(string newCity);
	void setZipCode(string newZip);
	void setState(string newState);
	void setPhone(string newPhone);
	void setEmergencyContact(string newName);
	void setEmergencyPhone(string newPhone);
};

