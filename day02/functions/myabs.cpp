# include <iostream>
using namespace std;


int myAbs(int x) {

	//음수를 입력하면, 양수; 양수를 입력하면 양수

	if (x >= 0) 
		return x;

	else 
		return -x;
}

int square(int x) { //제곱수 함수
	return x * x;
}


int main() {

	int num1 = myAbs(-3);	// 반환값 받는 변수
	int num2 = myAbs(3);
	int num3 = square(5);

	cout << "-3의 절대값은" << num1 << endl;
	cout << "3의 절대값은" << num2 << endl;
	cout << "5의 제곱은" << num3 << endl;
	return 0;
}