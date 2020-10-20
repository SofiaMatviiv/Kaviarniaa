#ifndef COMMAND_H
#define COMMAND_H
#include "Kaviarnia.h"
#include"Brandfood.h"
#include"Human.h"
#include"Deliverler.h"
#include"Barista.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Command {
	vector <Kaviarnia> KaviarniaCommand;
	vector <Brandf> BrandfCommand;
	vector<Deliverler> DeliverlerCommand;
	vector<Barista>BaristaCommand;

public:
	void KaviarniaFile();
	void BrandfoodFile();
	void DeliverlerFile();
	void BaristaFile();

	void Writekaviarnia();
	void Writebrandf();
	void Writedeliverler();
	void Writebarista();

	void Delivery();
	void Rating();
	void changeRating();

};
#endif

