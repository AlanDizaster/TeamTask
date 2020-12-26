#include "stdafx.h" 
#include "Income.h" 

Income::Income(string n, float pC, float pS, string dP) : name(n), priceService(pC), priceMaterials(pS), datePrice(dP)
{
}
// Методы получения имени, даты, стоимости услуг и материалов
string Income::getName()
{
	return name;
}

string Income::getDate()
{
	return datePrice;
}

float Income::getPriceMaterials()
{
	return priceMaterials;
}

float Income::getPriceService()
{
	return priceService;
}