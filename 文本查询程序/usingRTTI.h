#ifndef RTTI_H_
#define RTTI_H_
namespace RTTI
{
	class Base
	{
		friend bool operator== (const Base&, const Base&);
	public:
		Base() = default;

	
		virtual bool equal(const Base&)const;
	private:
		int val;
	};

	class Derived :public Base
	{
	public:
		Derived() = default;
	
		bool equal(const Derived&)const;
	private:
		int val;
	};
}

#endif