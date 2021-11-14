# include <iostream>
using namespace std;


// inline함수는 호출이 일어나지 않음(실행 속도 빨라짐) 
//inline은 c++언어의 매크로함수
inline int square(int x) { return x * x; }
inline int min(int a, int b) { return a > b ? b : a; } // a >b 가 true이면 b가 최소값이란 의미

int main() {

	cout << square(5) << endl; //제곱수 출력
	cout << min(5,6) << endl;  //두 수중 작은 값 출력 //5출력
	cout << min(6,5) << endl;	//5출력

	return 0;
}