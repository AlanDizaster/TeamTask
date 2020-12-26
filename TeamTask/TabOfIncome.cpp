#include "stdafx.h" 
#include "TabOfIncome.h" 
using namespace std;

TabOfIncome::~TabOfIncome()
{
	while (!setPtrsRR.empty())
	{
		iter = setPtrsRR.begin();
		delete *iter;
		setPtrsRR.erase(iter);
	}
}


void TabOfIncome::insertIncome(Income* ptrRow) {
	setPtrsRR.push_back(ptrRow);
}



void TabOfIncome::display()       //����������� �� ������ �������                  
{

	cout << "\n��� �������        |��������� ������        |��������� ����������    |�����                  |���� ������\n";
	if (setPtrsRR.empty())
		cout << "---��� �������---\n" << endl;
	else
	{
		iter = setPtrsRR.begin();
		while (iter != setPtrsRR.end())
		{

			cout << std::setw(15) << (*iter)->getName() << "    |     " << std::setw(15) << (*iter)->getPriceService() << "    |     " << std::setw(15) << (*iter)->getPriceMaterials() << "    |     " << std::setw(15) << (*iter)->getPriceMaterials() + (*iter)->getPriceService() << "    |     " << std::setw(15) << (*iter)->getDate() << endl;
			*iter++;
		}
	}
}

float TabOfIncome::getSumOfIncomes()  //����� ����� �������
{
	float sumProfits = 0.0;
	iter = setPtrsRR.begin();
	while (iter != setPtrsRR.end())
	{
		sumProfits += (*iter)->getPriceMaterials() + (*iter)->getPriceService();
		iter++;
	}
	return sumProfits;
}

