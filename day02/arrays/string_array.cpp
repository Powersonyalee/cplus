# include <iostream>
# include <cstring>  //
# include <string.h> // strcpy_s() ��������..

using namespace std;

int main() {
	// ���ڿ� �Լ��� ����� ��\����

	char s1[] = "game", s2[20];

	// ���ڿ��� ����
	cout << strlen(s1) << endl;

	// ���ڿ� ����(����)
	//s2[] = "over";
	strcpy_s(s2, "over");
	cout << "s1= " << s1 << "s2 = " << s2 << endl;

	// ���ڿ� ��

	cout << strcmp(s1, s2) << endl; // �ٸ���, ������ ������ -1
	cout << strcmp(s1, "game") << endl; // ������ 0
	cout << strcmp("over", s1) << endl;  // �ٸ���, ������ ũ�� 1

	return 0;
}