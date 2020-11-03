#ifndef REPOSITORY_H
#define REPOSITORY_H
#include "Entity.h"
#include <vector>
#include<fstream>

class Repository
{
protected:
	bool sync;
	bool Add(Entity*);
	vector< Entity*>en;


public:
	vector<Entity*>enti();
	virtual void ReadFromFile() {}
	virtual void WriteToFile() {}

	Repository(bool sync = false);
	~Repository();
};
#endif