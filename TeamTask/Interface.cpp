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
		cout << "| ����� ������ ������ ������� i    |\n";
		if (ptrAuthentication->getRules() == 1) cout << "| ����� ������� ������ ������� d   |\n";  //���������� ��� ���� ������ ���� ��� ��������
		cout << "| ��� ������ ������� e             |\n";
		ch = getaChar();
		system("cls");
		if (ch == 'i')       // ���� ����� ������
		{
			cout << "\n";
			cout << "|          ������ ������               |\n";
			cout << "|--------------------------------------|\n";
			cout << "| ��� ����� ������ ������� ������� c   |\n";
			cout << "| ��� ����� ������ ������� i           |\n";
			cout << "| ��� ����� ������� ������� e          |\n";
			ch = getaChar();
			system("cls");
			switch (ch)
			{

			case 'c': ptrDisplayTabOfClients = new DisplayTabOfClients(ptrTabOfClients);
				ptrDisplayTabOfClients->setClient();
				delete ptrDisplayTabOfClients;
				break;
				break;
			case 'i': ptrDisplayTabOfIncome = new DisplayTabOfIncome(ptrTabOfIncome);
				ptrDisplayTabOfIncome->setIncome();
				delete ptrDisplayTabOfIncome;
				break;
			case 'e': ptrDisplayTabOfExpenses = new DisplayTabOfExpenses(ptrTabOfExpenses);
				ptrDisplayTabOfExpenses->setExpense();
				delete ptrDisplayTabOfExpenses;
				break;
			default: cout << "������ �������� �����\n";
				break;
			}
		}
		else if (ch == 'd')       //���� ������ ������
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

		else if (ch == 'e')  //����� �� ���������
			return;
		else     cout << "������ �������� �����\n";
	}
	delete ptrAuthentication;
}
