# include <iostream>
# include <cstring>

using namespace std;
 
// struct�� main ���� �����

struct Student {
	char name[20];
	int grade;
	char phone[20];
};

int main() {

	// ���1
	struct Student s1; //s1�� ����ü�� ����
	strcpy_s(s1.name, 20, "�̿���"); //�� 20byte �� 7�� �� ��-��������
	s1.grade = 1;
	strcpy_s(s1.phone, sizeof(s1.phone), "010-1234-5678");
	
	// ���2
	struct Student s2 = { "��ȭ��", 2, "010-3333-5555" };
	
	//��ü �迭�� ����
	struct Student s[3] = {

		{ "�ڼ���", 2, "010-3333-5115" },
		{ "�ڸ�", 2, "010-3333-5523" },
		{ "�ڱݼ�", 2, "010-3333-5544" }
	};

	// �ڷ����
	cout << s1.name << " �л��� " << s1.grade << "�г��Դϴ�." << endl;
	cout << s2.name << " �л��� " << s2.grade << "�г��Դϴ�." << endl;

	// �迭�� �ݺ�������

	for (int i = 0; i < 3; i++) {
		cout << s[i].name << " �л��� " << s[i].grade << "�г��Դϴ�." << endl;
}
	return 0;
}


