#ifndef DISPLAYSTABOFCLIENTS_H   
#define DISPLAYSTABOFCLIENTS_H 
#include <string> 
#include "TabOfClients.h"

using namespace std;

class DisplayTabOfClients  // ����� ����� ��������
{
private:
	DisplayTabOfClients* ptrDisplayTabOfClients; //��������� �� ������ ��������
	string addName;     //������� �.�
	string addRegNum; //��� ������
	string addService; //������
	string addDate; //���� ���������
public:
	DisplayTabOfClients(DisplayTabOfClients* ptrCL) : ptrDisplayTabOfClients(ptrCL)
	{
	}
	void setClient(); //���� �������
};
#endif 