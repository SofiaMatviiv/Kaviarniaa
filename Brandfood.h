#ifndef BRANDFOOD_H
#define BRANDFOOD_H
#include "Kaviarnia.h"
#include <string>
using namespace std;
class Brandfood:public Kaviarnia {
	string root;
public:
	Brandfood(string nazva, int price, int rate, string root);
	void WritetoCons();
	string StrData();

};
#endif
