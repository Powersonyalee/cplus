# include <iostream>
using namespace std;


// inline�Լ��� ȣ���� �Ͼ�� ����(���� �ӵ� ������) 
//inline�� c++����� ��ũ���Լ�
inline int square(int x) { return x * x; }
inline int min(int a, int b) { return a > b ? b : a; } // a >b �� true�̸� b�� �ּҰ��̶� �ǹ�

int main() {

	cout << square(5) << endl; //������ ���
	cout << min(5,6) << endl;  //�� ���� ���� �� ��� //5���
	cout << min(6,5) << endl;	//5���

	return 0;
}