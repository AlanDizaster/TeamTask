#ifndef ANNUALREPORT_H  
#define ANNUALREPORT_H   
#include "TabOfIncome.h"
#include "TabOfExpenses.h"

class AnnualReport // ����� �������� ������
{
private:  TabOfIncome* ptrPL;  //��������� �� ������� �������       
		  TabOfExpanses* ptrER;  //��������� �� ������� �������� 
		  float expenses; //����� ��������
		  float income; //����� ������� 

public:  AnnualReport(TabOfIncome*, TabOfExpanses*);
		 void display();  //����������� �� ������
};
#endif  