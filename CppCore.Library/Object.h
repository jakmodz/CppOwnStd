#pragma once

class String;
class Type;

class Object
{
public:
	Object();
	virtual bool Equals(const Object& other) const;
	bool ReferenceEquals(const Object& other) const;
	virtual long long GetHashCode() const;
	Type GetType() const;	
	String ToString() const;
private:
};
