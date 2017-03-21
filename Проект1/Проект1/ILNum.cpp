#include "ILNum.h"

//Аналогично с LNum.h, задания на сайте Позднякова.

void ILNum::setDigits(string str) 
{
	if (str[0] == '-')
		negative = true;
	for (int i = str.length() - 1; i >= negative; --i)
		digits.push_back(str[i] - '0');
}