#include <iostream>
using namespace std;
#define PI 3.14 // MACRO 상수

int main() {

	const int MIN_NUM = 1; //const 붙이면 상수가 되므로 변경불가 // 참고) const EOF = -1  
	const int MAX_NUM = 100;

	//MIN_NUM = 0; //상수는 변경불가

	cout << MAX_NUM << endl;
	cout << MIN_NUM << endl;
	//원의 넓이 계산

	int radius =0;
	double area = 0.0;
	double circum = 0.0;

	radius = 5;

	area = PI * radius * radius;
	circum = PI * radius * 2;

	cout << "원의 넓이: " << area << endl;
	cout << "원의 둘레: " << circum << endl;

	return 0;

}