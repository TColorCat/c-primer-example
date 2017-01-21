

#include<vector>
#include<string>
using std::vector;
using std::string;

/*
使用该函数，统计空string的个数
*/


int count_estr(vector<string>source)
{
	int count = 0;

	for (auto& a : source)
	{
		if (a.empty())count++;

	}
	return count;
}