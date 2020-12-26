#include "stdafx.h" 
#include "TabOfClients.h"

TabOfClients::~TabOfClients()             //�������� ���� ������ � �������
{
	while (!setPtrsClients.empty())
	{
		iter = setPtrsClients.begin();
		delete *iter;
		setPtrsClients.erase(iter);
	}
}


void TabOfClients::insertClient(Client* ptrT) {  //���������� ������� � ������
	setPtrsClients.push_back(ptrT);
}

void TabOfClients::display()     //����������� ������� ��������
{
	cout << "\n��� �������        |��������������� �����        |��� ������              |    ���� ���������         \n";
	cout << "---------------------------------------------------------------------------------------------\n";
	if (setPtrsClients.empty())  //���� ������ ������
		cout << "---��� ��������---\n" << endl;
	else
	{
		iter = setPtrsClients.begin();
		while (iter != setPtrsClients.end()) //������� ��� ������ �������
		{
			cout << std::setw(15) << (*iter)->getName() << "    |     " << std::setw(15) << (*iter)->getRegNum() << "    |     " << std::setw(15) << (*iter)->getService() << "    |     " << std::setw(15) << (*iter)->getDate() << endl;
			*iter++;
		}
	}
}