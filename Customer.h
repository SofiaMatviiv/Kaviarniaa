#ifndef CUSTOMER_H
#define CUSTOMER_H
#include"Human.h"
#include <iostream>
#include <string>
using namespace std;
class Customer : public Human
{
private:
	string address;
	string offer;

public:
	void Information(string FirstName, string address, string offer);
	Customer();
	void WritetoCons();
};
#endif
