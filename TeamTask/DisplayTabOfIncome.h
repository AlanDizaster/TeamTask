#ifndef DISPLAYTABOFINCOME_H   
#define DISPLAYTABOFINCOME_H     
#include "TabOfClients.h"
#include "TabOfIncome.h"
#include <string> 

using namespace std;
class DisplayTabOfIncome //����� ������ ����� �������
{
private:
	TabOfIncome* ptrTabOfIncome; //��������� �� ������� �������
	string addName; //��� ������� ������� �������������
	float addPriceService; //��������� ������ ������� �������������
	float addPriceMaterials; //��������� ���������� ������� �������������
	string addDatePrice; //���� ������ ������� �������������
public:
	DisplayTabOfIncome(TabOfIncome* ptrPL) : ptrTabOfIncome(ptrPL)
	{
	}
	void setProfit();  //���� �������
};
#endif