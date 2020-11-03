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
	Deliverler(string FirstName, string SecondName, int maxtime):Human(FirstName,SecondName){

		this->maxtime = maxtime;
	};
	string StrData() {
		return FirstName + " " + SecondName + " " + to_string(maxtime) + " " + "\n";
	}


	void WritetoCons() {
		cout << "First name: " << FirstName << " \nSecond Name: " << SecondName << " " << "\nMax time of waiting an offer: " << maxtime << endl;
	};
};
#endif
