#include "stdafx.h" 
#include "AnnualReport.h" 

AnnualReport::AnnualReport(TabOfIncome* pRR, TabOfExpanses* pER) : ptrPL(pRR), ptrER(pER)
{
}

void AnnualReport::display()  //����������� ������ �� ������
{
	cout << "            ������� �����" << endl;
	cout << "--------------------------------------\n";
	cout << "--------------------------------------\n";
	cout << "                ������" << endl;
	cout << "--------------------------------------\n";
	cout << "�������:";
	income = ptrPL->getSumOfIncomes();
	cout << income << endl;
	cout << "--------------------------------------\n";
	cout << "                �������" << endl;
	cout << "--------------------------------------\n";
	cout << "  ���������        |   ���������\n";
	cout << "-------------------|------------------\n";
	expenses = ptrER->getSumOfExpenses();
	cout << "--------------------------------------\n";
	cout << "����� �������:";
	cout << expenses << endl;
	cout << "--------------------------------------\n";
	cout << "--------------------------------------\n";
	cout << "�������:  " << (income - expenses) << endl;
	cout << "--------------------------------------\n";
}