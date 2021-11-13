# include <iostream>
using namespace std;

int main() {

	// 1부터 5까지 곱하기
	int times = 1;
	for (int i = 1; i <= 10; i++) {
			//cout << i << " ";
			times *= i;
			cout << times << " ";
		}

	// i=1; 1x1 =1				  => 1!
	// i=2; 1x2 =2				  => 2!
	// i=3; 2x3 = 1x2x3 =6		  => 3! 
	// i=4; 6x4 = 1x2x3x4 =24	  => 4!
	// i=5; 24x5 = 1x2x3x4x5 =120 => 5!

	return 0;
}