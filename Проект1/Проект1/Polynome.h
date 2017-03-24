#pragma once
#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include "RNum.h"

struct Polynome {
	vector<RNum> coefficients;
};

ostream& operator<<(ostream& os, Polynome& pl);
istream& operator >> (istream& is, Polynome& pl);

Polynome ADD_PP_P(Polynome&, Polynome&);
Polynome SUB_PP_P(Polynome&, Polynome&);
Polynome MUL_PQ_P(Polynome&, ILNum&);
Polynome MUL_Pxk_P(Polynome&, int);
RNum LED_P_Q(Polynome&);
int DEG_P_N(Polynome&);
RNum FAC_P_Q(Polynome&);
Polynome MUL_PP_P(Polynome&, Polynome&);
Polynome DIV_PP_P(Polynome&, Polynome&);
Polynome MOD_PP_P(Polynome&, Polynome&);
Polynome GCF_PP_P(Polynome&, Polynome&);
Polynome DER_P_P(Polynome&, Polynome&);
Polynome NMR_P_P(Polynome&, Polynome&);