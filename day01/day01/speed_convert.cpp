#include <iostream>
using namespace std;
#define RATE_KPH_MPH 1.609344 //��ũ�� ��� 

int main() {
	//���� �ӵ�(����) ��ȯ ���α׷� : km ->����
	int kph;	//�Էº���
	double mph; //��ȯ��� - ������ �ӵ�

	cout << "����� ������ �Է��ϼ���.[KM/h] ";
	cin >> kph;

	cout << fixed;
	cout.precision(2); //�Ҽ� 2�ڸ� ����

	//cout << "����� ������ �Է��ϼ���[km/h]: "; //;�Է½� ������ �Է�!!
	mph = kph / RATE_KPH_MPH;
	cout << "���� �ӵ��� " << mph << " [Mile/h]" << endl;

	return 0;
}