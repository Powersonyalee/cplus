
# include "dog.h"


// class는 기본이 pricate이므로 멤버변수에 접근 불가
//public 으로 설정하면 접근 가능


int main() {

	Dog dog = Dog();	//dog 객체 생성
	Dog dog1;			//dog 객체(변수) 생성
	Dog dog2 = Dog();	//dog 객체 생성


	// 멤버 접근 후 값 저장
	dog1.type = "푸들";
	dog1.color = "brown";
	dog1.age = 3;

	dog2.type = "치와와";
	dog2.color = "black";
	dog2.age = 4;


	// 출력
	dog.dogInfo();	// 기본 생성자
	dog1.dogInfo();	
	dog2.dogInfo();
	dog2.bark();


//	cout << "종류 : " << dog.type << endl;
//	cout << "색상 : " << dog.color << endl;
//	cout << "나이 : " << dog.age << endl;

	return 0;
}