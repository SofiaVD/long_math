#include "LNum.h"

//Çäåñü äîëæíû áûòü îáúÿâëåíèÿ ôóíêöèé, îïèñàííûå â LNum.h äëÿ íàòóðàëüíûõ ÷èñåë,
//Ïðèìåð òàêîé ôóíêöèè ïðèâåä¸í ñíèçó. Ïîäðîáíîå îïèñàíèå ôóíêöèé èùèòå íà ñàéòå Ïîçäíÿêîâà.
//Ïðèìå÷àíèå: obj.digits - õðàíèò ÷èñëî â ïåðåâ¸ðíóòîì âèäå.

ostream& operator<<(ostream& os, LNum& a) //Âûâîäèò ÷èñëî
{
	for (auto it = a.digits.rbegin(); it != a.digits.rend(); ++it)
		os << *it;
	return os;
}

istream& operator>>(istream& is, LNum& a) //Ñ÷èòûâàåò ÷èñëî è ïåðåâîðà÷èâàåò åãî
{
	string s;
	getline(is, s);
	a.setDigits(s);
	return is;
}

bool NZER_N_B(LNum& num)
{
	for (int i = 0; i < num.len(); ++i)
		if (num.digits[i])
			return false;
	return true;
}

int LNum::len()
{
	return digits.size();
}

void LNum::setDigits(string str) 
{
	digits.reserve(str.length());
	for (int i = str.length() - 1; i >= 0; --i)
		digits.push_back(str[i] - '0');
}

LNum ADD_NN_N(LNum& a, LNum& b){
	LNum c;
	int l1 = a.length();
	int l2 = b.length();
	int minLen = l1 > l2 ? l2 : l1;
	int maxLen = l1 > l2 ? l1 : l2;
	c.digits.reserve(maxLen + 1);
	bool overflow = false;
	for(int i = 0; i < maxLen; ++i)
	{
		c.digits[i] = (i < minLen ? a.digits[i] + b.digits[i] : (l1 > l2 ? a.digits[i] : b.digits[i])) + overflow;
		overflow = c.digits[i] > 9;
		c.digits[i] %= 10;
	}
	return c;
}

LNum MOD_NN_N(LNum &a, Lnum &b) 
{ 
	return SUB_NN_N(a, MUL_NN_N(DIV_NN_N(a, b), b)); 
}