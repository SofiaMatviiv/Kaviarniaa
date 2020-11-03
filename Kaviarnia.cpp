#include "Kaviarnia.h"
#include<iostream>
//Kaviarnia::Kaviarnia() {};
Kaviarnia::Kaviarnia(string nazva, int price, int rate) {

	this->nazva = nazva;
	this->price = price;
	this->rate = rate;

}

void Kaviarnia::WritetoCons() {

	cout << "Name:" << nazva << "\nAvarage price of an offer:" << price << "\nRating:" << rate << endl;

}

string Kaviarnia::StrData(){
	return nazva+ to_string(price) +to_string(rate)+ "\n";
}
