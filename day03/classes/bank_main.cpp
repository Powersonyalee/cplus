#include "bank_account.h"


int main() {

	// ��ü ����
	BankAccount ba1 = BankAccount();

	// �ڷ� �Է�
	ba1.setAno("10-1234");
	ba1.setOwer("�Ȼ���");
	ba1.setbalance(1234);


	// ���
	cout << "���� ��ȣ : " << ba1.getAno() << endl;
	cout << "������ : " << ba1.getOwer() << endl;
	cout << "�ܰ� : " << ba1.getbalance() << endl;

	return 0;
}
