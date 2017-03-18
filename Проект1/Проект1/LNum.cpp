#include "LNum.h"

//Здесь должны быть объявления функций, описанные в LNum.h для натуральных чисел,
//Пример такой функции приведён снизу. Подробное описание функций ищите на сайте Позднякова.

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