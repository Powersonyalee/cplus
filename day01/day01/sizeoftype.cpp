#include <iostream>
using namespace std;//�Ҽ�(�з�)
int main() {

	
	// �ڷ����� ũ��
	// ������
	cout << "int�� : " << sizeof(int) << "byte" << endl;
	cout << "short�� : " << sizeof(short) << "byte" << endl;
	cout << "long�� : " << sizeof(long) << "byte" << endl;

	// �Ǽ���
	cout << "float�� : " << sizeof(float) << "byte" << endl;
	cout << "double�� : " << sizeof(double) << "byte" << endl;

	// ������
	cout << "char�� : " << sizeof(char) << "byte" << endl;
	
	//����
	cout << "Bool�� : " << sizeof(bool) << "byte" << endl;

	//�ڷ����� ����
	char ch = 97;  //ch���� -128-127 => ���� ch =200�� ���� �ʰ�
	cout << "ch : " << ch << endl;  //a�� ��µ�!!


	char ch2 = 103; //�ƽ�Ű�ڵ� g =103
	cout << "ch2 : " << ch2 << endl;  //g�� ��µ�!!

	int num1 = 2147483647; //int�� �ִ밪 �״�� ��µ�
	cout << "num1 : " << num1 << endl;

	int num2 = 2147483648; //int�� ���� �ʰ� 
	cout << "num2 : " << num2 << endl; // overflow: -2147483648�� ��µ�!!

	return 0;

}