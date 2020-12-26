#include "stdafx.h" 
#include "DisplayTabOfExpenses.h" 

DisplayTabOfExpenses::DisplayTabOfExpenses(TabOfExpanses* per) : ptrExpenseList(per)
{
}

void DisplayTabOfExpenses::setExpense()  //экран ввода расходов
{

	string expenditure, recipient, datePay;
	float payment;
	cout << "¬ведите статью: ";
	getaLine(expenditure);
	cout << "¬ведите получател€: ";
	getaLine(recipient);
	cout << "¬ведите сумму платежа: ";
	cin >> payment;
	cin.ignore(80, '\n');
	cout << "¬ведите дату платежа: ";
	getaLine(datePay);
	Expenses* ptrExpense = new Expenses(expenditure, recipient, payment, datePay);
	ptrExpenseList->insertExp(ptrExpense);
}