#include "pch.h"
#include "IndexOutOfRangeException.h"

IndexOutOfRangeException::IndexOutOfRangeException() 
	: IndexOutOfRangeException("the index is out of range")
{
}

IndexOutOfRangeException::IndexOutOfRangeException(const String& message) 
	: IndexOutOfRangeException(message, nullptr)
{
}

IndexOutOfRangeException::IndexOutOfRangeException(const String& message, Exception* innerException)
	: Exception(message, innerException)
{
}
