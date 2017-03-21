#include "ILNum.h"

//Àíàëîãè÷íî ñ LNum.h, çàäàíèÿ íà ñàéòå Ïîçäíÿêîâà.

void ILNum::setDigits(string str) 
{
	if (str[0] == '-')
		negative = true;
	digits.reserve(str.length() - negative);
	for (int i = str.length() - 1; i >= negative; --i)
		digits.push_back(str[i] - '0');
}
