#ifndef CLIENT_H   
#define CLIENT_H  
#include <string> 
using namespace std;

class Client // ����� �������
{
private:
	string name;   //������� �.�
	string reg_num; //��� ������
	string service; //������
	string date;  //���� ���������

public:
	Client(string n, string rn, string s, string d);
	~Client();
	string getName(); //�������� ���
	string getRegNum();//�������� ��� ������
	string getService();//�������� ������
	string getDate();//�������� ���� ��������
};
#endif   