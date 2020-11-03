#include "Customer.h"
#include <iostream>


Customer::Customer(string FirstName, string SecondName, string address, string offer):Human(FirstName,SecondName)
{
	this->address = address;
	this->offer= offer;
}

void Customer::WritetoCons() {

	cout << "----Information about customer-----" << endl;
	cout << "First name: " << FirstName << "\nSecond name: " << SecondName << " \nAddress: " << address << " " << "\nOffer: " << offer << endl;
}

string Customer::StrData()
{
	return FirstName+" " + SecondName + " " + address + " " +offer + "\n";
}
