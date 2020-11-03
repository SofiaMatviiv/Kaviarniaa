#include "Brandfood.h"
#include <iostream>
Brandfood::Brandfood(string nazva, int price, int rate, string root):Kaviarnia(nazva,price,rate) {

	this->root = root;


}

void Brandfood::WritetoCons() {

	//cout << "------Brand food------ " << endl;

	cout << "Name: " << nazva<< " \nRating: " << rate <<"\nRoot:"<<root<< endl;
	cout << "Price: " << price << endl;




}

string Brandfood::StrData()
{
	return nazva + " " + to_string(price) + " " + root + " " + to_string(rate) + " " + "\n";
}
