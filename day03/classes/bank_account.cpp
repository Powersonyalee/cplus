# include "bank_account.h"



BankAccount::BankAccount() {}; //기본생성자

BankAccount::BankAccount(string a, string own, int bal) {

	ano = a;
	owner = own;
	balance = bal;

}


BankAccount::~BankAccount() {}; //소멸자


void BankAccount::setAno(string a) {
	ano = a;
}

string BankAccount::getAno() {
	return ano;
}

void BankAccount::setOwer(string b) {
	owner = b;
}

string BankAccount::getOwer() {
	return owner;
}


void BankAccount::setbalance(int c) {
	balance = c;
}

int BankAccount::getbalance(){
	return balance;

}
