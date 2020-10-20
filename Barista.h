#ifndef BARISTA_H
#define BARISTA_H
#include"Human.h"
#include <iostream>
#include <string>
using namespace std;
class Barista : public Human
{
	string work;
public:
	int mark;
	void Information(string work, string FirstName, string SecondName, int mark) {
		this->work = work;
		this->FirstName = FirstName;
		this->SecondName = SecondName;
		this->mark = mark;

	}


	void WritetoCons() {

		cout << "Cafe: " << work << "\nFirst name: " << FirstName << " \nSecond Name: " << SecondName << " " << "\nRating: " << mark << endl;
	};
};
#endif // !BARISTA_H
