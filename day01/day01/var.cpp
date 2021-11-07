#include <iostream>
using namespace std;//소속(분류)
int main() {

	//char name[10] = "leesan";
	string name = "홍길동";
	int grade; //학년
	//int class; //반 예약어(키워드) ex) class 사용불가
	int schoolClass; //반

	grade = 2;
	schoolClass = 5;

	cout << name <<" 학생은 " << grade << " 학년 " << schoolClass << " 반입니다." << endl;

	return 0;

}