#include "stdafx.h" 
#include "DisplayTabOfIncome.h" 

void DisplayTabOfIncome::setProfit()
{
	cout << "¬ведите ‘»ќ клиента: " << endl;
	getaLine(addName);
	cout << "¬ведите стоимость услуги: " << endl;
	cin >> addPriceService; cin.ignore(80, '\n');
	cout << "¬ведите стоимость материалов: " << endl;
	cin >> addPriceMaterials; cin.ignore(80, '\n');
	cout << "¬ведите дату оплаты: " << endl;
	getaLine(addDatePrice);
	Income* ptrIncome = new Income(addName, addPriceService, addPriceMaterials, addDatePrice);
	ptrTabOfIncome->insertIncome(ptrIncome);
}


