#include <iostream>
using namespace std;
int main() {


	// ���� �ڷ���
	char ch = 'a';
	char ch2[3] = "��"; //3byte are needed. 
	char ch3[] = "\uD55C"; //UNICODE�� �ѱ�����
	cout << "ch = " << ch << endl;
	cout << "ch�� �ƽ�Ű�� = " << (int)ch << endl; //askii code value 97
	cout << "ch2 = " << ch2 << endl; 
	cout << "ch3 = " << ch3 << endl; 

	char cart[] = "egg ���";
	cout << "cart = " << cart << endl;

	return 0;

}