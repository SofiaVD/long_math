#include "RNum.h"

// Выводит дробь в виде `a/b`
ostream& operator<<(ostream& os, RNum& ex) 
{
	if (ex.den.len() == 1 && ex.den.digits[0] == 1)
		os << ex.num;
	else
		os << ex.num << '/' << ex.den;
    return os;
}

// Считывает дробь вида `a/b`
istream& operator>>(istream& is, RNum& ex)
{
    string s;
    string s1, s2;
    getline(is, s);
    int n = s.find('/', 0);
    s1 = s.substr(0, n);
    s2 = (n != -1 ? s.substr(n + 1, s.length() - n) : "1");
    ex.num.setDigits(s1);
    ex.den.setDigits(s2);
    return is;
}

/*RNum DIV_QQ_Q(RNum& a, RNum& b){
    RNum c;
    c.num.minus = a.num.minus ^ b.num.minus;
    c.num.nPart = MUL_NN_N(a.num.nPart, b.den);
    c.den = MUL_NN_N(a.den, b.num.nPart);
    return c;
}*/
