#ifndef EXPENSES_H  
#define EXPENSES_H   
#include <string> 
using namespace std;

class Expenses //����� ��������
{
public:
	string expenditure;   //������ �������  
	string recipient;    //���������� �������        
	float payment;   //����� �������
	string datePay;  //���� ������
	Expenses(){}
	Expenses(string e, string r, float p, string d) : expenditure(e), recipient(r), payment(p), datePay(d)
	{
	}
};
#endif 
