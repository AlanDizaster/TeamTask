#ifndef TABOFCLIENTS_H   
#define TABOFCLIENTS_H  
#include <list> 
#include "Client.h"

class ClientList //������ ��������
{
private:
	list <Client*> setPtrsClients;   // ��������� ������ ��������
	list <Client*>::iterator iter; //��������

public:  ~ClientList();
		 void insertClient(Client*); //�������� ������� � �������
		 void display();    //����������� �� ������      
};
#endif 