#include "bank_account.h"


int main() {

	// ��ü ����
	BankAccount ba1 = BankAccount(); //�⺻������ ���
	BankAccount ba2 = BankAccount("20-1234", "�����", 1300); // �Ű����� ���

	// �ڷ� �Է�
	ba1.setAno("10-1234");
	ba1.setOwer("�Ȼ���");
	ba1.setbalance(1234);

	// ���
	cout << "���� ��ȣ : " << ba1.getAno() << endl;
	cout << "������ : " << ba1.getOwer() << endl;
	cout << "�ܰ� : " << ba1.getbalance() << endl;
	cout << endl;
	cout << "���� ��ȣ : " << ba2.getAno() << endl;
	cout << "������ : " << ba2.getOwer() << endl;
	cout << "�ܰ� : " << ba2.getbalance() << endl;

	return 0;
}
