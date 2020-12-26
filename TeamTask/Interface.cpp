#include "stdafx.h" 
#include "Interface.h" 

Interface::Interface()
{
	ptrTabOfClients = new TabOfClients;
	ptrTabOfIncome = new TabOfIncome;
	ptrTabOfExpenses = new TabOfExpanses;
}


Interface::~Interface()
{
	delete ptrTabOfClients;
	delete ptrTabOfIncome;
	delete ptrTabOfExpenses;
}



void Interface::interact()  //����������� �������� ����
{
	do
	{
		ptrAuthentication = new Authentication(ptrUser);
		ptrAuthentication->setUser();     //��������� � ������ ����� ������ � ������
		system("cls");
		if (ptrAuthentication->getRules() == 3) cout << "������ �����������n"; //������������������ ������������
	} while (ptrAuthentication->getRules() == 3);

	while (true)
	{

		cout << "\n";
		cout << "|       �������� ��������          |\n";
		cout << "|----------------------------------|\n";
		cout << "| ����� ������ ������ ������� 1    |\n";
		if (ptrAuthentication->getRules() == 1) cout << "| ����� ������� ������ ������� 2   |\n";  //���������� ��� ���� ������ ���� ��� ��������
		cout << "| ��� ������ ������� 3             |\n";
		ch = getaChar();
		system("cls");
		if (ch == '1')       // ���� ����� ������
		{
			cout << "\n";
			cout << "|          ������ ������               |\n";
			cout << "|--------------------------------------|\n";
			cout << "| ��� ����� ������ ������� ������� 1   |\n";
			cout << "| ��� ����� ������ ������� 2           |\n";
			cout << "| ��� ����� ������ ������� 3           |\n";
			ch = getaChar();
			system("cls");
			switch (ch)
			{

			case '1': ptrDisplayTabOfClients = new DisplayTabOfClients(ptrTabOfClients);
				ptrDisplayTabOfClients->setClient();
				delete ptrDisplayTabOfClients;
				break;
				break;
			case '2': ptrDisplayTabOfIncome = new DisplayTabOfIncome(ptrTabOfIncome);
				ptrDisplayTabOfIncome->setIncome();
				delete ptrDisplayTabOfIncome;
				break;
			case '3': ptrDisplayTabOfExpenses = new DisplayTabOfExpenses(ptrTabOfExpenses);
				ptrDisplayTabOfExpenses->setExpense();
				delete ptrDisplayTabOfExpenses;
				break;
			default: cout << "������ �������� �����\n";
				break;
			}
		}
		else if (ch == '2')       //���� ������ ������
		{
			if (ptrAuthentication->getRules() == 1)  // �������� ���� ��������
			{
				cout << "\n";
				cout << "|     ������� ������            |\n";
				cout << "|-------------------------------|\n";
				cout << "| ��� ������ ������� �������� 1 |\n";
				cout << "| ��� ������ ������� ������� 2  |\n";
				cout << "| ��� ������ ������� �������� 3 |\n";
				cout << "| ��� ������ ������� ������ 4   |\n";

				ch = getaChar();
				system("cls");
				switch (ch)
				{
				case '1': ptrTabOfClients->display();
					break;
				case '2':ptrTabOfIncome->display();
					break;
				case '3': ptrTabOfExpenses->display();
					break;
				case '4':ptrAnnualReport = new AnnualReport(ptrTabOfIncome, ptrTabOfExpenses);
					ptrAnnualReport->display();
					delete ptrAnnualReport;
					break;
				default: cout << "������ �������� �����\n";
					break;
				}

			}
		}

		else if (ch == '3')  //����� �� ���������
			return;
		else     cout << "������ �������� �����\n";
	}
	delete ptrAuthentication;
}
