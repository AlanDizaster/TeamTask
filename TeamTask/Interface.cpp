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



void Interface::interact()  //отображение главного меню
{
	do
	{
		ptrAuthentication = new Authentication(ptrUser);
		ptrAuthentication->setUser();     //обращение к методу ввода логина и пароля
		system("cls");
		if (ptrAuthentication->getRules() == 3) cout << "Ошибка авторизацииn"; //неавторизированный пользователь
	} while (ptrAuthentication->getRules() == 3);

	while (true)
	{

		cout << "\n";
		cout << "|       Выберите действие          |\n";
		cout << "|----------------------------------|\n";
		cout << "| Чтобы ввести данные введите 1    |\n";
		if (ptrAuthentication->getRules() == 1) cout << "| Чтобы вывести данные введите 2   |\n";  //отображать это меню только если это директор
		cout << "| Для выхода введите 3             |\n";
		ch = getaChar();
		system("cls");
		if (ch == '1')       // меню ввода данных
		{
			cout << "\n";
			cout << "|          Ввести данные               |\n";
			cout << "|--------------------------------------|\n";
			cout << "| Для ввода нового клиента введите 1   |\n";
			cout << "| Для ввода дохода введите 2           |\n";
			cout << "| Для ввода дохода введите 3           |\n";
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
			default: cout << "Выбран неверный номер\n";
				break;
			}
		}
		else if (ch == '2')       //меню вывода данных
		{
			if (ptrAuthentication->getRules() == 1)  // выводить если директор
			{
				cout << "\n";
				cout << "|     Вывести данные            |\n";
				cout << "|-------------------------------|\n";
				cout << "| Для вывода таблицы клиентов 1 |\n";
				cout << "| Для вывода таблицы доходов 2  |\n";
				cout << "| Для вывода таблицы расходов 3 |\n";
				cout << "| Для вывода таблицы отчета 4   |\n";

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
				default: cout << "Выбран неверный номер\n";
					break;
				}

			}
		}

		else if (ch == '3')  //выход из программы
			return;
		else     cout << "Выбран неверный номер\n";
	}
	delete ptrAuthentication;
}
