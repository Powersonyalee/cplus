# include <iostream>
using namespace std;



void printGugudan(int);

int main() {
	printGugudan(100); //함수 호출
	return 0;
}


void printGugudan(int dan) { //프로토타입 함수 정의 ; int dan은 매개변수 전달 인자

	for (int i = 1; i < 10; i++) {
		cout << dan << "x " << i
			<< " = " << dan * i << endl;
	}
}