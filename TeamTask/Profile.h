#ifndef PROFILE_H   
#define PROFILE_H   
#include <string> 
using namespace std;

class Profile // ����� ������� ������������
{
private:
	string login; //�����
	string password; //������
public:
	Profile(string l, string p);
	~Profile();
	int access(string l, string p);  //������
};
#endif