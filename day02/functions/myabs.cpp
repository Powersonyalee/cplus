# include <iostream>
using namespace std;


int myAbs(int x) {

	//������ �Է��ϸ�, ���; ����� �Է��ϸ� ���

	if (x >= 0) 
		return x;

	else 
		return -x;
}

int square(int x) { //������ �Լ�
	return x * x;
}


int main() {

	int num1 = myAbs(-3);	// ��ȯ�� �޴� ����
	int num2 = myAbs(3);
	int num3 = square(5);

	cout << "-3�� ���밪��" << num1 << endl;
	cout << "3�� ���밪��" << num2 << endl;
	cout << "5�� ������" << num3 << endl;
	return 0;
}