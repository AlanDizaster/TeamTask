#include "stdafx.h" 
#include "Authentication.h"

void Authentication::setUser()   //������ ����� � ������
{
	cout << "������� �����: " << endl;
	getLine(addLogin);
	cout << "������� ������: " << endl;
	getaLine(addPassword);
	rules = ptrProfile->access(addLogin, addPassword);
}

int Authentication::getRules()
{
	return rules;
}
