#include <iostream>
using namespace std;
int main() {

	//�� �ڷ��� -bool
	//0�� �ƴѰ��� �Է��ϸ� : true 
	//����� 1 or 0
	bool t = true;	//�Է�(����)  
	bool f = false;	
	bool b = 1000;	
	int iTrue = true; //1�Է� 
	int iFalse = false; //0�Է�

	cout << t << endl; //1
	cout << f << endl; //0
	cout << b << endl; //1
	cout << iTrue << endl; //1
	cout << iFalse << endl; //1

	cout << sizeof(t) << "byte" << endl; //1byte
	cout << sizeof(f) << "byte" << endl; //1byte
	cout << sizeof(iTrue) << "byte" << endl; //4byte
	cout << sizeof(iFalse) << "byte" << endl; //4byte

	return 0;

}