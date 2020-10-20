#include "Kaviarnia.h"
#include"Command.h"
#include<iostream>
//Kaviarnia::Kaviarnia() {};
void Kaviarnia::InfKaviarnia(string nazva, string address, int avprice, int rate) {

	this->nazva = nazva;
	this->address = address;
	this->avprice = avprice;
	this->rate = rate;

}

void Kaviarnia::WritetoCons() {

	cout << "Name:" << nazva << "\nAddress:" << address << "\nAvarage price of an offer:" << avprice << "\nRating:" << rate << endl;

}