#include "stdafx.h" 
#include "TabOfClients.h"

TabOfClients::~TabOfClients()             //удаление всей памяти о клиенте
{
	while (!setPtrsClients.empty())
	{
		iter = setPtrsClients.begin();
		delete *iter;
		setPtrsClients.erase(iter);
	}
}


void TabOfClients::insertClient(Client* ptrT) {  //добавление клиента в список
	setPtrsClients.push_back(ptrT);
}

void TabOfClients::display()     //отображение таблицы клиентов
{
	cout << "\nФИО Клиента        |Регистрационный номер        |Вид Услуги              |    Дата обращения         \n";
	cout << "---------------------------------------------------------------------------------------------\n";
	if (setPtrsClients.empty())  //если список пустой
		cout << "---Нет клиентов---\n" << endl;
	else
	{
		iter = setPtrsClients.begin();
		while (iter != setPtrsClients.end()) //вывести все строки таблицы
		{
			cout << std::setw(15) << (*iter)->getName() << "    |     " << std::setw(15) << (*iter)->getRegNum() << "    |     " << std::setw(15) << (*iter)->getService() << "    |     " << std::setw(15) << (*iter)->getDate() << endl;
			*iter++;
		}
	}
}