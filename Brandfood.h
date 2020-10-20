#ifndef BRANDFOOD_H
#define BRANDFOOD_H

#include "Kaviarnia.h"
#include <string>
using namespace std;
class Brandf {
	string brfood;
	string cafe;

	int price;
public:
	void InfBrandfood(string cafe, string brfood, int price);
	void WritetoCons();

};
#endif
