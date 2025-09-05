#include "pch.h"
#include "Convert.h"

String Convert::Int32ToString(int value)
{
	char buffer[12];
	sprintf_s(buffer, "%d", value);
    return String(buffer);
}

String Convert::Int64ToString(long long value)
{
	char buffer[21];
	sprintf_s(buffer, "%lld", value);
	return String(buffer);
}
