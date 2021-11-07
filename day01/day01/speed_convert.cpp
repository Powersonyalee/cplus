#include <iostream>
using namespace std;
#define RATE_KPH_MPH 1.609344 //매크로 상수 

int main() {
	//공의 속도(구속) 변환 프로그램 : km ->마일
	int kph;	//입력변수
	double mph; //변환결과 - 마일의 속도

	cout << "당신의 구속을 입력하세요.[KM/h] ";
	cin >> kph;

	cout << fixed;
	cout.precision(2); //소수 2자리 설정

	//cout << "당신의 구속을 입력하세요[km/h]: "; //;입력시 옆으로 입력!!
	mph = kph / RATE_KPH_MPH;
	cout << "공의 속도는 " << mph << " [Mile/h]" << endl;

	return 0;
}