#include "Customer.h"
#include "Command.h"
#include <iostream>

Customer::Customer() {};
void Customer::Information(string FirstName, string address, string offer) {

	this->FirstName = FirstName;

	this->address = address;

	this->offer = offer;


}

void Customer::WritetoCons() {

	cout << "----Information about customer-----" << endl;
	cout << "First name: " << FirstName << " \nAddress: " << address << " " << "\nOffer: " << offer << endl;
}