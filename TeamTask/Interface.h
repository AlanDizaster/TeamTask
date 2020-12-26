#ifndef INTERFACE_H   
#define INTERFACE_H  
#include "TabOfClients.h"
#include "DisplayTabOfClients.h"
#include "Profile.h"
#include "Authentication.h"
#include "TabOfExpenses.h"
#include "DisplayTabOfExpenses.h"
#include "TabOfIncome.h"
#include "DisplayTabOfIncome.h"
#include "AnnualReport.h"

class Interface
{
private:
	//указатели на таблицы и экраны ввода
	Authentication* ptrAuthentication;
	Profile* ptrUser;
	DisplayTabOfClients* ptrCDisplayTabOfClients;
	TabOfClients* ptrClientInputScreen;
	TabOfIncome* ptrTabOfIncome;
	DisplayTabOfIncome* ptrDisplayTabOfIncome;
	TabOfExpanses* ptrExpenseList;
	DisplayTabOfExpenses* ptrDisplayTabOfExpenses;
	AnnualReport* ptrAnnualReport;
	char ch;
public:
	Interface();
	~Interface();
	void interact(); //основной интерфейс программы
};

#endif