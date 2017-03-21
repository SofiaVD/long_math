#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <iterator>

using namespace std;

class LNum {
public:
	LNum() {};
	LNum(const vector<int> &num) : digits(num) {}; 
	int len(); //Метод len, возвращающий длину числа
	void setDigits(string str);
	friend bool COM_NN_D(LNum&, LNum&); //N-1 
	friend bool NZER_N_B(LNum&); //N-2
	friend void ADD_1N_N(LNum&); //N-3
	friend LNum ADD_NN_N(LNum&, LNum&); //N-4
	friend LNum SUB_NN_N(LNum&, LNum&); //N-5
	friend LNum MUL_ND_N(LNum&, int); //N-6
	friend LNum MUL_Nk_N(LNum&, int); //N-7 
	friend LNum MUL_NN_N(LNum&, LNum&); //N-8
	friend LNum SUB_NDN_N(LNum&, LNum&, int); //N-9
	friend LNum DIV_NN_N(LNum&, LNum&); //N-10
	friend LNum MOD_NN_N(LNum&, LNum&); //N-11
	friend LNum GCF_NN_N(LNum&, LNum&); //N-12
	friend LNum LCM_NN_NN(LNum&, LNum&); //N-13 
private:
	friend ostream& operator<<(ostream& os, LNum& a) //Выводит число
	{
		for (auto it = a.digits.rbegin(); it != a.digits.rend(); ++it)
			os << *it;
		return os;
	}

	friend istream& operator >> (istream& is, LNum& a) //Считывает число и переворачивает его
	{
		string s;
		getline(is, s);
		a.setDigits(s);
		return is;
	}
protected:
	vector<int> digits; //Значение числа хранится перевёрнутым. (123 хранится как 3 -> [0], 2 -> [1], 1 -> [2])
};