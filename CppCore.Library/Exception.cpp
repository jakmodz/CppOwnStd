#include "pch.h"
#include "Exception.h"

Exception::Exception() : Exception("Unknown Exception")
{

}

Exception::Exception(const String& message) : Exception(message, nullptr)
{
}

Exception::Exception(const String& message, Exception* innerException) 
    : message(message), innerException(innerException)
{
}

const String& Exception::GetMessage() const
{
    return message;
}

const Exception& Exception::GetInnerException() const
{
    return *innerException;
}
