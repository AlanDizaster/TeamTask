#ifndef DISPLAYTABOFEXPENSES_H   
#define DISPLAYTABOFEXPENSES_H  
#include "TabOfExpenses.h"

class DisplayTabOfExpenses //класс экрана ввода расходов
{
private:
	TabOfExpanses* ptrExpenseList; //указатель на таблицу расходов
public:  DisplayTabOfExpenses(TabOfExpanses*);
		 void setExpense(); //ввести расходы
};

#endif 


