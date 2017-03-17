#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class LNum {
private:
	int len;
	vector<int> digits;
	friend ostream& operator<<(ostream& os, LNum& a)
	{
		for (int i = 0; i < a.len; ++i)
		{
			os << a.digits[i];
		}
		return os;
	}

	friend istream& operator >> (istream& is, LNum& a)
	{
		string s;
		getline(is, s);
		a.len = s.length();
		a.digits.resize(a.len);
		for (int i = 0; i < s.length(); ++i)
		{
			a.digits[i] = s[i] - '0';
		}
		return is;
	}
public:
	friend bool COM_NN_D(LNum&, LNum&); //N-1 
	friend bool NZER_N_B(LNum&); //N-2
	friend void ADD_1N_N(LNum&); //N-3
	friend LNum ADD_NN_N(LNum&, LNum&); //N-4
	friend LNum SUB_NN_N(LNum&, LNum&); //N-5
	friend LNum MUL_ND_N(LNum&, int); //N-6
	friend LNum MUL_Nk_N(LNum&, int); //N-7 
	friend LNum MUL_NN_N(LNum&, LNum&); //N-8
	friend LNum SUB_NDN_N(LNum&, LNum&, int); //N-9
	friend LNum DIV_NN_N(LNum&, LNum&); //N-10
	friend LNum MOD_NN_N(LNum&, LNum&); //N-11
	friend LNum GCF_NN_N(LNum&, LNum&); //N-12
	friend LNum LCM_NN_NN(LNum&, LNum&); //N-13 

	};