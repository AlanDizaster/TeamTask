#include "stdafx.h" 
#include "DisplayTabOfClients.h"

void DisplayTabOfClients::setClient()  //���� ��������
{
	cout << "��� �������: " ;
	getaLine(addName);
	cout << endl;
	cout << "�������������� ����� ����������: ";
	getaLine(addRegNum);
	cout << endl;
	cout << "����������� ������: ";
	getline(cin, addService);
	cout << endl;
	cout << "���� ��������� (��.��.����): ";
	getaLine(addDate);
	cout << endl;
	Client* ptrClient = new Client(addName, addRegNum, addService, addDate);
	ptrTabOfClients->insertClient(ptrClient);    //�������� ������� � �������       

}