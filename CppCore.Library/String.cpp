#include "pch.h"
#include "String.h"
#include <cstring>
#include "IndexOutOfRangeException.h"
String::String()
{
	lenght = 0;
	str = nullptr;
}


String::String(const char* buffer)
{
	if (buffer)
	{
		lenght = strlen(buffer);
		str = new char[lenght+1];
		strcpy(str, buffer);
	}
	else
	{
		lenght = 0;
		str = strcpy(str, buffer);
	}
}

size_t String::Size() const
{
	return lenght;
}

bool String::IsEmpty() const
{
	if (lenght > 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}

void String::Clear()
{
	delete[] str;
	lenght = 0;
	str = new char[0];
}

const char* String::CString() const
{
	return str;
}

String String::ToLowerCase() const
{
	String string = *this;
	for (int i = 0 ; i<= string.lenght;++i)
	{
		if (string[i] >= 'A' && string[i] <= 'Z')
		{
			string.str[i] = char(string[i] + 32);
		}
	}
	return string;
}

String String::ToUpperCase() const
{
	String string = *this;
	for (int i = 0; i <= string.lenght;++i)
	{
		if (string[i] >= 'a' && string[i] <= 'z')
		{
			string.str[i] = char(string[i] - 32);
		}
	}
	return string;
}



String& String::operator=(char* string)
{
	delete[] str;
	strcpy(this->str, string);
	lenght = strlen(str);
	return *this;
}

String& String::operator+=(const String& other)
{
	char* temp = new char[lenght + other.lenght];  
	strcpy(temp, str); 
	strcat(temp, other.str);
	delete[] str; 
	str = temp;
	lenght = strlen(str);  
	return *this;
}

String& String::operator+(const String& other)
{
	String result = *this;
	return result += other;
}

char String::operator[](size_t index)
{
	if (index > lenght)
	{
		throw IndexOutOfRangeException();
	}
	return str[index];
}

std::ostream& operator<<(std::ostream& os, const String& str)
{
	os << str.str;
	return os;
}

std::istream& operator>>(std::istream& os, String& str)
{
	delete[] str.str;
	os >> str.str;
	str.lenght = strlen(str.str);
	return os;
}
