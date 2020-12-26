#ifndef TABOFINCOME_H   
#define TABOFINCOME_H    
#include <list> 
#include "Income.h"

class TabOfIncome  //������� �������
{
private:

	list <Income*> setPtrsRR;  //��������� �� ������
	list <Income*>::iterator iter; //��������
public:
	~TabOfIncome();
	void insertIncome(Income*);   //���������� � ������� �������
	void display();         //����������� �� ������           
	float getSumOfIncomes();   //����� ���� �������
};

#endif  