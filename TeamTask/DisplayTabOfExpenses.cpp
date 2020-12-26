#include "stdafx.h" 
#include "DisplayTabOfExpenses.h" 

DisplayTabOfExpenses::DisplayTabOfExpenses(TabOfExpanses* per) : ptrExpenseList(per)
{
}

void DisplayTabOfExpenses::setExpense()  //����� ����� ��������
{

	string expenditure, recipient, datePay;
	float payment;
	cout << "������� ������: ";
	getaLine(expenditure);
	cout << "������� ����������: ";
	getaLine(recipient);
	cout << "������� ����� �������: ";
	getaLine(payment);
	cout << "������� ���� �������: ";
	cin >> datePay;
	cin.ignore(80, '\n');
	Expenses* ptrExpense = new Expenses(expenditure, recipient, payment, datePay);
	ptrExpenseList->insertExp(ptrExpense);
}