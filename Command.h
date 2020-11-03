#ifndef COMMAND_H
#define COMMAND_H
#include "Kaviarnia.h"
#include "KaviarniaRepository.h"
#include"BaristaRepository.h"
#include"HumanRepository.h"
#include"BrandfoodRepository.h"
#include"CustomerRepository.h"
#include"Repository.h"
#include"Brandfood.h"
#include"Human.h"
#include"Deliverler.h"
#include"Barista.h"
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
	vector<Brandfood>caf;
	void Rating();
	void ChangeRating();

	void AddBarista(Barista& barista);


	void AddDeliverler(Deliverler& deliver);


	void ShowAll(string all);
};
#endif