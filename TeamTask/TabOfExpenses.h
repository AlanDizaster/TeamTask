#ifndef TABOFEXPENSES_H    
#define TABOFEXPENSES_H   
#include <vector> 
#include "Expenses.h"

class TabOfExpanses  //����� ������� ��������
{
private:
	vector<Expenses*> vectPtrsExpenses;  //��������� ��������� ������ �� �������
	vector<Expenses*>::iterator iter; //�������� ��������
public:
	~TabOfExpanses();
	void insertExp(Expenses*); //���������� � ������� ��������
	void display(); //����������� �� ������
	float getSumOfExpenses(); //��������� ����� ���� ��������
};

#endif 