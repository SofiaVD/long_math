#include "Polynome.h"

vector<string> strToVector(string present)
{
	vector<string> result;
	result.push_back("");
	int i = 0;
	for (auto it = present.begin(); it != present.end(); it++)
	{
		if (*it == ' ')
		{
			++i;
			result.push_back("");
		}
		else
		{
			result[i].push_back(*it - '0');
		}
	}
	return result;
}
