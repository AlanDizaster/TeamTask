#ifndef ANNUALREPORT_H  
#define ANNUALREPORT_H   
#include "TabOfIncome.h"
#include "TabOfExpenses.h"

class AnnualReport // Класс годового отчета
{
private:  TabOfIncome* ptrTOI;  //указатель на таблицу доходов       
		  TabOfExpanses* ptrTOE;  //указатель на таблицу расходов 
		  float expenses; //сумма расходоы
		  float income; //сумма доходов 

public:  AnnualReport(TabOfIncome*, TabOfExpanses*);
		 void display();  //отображение на экране
};
#endif  