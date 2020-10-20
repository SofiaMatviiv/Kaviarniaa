#include "Brandfood.h"
#include "Command.h"
#include <iostream>
using namespace std;

void Brandf::InfBrandfood(string cafe, string brfood, int price) {

	this->cafe = cafe;
	this->brfood = brfood;
	this->price = price;


}

void Brandf::WritetoCons() {

	//cout << "------Brand food------ " << endl;

	cout << "Cafe: " << cafe << " \n food: " << brfood << endl;
	cout << "Price: " << price << endl;




}