#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include "LNum.h"

using namespace std;

typedef struct ILNum {
	int len();
	void setDigits(string str);
	bool minus; // отрицательно ли число 
	LNum nPart;
} ILNum;