//score.h
# include <iostream>

using namespace std;

class Score {

private: //�Ⱦ��� �ڵ� private
	int score;

public:	
	void setScore(int score);// ���� �Է� �Լ� ����
	int getScore();			 // ���� �������� �Լ� ����
	void showScore();		 // ���� ��� �Լ� ����
};

