#include "bank_account.h"


int main() {

	// 객체 생성
	BankAccount ba1 = BankAccount();

	// 자료 입력
	ba1.setAno("10-1234");
	ba1.setOwer("안산이");
	ba1.setbalance(1234);


	// 출력
	cout << "계좌 번호 : " << ba1.getAno() << endl;
	cout << "계좌주 : " << ba1.getOwer() << endl;
	cout << "잔고 : " << ba1.getbalance() << endl;

	return 0;
}
