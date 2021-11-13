# include <iostream>
using namespace std;

int main() {
	// 1부터 30까지 자연수 출력
	int n = 0, count =0;

	while (n < 30) {
		//3의 배수 출력
		n += 1;
		if (n % 3 == 0 || n % 5 == 0) {

			cout << n << " " ;
			
			count++;
		}
	}
	cout << endl;
	cout << "배수의 개수 : " << count << endl;

	return 0;
}