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
	cout << "����������� ������: " << endl;
	getline(cin, addService);
	cout << endl;
	cout << "���� ��������� (��.��.����): " << endl;
	getaLine(addDate);
	cout << endl;
	Client* ptrClient = new Client(addName, addRegNum, addService, addDate);
	ptrTabOfClients->insertClient(ptrClient);    //�������� ������� � �������       

}