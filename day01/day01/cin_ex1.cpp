#include <iostream>
using namespace std;
int main() {

	int age;
	char name[20];
	
	cout << "����� �̸��� �Է��ϼ��� :";
	//cin >> name; //�ٴ����� �޴´�
	cin.getline(name, sizeof(name)); //�ڷ��� ũ�⸸ŭ ó��(�ٴ���)

	cout << "����� ���̸� �Է��ϼ��� :";
	cin >> age; // ������ ������ ������ ����

	cout << "����� ���̴�" << age <<"�� �̽ñ���!!" << endl;  //endl :endline
	cout << "����� �̸���" << name <<"�̽ñ���!!" << endl;  //endl :endline

	return 0;
}