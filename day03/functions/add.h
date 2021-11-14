// add.h
#pragma once //중독된 것 무시하는 것!! 전처리 (단점) 비주얼에서만 가능. 
#include <iostream>
using namespace std;

int _count = 0;

int add(int x, int y) {
	int sum;
	sum = x + y;
	return sum;
}

