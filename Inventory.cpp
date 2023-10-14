#include "Inventory.h"

//Constructors:
Inventory::Inventory()
{
	itemNumber = 0;
	quantity = 0;
	cost = 0.00;
	totalCost = 0.00;
}

Inventory::Inventory(int newItemNumber, int newCost, int newQuantity)
{
	itemNumber = newItemNumber;
	cost = newCost;
	quantity = newQuantity;
	setTotalCost();
}

//setters:
void Inventory::setItemNumber(int newItemNumber)
{
	itemNumber = newItemNumber;
}

void Inventory::setCost(int newCost)
{
	cost = newCost;
}

void Inventory::setQuantity(int newQuantity)
{
	quantity = newQuantity;
}

void Inventory::setTotalCost()
{
	totalCost = cost * quantity;
}

//Getters:
int Inventory::getItemNumber() const
{
	return itemNumber;
}

double Inventory::getCost() const
{
	return cost;
}

int Inventory::getQuantity() const
{
	return quantity;
}

double Inventory::getTotalCost() const
{
	return totalCost;
}