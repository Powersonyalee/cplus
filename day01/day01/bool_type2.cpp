#include <iostream>
using namespace std;
int main() {

	// bool �ڷ��� ����� 0 or1

	bool b = true;
	cout << b << endl;

	b = false;
	cout << b << endl;

	b = 7;
	cout << b << endl; //1, �Է°��� 0�� �ƴϸ� ��� 1�� ���

	b = 0;
	cout << b << endl;
	
	
	b = (10 >11); //false �̹Ƿ� ��°� 0
	cout << b << endl;

	b = (10 < 11); //true �̹Ƿ� ��°� 1
	cout << b << endl;

	b = (10 == 11); //false �̹Ƿ� ��°� 0
	cout << b << endl;


	return 0;

}