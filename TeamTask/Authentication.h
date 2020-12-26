#ifndef AUTHENTICATION_H   
#define AUTHENTICATION_H 
#include "Profile.h"

class Authentication //экран ввода пользователя
{
private:
	Profile* ptrProfile; //указатель на пользователя
	string addLogin;      //логин
	string addPassword;   //пароль
	int rules;  //права доступа
public:
	Authentication(Profile* ptrUL) : ptrProfile(ptrUL)
	{
	}
	int getRules(); //получить номер права доступа
	void setUser(); //ввод пользователя
};

#endif   
