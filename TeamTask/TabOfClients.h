#ifndef TABOFCLIENTS_H   
#define TABOFCLIENTS_H  
#include <list> 
#include "Client.h"

class TabOfClients //список клиентов
{
private:
	list <Client*> setPtrsClients;   // контейнер список клиентов
	list <Client*>::iterator iter; //итератор

public:  ~TabOfClients();
		 void insertClient(Client*); //внесение клиента в таблицу
		 void display();    //отображение на экране      
};
#endif 