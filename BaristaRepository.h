#ifndef BARISTAREPOSITORY_H
#define BARISTAREPOSITORY_H
#include"Repository.h"
#include"Barista.h"


class BaristaRepository :public Repository
{

public:
	bool Add(Barista& bar);
	void ReadFromFile();
	void WriteToFile();


	BaristaRepository(bool info = false);
	~BaristaRepository() {}
};
#endif 

