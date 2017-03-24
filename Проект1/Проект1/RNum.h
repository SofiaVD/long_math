#pragma once
#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include "LNum.h"
#include "ILNum.h"

using namespace std;
  
// Числа вида `a/b`, вводятся в отдельной строке.
struct RNum {
    // Числитель
    ILNum num;
    // Знаменатель
    LNum den;
};

ostream& operator<<(ostream&, RNum&);
istream& operator >> (istream&, RNum&);
RNum RED_Q_Q(RNum&);
bool INT_Q_B(RNum&);
RNum TRANS_Z_Q(ILNum&);
ILNum TRANS_Q_Z(RNum&);
RNum ADD_QQ_Q(RNum&, RNum&);
RNum SUB_QQ_Q(RNum&, RNum&);
RNum MUL_QQ_Q(RNum&, RNum&);
RNum DIV_QQ_Q(RNum&, RNum&);
