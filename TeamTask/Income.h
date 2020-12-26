#ifndef INCOME_H    
#define INCOME_H   
#include <string> 


using namespace std;
class Income //Класс доходов
{
private:
	string name; //имя клиента
	float priceService; //стоимость услуги
	float priceMaterials; //стоимость материалов
	string datePrice;//дата оплаты
public:
	Income(string, float, float, string);
	string getName();            //получить имя
	float getPriceService(); //получить стоимость услуги
	float getPriceMaterials(); //получить стоимость материалов
	string getDate(); //получить дату оплаты
};
#endif
