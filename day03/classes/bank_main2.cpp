#include "bank_account.h"


int main() {

	// ��ü �迭 ���� 	
	BankAccount ba[3] = {
		BankAccount("10-1234", "�Ȼ���",10000),
		BankAccount("20-1234", "�����", 15000),
		BankAccount("30-1234", "������", 20000)

	};

	// �ڷ� �Է�
	for (int i =0; i <3; i++) {

		cout << "���� ��ȣ : " << ba[i].getAno() << endl;
		cout << "������ : " << ba[i].getOwer() << endl;
		cout << "�ܰ� : " << ba[i].getbalance() << endl;
		cout << endl;
	
}
	return 0;
}
