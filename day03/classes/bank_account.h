//bank_account.h
# include <iostream>

using namespace std;

class BankAccount {

	string ano;  // 계좌번호		(참고)class는 가능한 문자가 좋음
	string owner; //계좌주
	int balance;  //잔고


public:
	BankAccount(); //기본생성자  // main에서 사용했으므로 명시해야
	BankAccount(string a, string own, int bal); // 매개변수 사용
	~BankAccount(); //소멸자

	void setAno(string ano);
	string getAno();
	
	void setOwer(string owner);
	string getOwer();

	void setbalance(int balance);
	int getbalance();

};


