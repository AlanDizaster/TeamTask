#include "stdafx.h" 
#include "AnnualReport.h" 

AnnualReport::AnnualReport(TabOfIncome* pRR, TabOfExpanses* pER) : ptrPL(pRR), ptrER(pER)
{
}

void AnnualReport::display()  //отображение данных на экране
{
	cout << "            Годовой отчет" << endl;
	cout << "--------------------------------------\n";
	cout << "--------------------------------------\n";
	cout << "                Доходы" << endl;
	cout << "--------------------------------------\n";
	cout << "Выручка:";
	income = ptrPL->getSumOfIncomes();
	cout << income << endl;
	cout << "--------------------------------------\n";
	cout << "                Расходы" << endl;
	cout << "--------------------------------------\n";
	cout << "  Категория        |   Стоимость\n";
	cout << "-------------------|------------------\n";
	expenses = ptrER->getSumOfExpenses();
	cout << "--------------------------------------\n";
	cout << "Общие расходы:";
	cout << expenses << endl;
	cout << "--------------------------------------\n";
	cout << "--------------------------------------\n";
	cout << "Прибыль:  " << (income - expenses) << endl;
	cout << "--------------------------------------\n";
}