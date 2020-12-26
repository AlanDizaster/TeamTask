#include "stdafx.h" 
#include "TabOfExpenses.h" 

TabOfExpanses::~TabOfExpanses()
{
	while (!vectPtrsExpenses.empty())
	{
		iter = vectPtrsExpenses.begin();
		delete *iter;
		vectPtrsExpenses.erase(iter);
	}
}

void TabOfExpanses::insertExp(Expenses* ptrExp)   //добавление в таблицу расходов
{
	vectPtrsExpenses.push_back(ptrExp);
}

void TabOfExpanses::display()      //отображение на экране данных о расходах          
{
	cout << "\nСтаться расходов   |Получатель              |Сумма платежа           |Дата платежа\n";
	if (vectPtrsExpenses.size() == 0)
		cout << "Расходов не найдено\n" << endl;
	else
	{
		iter = vectPtrsExpenses.begin();
		while (iter != vectPtrsExpenses.end())
		{
			cout << std::setw(15) << (*iter)->expenditure << "    |     " << std::setw(15) << (*iter)->recipient << "    |     " << std::setw(15) << (*iter)->payment <<  "    |     " << std::setw(15) << (*iter)->datePay << endl;
			iter++;
		}
		cout << endl;
	}
}

float TabOfExpanses::getSumOfExpenses()   //общая сумма расходов
{
	float totalExpenses = 0;
	if (vectPtrsExpenses.size() == 0)
	{
		cout << "Расходов нет\n";
		return 0;
	}
	iter = vectPtrsExpenses.begin();
	while (iter != vectPtrsExpenses.end())
	{
		cout << std::setw(15) << ((*iter)->expenditure) << "    | " << std::setw(15) << ((*iter)->payment) << endl;
		totalExpenses += (*iter)->payment;
		iter++;
	}
	return totalExpenses;
}
