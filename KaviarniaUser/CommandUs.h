#ifndef COMMANDUS_H
#define COMMANDUS_H
#include"../Kaviarniaa/BaristaRepository.h"
#include"../Kaviarniaa/Brandfood.h"
#include"../Kaviarniaa/Deliverler.h"
#include"../Kaviarniaa/HumanRepository.h"
#include"../Kaviarniaa/CustomerRepository.h"
#include"../Kaviarniaa/BrandfoodRepository.h"
#include"../Kaviarniaa/Barista.h"
#include"../Kaviarniaa/Customer.h"
#include"../Kaviarniaa/Kaviarnia.h"
#include"../Kaviarniaa/Repository.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Command {

public:
	HumanRepository hr = HumanRepository(true);
	BaristaRepository br = BaristaRepository(true);
	CustomerRepository cr = CustomerRepository(true);
	BrandfoodRepository brfd = BrandfoodRepository(true);
	vector<Kaviarnia>caf;
	vector<Customer>cus;
	vector<Barista>bars;




	void ShowAll(string people);

	void AddCustomer(Customer& customer);

};
#endif







	//void MaxRating();
	//void ChangeRating();