
# include "dog.h"

Dog::Dog() {	//������
	type = "notype";
	color = "white";
	age = 1;
}

Dog::Dog(string t, string c, int a) {
		type = t;
		color = c;
		age = a;

	



}
Dog::~Dog() {

	cout << "�Ҹ���";
}


void Dog::dogInfo() {

	cout << "���� : " << type << endl;
	cout << "���� : " << color << endl;
	cout << "���� : " << age << endl;
}

void Dog::bark() {
	cout << "�۸�";
}

