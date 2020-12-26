#ifndef EXPENSES_H  
#define EXPENSES_H   
#include <string> 
using namespace std;

class Expenses //класс расходов
{
public:
	string expenditure;   //статья расхода  
	string recipient;    //получатель платежа        
	float payment;   //сумма платежа
	string datePay;  //дата оплаты
	Expenses(){}
	Expenses(string e, string r, float p, string d) : expenditure(e), recipient(r), payment(p), datePay(d)
	{
	}
};
#endif 
