//score.h
# include <iostream>

using namespace std;

class Score {

private: //안쓰면 자동 private
	int score;

public:	
	void setScore(int score);// 점수 입력 함수 선언
	int getScore();			 // 점수 가져오기 함수 선언
	void showScore();		 // 점수 출력 함수 선언
};

