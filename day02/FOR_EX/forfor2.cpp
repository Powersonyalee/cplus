# include <iostream>
using namespace std;

int main() {
	int i, j;

	for (i = 0; i < 5; i++) {
		for (j = 1; j <= 4; j++) {
			int num = i * 4 + j;
			cout << num << " ";
		}
		cout << endl;
	}





	return 0;
}