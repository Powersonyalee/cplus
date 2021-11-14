# include "add.h"

//외부 변수 사용시 extern 키워드 사용
extern int _count;			//변수 사용시엔 extern 생략불가
extern int add(int, int);	//함수 사용시엔 extern 생략가능

int main() {
	int x = 3, y = 4, z;

	_count++;
	cout << _count << endl;		//1

	z = add(x, y);
	cout << z << endl;			//7

	return 0;
}