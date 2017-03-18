#include "LNum.h"

//Здесь должны быть объявления функций, описанные в LNum.h для натуральных чисел,
//Пример такой функции приведён снизу. Подробное описание функций ищите на сайте Позднякова.
//Примечание: obj.digits - хранит число в перевёрнутом виде.

LNum::LNum()
{

}

void LNum::setDigits(string a)
{
	for (auto it = a.rbegin(); it != a.rend(); it++)
		digits.push_back(*it - '0');
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