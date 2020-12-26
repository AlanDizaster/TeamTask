#ifndef DISPLAYTABOFINCOME_H   
#define DISPLAYTABOFINCOME_H     
#include "TabOfClients.h"
#include "TabOfIncome.h"
#include <string> 

using namespace std;
class DisplayTabOfIncome //класс экрана ввода доходов
{
private:
	TabOfIncome* ptrTabOfIncome; //указатель на таблицу доходов
	string addName; //ФИО клиента введное пользователем
	float addPriceService; //стоимость услуги введная пользователем
	float addPriceMaterials; //стоимость материалов введная пользователем
	string addDatePrice; //дата оплаты введное пользователем
public:
	DisplayTabOfIncome(TabOfIncome* ptrPL) : ptrTabOfIncome(ptrPL)
	{
	}
	void setProfit();  //ввод доходов
};
#endif