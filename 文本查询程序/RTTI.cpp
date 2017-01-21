#include "stdafx.h"
#include"usingRTTI.h"
#include<typeinfo>
using namespace RTTI;
bool Base::equal(const Base& b2)const
{
	return val == b2.val;

}
bool Derived::equal(const Derived&d2)const
{
	return val == d2.val;
}
bool operator==(const Base&b1, const Base&b2)
{
	return typeid(b1) == typeid(b2) && b1.equal(b2);
}
