#include "stdafx.h" 
#include "Authentication.h"

void Authentication::setUser()   //������ ����� � ������
{
	cout << "������� �����: " << endl;
	getaLine(addLogin);
	cout << "������� ������: " << endl;
	getaLine(addPassword);
	rules = ptrProfile->access(addLogin, addPassword);
}

int Authentication::getRules()
{
	return rules;
}
