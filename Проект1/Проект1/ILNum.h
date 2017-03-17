#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class ILNum
{
private:
	bool pos;
	int len;
	vector<int> digits;
	friend ostream& operator<<(ostream& os, ILNum& ex)
	{
		if (!ex.pos)
			os << '-';
		for (int i = 0; i < ex.len; ++i)
		{
			os << ex.digits[i];
		}
		return os;
	};
	friend istream& operator>>(istream& is, ILNum& ex)
	{
		string s;
		getline(is, s);
		if (s[0] == '-')
		{
			ex.pos = false;
			ex.len = s.length() - 1;
			ex.digits.resize(ex.len);
			for (int i = 1; i < s.length(); ++i)
			{
				ex.digits[i - 1] = s[i] - '0';
			}
		}
		else
		{
			ex.pos = true;
			ex.len = s.length();
			ex.digits.resize(ex.len);
			for (int i = 0; i < ex.len; ++i)
			{
				ex.digits[i] = s[i] - '0';
			}
		}
		return is;
	}
};