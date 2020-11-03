#ifndef CUSTOMER_H
#define CUSTOMER_H
#include"Human.h"
#include <string>
using namespace std;
class Customer : public Human
{
private:
	string address;
	string offer;

public:
	Customer(string FirstName = " ", string SecondName = " ", string address = " ", string offer = " ");

	void WritetoCons();
	string StrData();
};
#endif
