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
		cout << "| Чтобы ввести данные введите i    |\n";
		if (ptrAuthentication->getRules() == 1) cout << "| Чтобы вывести данные введите d   |\n";  //отображать это меню только если это директор
		cout << "| Для выхода введите e             |\n";
		ch = getaChar();
		system("cls");
		if (ch == 'i')       // меню ввода данных
		{
			cout << "\n";
			cout << "|          Ввести данные               |\n";
			cout << "|--------------------------------------|\n";
			cout << "| Для ввода нового клиента введите c   |\n";
			cout << "| Для ввода дохода введите i           |\n";
			cout << "| Для ввода расхода введите e          |\n";
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
			default: cout << "Выбран неверный номер\n";
				break;
			}
		}
		else if (ch == 'd')       //меню вывода данных
		{
			if (ptrAuthentication->getRules() == 1)  // выводить если директор
			{
				cout << "\n";
				cout << "|     Вывести данные            |\n";
				cout << "|-------------------------------|\n";
				cout << "| Для вывода таблицы клиентов c |\n";
				cout << "| Для вывода таблицы доходов i  |\n";
				cout << "| Для вывода таблицы расходов e |\n";
				cout << "| Для вывода таблицы отчета a   |\n";

				ch = getaChar();
				system("cls");
				switch (ch)
				{
				case 'c': ptrTabOfClients->display();
					break;
				case 'i':ptrTabOfIncome->display();
					break;
				case 'e': ptrTabOfExpenses->display();
					break;
				case 'a':ptrAnnualReport = new AnnualReport(ptrTabOfIncome, ptrTabOfExpenses);
					ptrAnnualReport->display();
					delete ptrAnnualReport;
					break;
				default: cout << "Выбран неверный номер\n";
					break;
				}

			}
		}

		else if (ch == 'e')  //выход из программы
			return;
		else     cout << "Выбран неверный номер\n";
	}
	delete ptrAuthentication;
}
