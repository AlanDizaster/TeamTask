#include "stdafx.h" 
#include "DisplayTabOfIncome.h" 

void DisplayTabOfIncome::setProfit()
{
	cout << "������� ��� �������: " << endl;
	getaLine(addName);
	cout << "������� ��������� ������: " << endl;
	cin >> addPriceService; cin.ignore(80, '\n');
	cout << "������� ��������� ����������: " << endl;
	cin >> addPriceMaterials; cin.ignore(80, '\n');
	cout << "������� ���� ������: " << endl;
	getaLine(addDatePrice);
	Income* ptrIncome = new Income(addName, addPriceService, addPriceMaterials, addDatePrice);
	ptrTabOfIncome->insertIncome(ptrIncome);
}


