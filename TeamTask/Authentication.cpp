#include "stdafx.h" 
#include "Authentication.h"

void Authentication::setUser()   //ввести логин и пароль
{
	cout << "¬ведите логин: " << endl;
	getaLine(addLogin);
	cout << "¬ведите пароль: " << endl;
	getaLine(addPassword);
	rules = ptrProfile->access(addLogin, addPassword);
}

int Authentication::getRules()
{
	return rules;
}
