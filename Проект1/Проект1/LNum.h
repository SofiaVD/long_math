#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include "Ordinal.h"
using namespace std;

typedef struct LNum {
	int len(); //Метод len, возвращающий длину числа
	void setDigits(string& str);
	vector<int> digits; //Значение числа хранится перевёрнутым. (123 хранится как 3 -> [0], 2 -> [1], 1 -> [2])
} LNum;

ostream& operator<<(ostream&, LNum&);
istream& operator >> (istream&, LNum&);
Ordinal COM_NN_D(LNum&, LNum&); //N-1 
bool NZER_N_B(LNum&); //N-2
void ADD_1N_N(LNum&); //N-3
LNum ADD_NN_N(LNum&, LNum&); //N-4
LNum SUB_NN_N(LNum&, LNum&); //N-5
LNum MUL_ND_N(LNum&, int); //N-6
LNum MUL_Nk_N(LNum&, int); //N-7 
LNum MUL_NN_N(LNum&, LNum&); //N-8
LNum SUB_NDN_N(LNum&, LNum&, int); //N-9
LNum DIV_NN_N(LNum&, LNum&); //N-10
LNum MOD_NN_N(LNum&, LNum&); //N-11
LNum GCF_NN_N(LNum&, LNum&); //N-12
LNum LCM_NN_NN(LNum&, LNum&); //N-13 