# include <iostream>
# include <cstring>

using namespace std;
 
// struct는 main 위에 만들기

struct Student {
	char name[20];
	int grade;
	char phone[20];
};

int main() {

	// 방법1
	struct Student s1; //s1은 구조체의 변수
	strcpy_s(s1.name, 20, "이우주"); //총 20byte 중 7개 들어간 것-공백포함
	s1.grade = 1;
	strcpy_s(s1.phone, sizeof(s1.phone), "010-1234-5678");
	
	// 방법2
	struct Student s2 = { "박화성", 2, "010-3333-5555" };
	
	//객체 배열로 생성
	struct Student s[3] = {

		{ "박수성", 2, "010-3333-5115" },
		{ "박목성", 2, "010-3333-5523" },
		{ "박금성", 2, "010-3333-5544" }
	};

	// 자료출력
	cout << s1.name << " 학생은 " << s1.grade << "학년입니다." << endl;
	cout << s2.name << " 학생은 " << s2.grade << "학년입니다." << endl;

	// 배열은 반복문으로

	for (int i = 0; i < 3; i++) {
		cout << s[i].name << " 학생은 " << s[i].grade << "학년입니다." << endl;
}
	return 0;
}


