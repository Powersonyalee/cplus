#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	/* up an down game
	 ������ ���ڰ� ������ "�����Դϴ�." , break
	 ���̸� ���ڰ� �ĺ��� ũ�� "�ʹ� Ŀ��" , �ݺ�
	 ���̸� ���ڰ� �ĺ��� ������ "�ʹ� �۾ƿ�"
	 */

	int com, guess, min=1, max=100, i;

	srand((unsigned)time(NULL)); // (unsigned) �ǹ̴� 0���� 43�����///
	com = rand() % 100 + 1;

		for (i = 0; i < 10; i++) {
			cout <<" [ " << i + 1 << "ȸ]" << min << " ~ " 
				 << max << " ������ �� ���� => ";
			cin >> guess;

			// ���� ó��
			if (guess == com) {
				cout << "�����Դϴ�." <<endl;
				
				break;
				}
			else if (guess < com) {
				cout << "�ʹ� �۾ƿ�" << endl;
				min = guess;
			}
			else {
				cout << "�ʹ� Ŀ��" << endl;
				max = guess;
			}
	}

		cout << "������ " << com << "�Դϴ�" << endl;
		cout << "�������� :  " << (10-i) * 10 << "�Դϴ�" << endl;


	return 0;
}