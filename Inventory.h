#pragma once
class Inventory
{
private:
	int itemNumber;
	int quantity;
	double cost;
	double totalCost;
public:
	//Constructors:
	Inventory();
	Inventory(int newItemNumber, int newCost, int newQuantity);

	//Setters:
	void setItemNumber(int newItemNumber);
	void setQuantity(int newQuantity);
	void setCost(int newCost);
	void setTotalCost();

	//Getters:
	int getItemNumber() const;
	int getQuantity() const;
	double getCost() const;
	double getTotalCost() const;
};

