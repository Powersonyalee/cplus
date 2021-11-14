# include <iostream>
using namespace std;

void count() {
	int x = 0;		  //지역 변수
	static int y = 0; //정적 변수(프로그램이 종료되어야 해제됨)
	x += 1;
	y += 1;
	cout << "x = " << x << ", y = " << y << endl;
}

int main() {

	count();  //1, 1 =>x의 메모리 영역은 호출되고 해제가 된다!!
	count();  //1, 2 =>y의 메모리 영역은 program이 끝날때 까지 생존 

	return 0;
}