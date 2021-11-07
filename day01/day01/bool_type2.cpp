#include <iostream>
using namespace std;
int main() {

	// bool 자료형 출력은 0 or1

	bool b = true;
	cout << b << endl;

	b = false;
	cout << b << endl;

	b = 7;
	cout << b << endl; //1, 입력값이 0이 아니면 모두 1로 출력

	b = 0;
	cout << b << endl;
	
	
	b = (10 >11); //false 이므로 출력값 0
	cout << b << endl;

	b = (10 < 11); //true 이므로 출력값 1
	cout << b << endl;

	b = (10 == 11); //false 이므로 출력값 0
	cout << b << endl;


	return 0;

}