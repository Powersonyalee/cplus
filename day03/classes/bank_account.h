//bank_account.h
# include <iostream>

using namespace std;

class BankAccount {

	string ano;  // 계좌번호		(참고)class는 가능한 문자가 좋음
	string owner; //계좌주
	int balance;  //잔고


public:
	void setAno(string ano);
	string getAno();
	
	void setOwer(string owner);
	string getOwer();

	void setbalance(int balance);
	int getbalance();

};


