# include <iostream>
using namespace std;


//�Լ��� �⺻�Ű� ����(default parameter)
void printValue(int x, int y = 1, int z=3) { 
	cout << "x = " << x << ", y = " << y << ", z =" << z << endl;
}


// void printValue(int x = 1, int y)  => ������ ���
//�ڿ� �Ű��������� ���� ä������ �� 

int main() {

	printValue(1); // x=1, y=1
	printValue(1, 2); // x=1, y=2
	printValue(4, 5, 6);

	return 0;
}