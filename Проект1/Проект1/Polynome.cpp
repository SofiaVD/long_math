#include "Polynome.h"

ostream& operator<<(ostream& os, Polynome& pl)
{
	bool first = true;
	for (int i = pl.coefficients.size() - 1; i >= 0; --i)
	{
		RNum& curCoeff = pl.coefficients[i];
		if (!NZER_N_B(curCoeff.num.nPart))
		{
			if (!first)
				cout << ' ' << (curCoeff.num.minus ? '-' : '+') << ' ';
			else if (curCoeff.num.minus)
				cout << '-';
			if (curCoeff.den.len() == 1 && curCoeff.den.digits[0] == 1)
				os << curCoeff.num.nPart;
			else
				os << curCoeff.num.nPart << '/' << curCoeff.den;
			if (i)
				cout << "x^" << i;
			first = false;
		}		
	}
	return os;
}

istream& operator>>(istream& is, Polynome& pl)
{
	int n;
	cout << "Input degree: ";
	cin >> n;
	cin.get();
	cout << "Input " << ++n << " coefficients" << endl;
	for (int i = 0; i < n; ++i)
	{
		cout << "x^" << n - i - 1 << ": ";
		RNum buf;
		cin >> buf;
		pl.coefficients.push_back(move(buf));
	}
	reverse(pl.coefficients.begin(), pl.coefficients.end());
	return is;
}
