# include <iostream>
using namespace std;


int myPow(int n, int y) { //�ŵ����� �Լ� ���� 

		int res = 1;
		for (int i = 0; i < y; i++) { //�ŵ����� �Լ� ����
			res = res * n;

	



		}
		return res;
}



int main() {

	int num = myPow(2, 4); // 2x2x2x2
	cout << num << endl;

		return 0;
}