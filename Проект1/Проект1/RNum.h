#pragma once
#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include "LNum.h"
#include "ILNum.h"

using namespace std;
  
//×èñëà âèäà a/b, ââîäÿòñÿ â îòäåëüíîé ñòðîêå.
typedef struct RNum {
	ILNum num; //×èñëèòåëü
	LNum den;  //Çíàìåíàòåëü
} RNum;
