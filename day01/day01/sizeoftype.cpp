#include <iostream>
using namespace std;//소속(분류)
int main() {

	
	// 자료형의 크기
	// 정수형
	cout << "int형 : " << sizeof(int) << "byte" << endl;
	cout << "short형 : " << sizeof(short) << "byte" << endl;
	cout << "long형 : " << sizeof(long) << "byte" << endl;

	// 실수형
	cout << "float형 : " << sizeof(float) << "byte" << endl;
	cout << "double형 : " << sizeof(double) << "byte" << endl;

	// 문자형
	cout << "char형 : " << sizeof(char) << "byte" << endl;
	
	//논리형
	cout << "Bool형 : " << sizeof(bool) << "byte" << endl;

	//자료형의 범위
	char ch = 97;  //ch범위 -128-127 => 따라서 ch =200은 범위 초과
	cout << "ch : " << ch << endl;  //a가 출력됨!!


	char ch2 = 103; //아스키코드 g =103
	cout << "ch2 : " << ch2 << endl;  //g가 출력됨!!

	int num1 = 2147483647; //int의 최대값 그대로 출력됨
	cout << "num1 : " << num1 << endl;

	int num2 = 2147483648; //int의 범위 초과 
	cout << "num2 : " << num2 << endl; // overflow: -2147483648이 출력됨!!

	return 0;

}