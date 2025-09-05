#pragma once
#include "Exception.h"
#include "String.h"

class IndexOutOfRangeException : Exception
{
public:
	IndexOutOfRangeException();
	IndexOutOfRangeException(const String& message);
	IndexOutOfRangeException(const String& message, Exception* innerException);
private:
};

