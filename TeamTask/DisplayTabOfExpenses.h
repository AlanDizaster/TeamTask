#ifndef DISPLAYTABOFEXPENSES_H   
#define DISPLAYTABOFEXPENSES_H  
#include "TabOfExpenses.h"

class ExpenseInputScreen //����� ������ ����� ��������
{
private:
	ExpenseInputScreen* ptrExpenseList; //��������� �� ������� ��������
public:  ExpenseInputScreen(ExpenseInputScreen*);
		 void setExpense(); //������ �������
};

#endif 


