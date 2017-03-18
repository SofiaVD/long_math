#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include "LNum.h"


using namespace std;

class ILNum
{
private:
	bool pos = true;
	vector<int> digits;
	friend ostream& operator<<(ostream& os, ILNum& a)  //Перегрузка оператора вывода
	{
		if (!a.pos)
			os << '-';
		for (auto it = a.digits.rbegin(); it != a.digits.rend(); it++)
			os << *it;
		return os;
	}
	friend istream& operator>>(istream& is, ILNum& a) //Перегрузка оператора ввода
	{
		string s;
		getline(is, s);
		if (s[0] == '-') {
			a.pos = false;
		}
		for (auto it = s.rbegin(); it != s.rend(); it++)
		{
			a.digits.push_back(*it - '0');
		}
		if (!a.pos) //Если число отрицательное, то вначале хранится мусор, убираем его.
			a.digits.pop_back();
		return is;
	}
public: 
	ILNum();
	void setDigits(string);
	int len();
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
};