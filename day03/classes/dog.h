//dog.h

# include <iostream>
# include<string>

//string 자료형을 사용하기 위해 포함시킴
using namespace std;

class Dog {
public:
	string type; //종류
	string color;//색상
	int age;	 //나이

	Dog(); //기본 생성자
	Dog(string t, string c, int a); //외부입력 매개변수 있는 생성자
	~Dog(); //소멸자

	void dogInfo();
	void bark();

};