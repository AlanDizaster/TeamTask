#ifndef INCOME_H    
#define INCOME_H   
#include <string> 


using namespace std;
class Income //����� �������
{
private:
	string name; //��� �������
	float priceService; //��������� ������
	float priceMaterials; //��������� ����������
	string datePrice;//���� ������
public:
	Income(string, float, float, string);
	string getName();            //�������� ���
	float getPriceService(); //�������� ��������� ������
	float getPriceMaterials(); //�������� ��������� ����������
	string getDate(); //�������� ���� ������
};
#endif
