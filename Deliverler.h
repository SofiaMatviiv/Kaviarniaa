#ifndef DELIVERLER_H
#define DELIVERLER_H
#include"Human.h"
#include <iostream>
#include <string>
using namespace std;
class Deliverler : public Human
{

public:
	int maxtime;
	void Information(string FirstName, string SecondName, int maxtime) {

		this->FirstName = FirstName;
		this->SecondName = SecondName;
		this->maxtime = maxtime;
	};


	void WritetoCons() {
		cout << "-----Information about deliverler:------" << endl;
		cout << "First name: " << FirstName << " \nSecond Name: " << SecondName << " " << "\nMax time of waiting an offer: " << maxtime << endl;
	};
};
#endif
