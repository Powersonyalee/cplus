#include <iostream>
#include <string>

using namespace std;
int main() {

	string cart = "생수\n";	//string - 문자열 자료형
	cout << cart << endl; //생수

	string cartList[] = { "커피", "생수", "계란" };

	cout << "===커피 출력 ===" << endl;
	cout << cartList[0] << endl; //커피


	cout << "=== 전체 메뉴 출력 ===" << endl;
	for (int i=0; i<3 ; i++) {
	cout << cartList[i] <<" ";
}
	return 0;

}