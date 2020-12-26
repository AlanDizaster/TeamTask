#ifndef CLIENT_H   
#define CLIENT_H  
#include <string> 
using namespace std;

class Client // класс клиента
{
private:
	string name;   //ФИО
	string reg_num; //рег. номер машины владельца
	string service; //услуга
	string date;  //дата обращения

public:
	Client(string n, string rn, string s, string d);
	~Client();
	string getName(); //получить ФИО
	string getRegNum();//получить рег. номер машины
	string getService();//получить услугу
	string getDate();//получить дату обащения
};
#endif   