#include "stdafx.h" 
#include "Client.h" 

Client::Client(string n, string rn, string s, string d) : name(n), reg_num(rn), service(s), date(d)
{
}

Client::~Client()

{
}

string Client::getName()  //получение имени
{
	return name;
}

string Client::getRegNum() //получение вида одежды
{
	return reg_num;
}

string Client::getService() //получение услуги
{
	return service;
}

string Client::getDate()  //получение даты
{
	return date;
}
