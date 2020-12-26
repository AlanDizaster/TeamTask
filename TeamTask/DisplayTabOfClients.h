#ifndef DISPLAYSTABOFCLIENTS_H   
#define DISPLAYSTABOFCLIENTS_H 
#include <string> 
#include "TabOfClients.h"

using namespace std;

class DisplayTabOfClients  // экран ввода клиентов
{
private:
	TabOfClients* ptrTabOfClients; //указатель на список клиентов
	string addName;     //Фамилия И.О
	string addRegNum; //Вид одежды
	string addService; //Услуга
	string addDate; //Дата обращения
public:
	DisplayTabOfClients(TabOfClients* ptrCL) : ptrTabOfClients(ptrCL)
	{
	}
	void setClient(); //ввод клиента
};
#endif 