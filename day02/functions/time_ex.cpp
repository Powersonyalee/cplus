#include <iostream>
#include <ctime>
#include <Windows.h>  // Sleep�Լ� ������

using namespace std;

int main() {
	long start, end;
	//long now;
	//now = time(NULL);
	start = time(NULL); //���۽ð�(FOR�� ���� ��)
	 
	
	// cout << now << " ��" << endl;

	//1���� 100���� ���
	for (int i = 0; i < 100; i++)
	{
		cout << i << endl;
		Sleep(10); //0.01 �� ���ð� �ɱ�
	}

	end = time(NULL);//����(FOR��) �ð�
	cout << "for�� ���� �ð� : " << (end - start) << "��" << endl;

	return 0;
}