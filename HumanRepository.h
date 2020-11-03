#ifndef HUMANREPOSITORY_H
#define HUMANREPOSITORY_H
#include<fstream>
#include"Deliverler.h"
#include"Repository.h"
using namespace std;


class HumanRepository:public Repository
{

public:
	bool Add(Deliverler& der);
	void ReadFromFile();
	void WriteToFile();
	HumanRepository(bool info = false);
	~HumanRepository() {}
};



#endif 
