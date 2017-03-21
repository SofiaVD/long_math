#include "LNum.h"

//Çäåñü äîëæíû áûòü îáúÿâëåíèÿ ôóíêöèé, îïèñàííûå â LNum.h äëÿ íàòóðàëüíûõ ÷èñåë,
//Ïðèìåð òàêîé ôóíêöèè ïðèâåä¸í ñíèçó. Ïîäðîáíîå îïèñàíèå ôóíêöèé èùèòå íà ñàéòå Ïîçäíÿêîâà.
//Ïðèìå÷àíèå: obj.digits - õðàíèò ÷èñëî â ïåðåâ¸ðíóòîì âèäå.

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