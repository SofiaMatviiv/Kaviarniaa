#include<iostream>
#include<fstream>
#include"Kaviarnia.h"
#include"Customer.h"
#include"Brandfood.h"
#include"Human.h"
#include"Barista.h"
#include"Deliverler.h"
#include"Command.h"
#include<string>
using namespace std;

void Menu() {
	Command com;
	com.KaviarniaFile();
	com.BrandfoodFile();
	com.DeliverlerFile();
	com.BaristaFile();
	while (true) {

		cout << "-----Choose an option:----- " << endl;
		cout << "1. Information about cafe" << endl;
		cout << "2. Information about brand food" << endl;
		cout << "3. Offer a delivery" << endl;
		cout << "4. Exit" << endl;
		char vubir;
		try {

			cin >> vubir;
			if (!isdigit(vubir)) {
				throw "Wrong symbol";
			}

		}
		catch (const char* a) {
			cout << "Error " << a << endl;
		}

		if (vubir == '1') {
			cout << "---------Kaviarni Lviv:----------" << endl;
			com.Writekaviarnia();
			cout << endl;
			while (true) {
				cout << "A-- Cafe with max rating " << endl;
				cout << "B-- Change rating of a certain cafe" << endl;
				cout << "C-- Exit" << endl;
				cout << endl;

				char vubir2;

				cin >> vubir2;

				if (vubir2 == 'A') {
					com.Rating();
				}
				else if (vubir2 == 'B') {
					com.changeRating();
				}
				else {
					break;
				}
			}
		}
		else if (vubir == '2') {
			cout << "------Brand food------ " << endl;
			com.Writebrandf();
			cout << "----Information about Baristas-----" << endl;
			com.Writebarista();
			cout << endl;
		}

		else if (vubir == '3') {
			com.Delivery();
			com.Writedeliverler();
			cout << endl;
		}
		else {
			break;
		}
	}
}

int main() {

	Menu();
	return 0;
}