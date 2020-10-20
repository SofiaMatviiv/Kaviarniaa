#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
#include <string>
using namespace std;


class Human {
protected:
	string FirstName;
	string SecondName;

public:
	Human();
	virtual void Information(string FirstName, string SecondName);
	virtual void WritetoCons();
};



#endif // !HUMAN_H