#ifndef ANNUALREPORT_H  
#define ANNUALREPORT_H   
#include "TabOfIncome.h"
#include "TabOfExpenses.h"

class AnnualReport // Класс годового отчета
{
private:  TabOfIncome* ptrPL;  //указатель на таблицу доходов       
		  TabOfExpanses* ptrER;  //указатель на таблицу расходов 
		  float expenses; //сумма расходоы
		  float income; //сумма доходов 

public:  AnnualReport(TabOfIncome*, TabOfExpanses*);
		 void display();  //отображение на экране
};
#endif  