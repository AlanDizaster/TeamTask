#ifndef DISPLAYTABOFEXPENSES_H   
#define DISPLAYTABOFEXPENSES_H  
#include "TabOfExpenses.h"

class DisplayTabOfExpenses //����� ������ ����� ��������
{
private:
	TabOfExpanses* ptrExpenseList; //��������� �� ������� ��������
public:  DisplayTabOfExpenses(TabOfExpanses*);
		 void setExpense(); //������ �������
};

#endif 


