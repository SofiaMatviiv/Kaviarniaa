#ifndef KAVIARNIA_H
#define KAVIARNIA_H
#include<string>
#include"Entity.h"
using namespace std;

class Kaviarnia :public Entity{

public:
	int price;
	string nazva;
	int rate;

	Kaviarnia(string nazva, int price, int rate);
	void WritetoCons();
	string StrData();


};
#endif
