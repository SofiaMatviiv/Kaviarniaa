#ifndef KAVIARNIA_H
#define KAVIARNIA_H
#include<string>
using namespace std;

class Kaviarnia {
	string address;
	int avprice;
public:
	string nazva;
	int rate;

	void InfKaviarnia(string nazva, string address, int avprice, int rate);
	void WritetoCons();


};
#endif
