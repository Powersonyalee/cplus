#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	/* up an down game
	 추측한 숫자가 맞으면 "정답입니다." , break
	 게이머 숫자가 컴보다 크면 "너무 커요" , 반복
	 게이머 숫자가 컴보다 작으면 "너무 작아요"
	 */

	int com, guess, min=1, max=100, i;

	srand((unsigned)time(NULL)); // (unsigned) 의미는 0부터 43억까지///
	com = rand() % 100 + 1;

		for (i = 0; i < 10; i++) {
			cout <<" [ " << i + 1 << "회]" << min << " ~ " 
				 << max << " 사이의 값 예측 => ";
			cin >> guess;

			// 조건 처리
			if (guess == com) {
				cout << "정답입니다." <<endl;
				
				break;
				}
			else if (guess < com) {
				cout << "너무 작아요" << endl;
				min = guess;
			}
			else {
				cout << "너무 커요" << endl;
				max = guess;
			}
	}

		cout << "정답은 " << com << "입니다" << endl;
		cout << "최종접수 :  " << (10-i) * 10 << "입니다" << endl;


	return 0;
}