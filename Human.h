#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
#include <string>
#include "Entity.h"
using namespace std;


class Human :public Entity
{
public:
	string FirstName;
	string SecondName;
	Human(string FirstName, string SecondName);

};



#endif // !HUMAN_H