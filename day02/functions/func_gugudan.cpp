# include <iostream>
using namespace std;



void printGugudan(int);

int main() {
	printGugudan(100); //�Լ� ȣ��
	return 0;
}


void printGugudan(int dan) { //������Ÿ�� �Լ� ���� ; int dan�� �Ű����� ���� ����

	for (int i = 1; i < 10; i++) {
		cout << dan << "x " << i
			<< " = " << dan * i << endl;
	}
}