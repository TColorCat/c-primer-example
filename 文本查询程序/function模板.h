

#include<vector>
#include<string>
#include<functional>
using std::vector;
using std::string;
using std::function;

/*
ʹ�øú�����ͳ�ƿ�string�ĸ���
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