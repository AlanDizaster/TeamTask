#ifndef CLIENT_H   
#define CLIENT_H  
#include <string> 
using namespace std;

class Client // класс клиента
{
private:
	string name;   //фамилия и.о
	string reg_num; //вид одежды
	string service; //услуга
	string date;  //дата обращения

public:
	Client(string n, string rn, string s, string d);
	~Client();
	string getName(); //получить имя
	string getRegNum();//получить вид одежды
	string getService();//получить услугу
	string getDate();//получить дату обащения
};
#endif   