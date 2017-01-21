#ifndef P193P_h_
#define P193P_h_

namespace P193s
{
	class A{ public:A() = default; virtual ~A(){} int a; };
	class B : public A{ public:B() = default; ~B(){} int b; };
	class C :public A{ public:C() = default; ~C(){} int c; };
	class D :public B, public A{ public:D() = default; ~D(){}int d; };
	//dynamic_cast 只能从派生类到基类的指针或者引用类型转换
	void test()
	{
		A *pa = new D;
		A*c = new C;
		B*pd = new B;

		B*ce = dynamic_cast<B*>(c);
		//NULL

		C*pc = dynamic_cast<C*>(pd);
		//NULL
		B* se = dynamic_cast<B*>(pa);
		//right
	}

}

#endif