#ifndef TABOFCLIENTS_H   
#define TABOFCLIENTS_H  
#include <list> 
#include "Client.h"

class TabOfClients //������ ��������
{
private:
	list <Client*> setPtrsClients;   // ��������� ������ ��������
	list <Client*>::iterator iter; //��������

public:  ~TabOfClients();
		 void insertClient(Client*); //�������� ������� � �������
		 void display();    //����������� �� ������      
};
#endif 