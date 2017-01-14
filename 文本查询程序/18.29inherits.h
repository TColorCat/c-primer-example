#ifndef inherits_h_
#define inherits_h_
#include<iostream>
//同时virtual继承后，的结果到底是什么呢？
using namespace std;
namespace inherits
{
	class ancestor
	{
	private:
		int val;
	public:
		ancestor() = default;
		virtual void print()const{ cout << "ancestor" << endl; }
	};

	class Base :public ancestor
	{
	private:
		double val;
	public:
		Base() = default;
		void print()const{ cout << "Base" << endl; }
	};

	class D1 :virtual public Base
	{

		void print()const{ cout << "D1" << endl; }
	};

	class D2 :virtual public Base
	{

		void print()const{ cout << "D2" << endl; }
	};

	class MI :public  D1, public D2
	{
		void print()const{ cout << "MI" << endl; }
	};

	class Final :public MI, public ancestor
	{
		void print()const{ cout << "final" << endl; }
	};
}



#endif