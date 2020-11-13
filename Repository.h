#ifndef REPOSITORY_H
#define REPOSITORY_H
#include "Entity.h"
#include <vector>
#include<fstream>
 
class Repository:public Entity
{
protected:
	bool sync;
	bool Add(Entity*);//bool Add(T& t);
	vector< Entity*>en;//vector< T*>tnt;


public:
	vector<Entity*>enti();
	virtual void ReadFromFile() {}
	virtual void WriteToFile() {}

	Repository(bool sync = false);
	~Repository();
};


bool Repository::Add(Entity* d)
{
	en.push_back(d);
	if (sync) {
		WriteToFile();
	}
	return true;
}

vector<Entity*> Repository::enti()
{
	return en;
}

Repository::Repository(bool sync)
{
	this->sync = sync;


}

Repository::~Repository() {
	//WriteToStorage();
}
#endif