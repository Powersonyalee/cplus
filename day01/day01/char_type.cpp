#include <iostream>
using namespace std;
int main() {


	// 문자 자료형
	char ch = 'a';
	char ch2[3] = "한"; //3byte are needed. 
	char ch3[] = "\uD55C"; //UNICODE로 한글저장
	cout << "ch = " << ch << endl;
	cout << "ch의 아스키값 = " << (int)ch << endl; //askii code value 97
	cout << "ch2 = " << ch2 << endl; 
	cout << "ch3 = " << ch3 << endl; 

	char cart[] = "egg 계란";
	cout << "cart = " << cart << endl;

	return 0;

}