#ifndef TABOFEXPENSES_H    
#define TABOFEXPENSES_H   
#include <vector> 
#include "Expenses.h"

class TabOfExpanses  //класс таблицы расходов
{
private:
	vector<Expenses*> vectPtrsExpenses;  //указатель контейнер вектор на расходы
	vector<Expenses*>::iterator iter; //итератор расходов
public:
	~TabOfExpanses();
	void insertExp(Expenses*); //добавление в таблицу расходов
	void display(); //отображение на экране
	float getSumOfExpenses(); //расчитать сумму всех расходов
};

#endif 