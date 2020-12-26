#ifndef TABOFCLIENTS_H   
#define TABOFCLIENTS_H  
#include <list> 
#include "Client.h"

class ClientList //список клиентов
{
private:
	list <Client*> setPtrsClients;   // контейнер список клиентов
	list <Client*>::iterator iter; //итератор

public:  ~ClientList();
		 void insertClient(Client*); //внесение клиента в таблицу
		 void display();    //отображение на экране      
};
#endif 