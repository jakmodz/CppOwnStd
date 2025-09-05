#include "pch.h"
#include "Envoirment.h"
#include <cstdlib>

using namespace std;

String Envoirment::GetOsName()
{
#ifdef _WIN32 || _WIN64
    return "Microsoft Windows";
#elif __linux__
    return "Linux";
#elif __FreeBSD__
    return "Free BSD";
#elif __APPLE__ || __MACH__
    return "Mac OSX";
#elif __unix || __unix__
    return "Unix";
#else
    return "Other";
#endif
}

String Envoirment::GetEnvironmentVariable(const String& name)
{
    return String(getenv(name.));
}

void Envoirment::SetEnvironmentVariable(const String& name)
{
}
