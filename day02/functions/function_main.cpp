# include "config.h"

int main() {
	// 최대 정수 찾기

	int arr[7] = { 2, 71, 59, 33, 94, 25 };
	char str[] = "game over";

	int maxVal = findMax(arr, 6);
	cout << maxVal << endl;


	char maxChar = findCharacter(str);
	cout << maxChar << endl;


	return 0;
}