#include "stdafx.h"
#include "KaPian.h"

static int IdCount = 0;

KaPian::KaPian()
{
	__Id = IdCount += 1;
}
KaPian::~KaPian()
{
}
__int16 KaPian::GetId()
{
	return __Id;
}
void KaPian::SetValue(K_Value Value)
{
	__Value = Value;
}
K_Value KaPian::GetValue()
{
	return __Value;
}
void KaPian::SetType(K_Type Type)
{
	__Type = Type;
}
K_Type KaPian::GetType()
{
	return __Type;
}
string KaPian::GetName()
{
	string TypeName = TypeToString[__Type];
	switch (__Type)
	{
	case XiaoWang:
		return TypeName;
		break;
	case DaWang:
		return TypeName;
		break;
	}
	return TypeName + " " + ValueToString[__Value];
}