//bank_account.h
# include <iostream>

using namespace std;

class BankAccount {

	string ano;  // ���¹�ȣ		(����)class�� ������ ���ڰ� ����
	string owner; //������
	int balance;  //�ܰ�


public:
	void setAno(string ano);
	string getAno();
	
	void setOwer(string owner);
	string getOwer();

	void setbalance(int balance);
	int getbalance();

};


