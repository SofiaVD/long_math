#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include "LNum.h"

using namespace std;

class ILNum : public LNum
{
public: 
	ILNum() {};
	ILNum(const vector<int> &num, bool negative) : negative(negative) , LNum(num) {}
	ILNum(const LNum& num) : LNum(num) {};
	void setDigits(string str);
	friend LNum ABS_Z_N(ILNum&);
	friend int POZ_Z_D(ILNum&);
	friend ILNum MUL_ZM_Z(ILNum&);
	friend ILNum TRANS_N_Z(LNum&);
	friend LNum TRANS_Z_N(ILNum&);
	friend ILNum ADD_ZZ_Z(ILNum&, ILNum&);
	friend ILNum SUB_ZZ_Z(ILNum&, ILNum&);
	friend ILNum MUL_ZZ_Z(ILNum&, ILNum&);
	friend ILNum DIV_ZZ_Z(ILNum&, ILNum&);
	friend ILNum MOD_ZZ_Z(ILNum&, ILNum&);
private:
	friend ostream& operator<<(ostream& os, ILNum& a)  //Перегрузка оператора вывода
	{
		if(a.negative)
			os << '-';
		for (auto it = a.digits.rbegin(); it != a.digits.rend(); ++it)
			os << *it;
		return os;
	}
	friend istream& operator >> (istream& is, ILNum& a) //Перегрузка оператора ввода
	{
		string s;
		getline(is, s);
		a.setDigits(s);
		return is;
	}
protected:
	bool negative = false; // отрицательно ли число 
};