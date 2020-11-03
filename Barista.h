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
	Barista(string work=" ", string FirstName=" ", string SecondName=" ", int mark=0):Human(FirstName,SecondName) {
		this->work = work;
		this->mark = mark;

	}
	string StrData() {
		return work + " " + FirstName + " " + SecondName + " " + to_string(mark) + "\n";
	}



	void WritetoCons() {

		cout << "Process of work: " << work << "\nFirst name: " << FirstName << " \nSecond Name: " << SecondName << " " << "\nRating: " << mark << endl;
	};
};
#endif // !BARISTA_H
