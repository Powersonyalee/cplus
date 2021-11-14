
# include "dog.h"

Dog::Dog() {	//»ý¼ºÀÚ
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

	cout << "¼Ò¸êÀÚ";
}


void Dog::dogInfo() {

	cout << "Á¾·ù : " << type << endl;
	cout << "»ö»ó : " << color << endl;
	cout << "³ªÀÌ : " << age << endl;
}

void Dog::bark() {
	cout << "¸Û¸Û";
}

