#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <iterator>

using namespace std;

typedef struct LNum {
	int len(); //Метод len, возвращающий длину числа
	void setDigits(string str);
	vector<int> digits; //Значение числа хранится перевёрнутым. (123 хранится как 3 -> [0], 2 -> [1], 1 -> [2])
} LNum;