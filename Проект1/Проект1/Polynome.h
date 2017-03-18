#pragma once
#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include "LNum.h"

class Polynome {
private:
	vector<LNum> coef;
public:
	friend vector<string> strToVector(string);
	friend istream& operator >> (istream& is, Polynome& pl)
	{
		string s;
		getline(is, s);
		vector<string> f = strToVector(s);
		int i = 1;
		for (auto it = f.rbegin(); it != f.rend(); it++)
		{
			pl.coef.resize(i);
			pl.coef[i - 1].setDigits(*it);
			i++;
		}
		return is;
	}
	friend ostream& operator<<(ostream& os, Polynome& pl)
	{
		for (int i = pl.coef.size() - 1; i >= 0; --i)
		{
			os << pl.coef[i] << "x^" << i << " + ";
		}
		return os;
	}
};