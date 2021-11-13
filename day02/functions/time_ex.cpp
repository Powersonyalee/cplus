#include <iostream>
#include <ctime>
#include <Windows.h>  // Sleep함수 쓰려고

using namespace std;

int main() {
	long start, end;
	//long now;
	//now = time(NULL);
	start = time(NULL); //시작시간(FOR문 시작 전)
	 
	
	// cout << now << " 초" << endl;

	//1부터 100까지 출력
	for (int i = 0; i < 100; i++)
	{
		cout << i << endl;
		Sleep(10); //0.01 초 대기시간 걸기
	}

	end = time(NULL);//종료(FOR문) 시간
	cout << "for문 수행 시간 : " << (end - start) << "초" << endl;

	return 0;
}