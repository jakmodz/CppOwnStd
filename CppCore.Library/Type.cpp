#include "pch.h"
#include "Type.h"
#include <typeinfo> 

Type::Type(const Object& instance) : instance(instance)
{
	
}

const String& Type::GetName() const
{
	return String(typeid(instance).name());
}
