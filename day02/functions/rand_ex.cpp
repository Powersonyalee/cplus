#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	// rand() 함수 사용

	// srand(2); //seed 2를 내장
	srand(time(NULL)); // seed 자동 배정<time()>
	//cout << rand() << endl;

	//rand() % 2 + 1; // 동전의 앞 뒤면
	//rand() % 6 + 1; // 주사위의 앞 뒤면
	//rand() % 10 +1  //1~10까지의 무작위 수

	//int dice = rand() % 6 + 1;

	//주사위 10번 던지기
	for (int i = 0; i < 10; i++) {
		int dice = rand() % 6 + 1;
		cout << dice << endl;
	}

	return 0;
}