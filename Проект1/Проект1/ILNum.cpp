#include "ILNum.h"

// Аналогично с LNum.h, задания на сайте Позднякова.

ostream& operator<<(ostream& os, ILNum& a)  // Перегрузка оператора вывода
{
	if(a.minus)
		os << '-';
	for (auto it = a.nPart.digits.rbegin(); it != a.nPart.digits.rend(); ++it)
		os << *it;
	return os;
}

istream& operator>>(istream& is, ILNum& a) // Перегрузка оператора ввода
{
	string s;
	getline(is, s);
	a.setDigits(s);
	return is;
}

void ILNum::setDigits(string& str) 
{
	minus = str[0] == '-';
	nPart.digits.reserve(str.length() - minus);
	for (int i = str.length() - 1; i >= minus; --i)
		nPart.digits.push_back(str[i] - '0');
}

int ILNum::len()
{
	return nPart.len();
}

