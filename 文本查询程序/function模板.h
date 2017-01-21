

#include<vector>
#include<string>
#include<functional>
using std::vector;
using std::string;
using std::function;

/*
使用该函数，统计空string的个数
*/
vector<string>pvec;
function<bool(const string&)>fp = &string::empty;


int count_estr(vector<string>source)
{
	int count = 0;

	for (auto& a : source)
	{
		if (a.empty())count++;

	}
	return count;
}