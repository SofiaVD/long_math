#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <iterator>

using namespace std;

class LNum {
private:
	vector<int> digits; //Значение числа хранится перевёрнутым. 
	friend ostream& operator<<(ostream& os, LNum& a)
	{
		for (auto it = a.digits.rbegin(); it != a.digits.rend(); --it)
			os << *it;
		return os;
	}

	friend istream& operator >> (istream& is, LNum& a)
	{
		string s;
		getline(is, s);
		for (auto it = s.rbegin(); it != s.rend(); --it)
		{
			a.digits.push_back((char)(*it - '0'));
		}
		return is;
	}
public:
	int len(); //Метод len, возвращающий длину числа
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

	};