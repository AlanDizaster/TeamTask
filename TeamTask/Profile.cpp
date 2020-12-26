#include "stdafx.h" 
#include "Profile.h" 

Profile::Profile(string l, string p) : login(l), password(p)
{
}

Profile::~Profile()
{
}

int Profile::access(string l, string p)  //проверка на доступ
{
	if ("admin" == l && "admin" == p) return 1;
	else if ("user" == l && "user" == p)  return 2;
	else return 3;
}