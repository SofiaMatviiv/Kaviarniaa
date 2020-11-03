/*#ifndef KAVIARNIAREPOSITORY_H
#define KAVIARNIAREPOSITORY_H
#include <iostream>
#include <string>
#include<vector>
#include <fstream>
#include"Kaviarnia.h"
#include"Repository.h"
using namespace std;


class KaviarniaRepository :public Repository {
public:
	bool Add(Kaviarnia& kv);
	void ReadFromFile();
	void WriteToFile();
	//void Writekaviarnia();
	//void Rate();
	//void ChangeRate();

	KaviarniaRepository(bool info = false);
	~KaviarniaRepository() {}
};
#endif
*/