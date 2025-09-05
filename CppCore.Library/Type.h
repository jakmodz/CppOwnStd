#pragma once
#include "Object.h"
#include "String.h"

class Type : public Object
{
public:
	Type(const Object& instance);

	const String& GetName() const;
private:
	const Object& instance;
};

