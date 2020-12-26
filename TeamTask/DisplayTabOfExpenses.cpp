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
	cin >> payment;
	cin.ignore(80, '\n');
	cout << "������� ���� �������: ";
	getaLine(datePay);
	Expenses* ptrExpense = new Expenses(expenditure, recipient, payment, datePay);
	ptrExpenseList->insertExp(ptrExpense);
}