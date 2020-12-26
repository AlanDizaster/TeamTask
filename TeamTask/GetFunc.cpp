#include <iostream> 
#include "stdafx.h" 
#include "GetFunc.h"

void getaLine(string& inStr) //функция ввода строки
{
	char temp[21];
	cin.get(temp, 20, '\n');
	cin.ignore(20, '\n');
	inStr = temp;
}

char getaChar()                  //функция ввода символа   
{
	char ch = cin.get();
	cin.ignore(80, '\n');
	return ch;
}