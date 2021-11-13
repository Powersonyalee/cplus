
#include "config.h"




int findMax(int arr[], int len);
char findCharacter(char str[]);


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

/*

int findMax(int arr[], int len) {
	int maxVal = arr[0]; // 맨 앞 숫자 최대값으로 설정
	
	for (int i = 1; i < len; i++) {
		if (maxVal < arr[i]) maxVal = arr[i];
	}
	return maxVal;

}


char findCharacter(char str[]) {
	char maxChar = str[0];

	for (int i = 1; i < strlen(str); i++) {
		if (maxChar < str[i]) maxChar = str[i];
	}

	return maxChar;
}*/