#ifndef DISPLAYSTABOFCLIENTS_H   
#define DISPLAYSTABOFCLIENTS_H 
#include <string> 
#include "TabOfClients.h"

using namespace std;

class DisplayTabOfClients  // ����� ����� ��������
{
private:
	TabOfClients* ptrTabOfClients; //��������� �� ������ ��������
	string addName;     //������� �.�
	string addRegNum; //��� ������
	string addService; //������
	string addDate; //���� ���������
public:
	DisplayTabOfClients(TabOfClients* ptrCL) : ptrTabOfClients(ptrCL)
	{
	}
	void setClient(); //���� �������
};
#endif 