#ifndef AUTHENTIFICATION_H   
#define AUTHENTIFICATION_H 
#include "Profile.h"

class Authentication //����� ����� ������������
{
private:
	Profile* ptrProfile; //��������� �� ������������
	string addLogin;      //�����
	string addPassword;   //������
	int rules;  //����� �������
public:
	Authentication(Profile* ptrUL) : ptrProfile(ptrUL)
	{
	}
	int getRules(); //�������� ����� ����� �������
	void setUser(); //���� ������������
};

#endif   
