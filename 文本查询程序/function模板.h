

#include<vector>
#include<string>
using std::vector;
using std::string;

/*
ʹ�øú�����ͳ�ƿ�string�ĸ���
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