#include "ILNum.h"

//Àíàëîãè÷íî ñ LNum.h, çàäàíèÿ íà ñàéòå Ïîçäíÿêîâà.

ostream& operator<<(ostream& os, ILNum& a)  //Ïåðåãðóçêà îïåðàòîðà âûâîäà
{
	if(a.minus)
		os << '-';
	for (auto it = a.nPart.digits.rbegin(); it != a.nPart.digits.rend(); ++it)
		os << *it;
	return os;
}

istream& operator>>(istream& is, ILNum& a) //Ïåðåãðóçêà îïåðàòîðà ââîäà
{
	string s;
	getline(is, s);
	a.setDigits(s);
	return is;
}

void ILNum::setDigits(string str) 
{
	if (str[0] == '-')
		minus = true;
	nPart.digits.reserve(str.length() - minus);
	for (int i = str.length() - 1; i >= minus; --i)
		digits.push_back(str[i] - '0');
}

int LNum::len()
{
	return digits.size();
}

