# include <iostream>
using namespace std;

struct Point { //struct는 기본이 public!! 즉 접근 가능함

	int x, y;

	Point(int x=0, int y=0) {
		this->x = x; 
		this->y = y; // this.누르면 뒤에 자동으로!! 
		cout << "점(" << x <<  ", "  << y << ")생성자\n";
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
		cout << "원의 반지름: " << radius << endl  <<"중심은 (" << center.x << "." << center.y << ")";

	}



};
