# include <iostream>
using namespace std;

int main() {
	// 1���� 30���� �ڿ��� ���
	int n = 0, count =0;

	while (n < 30) {
		//3�� ��� ���
		n += 1;
		if (n % 3 == 0 || n % 5 == 0) {

			cout << n << " " ;
			
			count++;
		}
	}
	cout << endl;
	cout << "����� ���� : " << count << endl;

	return 0;
}