#ifndef TABOFINCOME_H   
#define TABOFINCOME_H    
#include <list> 
#include "Income.h"

class TabOfIncome  //таблица доходов
{
private:

	list <Income*> setPtrsRR;  //указатель на доходы
	list <Income*>::iterator iter; //итератор
public:
	~TabOfIncome();
	void insertIncome(Income*);   //добавление в таблицу доходов
	void display();         //отображение на экране           
	float getSumOfIncomes();   //сумма всех доходов
};

#endif  