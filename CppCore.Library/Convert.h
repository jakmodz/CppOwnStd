#pragma once
#include "String.h"

class Convert : public Object
{
public:
	static String Int32ToString(int value);
	static String Int64ToString(long long value);
private:
};

