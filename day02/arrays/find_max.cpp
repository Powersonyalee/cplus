# include <iostream>

using namespace std;

int main() {
	// 최대 정수 찾기

	int arr[7] = { 2, 71, 59, 33, 94, 25 };
	char str[] = "game over";

	int maxVal = arr[0]; // 맨 앞 숫자 최대값으로 설정
	int i;
	for (i = 1; i < 6; i++)
		if (maxVal < arr[i]) maxVal = arr[i]; 


	cout << "max val = " << maxVal << endl;

	cout << strlen(str) << endl;
	
	
	char maxChar = str[0];
	for (int i = 1; i < strlen(str); i++)
		if (maxChar < str[i]) maxChar = str[i];

	cout << "max char = " << maxChar << endl;




	return 0;
}