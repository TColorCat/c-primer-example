// 文本查询程序.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include"head.h"
int _tmain(int argc, _TCHAR* argv[])
{
	std::ifstream is(argv[1]);
	TextQuery t1(is);
	std::string word;
	Query q = Query("fiery") & Query("bird") | Query("wind");
	//Query q = Query("fiery");  
	//Query q = Query("A");  
	std::cout << q << std::endl;
	std::cout << q.eval(t1) << std::endl;
	return 0;
}

