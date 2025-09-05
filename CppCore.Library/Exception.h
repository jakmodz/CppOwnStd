#pragma once
#include "Object.h"
#include "String.h"

class Exception : Object
{
public:
	Exception();
	Exception(const String& message);
	Exception(const String& message, Exception* innerException);
	virtual const String& GetMessage() const;
	virtual const Exception& GetInnerException() const;
private:
	String message;
	Exception* innerException;
};
