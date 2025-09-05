#pragma once
#include "String.h"

class Envoirment
{
public:
	static String GetOsName();
	static String GetEnvironmentVariable(const String& name);
	static void SetEnvironmentVariable(const String& name);
private:

};

