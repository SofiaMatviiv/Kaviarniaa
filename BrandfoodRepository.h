#ifndef BRANDFOODREPOSITORY_H
#define BRANDFOODREPOSITORY_H
#include<fstream>
#include"Brandfood.h"
#include"Repository.h"
using namespace std;


class BrandfoodRepository :public Repository
{

public:
	bool Add(Brandfood& brf);
	void ReadFromFile();
	void WriteToFile();
	BrandfoodRepository(bool info = false);
	~BrandfoodRepository() {}
};



#endif 
