// TeamTask.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Interface.h"

int _tmain(int argc, _TCHAR* argv[])
{
	system("chcp 1251 > nul");
	Interface theUserInterface;
	theUserInterface.interact();
	return 0;
}

