# include "add.h"

//�ܺ� ���� ���� extern Ű���� ���
extern int _count;			//���� ���ÿ� extern �����Ұ�
extern int add(int, int);	//�Լ� ���ÿ� extern ��������

int main() {
	int x = 3, y = 4, z;

	_count++;
	cout << _count << endl;		//1

	z = add(x, y);
	cout << z << endl;			//7

	return 0;
}