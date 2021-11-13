# include <iostream>
using namespace std;

int main() {

	//1부터 10까지
	int n = 0;

	while (n < 10) {

		n += 1; //n++
		cout << n << " " ;
	}

	cout << endl;
	cout << n << endl; // n=10
	//반복 조건문(break문)

	//n = 0; // n을 초기화 안하면, n=11이라 바로 break!!
	while (true) { //c언어 -while (1)
		n += 1;
		if (n > 10) break;
			cout << n << " " ;
	}

	return 0;
}