#pragma once
#include "Exception.h"

class ArgumentException : public Exception
{
public:
	ArgumentException();
	ArgumentException(const String& message);
	ArgumentException(const String& message, Exception* innerException);
};

