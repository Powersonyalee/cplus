# include "person.h"

int main() {

	Person noName = Person();


	Person lee = Person("�̿���", 25);
	cout << "�̸� : " << lee.getName() << endl;
	cout << "���� : " << lee.getAge() << endl;


	cout << "�̸� : " << noName.getName() << endl;
	cout << "���� : " << noName.getAge() << endl;



	return 0;
}