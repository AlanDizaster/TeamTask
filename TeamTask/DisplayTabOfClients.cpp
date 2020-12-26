#include "stdafx.h" 
#include "DisplayTabOfClients.h"

void DisplayTabOfClients::setClient()  //ввод клиентов
{
	cout << "ФИО Клиента: " ;
	getaLine(addName);
	cout << endl;
	cout << "Регистрационый номер автомобиля: ";
	getaLine(addRegNum);
	cout << endl;
	cout << "Оказываемая услуга: ";
	getline(cin, addService);
	cout << endl;
	cout << "Дата обращения (дд.мм.гггг): ";
	getaLine(addDate);
	cout << endl;
	Client* ptrClient = new Client(addName, addRegNum, addService, addDate);
	ptrTabOfClients->insertClient(ptrClient);    //добавить клиента в таблицу       

}