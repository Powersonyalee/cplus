# include <iostream>
using namespace std;

struct Point { //struct�� �⺻�� public!! �� ���� ������

	int x, y;

	Point(int x=0, int y=0) {
		this->x = x; 
		this->y = y; // this.������ �ڿ� �ڵ�����!! 
		cout << "��(" << x <<  ", "  << y << ")������\n";
	}

};

class Circle {

	Point center; 
	int radius;
	
public:
	Circle(int x, int y, int radius) {

		center.x = x;
		center.y = y;
		this->radius = radius;
		cout << "���� ������: " << radius << endl  <<"�߽��� (" << center.x << "." << center.y << ")";

	}



};
