#ifndef DISPLAYSTABOFCLIENTS_H   
#define DISPLAYSTABOFCLIENTS_H 
#include <string> 
#include "TabOfClients.h"
using namespace std;

class ClientInputScreen  // экран ввода клиентов
{
private:
	ClientList* ptrClientList; //указатель на список клиентов
	string addName;     //Фамилия И.О
	string addRegNum; //Вид одежды
	string addService; //Услуга
	string addDate; //Дата обращения
public:
	ClientInputScreen(ClientList* ptrCL) : ptrClientList(ptrCL)
	{
	}
	void setClient(); //ввод клиента
};
#endif 