#include "pch.h"
#include "Object.h"
#include "Type.h"

Object::Object()
{
}

long long Object::GetHashCode() const
{
	return 0;
}

Type Object::GetType() const
{
	return Type(Object());
}

String Object::ToString() const
{
	return String();
}

bool Object::Equals(const Object& other) const
{
    return ReferenceEquals(other);
}

bool Object::ReferenceEquals(const Object& other) const
{
    return this == &other;
}
