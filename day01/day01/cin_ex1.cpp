#include <iostream>
using namespace std;
int main() {

	int age;
	char name[20];
	
	cout << "당신의 이름을 입력하세요 :";
	//cin >> name; //줄단위로 받는다
	cin.getline(name, sizeof(name)); //자료의 크기만큼 처리(줄단위)

	cout << "당신의 나이를 입력하세요 :";
	cin >> age; // 연산자 방향이 변수를 향한

	cout << "당신의 나이는" << age <<"세 이시군욥!!" << endl;  //endl :endline
	cout << "당신의 이름은" << name <<"이시군욥!!" << endl;  //endl :endline

	return 0;
}