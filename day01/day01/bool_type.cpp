#include <iostream>
using namespace std;
int main() {

	//논리 자료형 -bool
	//0이 아닌값을 입력하면 : true 
	//출력은 1 or 0
	bool t = true;	//입력(저장)  
	bool f = false;	
	bool b = 1000;	
	int iTrue = true; //1입력 
	int iFalse = false; //0입력

	cout << t << endl; //1
	cout << f << endl; //0
	cout << b << endl; //1
	cout << iTrue << endl; //1
	cout << iFalse << endl; //1

	cout << sizeof(t) << "byte" << endl; //1byte
	cout << sizeof(f) << "byte" << endl; //1byte
	cout << sizeof(iTrue) << "byte" << endl; //4byte
	cout << sizeof(iFalse) << "byte" << endl; //4byte

	return 0;

}