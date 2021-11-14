# include <iostream>
using namespace std;


//함수의 기본매개 변수(default parameter)
void printValue(int x, int y = 1, int z=3) { 
	cout << "x = " << x << ", y = " << y << ", z =" << z << endl;
}


// void printValue(int x = 1, int y)  => 오류가 뜬다
//뒤에 매개변수부터 값이 채워져야 함 

int main() {

	printValue(1); // x=1, y=1
	printValue(1, 2); // x=1, y=2
	printValue(4, 5, 6);

	return 0;
}