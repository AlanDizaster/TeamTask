#include "stdafx.h" 
#include "Client.h" 

Client::Client(string n, string rn, string s, string d) : name(n), reg_num(rn), service(s), date(d)
{
}

Client::~Client()

{
}

string Client::getName()  //��������� �����
{
	return name;
}

string Client::getRegNum() //��������� ���� ������
{
	return reg_num;
}

string Client::getService() //��������� ������
{
	return service;
}

string Client::getDate()  //��������� ����
{
	return date;
}
