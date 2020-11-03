#ifndef CUSTOMERREPOSITORY_H
#define CUSTOMERREPOSITORY_H
#include<fstream>
#include"Customer.h"
#include"Repository.h"
using namespace std;


class CustomerRepository :public Repository
{

public:
	bool Add(Customer& cust);
	void ReadFromFile();
	void WriteToFile();
	CustomerRepository(bool info = false);
	~CustomerRepository() {}
};



#endif 
