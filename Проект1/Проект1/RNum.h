#pragma once
#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include "LNum.h"
#include "ILNum.h"
#define sep '/'

using namespace std;
  
//Числа вида a/b, вводятся в отдельной строке.
class RNum {
private:
	ILNum num; //Числитель
	LNum den;  //Знаменатель
public:
	friend ostream& operator<<(ostream& os, RNum& ex) //Выводит дробь в виде a/b
	{
		os << ex.num << sep << ex.den;
		return os;
	}
	friend istream& operator >> (istream& is, RNum& ex) //Считывает дробь вида a/b
	{
		string s;
		string s1, s2;
		getline(is, s);
		int n = s.find('/', 0);
		s1 = s.substr(0, n);
		s2 = s.substr(n + 1, s.length() - n);
		ex.num.setDigits(s1);
		ex.den.setDigits(s2);
		return is;
	}
	friend RNum RED_Q_Q(RNum&);
	friend bool INT_Q_B(RNum&);
	friend RNum TRANS_Z_Q(ILNum&);
	friend ILNum TRANS_Q_Z(RNum&);
	friend RNum ADD_QQ_Q(RNum&, RNum&);
	friend RNum SUB_QQ_Q(RNum&, RNum&);
	friend RNum MUL_QQ_Q(RNum&, RNum&);
	friend RNum DIV_QQ_Q(RNum&, RNum&);
};