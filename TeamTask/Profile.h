#ifndef PROFILE_H   
#define PROFILE_H   
#include <string> 
using namespace std;

class Profile // класс профиля пользователя
{
private:
	string login; //логин
	string password; //пароль
public:
	Profile(string l, string p);
	~Profile();
	int access(string l, string p);  //доступ
};
#endif