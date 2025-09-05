#pragma once
#include "Object.h"
#include <sstream> 
class String : public Object
{
public:
	String();
	String(const char* buffer);

	size_t Size() const;
	bool IsEmpty() const;
	void Clear();
	const char* CString() const;
	String ToLowerCase() const;
	String ToUpperCase() const;
	
	String& operator=(char*  str);
	String& operator+=(const String& other);
	String& operator+(const String& other);
	char operator[](size_t index);
	friend std::ostream& operator<<(std::ostream& os, const String& str);
	friend std::istream& operator>>(std::istream& os, String& str);
private:
	size_t lenght;
	char* str;
};