#ifndef DISPLAYTABOFEXPENSES_H   
#define DISPLAYTABOFEXPENSES_H  
#include "TabOfExpenses.h"

class ExpenseInputScreen //класс экрана ввода расходов
{
private:
	ExpenseInputScreen* ptrExpenseList; //указатель на таблицу расходов
public:  ExpenseInputScreen(ExpenseInputScreen*);
		 void setExpense(); //ввести расходы
};

#endif 


