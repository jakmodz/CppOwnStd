#include "pch.h"
#include "ArgumentException.h"

ArgumentException::ArgumentException() : ArgumentException("Argument exception")
{
}

ArgumentException::ArgumentException(const String& message)
	: ArgumentException(message, nullptr)
{
}

ArgumentException::ArgumentException(const String& message, Exception* innerException)
	: Exception(message, innerException)
{
}
