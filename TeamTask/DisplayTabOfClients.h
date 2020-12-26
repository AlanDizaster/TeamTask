#ifndef DISPLAYSTABOFCLIENTS_H   
#define DISPLAYSTABOFCLIENTS_H 
#include <string> 
#include "TabOfClients.h"
using namespace std;

class ClientInputScreen  // ����� ����� ��������
{
private:
	ClientList* ptrClientList; //��������� �� ������ ��������
	string addName;     //������� �.�
	string addRegNum; //��� ������
	string addService; //������
	string addDate; //���� ���������
public:
	ClientInputScreen(ClientList* ptrCL) : ptrClientList(ptrCL)
	{
	}
	void setClient(); //���� �������
};
#endif 