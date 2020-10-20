#include "Command.h"
#include"Human.h"
#include <iostream>

Human::Human() {};
void Human::Information(string FirstName, string SecondName) {

	this->FirstName = FirstName;

	this->SecondName = SecondName;


}

void Human::WritetoCons() {

	cout << "----Information about people-----" << endl;

}