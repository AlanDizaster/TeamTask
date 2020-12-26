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
	getaLine(payment);
	cout << "¬ведите дату платежа: ";
	cin >> datePay;
	cin.ignore(80, '\n');
	Expenses* ptrExpense = new Expenses(expenditure, recipient, payment, datePay);
	ptrExpenseList->insertExp(ptrExpense);
}