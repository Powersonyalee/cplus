#include <iostream>
using namespace std;
#define PI 3.14 // MACRO ���

int main() {

	const int MIN_NUM = 1; //const ���̸� ����� �ǹǷ� ����Ұ� // ����) const EOF = -1  
	const int MAX_NUM = 100;

	//MIN_NUM = 0; //����� ����Ұ�

	cout << MAX_NUM << endl;
	cout << MIN_NUM << endl;
	//���� ���� ���

	int radius =0;
	double area = 0.0;
	double circum = 0.0;

	radius = 5;

	area = PI * radius * radius;
	circum = PI * radius * 2;

	cout << "���� ����: " << area << endl;
	cout << "���� �ѷ�: " << circum << endl;

	return 0;

}